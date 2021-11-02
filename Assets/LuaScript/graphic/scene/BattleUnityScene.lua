
local GUnityScene = require("graphic.core.GUnityScene")
local BattleUnityScene = class("BattleUnityScene", GUnityScene)

local viewConfig={
    [enum.ui.view.battle] = "graphic.battle.BattleView",
}

function BattleUnityScene:ctor()
    GUnityScene.ctor(self)
end

function BattleUnityScene:init()
	GUnityScene.init(self)
	
    local views = {enum.ui.view.battle}
    self:initViews(views, viewConfig)
end

return BattleUnityScene
