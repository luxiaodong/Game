
local GGuide = class("GGuide")

require("data.guide.guide")

-- 一个引导分为多个阶段, 每个step, 阶段没有名字
function GGuide:ctor()
	-- self._isOver = false --引导功能是否已经结束
	self._nameList = {} --当前缓存的名字
	self._currentName = "" --当前引导的名字
	self._currentStep = 0  --当前引导处在第几阶段
	self._stepCache = {} --当前阶段的缓存数据,可能会被插入

	-- 如果新手引导打开界面报错,怎么处理?, 跳过当前新手引导?
end

-- 是否有引导
function GGuide:isEmpty()
	if #self._nameList > 0 then
		return false
	end

	return true
end

function GGuide:register(guideName)
	table.insert(self._nameList, guideName)
end

-- function GGuide:unregister(guideName)

-- 下一个引导,支持引导缓存
function GGuide:parseNext()
end

-- 下一个阶段,支持插入阶段
function GGuide:parseNextStep()
end

-- 如果解析失败,整个引导退出
function GGuide:parseAction(data)
	local isOk
	if data.action == enum.guide.action.func then
		isOk = self:parseActionFunc(data)
	elseif data.action == enum.guide.action.dialog then
		isOk = self:parseActionDialog(data)
	elseif data.action == enum.guide.action.click then
		isOk = self:parseActionClick(data)
	elseif data.action == enum.guide.action.open then
		isOk = self:parseActionOpen(data)
	elseif data.action == enum.guide.action.callback then
		isOk = self:parseActionCallback(data)
	end

	if not isOk then
		print("[GGuide] parseAction error ", data.action)
		return 
	end

	if data.action == enum.guide.action.wait then
		--等
	else
		self:parseNext()
	end

end

-- {action=enum.guide.action.open, layer=enum.ui.layer.protocol, auto=true}
function GGuide:parseActionOpen(data)
end

-- 打开你的界面有没有被打开
-- function GGuide:parseActionOpen(data)

function GGuide:parseActionOpen(data)
	local fList = layerChart.findFromPath(data.layer)
	local count = #fList
	local index = 1
	for i = count,1,-1 do
		local isVisible = g_system:isLayerVisible(fList[i])
		if isVisible then
			index = i
			break 
		end
	end

	local function openNext()
		if index == count then
			self:next()
		else
			local nextLayer = fList[index+1]
			local isOk = g_system:showMaskOnButton(fList[index], layerChart[nextLayer].btn, function() index = index+1; openNext() end)
			if not isOk then --调用失败,可能是配置错误导致
				print("GGuide:parseActionOpen error. ", fList[index], layerChart[nextLayer].btn)
				--补救措施,跳过这次引导
				self._current.next = nil
				self:next()
			end
		end
	end

	openNext()
end






----------------------------------------------
----------------------------------------------
----------------------------------------------
----------------------------------------------

function GGuide:ctor()
	
	self._cache = {} --引导列表
	self._event = nil -- 事件的handler
	self._current = nil --当前引导的数据
	self._taskCallback = nil
end

function GGuide:init(isOver)
	self._isOver = isOver

	if self._isOver == false then
		self._event = handler(self, self.handleEvent)
		event.addListener(event.ui.guide.append, self._event)
		event.addListener(event.ui.guide.resumeAfterClosePopup, self._event)
	end
end

function GGuide:exit()
	self._isOver = true
	if self._event then
		event.removeListener(event.ui.guide.append, self._event)
		event.removeListener(event.ui.guide.resumeAfterClosePopup, self._event)
		self._event = nil
	end
end

function GGuide:finish()
	self._current = nil
	self._cache = {}
	self:exit()
end

function GGuide:isInGuide()
	if self._current then
		return true
	end

	return false
end

function GGuide:setTaskCallback(callback)
	self._taskCallback = callback
end

function GGuide:handleEvent(e)
	if self._isOver then
		error("guide is over.")
		return 
	end

	if e.name == event.ui.guide.append then
		if self._current then
			table.insert(self._cache, e.data)
		else
			self:parse(e.data)
		end
	elseif e.name == event.ui.guide.resumeAfterClosePopup then
		self:parseAction(e.data)
	end
