local TestLayer = require("graphic.test.TestLayer")
local TestBehaviourTouchLayer = class("TestBehaviourTouchLayer", TestLayer)

function TestBehaviourTouchLayer:ctor()
    TestLayer.ctor(self)
end

function TestBehaviourTouchLayer:init()
    TestLayer.init(self)
    self:customLayout()
    
    CS.Game.CTouch.Add(self._imageGo, self)
    self._imagePt = nil --控件坐标
    self._beginPt = nil --记录拖拽前坐标,是屏幕坐标
end

function TestBehaviourTouchLayer:OnPointerClick(data)
    self._image.color = Color(0,0,1,1)
end

function TestBehaviourTouchLayer:OnPointerDown(data)
    self._image.color = Color(1,1,0,1)
end

function TestBehaviourTouchLayer:OnPointerUp(data)
    self._image.color = Color(1,0,0,1)
end

function TestBehaviourTouchLayer:OnPointerEnter(data)
    self._image.color = Color(1,0,0,1)
end

function TestBehaviourTouchLayer:OnPointerExit(data)
    self._image.color = Color(1,1,1,1)
end

function TestBehaviourTouchLayer:OnBeginDrag(data)
    self._image.color = Color(0,1,0,1)
    local rect = self._go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)
    self._beginPt = pos
    self._imagePt = self._imageGo:GetComponent(typeof(RectTransform)).anchoredPosition
end

function TestBehaviourTouchLayer:OnDrag(data)
    local rect = self._go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)
    local dt = pos - self._beginPt
    self._imageGo:GetComponent(typeof(RectTransform)).anchoredPosition = self._imagePt + dt
end

function TestBehaviourTouchLayer:OnEndDrag(data)
    self._image.color = Color(1,0,0,1)
end

function TestBehaviourTouchLayer:customLayout()
    self._imageGo, self._image = self:createImage(self._go.transform, "", Vector2(0,0), Vector2(200,200), true)
end

return TestBehaviourTouchLayer

