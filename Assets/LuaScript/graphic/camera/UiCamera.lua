local GCamera = require("graphic.camera.GCamera")
local UiCamera = class("UiCamera", GCamera)

function UiCamera:ctor()
    GCamera.ctor(self)
end

function UiCamera:createGameObject()
    self._go = g_2dTools:camera()
    self._camera = self._go:GetComponent(typeof(Camera))
    --stage的z值为0,near设置0会导致ScreenPointToLocalPointInRectangle判断失败返回 
    self._camera.nearClipPlane = -1
    self._camera.cullingMask = (1 << enum.unity.layer.ui) --只保留UI
    self._type = enum.camera.ui
end

function UiCamera:init()
    GCamera.init(self)
end

function UiCamera:setCameraRenderOverlay(isOverlay)
	-- if isOverlay then
	-- 	self:setClearFlag(CameraClearFlags.Depth)
	-- else
	-- 	self:setClearFlag(CameraClearFlags.SolidColor)
	-- end

	local uacd = self._go:GetComponent(typeof(Universal.UniversalAdditionalCameraData))
	if isOverlay then
		uacd.renderType = Universal.CameraRenderType.Overlay
	else
		uacd.renderType = Universal.CameraRenderType.Base
	end
end

return UiCamera