end

function GGuide:parse(data)
	self._current = data
	print(" GGuide:parse => ", data.name, data.layer)

	if g_system:isConflictBetweenGuideAndPopup(data.layer) then
		-- 等用户自己点击关闭界面
		event.broadcast(event.ui.guide.pauseForClosePopup, data)
		-- 还是引导关闭, 找到最上面的, 引导点击关闭, 但如果碰到弹出框呢
	else
		self:parseAction(data)
	end
end

function GGuide:insert(data)
	local temp = {}
	temp.name = "runtime_open_"..data.layer
	temp.action = enum.guide.action.open
	temp.layer = data.layer
	temp.next = data.name
	temp.callback = data.callback
	self:parse(temp)
end



function GGuide:parseActionFunc(data)
	if g_system:isLayerVisible(data.layer) then
		g_system:callLayerFunc(data.layer, data.func, data.name)
		self:next()
		return 
	end

	if data.auto and data.layer then
		self:insert(data)
	else
		self:next()
	end
end

function GGuide:parseActionCallback(data)
	if g_system:isLayerVisible(data.layer) then
		local isOk = g_system:callLayerGuide(data.layer, function() self:next() end, data.name)
		if not isOk then
			print("GGuide:parseActionCallback error. ", data.name)
			data.auto = false
			self:next()
		end
		return 
	end

	if data.auto and data.layer then
		self:insert(data)
	else
		self:next()
	end
end

function GGuide:parseActionDialog(data)
	local temp = {}
    temp.id = data.dialogId
    temp.layer = data.layer
    temp.callback = function() self:next() end
    event.broadcast(event.ui.dialog, temp)
end

function GGuide:parseActionClick(data)
	if g_system:isLayerVisible(data.layer) then
		g_system:showMaskOnButton(data.layer, data.btn, function() self:next() end)
		return 
	end

	--atuo控制是否强制引导,强制的是就一级一级界面引导打开,再点击按钮
	--默认nil走的是强制引导
	if data.auto == false and data.layer then
		--这里纯跳过,是否可以做到,在点开界面的时候再出引导
		self:next()
	else 
		self:insert(data)
	end
end

function GGuide:parseActionOpen(data)
	local fList = layerChart.findFromPath(data.layer)
	local count = #fList
	local index = 1
	for i = count,1,-1 do
		local isVisible = g_system:isLayerVisible(fList[i])
		if isVisible then
			index = i
			break 
		end
	end

	local function openNext()
		if index == count then
			self:next()
		else
			local nextLayer = fList[index+1]
			local isOk = g_system:showMaskOnButton(fList[index], layerChart[nextLayer].btn, function() index = index+1; openNext() end)
			if not isOk then --调用失败,可能是配置错误导致
				print("GGuide:parseActionOpen error. ", fList[index], layerChart[nextLayer].btn)
				--补救措施,跳过这次引导
				self._current.next = nil
				self:next()
			end
		end
	end

	openNext()
end

function GGuide:next()
	local nextData = nil
	if self._current.next then
		nextData = self:findGuide(self._current.next)
		if not nextData then
			print("GGuide:next => can't find next guide, next guide is ", self._current.next)
		end
	end

	if nextData then
		nextData.callback = self._current.callback
		self:parse(nextData)
		return 
	end

	if self._current.callback then
		self._current.callback()
	end

	if #self._cache > 0 then
		self:parse(table.remove(self._cache, 1))
	else
		self._current = nil
		--没有引导可以发布任务了,发布任务可能导致新的引导
		if self._taskCallback then
			self._taskCallback()
			self._taskCallback = nil
		end
	end
end

function GGuide:findGuide(str)
	local list = string.split(str, ".")
	local t = _G
	for i, v in ipairs(list) do
		if t[v] then
			t = t[v]
		else
			return false
		end
	end

	return t
end

return GGuide
