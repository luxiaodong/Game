
local GScene = require("graphic.core.GScene")
local WorldScene = class("WorldScene", GScene)

local layerConfig={
    [enum.ui.layer.worldDock] = "graphic.world.worldDockLayer",
}

function WorldScene:ctor()
    GScene.ctor(self)
end

function WorldScene:init()
	GScene.init(self)
	self:registerEvent(event.ui.changeLayer)

	local layers = {enum.ui.layer.worldDock}
    self:initLayers(layers, layerConfig)
end

return WorldScene
