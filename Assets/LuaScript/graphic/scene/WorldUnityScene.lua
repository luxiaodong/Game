
local GUnityScene = require("graphic.core.GUnityScene")
local WorldUnityScene = class("WorldUnityScene", GUnityScene)

local viewConfig={
    [enum.ui.view.world] = "graphic.world.WorldView",
}

function WorldUnityScene:ctor()
    GUnityScene.ctor(self)
end

function WorldUnityScene:init()
	GUnityScene.init(self)
	
    local views = {enum.ui.view.world}
    self:initViews(views, viewConfig)
end

return WorldUnityScene
