
local GContainer = require("graphic.core.GContainer")
local GLayer = class("GLayer", GContainer)

function GLayer:ctor()
    GContainer.ctor(self)
    self._pushs = {} --推送
    self._clicks = {}  --按钮点击
    -- self._uiCache = {} --缓存ui对象,组件
    -- self._prefabGo = nil --加载prefab后的根节点
end

function GLayer:createGameObject()
    local name = getmetatable(self).__className
    self._go = g_2dTools:createGameObject(name)
    --self._go = g_2dTools:createCanvas(name)
end

function GLayer:init()
    GContainer.init(self)
    self:registerEvent(event.csharp.removeInvoke)
end

--调用changeLayer时,传的是自己,会触发此函数
function GLayer:reload()
end

function GLayer:exit()
    self:unregisterPushs()
    self:unregisterClicks()
    -- self._uiCache = {}
    GContainer.exit(self)
end

--注意,也可以设置layer, 让相机过滤掉.
function GLayer:setVisible(isShow)
    if isShow then
        self._go.transform.localScale = Vector3.one
    else
        self._go.transform.localScale = Vector3.zero
    end
end

function GLayer:isVisible()
    -- 是否应该用 < 判断
    if self._go.transform.localScale == Vector3.zero then
        return false
    end

    return true
end

function GLayer:setZTop()
    self._go.transform:SetAsLastSibling()
end

----------------------点击事件--------------------
--Touch是给坐标用的, Click是给按钮用的
function GLayer:bindTouchHandler()
    if not self._components.touch then 
        --需要射线才能监听点击事件,所以加一个不参与渲染的图片
        self._components.touch = CS.Game.CTouch.Add(self._go, self)
        self._components.image = CS.Game.CNonRenderImage.Add(self._go, self)
    else
        self._components.touch.enabled = true
        self._components.image.enabled = true
    end
end

--默认吞噬
function GLayer:IsRaycastLocationValid(sp, eventCamera)
    return true
end

function GLayer:unbindTouchHandler(isRemove)
    if self._components.touch then
        if isRemove then
            Object.Destroy(self._components.touch)
            Object.Destroy(self._components.image)

            self._components.touch = nil
            self._components.image = nil
        else
            self._components.touch.enabled = false
            self._components.image.enabled = false
        end
    end
end

function GLayer:registerClicks(t)
    for i,go in ipairs(t) do
        self:registerClick(go)
    end
end

function GLayer:registerClick(go)
    local name = go.name
    if self._clicks[name] == nil then
        local callback = function()
            self:handleClick(name)
        end
        go:GetComponent(typeof(UI.Button)).onClick:AddListener(callback)
        self._clicks[name] = {go=go, callback=callback}
    else
        error("registerClick failed. aleady exist. "..name)
    end
end

function GLayer:unregisterClick(name)
    if self._clicks[name] ~= nil then
        local go = self._clicks[name].go
        local callback = self._clicks[name].callback
        -- go:GetComponent(typeof(UI.Button)).onClick:RemoveListener(callback)
        go:GetComponent(typeof(UI.Button)).onClick:RemoveAllListeners()
        --https://www.cnblogs.com/ghl_carmack/p/7350530.html
        go:GetComponent(typeof(UI.Button)).onClick:Invoke()
        self._clicks[name] = nil
    else
        error("unregisterClick failed. "..name)
    end
end

function GLayer:unregisterClicks()
    for k,v in pairs(self._clicks) do
        self:unregisterClick(k)
    end

    self._clicks = {}
end

function GLayer:handleClick(name)
    print("GLayer:handleClick -> "..getmetatable(self).__className, name)
end

function GLayer:handleEvent(e)
    if e.name == event.csharp.removeInvoke then
        self:unregisterClicks()
    end
end

----------------------红点事件--------------------
-- 封装在这里是方便界面销毁时,红点事件反注册.
function GLayer:registerRedPoint(name)
    self:registerEventCore(name, handler(self, self.handleRedPoint) )
end

function GLayer:unregisterRedPoint(name)
    self:unregisterEvent(name)
end

function GLayer:handleRedPoint(name)
    print("GLayer:handleRedPoint -> "..getmetatable(self).__className, name)
end

----------------------网络封装--------------------
function GLayer:receivePush(name, data)
    if self._isExist == true then
        self:handleProtocol(name, data)
    end
end

function GLayer:registerPush(p)
    -- network.registerPush( handler(self, self.receive), p )
    service.registerPush( handler(self, self.receive), p )
    self._pushs[p.name] = p
end

function GLayer:registerPushs(t)
	for i,v in ipairs(t) do
		self:registerPush(v)
	end
end

function GLayer:unregisterPush(p)
	network.unregisterPush(p)
	self._pushs[p.name] = nil
end

function GLayer:unregisterPushs()
	for k,v in pairs(self._pushs) do
	 	self:unregisterPush(v)
	end 
    self._pushs = {}
end

-- 协议封装
-- function GLayer:receive(name, data, isOk, sendData)
-- function GLayer:receive(isOk, name, data, sendData)
-- 	if self._isExist == true then
-- 		if isOk == true then
-- 			self:handleProtocol(name, data, sendData)
-- 		else
-- 			self:handleProtocolError(name, data, sendData)
-- 		end
-- 	end
-- end

function GLayer:receive(name, data, sendData)
    self:handleProtocol(name, data, sendData)
end 

--不接收回调,通过event事件发消息通知,用于单个数据通知多个界面
function GLayer:send(p, ...)
    service.send(nil, p, ...)
end

--接受回调,用于独立界面的信息
function GLayer:request(p, ... )
    -- network.requestWithError( handler(self, self.receive), p, ... )
    service.send(handler(self, self.receive), p, ...)
end

--虚函数
function GLayer:handleProtocol(name, data, sendData)
    print("GLayer:handleProtocol -> ",getmetatable(self).__className,name)
end

-- function GLayer:handleProtocolError(name, data, sendData)
-- end

----------------新手引导----------------
function GLayer:handleGuide(name, callback)
    print("GLayer:handleGuide -> ",getmetatable(self).__className,name)
    --可能函数都不存在,因为界面都没有打开
    --必须等一帧
    g_tools:delayOneFrame(callback)
end

--点击按钮遮罩,name是btn名字, 这里假设了按钮的层级,不合理.
function GLayer:showMaskOnButton(name, callback)
    local go = self._go.transform:GetChild(0):Find(name).gameObject
    local rect = g_2dTools:localToScreenRect(go)

    local function tempFunc()
        self:handleClick(go.name)
        callback()
    end
    
    event.broadcast(event.ui.showMask, {rect=rect,callback=tempFunc})
end

function GLayer:loadUiPrefab(fileName)
    local prefab = self:loadAsset(fileName)
    if prefab then
        local go = Object.Instantiate(prefab)
        go.transform:SetParent(self._go.transform, false)
        return go
    end
end

return GLayer
