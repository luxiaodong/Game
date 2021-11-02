
local GLayer = require("graphic.core.GLayer")
local MaskLayer = class("MaskLayer",GLayer)

function MaskLayer:ctor()
	GLayer.ctor(self)
end

function MaskLayer:init()
    GLayer.init(self)
    self:registerEvent(event.ui.showMask)
end

function MaskLayer:handleEvent(e)
	if e.name == event.ui.showMask then
		self:showMask(e.data)
	end
end

--可以优化一个基于矩形的
--这个是基于屏幕的坐标
function MaskLayer:showMask(data)

    local points = data.points

    if points == nil then
        points = {}
        local r = data.rect
        points[1] = Vector2(r.x, r.y)
        points[2] = Vector2(r.x + r.width, r.y)
        points[3] = Vector2(r.x + r.width, r.y + r.height)
        points[4] = Vector2(r.x, r.y + r.height)
    end

    local centerPoint = {x=0,y=0}
    for i,v in ipairs(points) do
        v.x = v.x/Screen.width
        v.y = v.y/Screen.height
        centerPoint.x = centerPoint.x + v.x
        centerPoint.y = centerPoint.y + v.y
    end

    centerPoint.x = centerPoint.x/#points
    centerPoint.y = centerPoint.y/#points

    self._lines = {}
    for i=1,#points do
        if i == #points then
            local v = self:lineEquation( points[i], points[1], centerPoint)
            table.insert(self._lines, v)
        else
            local v = self:lineEquation( points[i], points[i+1], centerPoint)
            table.insert(self._lines, v)
        end
    end

    if not self._image then
        local go = g_2dTools:createGameObject("Mask")
        go.transform:SetParent(self._go.transform, false)
        local image = go:AddComponent(typeof(UI.Image))
        image.color = Color(0,0,0,0)
        image.raycastTarget = false
        self._image = image
    else
        self._image.enabled = true
    end

    local shader = self:loadAsset("Assets/Shaders/Test/mask.shader")
    local material = Material(shader)
    material:SetVectorArray("_Points", self._lines)
    material:SetInt("_Point_Count", #points)
    self._image.material = material
    self._callback = data.callback
    self:bindTouchHandler()
end

function MaskLayer:lineEquation(point1, point2, centerPoint)
    local a = point2.y - point1.y
    local b = point1.x - point2.x
    local c = point2.x*point1.y - point1.x*point2.y
    local r = math.sqrt(a*a + b*b)
    
    if a*centerPoint.x + b*centerPoint.y + c < 0 then
        return Vector4(-a/r,-b/r,-c/r, 1)
    end

    return Vector4(a/r,b/r,c/r,1)
end

function MaskLayer:checkPointIn(point)
    local x = point.x/Screen.width
    local y = point.y/Screen.height

    for i,v in ipairs(self._lines) do
        if v.x*x + v.y*y + v.z < 0 then
            return false
        end
    end

    return true
end

function MaskLayer:OnPointerClick(data)
    if self:checkPointIn(data.position) then
        self:unbindTouchHandler()
        self._image.enabled = false

        if self._callback then
            self._callback()
        end
    end
end

return MaskLayer
