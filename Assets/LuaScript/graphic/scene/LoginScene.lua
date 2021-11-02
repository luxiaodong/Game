
local GScene = require("graphic.core.GScene")
local LoginScene = class("LoginScene", GScene)

local layerConfig={
	[enum.ui.layer.sdkLogin] = "graphic.login.SdkLoginLayer",
	[enum.ui.layer.selectServer] = "graphic.login.SelectServerLayer",
	[enum.ui.layer.registerLogin] = "graphic.login.RegisterLoginLayer",
}

function LoginScene:ctor()
    GScene.ctor(self)
end

function LoginScene:init()
	GScene.init(self)
	self:registerEvent(event.ui.changeLayer)

	if g_login._isBackLogin == true then
		g_login._isBackLogin = false
        -- 网络连接失败或者被踢下线都会到这里
		self:changeLayer( {name = g_login._backToWitchLayer} )
	else
		self:changeLayer( {name = enum.ui.layer.sdkLogin} )
	end
end

function LoginScene:changeLayer(data)
	
	print("changeLayer, prev:", self._currentLayerName)
	print("changeLayer, next:", data.name)

	-- 非sdk登录走 registerLogin
	if data.name == enum.ui.layer.sdkLogin then
		if not config.isSdkLogin then
			print("sdkLogin -> registerPlayer")
			data.name = enum.ui.layer.registerLogin
		end
	end
	
	GScene.changeLayer(self, data)
end

function LoginScene:layerFilePath(name)
    return layerConfig[name]
end

return LoginScene
