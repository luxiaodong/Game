
local GLayer = require("graphic.core.GLayer");
local SdkLoginLayer = class("SdkLoginLayer", GLayer)

function SdkLoginLayer:ctor()
    GLayer.ctor(self)
    self._isInLogin = false --是否在登录阶段
end

function SdkLoginLayer:init()
    GLayer.init(self)
    local go = self:loadUiPrefab("Prefabs/UI/sdkLogin.prefab")
    local image = go.transform:Find("enter")
    image:DOScale(Vector3(1.2,1.2,1.2), 1):SetEase(DoTween.Ease.OutBack):SetLoops(-1, DoTween.LoopType.Yoyo)
end

function SdkLoginLayer:OnAwake()
    print("SdkLoginLayer:onEnter")
    local t = {
        event.login.failed,
        event.network.disconnectByServer,
    }
    self:registerEvents(t)

    self._isInLogin = false
    if g_login._isAutoLoginSdk == true then
        g_login._isAutoLoginSdk = false
        self:handleTouch()
    end
end

function SdkLoginLayer:OnUpdate()
    if Input.GetMouseButtonUp(0) == true then
        self:handleTouch()
        --event.broadcast(event.ui.changeScene, {name=enum.ui.scene.test})
        --event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.registerLogin})
    end
end

function SdkLoginLayer:handleTouch()
    print("SdkLoginLayer:handleTouch")
    if self._isInLogin == false then
        self._isInLogin = true
        g_login:requestLoginSDK(handler(self, self.loginOver))
    end
end

function SdkLoginLayer:loginOver(result, t)
    if result == enum.sdk.result.success then
        g_login._isGotToken = true
        g_login:requestServerList()
    elseif result == enum.sdk.result.failure then
        event.broadcast( event.ui.pushText, {msg = g_language:get("login_sdk_failed") } )
        self._isInLogin = false
    end
end

function SdkLoginLayer:handleEvent(e)
    if e.name == event.login.failed then 
        event.broadcast( event.ui.pushText, {msg=e.data} )
        self._isInLogin = false
    elseif e.name == event.network.disconnectByServer then
        --session已经无效
        self._isInLogin = false
    end 
end

-- function SdkLoginLayer:appendBanshuNotice()
--     print("SdkLoginLayer:appendBanshuNotice")

--     local str = "抵制不良游戏，拒绝盗版游戏；适度游戏益脑，沉迷游戏伤身；"
--     local label = astGUI().createSystemFont(str, 20, cc.c3b(255,255,204))
--     label:setPosition(gcc.visibleSize.width/2, gcc.visibleSize.height - 25)
--     self:addChild(label)

--     local str = "注意保护自我，谨防受骗上当；合理安排时间，享受健康生活。"
--     local label = astGUI().createSystemFont(str, 20, cc.c3b(255,255,204))
--     label:setPosition(gcc.visibleSize.width/2, gcc.visibleSize.height - 50)
--     self:addChild(label)

--     local str = "文网游备字〔2015〕M-SLG0114号  著作人：上海锐战网络科技有限公司"
--     local label = astGUI().createSystemFont(str, 20, cc.c3b(255,255,204))
--     label:setPosition(gcc.visibleSize.width/2, 30)

--     self:addChild(label)
-- end

return SdkLoginLayer;
