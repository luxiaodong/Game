
local GLayer = require("graphic.core.GLayer")
local BattleLayer = class("BattleLayer", GLayer)

function BattleLayer:ctor()
    GLayer.ctor(self)
end

function BattleLayer:init()
    GLayer.init(self)

    self:bindTouchHandler()
end

function BattleLayer:OnPointerClick(data)
	print("clicked")

	local pos = g_3dTools:screenToWorldPoint(data.position)

	-- 测试代码 begin --
	local t = {
		side = enum.battle.side.blue,
		card = enum.battle.card.cannon,
		level = 1, 
		pos = Vector2(pos.x, -pos.z)
	}
	g_battle:addCard(t)

	-- 测试代码 end --

	local t = {
		side = enum.battle.side.red,
		card = enum.battle.card.skeletons, 
		level = 1, 
		pos = Vector2(pos.x, pos.z)
	}
	g_battle:addCard(t)

end

return BattleLayer
