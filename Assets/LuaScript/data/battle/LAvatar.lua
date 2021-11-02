
local LAvatar = class("LAvatar")

function LAvatar:ctor()
	--静态数据
	self._id = nil
	self._card = nil	-- enum.battle.card.skeletons
	self._name = nil  	-- enum.battle.avatar.skeleton
	self._moveType = nil -- enum.battle.moveType.land
	self._side = enum.battle.side.red
	self._hasSecondly = false --是否有二阶段,怪的类型

    self._mass = 1
    self._moveSpeed = 1
    self._maxHp = 0
    self._maxShieldHp = 0 --护盾值
    self._deployCd = 1 --部署时间

    self._attackSpeed = 1 --攻击速度
    self._attackRange = 1 --攻击范围,半径
    self._visualRange = 1 --视野范围,半径

    --体积可能需要用多边形模拟
    self._circle = 1.0

    --动态数据
    self._isDead = false
    self._hp = 0
    self._shieldHp = 0
	self._pos = nil			-- Vector2
    self._nextPos = nil
    self._buffers = {}
    self._targetId = nil 	--目标单位
    self._actionCd = 1 		--下次攻击剩余多少帧
end

function LAvatar:init()
	self._nextPos = self._pos
end

function LAvatar:posIn3D()
	return Vector3(self._pos.x, self._moveType, self._pos.y)
end

function LAvatar:update()
	if self._isDead then
		return 
	end

	-- 是否冰冻
	if self:hasBuffer(enum.battle.buffer.stun) then
		return
	end

	

	--移动,攻击


	self._pos = self._nextPos
	if self._actionCd > 0 then
		self._actionCd = self._actionCd - 1
	end

	if self._targetId then
	end

	-- enum.battle.buffer.root

end

function LAvatar:isTargetInVisualRange()
end

function LAvatar:isTargetInAttackRange()
end

function LAvatar:isTargetValid()
end

function LAvatar:hasBuffer(name)
	return self._buffers[name]
end

function LAvatar:appendBuffer(name)
	self._buffers[name] = true --先设置成true
end

function LAvatar:removeBuffer(name)
	self._buffers[name] = nil
end

return LAvatar
