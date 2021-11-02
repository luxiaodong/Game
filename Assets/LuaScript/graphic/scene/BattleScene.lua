
local GScene = require("graphic.core.GScene")
local BattleScene = class("BattleScene", GScene)

local layerConfig={
    [enum.ui.layer.battleDock] = "graphic.battle.BattleDockLayer",
    [enum.ui.layer.battleHp] = "graphic.battle.BattleHpLayer",
    [enum.ui.layer.battle] = "graphic.battle.BattleLayer",
}

function BattleScene:ctor()
    GScene.ctor(self)
end

function BattleScene:init()
	GScene.init(self)
	self:registerEvent(event.ui.changeLayer)

	local layers = {enum.ui.layer.battle, enum.ui.layer.battleDock, enum.ui.layer.battleHp}
    self:initLayers(layers, layerConfig)
end

return BattleScene
