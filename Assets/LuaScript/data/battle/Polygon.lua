local Polygon = class("Polygon")

function Polygon:ctor()
	self._type = nil
	self._radius = nil
	self._size = nil
end

function Polygon:initCircle(radius)
	self._type = enum.battle.sdf.circle
	self._radius = radius
end

function Polygon:initBox(size)
	self._type = enum.battle.sdf.box
	self._size = size
end

function Polygon:initRoundBox(size, radius)
	self._type = enum.battle.sdf.roundBox
	self._size = size
	self._radius = radius
end

-- function Polygon:distance(onePos, onePolygon, otherPos, otherPolygon)

-- end

return Polygon
