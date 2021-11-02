
local TileGrid = class("TileGrid")

--地形描述
function TileGrid:ctor()
	self:init()
end

--定义几个关键数据,按照红方左边定义,红方在下方,是我方
function TileGrid:init()
	self._kingTownPos = Vector2(-13, 0)
	self._minorTowerPos = Vector2(-5.5, -9.5)
	-- self._bridgePos = Vector2(-5.5, 0)
	-- self._bridgeSize = Vector2(3, 2)
	self._bridgeX0 = -5.5 - 1.5
	self._bridgeX1 = -5.5 + 1.5
	self._bridgeX2 = -2

	self._bridgeY0 = -1
	self._bridgeY1 = 9.5
	self._bridgeY2 = 13
	-- self._bridgeY2 = -1
end

--计算行走的方向
function TileGrid:walkDir(side, pos)
	local xFlip = (pos.x > 0)
	local yFlip = (side == enum.battle.side.blue)

	if xFlip then
		pos.x = -pos.x
	end

	if yFlip then
		pos.y = -pos.y
	end

	local dir = self:walkDirSimple(pos)

	if xFlip then
		pos.x = -pos.x
		dir.x = -dir.x
	end

	if yFlip then
		pos.y = -pos.y
		dir.y = -dir.y
	end

	return dir.normalized
end

function TileGrid:walkDirSimple(pos)
	local dstPos = Vector2.zero

	if pos.y < self._bridgeY0 then
		if pos.x < self._bridgeX0 then
			local dx = self._bridgeX0 - pos.x
			dstPos.x = self._bridgeX0
			dstPos.y = math.min(self._bridgeY0, pos.y+dx)
		elseif pos.x > self._bridgeX1 then
			local dx = pos.x - self._bridgeX1
			dstPos.x = self._bridgeX1
			dstPos.y = math.min(self._bridgeY0, pos.y+dx)
		else
			dstPos.x = pos.x
			dstPos.y = pos.y + 1
		end
	elseif pos.y < self._bridgeY1 then
		if pos.x < self._bridgeX0 then
			local dx = self._bridgeX0 - pos.x
			dstPos.x = self._bridgeX0
			dstPos.y = math.min(self._bridgeY1, pos.y+dx)
		elseif pos.x > self._bridgeX1 then
			local dx = pos.x - self._bridgeX1
			dstPos.x = self._bridgeX1
			dstPos.y = math.min(self._bridgeY1, pos.y+dx)
		else
			dstPos.x = pos.x
			dstPos.y = pos.y + 1
		end
	else
		dstPos.x = pos.x + 1
		dstPos.y = pos.y + 1
	end

	return dstPos - pos
end

--计算飞行的方向
function TileGrid:flyDir(side, pos)
end

return TileGrid
