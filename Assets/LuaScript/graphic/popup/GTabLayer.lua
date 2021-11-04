local GPopupLayer = require("graphic.popup.GPopupLayer")
local GTabLayer = class("GTabLayer", GPopupLayer)

function GTabLayer:ctor()
	GPopupLayer.ctor(self)
end

function GTabLayer:init(name, layerConfig)
	GPopupLayer.init(self, name)
	self._tabGo = self:loadUiPrefab("Prefabs/UI/tab.prefab")
	self._labelGo = self._tabGo.transform:Find("label").gameObject

	self._stack = {} --负责已经弹出的界面, 存的是layerName
    self._data = {} -- layerName, {displayName, ,class}
    for i,v in ipairs(layerConfig) do
    	self:append(v, i)
    end

    self._currentLayerName = ""
    self:registerEvents({event.ui.appendTabLayer, event.ui.removeTabLayer})
end

--插入第i个节点
function GTabLayer:append(config, index)
	local layerName = config.layerName
	if index == nil or index > #self._stack then
		table.insert(self._stack, layerName)
		index = #self._stack
	else
		table.insert(self._stack, index, layerName)
	end

	local labelGo = nil
	if #self._stack == 1 then --第一个
		labelGo = self._labelGo
	else
		labelGo = GameObject.Instantiate(self._labelGo)
		labelGo.transform:SetParent(self._tabGo.transform, false)
	end

	labelGo.name = layerName
	self:registerClick(labelGo)
	labelGo:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(-50 + 100*index, 0)
	local nameGo = labelGo.transform:Find("name").gameObject
	nameGo:GetComponent(typeof(UI.Text)).text = config.name
	-- self:setNormalState(labelGo) --设置选中和默认状态,让子类修改控件.
	-- self:setSelectState(labelGo) --设置选中和默认状态,让子类修改控件.

	self._data[layerName] = {labelGo=labelGo, class=config.class}

	for i=index+1, #self._stack do --往后移动.
		local temp = self._data[self._stack[i]].labelGo
		temp:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(-50 + 100*i, 0)
	end
end

--删掉某个节点
function GTabLayer:remove(layerName)
	local index = self:findIndex(layerName)
	if index == 0 then return end

	--当前页面无法删除
	if self._currentLayerName == layerName then return end

	--页面调整
	local labelGo = self._data[layerName].labelGo
	Object.Destroy(labelGo)

	for i=index+1, #self._stack do --往前移动
		print(self._stack[i])
		local temp = self._data[self._stack[i]].labelGo
		temp:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(-50 + 100*(i-1), 0)
		-- local rectComp = temp:GetComponent(typeof(RectTransform))
		--rectComp:DOAnchorPos( Vector2(-50 + 100*(i-1), 0), 1 )
	end

	self._data[layerName] = nil
	table.remove(self._stack, index)
end

function GTabLayer:isContainLayer(layerName)
	if self:findIndex(layerName) > 0 then
		return true
	end

	return false
end

function GTabLayer:findIndex(layerName)
	for i,v in ipairs(self._stack) do
		if v == layerName then
			return i
		end
	end
	return 0 --没找到
end

function GTabLayer:setSelect(layerName)
	if layerName == nil and self._currentLayerName == "" then
		layerName = self._stack[1]
	else
		if self:findIndex(layerName) == 0 then
			print("TabLayer:setSelect unknow layerName:",layerName)
			return 
		end
	end

	self:handleClick(layerName)
end

function GTabLayer:handleClick(layerName)
	if layerName == "close" then
		self:close()
	else
		self:changeLayer(layerName)
	end
end

function GTabLayer:handleEvent(e)
	if e.name == event.ui.appendTabLayer then
		if self:findIndex(e.data.config.layerName) == 0 then --防止重复添加
			self:append(e.data.config, e.data.index)
		end
	elseif e.name == event.ui.removeTabLayer then
		self:remove(e.data.name)
	end
end

function GTabLayer:changeLayer(name)
	print("changeTabLayer, prev:", self._currentLayerName)
	print("changeTabLayer, next:", name)

	--1. 相等情况下不处理
	if name == self._currentLayerName then
		--可以放个reload的函数
		return
	end

	--2. 检查名字是否存在
	local index = self:findIndex(name)
	if index == 0 then
		return
	end

	--3. 清除当前的场景
	--如果不销毁,能否缓存住这个界面.什么情况下缓存
	if self._layers[self._currentLayerName] then
		self._layers[self._currentLayerName]:exit()
		self._layers[self._currentLayerName] = nil
	end

	--4. 载入layer
	local className = self._data[name].class
	local layer = require(className).create()
	self:addLayer(layer)
	layer:init()
 
	--5. 改变按钮状态

	--6. 同步变量
	self._layers[name] = layer
	self._currentLayerName = name
end

function GTabLayer:addLayer(layer, isWorldPositionStays)
	local parent = self._tabGo.transform:Find("panel").gameObject
    layer._go.transform:SetParent(parent.transform, isWorldPositionStays or false)
end

return GTabLayer
