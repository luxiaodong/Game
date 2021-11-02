local GScene = require("graphic.core.GScene")
local PopupScene = class("PopupScene", GScene)

local layerConfig = 
{
    [enum.ui.layer.consoleTab] = "graphic.popup.ConsoleTabLayer",
    [enum.ui.layer.messagebox] = "graphic.popup.MessageBoxLayer",
    [enum.ui.layer.dialog] = "graphic.popup.DialogLayer",
    [enum.ui.layer.tips] = "graphic.popup.TipsLayer",
}

--整体原则
--全屏界面使用
--弹出界面使用
--界面冲突处理
--按钮状态规则
--红色按钮状态
--页签跳转规则, 层级规则
--全屏UI界面

function PopupScene:ctor()
    GScene.ctor(self)
end

function PopupScene:init()
	GScene.init(self)

	self._queue = {} --负责排队弹出的界面, 存的是整个event
	self._stack = {} --负责已经弹出的界面, 存的是layerName
	self._guideData = nil --引导数据

	local t = {
		event.ui.messagebox,
		event.ui.dialog,
		event.ui.tips,
		event.ui.popupLayer,
		event.ui.closeLayer,
		event.ui.guide.pauseForClosePopup, --把数据给popup,让它在关闭时掉用
		event.login.goback,
	}

	self:registerEvents(t)
end

function PopupScene:closed(layerName)
	local layer = self._layers[layerName]

	if not layer then
		error("layer not found:", layerName)
		return
	end

	if self:isCachaLayer(layerName) then
		layer:setVisible(false)
	else
		layer:exit()
		self._layers[layerName] = nil
	end

	if #self._stack > 0 then
		table.remove(self._stack, 1)
	end

	if #self._stack == 0 and #self._queue > 0 then
		self:handleEvent(table.remove(self._queue, 1))
	end

	if self._guideData then
		if not self:isConflictWithGuide(self._guideData.layer) then
			event.broadcast(event.ui.guide.resumeAfterClosePopup, self._guideData)
			self._guideData = nil
		end
	end
end

function PopupScene:handleEvent(e)

	if e.name == event.ui.closeLayer then
		self:closeLayer(e.data.name)
		return 
	elseif e.name == event.ui.guide.pauseForClosePopup then
		self._guideData = e.data
		return 
	elseif e.name == event.login.goback then
		self:closeAllLayers()
		return 
	end

	local layerName = ""
	if e.name == event.ui.messagebox then
		layerName = enum.ui.layer.messagebox
	elseif e.name == event.ui.dialog then
		layerName = enum.ui.layer.dialog
	elseif e.name == event.ui.tips then
		layerName = enum.ui.layer.tips
	elseif e.name == event.ui.popupLayer then
		layerName = e.data.name
	end

	--已经有弹出的界面
	if #self._stack > 0 then
		--默认重叠覆盖
		local popupType = e.data.popupType or enum.ui.popup.type.overlap

		if popupType == enum.ui.popup.type.exclusive then --关闭之前的界面
			table.insert(self._queue, 1, e)
			local count = #self._stack
			for i = 1,count do
				self:closeLayer(self._stack[1]) -->close()-->closed()-->table.remove(self._stack, 1)
			end
		elseif popupType == enum.ui.popup.type.overlap then
			--有些界面无法被覆盖,比如对话框
			if self:isCachaLayer(self._stack[1]) then
				table.insert(self._queue, 1, e)
				return
			end
		elseif popupType == enum.ui.popup.type.queueHead then
			table.insert(self._queue, 1, e)
			return 
		elseif popupType == enum.ui.popup.type.queueTail then
			table.insert(self._queue, e)
			return 
		end
	end

	local layer = self:createLayer(layerName)
	if layer then
		layer:show(e.data) -- 可能是个Tab容器, 需要指定具体标签页
		layer:setZTop() --新弹出的永远在最上面, 是否有问题
		table.insert(self._stack, 1, layerName)
	end
end

function PopupScene:createLayer(layerName)
	local layer = self._layers[layerName]
	if layer then
		layer:setVisible(true)
	else		
		local className = layerConfig[layerName]
		if className == nil then
			self:print("[popuplayer] class not config: ", layerName)
			return
		end

		layer = require(className).create()
		self:addLayer(layer)
		layer:init()
		layer:setCloseCallback(function() self:closed(layerName) end)
		self._layers[layerName] = layer
	end

	return layer
end

function PopupScene:closeLayer(layerName)
	local layer = self._layers[layerName]
	if layer then
		layer:close()
	end
end

function PopupScene:closeAllLayers()
	local layerNames = self._stack
	self._stack = {}
	self._queue = {}
	self._guideData = nil

	for i,layerName in ipairs(layerNames) do
		self:closeLayer(layerName)
	end
end

--需要缓存的界面
function PopupScene:isCachaLayer(layerName)
	if layerName == enum.ui.layer.messagebox
	or layerName == enum.ui.layer.dialog
	or layerName == enum.ui.layer.tips then
		return true
	end

	return false
end

--是否要添加 isInTabLayer 判断layer是否属于某个tab
function PopupScene:isTabLayer(layerName)
	if layerName == enum.ui.layer.consoleTab then
		return true
	end

	return false
end

function PopupScene:isLayerVisible(layerName)
	local layer = self._layers[layerName]
	if layer then
		return layer:isVisible()
	end

	return false
end

function PopupScene:isTopLayer(layerName)
	if #self._stack > 0 then
		if self._stack[1] == layerName then
			return true
		end
	end
	return false
end

--是否对引导有冲突
function PopupScene:isConflictWithGuide(layerName)
	if #self._stack == 0 then return false end
	if self._stack[1] == layerName then return false end

	if self:isTabLayer(self._stack[1]) then
		local layer = self._layers[self._stack[1]]
		if layer:isContainLayer(layerName) then --只支持遍历两层
			return false
		end
	end

	return true
end

return PopupScene
