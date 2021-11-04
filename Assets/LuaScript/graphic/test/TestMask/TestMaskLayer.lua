local TestLayer = require("graphic.test.TestLayer")
local TestMaskLayer = class("TestMaskLayer", TestLayer)

function TestMaskLayer:ctor()
	TestLayer.ctor(self)
end

function TestMaskLayer:init()
	TestLayer.init(self)
    self:customLayout()
end

function TestMaskLayer:guideMask()
    local rect = self._imageGo:GetComponent(typeof(RectTransform))
    local p = g_2dTools:pointLocalToScreen(self._imageGo, rect.rect.position)
    local s = g_2dTools:sizeLocalToScreen(self._imageGo, rect.rect.size)
    local r = Rect(p.x, p.y, s.x, s.y)
    -- event.broadcast(event.ui.showMask, {rect=r, callback=function() print("x") end})

    --上面是正方形, 下面是菱形
    local points = {}
    points[1] = Vector2(r.x + r.width/2, r.y)
    points[2] = Vector2(r.x + r.width, r.y + r.height/2)
    points[3] = Vector2(r.x + r.width/2, r.y + r.height)
    points[4] = Vector2(r.x, r.y + r.height/2)
    event.broadcast(event.ui.showMask, {points=points})
end

function TestMaskLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Click", Vector2(0,100), Vector2(122,62), handler(self, self.guideMask))
    self._imageGo = self:createImage(self._go.transform, "", Vector2(-50,50), Vector2(200,200), true)
end

return TestMaskLayer
