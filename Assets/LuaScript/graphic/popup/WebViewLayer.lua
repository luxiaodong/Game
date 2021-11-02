local GLayer = require("graphic.core.GLayer");
local WebViewLayer = class("WebViewLayer", GLayer)

function WebViewLayer:ctor()
	GLayer.ctor(self)
end

--分辨率计算问题.
function WebViewLayer:init()
    self:registerEvent(event.ui.openWebView)
end

function WebViewLayer:handleEvent(e)
	if e.name == event.ui.tips then
		self:openUrl(e.data.url)
	end
end

function WebViewLayer:openUrl(url)
    Application.OpenURL("http://www.baidu.com");
	-- if not self._webView then 
 --        self._webView = ccexp.WebView:create()
 --        self._webView:setPosition(gcc.visibleSize.width/2, gcc.visibleSize.height/2)
 --        self._webView:loadURL("http://testos.aoshitang.com/mobilePay.xhtml?userId=47269&gameId=zjmob&gameName=zjzr&roleName=beijing&serverId=2&roleId=412&gold=1&yx=37wan&ts=1493257576&extra=422-325-667570-20170427083314_325_4_37-4")
 --        self._webView:setScalesPageToFit(true)
 --        self._webView:setContentSize(gcc.visibleSize.width/2, gcc.visibleSize.height/2)
 --        self:addChild(self._webView, 10000)
 --        self._webView:setVisible(false)
 --    end 
 --    self._webView:setVisible(not self._webView:isVisible())

end

return WebViewLayer
