local GScene = require("graphic.core.GScene");
local TopScene = class("TopScene", GScene)

local layerConfig={
    [enum.ui.layer.effect] = "graphic.layer.EffectLayer",
    [enum.ui.layer.mask] = "graphic.layer.MaskLayer",
    [enum.ui.layer.touch] = "graphic.layer.TouchLayer",
    [enum.ui.layer.loading] = "graphic.layer.LoadingLayer",
    [enum.ui.layer.audio] = "graphic.layer.AudioLayer",
    [enum.ui.layer.reconnect] = "graphic.layer.ReconnectLayer",
    [enum.ui.layer.profile] = "graphic.popup.console.ProfileLayer",
    [enum.ui.layer.transition] = "graphic.layer.TransitionLayer",
}

function TopScene:ctor()
    GScene.ctor(self)
end

function TopScene:init()
    GScene.init(self)

    local layers = {
    	enum.ui.layer.mask, 
    	enum.ui.layer.effect, 
    	enum.ui.layer.touch, 
    	enum.ui.layer.loading,
        enum.ui.layer.audio,
        enum.ui.layer.reconnect,
        -- enum.ui.layer.profile,
        enum.ui.layer.transition,
    }
    
    self:initLayers(layers, layerConfig)
end

return TopScene
