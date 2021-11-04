local GScene = require("graphic.core.GScene");
local DockScene = class("DockScene", GScene)

local layerConfig={
    [enum.ui.layer.mainMenu] = "graphic.layer.MainMenuLayer",
    [enum.ui.layer.taskBrief] = "graphic.layer.TaskBriefLayer",
    [enum.ui.layer.joystick] = "graphic.layer.JoystickLayer"
}

function DockScene:ctor()
    GScene.ctor(self)
end

function DockScene:init()
    GScene.init(self)
    -- local layers = {enum.ui.layer.mainMenu, enum.ui.layer.taskBrief}
    -- self:initLayers(layers, layerConfig)
    -- self:changeScene("")
end

function DockScene:changeScene(newSceneName)
	if not self._layers then return end

    -- self._layers[enum.ui.layer.mainMenu]:setVisible(false)
    -- self._layers[enum.ui.layer.taskBrief]:setVisible(false)
    -- self._layers[enum.ui.layer.joystick]:setVisible(false)
end

function DockScene:handleEvent(e)
end

return DockScene
