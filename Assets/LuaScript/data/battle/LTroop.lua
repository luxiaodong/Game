
local LBuilding = require("data.battle.LBuilding")
local LTroop = class("LTroop", LBuilding)

function LTroop:ctor()
	LBuilding.ctor(self)
	self._type = enum.battle.entity.troop

	self._mass = nil
	self._visualRange = nil --可见范围,用于跟随
	self._moveSpeed = nil --移动速度
	self._maxShieldHp = nil --最大护盾值
end

function LTroop:init(id, side, pos)
	LBuilding.init(self, id, side, pos)
	self._shieldHp = self._maxShieldHp or 0
	self._pos = self._originPos
	self._nextPos = self._pos
	self._speed = self._moveSpeed
	self._forward = Vector2.up --朝向
	self._direction = Vector3.forward
end

function LTroop:pos()
	return self._pos
end

function LTroop:posIn3D()
	if self._moveType == enum.battle.moveType.land then
		return Vector3(self._nextPos.x, 0, self._nextPos.y)
	elseif self._moveType == enum.battle.moveType.air then
		return Vector3(self._nextPos.x, 1, self._nextPos.y)
	elseif self._moveType == enum.battle.moveType.hole then
		return Vector3(self._nextPos.x, -1, self._nextPos.y)
	end
end

function LTroop:direction()
	return self._direction
end

function LTroop:isCanFollow(targetId)
	if g_battle:isCanFollow(self._id, targetId) then
		if self._moveType == enum.battle.moveType.land then
			--地面部队需要测试是否在河两岸
		end
	end
end

function LTroop:follow(targetId)
	--需要检查是否在河对面
	self._pos = self._nextPos
	local dir = g_battle:avatarPos(targetId) - self._pos
	dir = dir.normalized
	self._nextPos = self._pos + dir*self._speed
	self._direction = Vector3(dir.x, 0, dir.y)
	event.broadcast(event.battle.avatar.pos, {id=self._id})
end

function LTroop:isCanAttack(targetId)
	return g_battle:isCanAttack(self._id, targetId)
end

function LTroop:walk()
	self._pos = self._nextPos
	local dir = g_battle._tileGrid:walkDir(self._side, self._pos)
	self._nextPos = self._pos + dir*self._speed
	self._direction = Vector3(dir.x, 0, dir.y)
	event.broadcast(event.battle.avatar.pos, {id=self._id})
end

function LTroop:isTargetInVisualRange(target)
end

return LTroop
