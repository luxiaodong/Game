local GLayer = require("graphic.core.GLayer");
local GPopupLayer = class("GPopupLayer", GLayer)

function GPopupLayer:ctor()
	GLayer.ctor(self)
end

function GPopupLayer:init(name)
	GLayer.init(self)
	self._layerName = name
end

function GPopupLayer:close()
    self._closeCallback(self._layerName)
end

function GPopupLayer:setCloseCallback(callback)
    self._closeCallback = callback
end

return GPopupLayer
