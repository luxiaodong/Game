local TestLayer = require("graphic.test.TestLayer")
local TestCombineMeshesLayer = class("TestCombineMeshesLayer", TestLayer)

function TestCombineMeshesLayer:ctor()
    TestLayer.ctor(self)
end

function TestCombineMeshesLayer:init()
    TestLayer.init(self)
    self:customLayout()
end

function TestCombineMeshesLayer:createAvatar()
    event.broadcast("event.test.monkey", {func="create"})
end

function TestCombineMeshesLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Create", Vector2(0,100), Vector2(122,62), handler(self, self.createAvatar))
end

return TestCombineMeshesLayer
