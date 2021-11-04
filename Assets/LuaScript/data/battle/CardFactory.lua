
local CardFactory = class("CardFactory")

function CardFactory:ctor()
end

function CardFactory:createEntry(card, level)
	if card == enum.battle.card.skeletons then
		local t = {}
		local pos = {Vector2(0,0.5),Vector2(-0.433,-0.25),Vector2(0.433,-0.25)}
		for i=1,1 do
			local avatar = self:createSkeleton(level)
			avatar._offset = pos[i]
			avatar._createCd = avatar._createCd + (i-1)*g_battle:convertSecondToFrame(0.1)
			table.insert(t, avatar)
		end
		return t
	elseif card == enum.battle.card.cannon then
		local t = {}
		local pos = {Vector2(0,0)}
		local avatar = self:createCannon(level)
		avatar._offset = pos[i]
		table.insert(t, avatar)
		return t
	else
		error("unknown card type")
	end
end

-- 具体创建每一个兵种
function CardFactory:createKingTower(level)
	local avatar = require("data.battle.LBuilding").create()
	avatar._name = enum.battle.building.kingTower
	avatar._card = enum.battle.card.none
	avatar._createCd = 0
	avatar._deployCd = g_battle:convertSecondToFrame(1.5)
	avatar._attackType = enum.battle.attackType.both
	avatar._attackPower = 90
	avatar._attackRange = 7
	avatar._moveType = enum.battle.moveType.none
	avatar._maxHp = 6400
	avatar._attackCycle = g_battle:convertSecondToFrame(1)
	avatar._hitFrame = avatar._attackCycle - 1
	avatar._prefab = "Prefabs/Building/kingTower.prefab"
	avatar._polygon = require("data.battle.Polygon").create()
	avatar._polygon:initRoundBox(Vector2(4,4), 4)
	return avatar
end

function CardFactory:createMinorTower(level)
	local avatar = require("data.battle.LBuilding").create()
	avatar._name = enum.battle.building.minorTower
	avatar._card = enum.battle.card.none
	avatar._createCd = 0
	avatar._deployCd = 1
	avatar._attackType = enum.battle.attackType.both
	avatar._attackPower = 90
	avatar._attackRange = 7
	avatar._moveType = enum.battle.moveType.none
	avatar._maxHp = 3600
	avatar._attackCycle = g_battle:convertSecondToFrame(1)
	avatar._hitFrame = avatar._attackCycle - 1
	avatar._prefab = "Prefabs/Building/minorTower.prefab"
	avatar._polygon = require("data.battle.Polygon").create()
	avatar._polygon:initBox(Vector2(3,3))
	return avatar
end

function CardFactory:createSkeleton(level)
	local avatar = require("data.battle.LTroop").create()
	avatar._name = enum.battle.troop.skeleton
	avatar._card = enum.battle.card.skeletons
	avatar._createCd = g_battle:convertSecondToFrame(0.5)
	avatar._deployCd = 1
	avatar._attackType = enum.battle.attackType.land
	avatar._attackPower = 20
	avatar._attackRange = 0.3
	avatar._attackCycle = g_battle:convertSecondToFrame(1)
	avatar._hitFrame = avatar._attackCycle - 1
	avatar._moveType = enum.battle.moveType.land
	avatar._maxHp = 100
	avatar._mass = 1
	avatar._visualRange = 6
	avatar._moveSpeed = 1.5/g_battle:convertSecondToFrame(1) --1 m/s
	avatar._prefab = "Prefabs/Troop/skeleton.prefab"
	avatar._polygon = require("data.battle.Polygon").create()
	avatar._polygon:initCircle(0.25)
	return avatar
end

function CardFactory:createCannon(level)
	local avatar = require("data.battle.LBuilding").create()
	avatar._name = enum.battle.building.cannon
	avatar._card = enum.battle.card.cannon
	avatar._createCd = 0
	avatar._deployCd = 1
	avatar._attackType = enum.battle.attackType.land
	avatar._attackPower = 90
	avatar._attackRange = 7
	avatar._moveType = enum.battle.moveType.none
	avatar._maxHp = 1800
	avatar._attackCycle = g_battle:convertSecondToFrame(1)
	avatar._hitFrame = avatar._attackCycle - 1
	avatar._prefab = "Prefabs/Building/cannon.prefab"
	avatar._polygon = require("data.battle.Polygon").create()
	avatar._polygon:initCircle(0.75)
	return avatar
end

return CardFactory
