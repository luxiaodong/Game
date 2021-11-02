
local GBattle = class("GBattle")

function GBattle:ctor()
	self._cardFactory = require("data.battle.CardFactory").create()
	self._tileGrid = require("data.battle.TileGrid").create()
	self._sdf = require("data.battle.SDF").create()
end

function GBattle:start()
	self._frameIndex = 0
	self._autoId = 0
	self._cards = {} 	--卡牌序列
	self._caches = {}   --即将要创建的avatar缓冲池,因为一个一个落下
	self._avatars = {}	--放入的卡牌序列

	-- for i=1,2 do
	-- 	local signY = (i-1.5)*2 --正负1
	-- 	local tower = self._cardFactory:createKingTower(level)
	-- 	tower:init(self:generalId(), i, Vector2(0, 13*signY))
	-- 	self._avatars[tower._id] = tower

	-- 	for j=1,2 do
	-- 		local signX = (j-1.5)*2
	-- 		local tower = self._cardFactory:createMinorTower(level)
	-- 		tower:init(self:generalId(), i, Vector2(5.5*signX, 9.5*signY))
	-- 		self._avatars[tower._id] = tower
	-- 	end
	-- end

end

function GBattle:currentFrame()
	return self._frameIndex
end

function GBattle:generalId()
	self._autoId = self._autoId + 1
	return self._autoId
end

function GBattle:avatar(id)
	return self._avatars[id]
end

function GBattle:addCard(t) -- side,card,level,pos
	table.insert(self._cards, t)
end

function GBattle:fixUpdate()
	self._frameIndex = self._frameIndex + 1
	-- print("current frame is ", self._frameIndex)
	self:cardToCaches()
	self:cachesToAvatar()
	self:updateAvatar()
end

function GBattle:cardToCaches()
	-- print("cards size is ",#self._cards)
	if #self._cards > 0 then
		for i, t in ipairs(self._cards) do
			local array = self._cardFactory:createEntry(t.card, t.level)
			for i,avatar in ipairs(array) do
				avatar:init(self:generalId(), t.side, t.pos)
				self._caches[avatar._id] = avatar
			end
		end
		self._cards = {}
	end
end

function GBattle:cachesToAvatar()
	for id, avatar in pairs(self._caches) do
		if avatar._createCd == 0 then
			self._avatars[id] = avatar
			self._caches[id] = nil
			-- 通知上层,创建avatar, 可能需要队列
			event.broadcast(event.battle.avatar.create, {id=id})
		else
			avatar._createCd = avatar._createCd - 1
		end
	end
end

function GBattle:updateAvatar()
	for id, avatar in pairs(self._avatars) do
		avatar:update()
	end
end

function GBattle:convertSecondToFrame(t)
	return math.floor(constant.battle.framePerSecond*t)
end

-- 找avatar
function GBattle:findAvatar(id)
	local one = self._avatars[id]
	local nearestTarget = function()
		local dis = nil
		local targetId = nil
		for id, other in pairs(self._avatars) do
			if one._id ~= other._id and one._side ~= other._side then
				local d = self:sdfDistance(one, other)
				if not dis or d < dis then
					dis = d
					targetId = other._id
				end
			end
		end

		return targetId
	end

	local func = nearestTarget
	return func()
end

function GBattle:avatarPos(id)
	local avatar = self:avatar(id)
	return avatar:pos()
end

function GBattle:isCanAttack(oneId, otherId)
	local avatar1 = self:avatar(oneId)
	local avatar2 = self:avatar(otherId)
	local dis = self:ptDistance(avatar1:pos(), avatar2)
	if dis < avatar1._attackRange then
		return true
	end

	return false
end

function GBattle:isCanFollow(oneId, otherId)
	local avatar1 = self:avatar(oneId)
	local avatar2 = self:avatar(otherId)
	local dis = self:ptDistance(avatar1:pos(), avatar2)
	if dis < avatar1._visualRange then
		return true
	end

	return false
end

function GBattle:ptDistance(pt, avatar)
	if avatar._polygon._type == enum.battle.sdf.circle then
		return self._sdf:pointToCircleDistance(pt, avatar:pos(), avatar._polygon._radius)
	end
end

-- 两个物体的距离
function GBattle:sdfDistance(avatar1, avatar2)
	-- one._pos, one._polygon, other._pos, other._polygon
end

return GBattle

