local TestLayer = require("graphic.test.TestLayer")
local TestTransitionLayer = class("TestTransitionLayer", TestLayer)

function TestTransitionLayer:ctor()
	TestLayer.ctor(self)
end

function TestTransitionLayer:init()
	TestLayer.init(self)
    self:customLayout()
end

function TestTransitionLayer:transition()
    event.broadcast(event.ui.changeScene, {name=enum.ui.scene.test, transition=enum.ui.transition.circle})
end

function TestTransitionLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Click", Vector2(0,100), Vector2(122,62), handler(self, self.transition))
end

return TestTransitionLayer
