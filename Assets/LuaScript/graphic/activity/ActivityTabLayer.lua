local GTabLayer = require("graphic.popup.GTabLayer")
local ActivityTabLayer = class("ActivityTabLayer", GTabLayer)

local layerConfig =
{
    --{layerName=enum.ui.layer.gm, name="gm", class="graphic.popup.console.GmLayer"},
}

function ActivityTabLayer:ctor()
	GTabLayer.ctor(self)
end

function ActivityTabLayer:init()
	GTabLayer.init(self, "activityLayer", layerConfig)
end

return ActivityTabLayer
