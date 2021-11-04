local GCamera = require("graphic.camera.GCamera")
local SceneCamera = class("SceneCamera",GCamera)

function SceneCamera:ctor()
    GCamera.ctor(self)
end

--2层结构,用于移动和抖动分开控制.
function SceneCamera:createGameObject()
	local name = getmetatable(self).__className
    self._go = GameObject(name)
    self:resetCamera()

	--过滤掉UI
    self._camera.cullingMask = self._camera.cullingMask ~ (1 << enum.unity.layer.ui)
end

function SceneCamera:init()
    GCamera.init(self)
    --测试跟随
    self:registerEvents({event.camera.follow})
end

function SceneCamera:addUiCameraToStack(uiCamera)
	local uacd = self._camera.gameObject:GetComponent(typeof(Universal.UniversalAdditionalCameraData))
	uacd.cameraStack:Add(uiCamera)
end

function SceneCamera:resetCamera()
	local mainCamera = GameObject.Find("/Main Camera")
    mainCamera.transform:SetParent(self._go.transform)
    self._camera = mainCamera:GetComponent(typeof(Camera))
    self._type = enum.camera.scene
end

function SceneCamera:adjustCamera()
	local go = self._camera.gameObject
	Object.Destroy(go)
	self:resetCamera()
end

function SceneCamera:handleEvent(e)
	if e.name == event.camera.follow then
		local followCmp = require("graphic.component.CFollow").create()
		followCmp:init(self._go,{targetGo=e.data.go})
	else
		GCamera.handleEvent(self, e)
	end
end

return SceneCamera
