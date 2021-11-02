
local SDF = class("SDF")

function SDF:ctor()
end

-- 一阶函数
function SDF:length(p)
	return math.sqrt(p.x*p.x + p.y*p.y)
end

function SDF:abs(p)
	p.x = math.abs(p.x)
	p.y = math.abs(p.y)
end

function SDF:circle(p, r)
	return self:length(p) - r
end

function SDF:box(p, s)
	local x = math.abs(p.x) - s.x
	local y = math.abs(p.y) - s.y
	local s1 = self:length(Vector2(math.max(x,0), math.max(y,0)))
	local s2 = math.min( math.max(x,y), 0 )
	return s1 + s2
	-- vec2 d = abs(p)-b;
    -- return length(max(d,0.0)) + min(max(d.x,d.y),0.0);
end

function SDF:roundBox()
end

-- 二阶函数
function SDF:pointToCircleDistance(pt, p0, r0)
	return self:circle(pt - p0, r0)
end

function SDF:pointToBoxDistance(pt, p0, s)
	return self:box(pt - p0, s)
end

-- 三阶函数
function SDF:circleToCircleDistance(p0, p1, r0, r1)
	return self:length(p1 - p0) - r0 - r1
end

function SDF:circleToBoxDistance()
end


return SDF
