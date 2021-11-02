local TestLayer = require("graphic.test.TestLayer")
local TestBehaviourUpdateLayer = class("TestBehaviourUpdateLayer", TestLayer)

function TestBehaviourUpdateLayer:ctor()
    TestLayer.ctor(self)
end

function TestBehaviourUpdateLayer:init()
    TestLayer.init(self)
    
    self:customLayout()
    self.index = 0

    --默认检测有没有OnUpdate系函数,如果有就绑定, 是否合理
    self:unbindBehaviour()
end

function TestBehaviourUpdateLayer:OnUpdate()
    self.index = self.index + 1
    self._indexGo:GetComponent(typeof(UI.Text)).text = tostring(self.index)
end

-- function TestBehaviourUpdateLayer:OnLateUpdate()
--     print("TestBehaviourUpdateLayer:OnLateUpdate")
-- end

-- function TestBehaviourUpdateLayer:OnFixedUpdate()
--     print("TestBehaviourUpdateLayer:OnFixedUpdate")
-- end

function TestBehaviourUpdateLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Start", Vector2(-200,100), Vector2(122,62), handler(self, self.bindBehaviour))
    self:createButtonWithText(self._go.transform, "Stop", Vector2(200,100), Vector2(122,62), handler(self, self.unbindBehaviour))
    self._indexGo = self:createText(self._go.transform, "0", Vector2(0,0), Vector2(800,400))
end

return TestBehaviourUpdateLayer

