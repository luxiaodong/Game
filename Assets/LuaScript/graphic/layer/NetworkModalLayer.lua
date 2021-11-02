
local GLayer = require("graphic.core.GLayer")
local NetworkModalLayer = class("NetworkModalLayer",GLayer)

function NetworkModalLayer:ctor()
	GLayer.ctor(self)
    self._msg = nil
    self._waiting = false
    self._data = {}
    self:init()
end

function NetworkModalLayer:init()

    self:setEnableTouchOneByOne(true)

    --文本警告
    local msg = cc.Label:createWithSystemFont("", "", 26)
    msg:setColor(cc.c3b(222,40,40))
    msg:enableOutline(cc.c3b(0,0,0), 2)
    msg:setPosition(gcc.visibleSize.width/2, gcc.visibleSize.height/2)
    self:addChild(msg)
    self._msg = msg
end

function NetworkModalLayer:onEnter()
    local t = {
        event.network.showModel,
        event.network.hideModel,
        event.network.protocolException,
    }

    self:registerEvents(t)
end

function NetworkModalLayer:handleEvent(e)

    if e.name == event.network.showModel then
        if self._waiting == false then
            self._waiting = true
            self._data = e.data
            g_action:delayCallback(self, 3, handler(self, self.timeout) )
        end
    elseif e.name == event.network.hideModel then
        if self._waiting == true then
            self._waiting = false
            self._msg:setString("")
            self:stopAllActions()
        end
    elseif e.name == event.network.protocolException then
        event.broadcast( event.ui.pushText, {msg=g_language:format("network_protocol_exception", e.data)} )
    end
end

function NetworkModalLayer:handleTouch(touch, e)
    if self._waiting == true then
        return true
    end

    return false
end

function NetworkModalLayer:timeout()  
    if self._waiting == true then --超时了, 再重新请求一次.
        self._msg:setString( g_language:get("network_require_loading") )
        network.requestCore( self._data.callback, self._data.protocol)
        g_action:delayCallback(self, 3, handler(self, self.timeoutAgain) )
    end
end

function NetworkModalLayer:timeoutAgain() --加载失败        
    if self._waiting == true then
        self._msg:setString("")
        event.broadcast( event.ui.pushText, {msg=g_language:get("network_require_failed")} )
        --漂加载失败.
        self._waiting = false
    end
    --g_action:delayCallback(self, 3, handler(self, self.timeout) )
end

return NetworkModalLayer
