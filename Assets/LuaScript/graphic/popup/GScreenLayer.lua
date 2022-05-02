local GPopupLayer = require("graphic.popup.GPopupLayer")
local GScreenLayer = class("GScreenLayer", GPopupLayer)

function GScreenLayer:ctor()
	GPopupLayer.ctor(self)
end

--全屏幕界面时候,关闭unity 3d场景相机
--盖在下面的ui也可以不显示
--是可以使用viewPort,或者遮挡剔除
function GScreenLayer:init(name)
	GPopupLayer.init(self, name)
	g_system:setUnitySceneCameraVisible(false)
	--可能还需要发消息通知一些动画,粒子停止更新
end

function GScreenLayer:exit()
	g_system:setUnitySceneCameraVisible(true)
	GPopupLayer.exit(self)
end

return GScreenLayer
