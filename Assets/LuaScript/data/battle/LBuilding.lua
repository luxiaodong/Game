
local LEntity = require("data.battle.LEntity")
local LBuilding = class("LBuilding", LEntity)

function LBuilding:ctor()
	LEntity.ctor(self)
	self._type = enum.battle.entity.building
	self._attackType = nil --enum.battle.attackType.none
	self._attackPower = nil --攻击力
	self._moveType = nil --移动类型
	self._maxHp = nil
	self._attackRange = nil --攻击范围,半径
	self._attackCycle = nil --攻击周期,多少帧一次攻击
	self._hitFrame = nil --攻击周期中,哪一帧命中
	self._polygon = nil --几何形态
end

function LBuilding:init(id, side, pos)
	LEntity.init(self, id, side, pos)

	self._isDead = false
	self._isActive = true           --是否激活

	self._targetId = nil 			--目标单位
	self._attackCd = 0    			--攻击动作cd
	self._hitCd = self._hitFrame	--攻击命中cd

	if self._name == enum.battle.building.kingTower then
		self._isActive = false
	end
end

function LBuilding:update()
	if self._isDead then return end
	if not self._isActive then return end

	if self._deployCd > 0 then
		self._deployCd = self._deployCd - 1
		return 
	end

	-- 是否冰冻
	if self:hasBuffer(enum.battle.buffer.stun) then
		return
	end

	if self._attackCd > 0 then
		self._attackCd = self._attackCd - 1
	else
		self:updateCore()
	end
end

function LBuilding:updateCore()
	-- 原来的目标还在
	if self._type == enum.battle.entity.building then
		return
	end

	if self._targetId then
		-- 还可以攻击
		if self:isCanAttack(self._targetId) then
			self:attack(self._targetId)
			return 
		end

		-- 被拉扯
		if self:isCanFollow(self._targetId) then
			self._hitCd = self._hitFrame
			self:follow(self._targetId)
			return
		end
	end

	-- 找新的目标
	local targetId = self:findTarget()
	if not targetId then
		return -- 游戏结束
	end

	-- 如果想等,已经知道不可攻击和拉扯了
	if targetId ~= self._targetId then
		if self:isCanAttack(targetId) then
			self:attack(targetId)
			self._targetId = targetId
			return
		end

		if self:isCanFollow(targetId) then
			self._hitCd = self._hitFrame
			self:follow(targetId)
			self._targetId = targetId
			return
		end
	end

	-- 目标丢失,从有目标变到没目标
	if self._targetId then
		self._hitCd = self._hitFrame
		self._targetId = nil
	end

	-- 最后朝着塔走
	self:walk()
end

function LBuilding:isCanAttack(targetId)
	return false
end

function LBuilding:attack(targetId)
	print(self._id, " attack ", targetId)

	-- self._hitCd = self._hitCd - 1
	-- if self._hitCd == 0 then
	-- 	--扣血逻辑
	-- 	self._attackCd = self._attackCycle - self._hitFrame
	-- end

end

function LBuilding:isCanFollow()
	return false
end

function LBuilding:follow()
end

function LBuilding:walk()
end

function LBuilding:findTarget()
	-- return g_battle:findNearestTarget(self._id)
	return g_battle:findAvatar(self._id)
end

-- 攻击顺序的计算

return LBuilding
