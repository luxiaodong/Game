local TestLayer = require("graphic.test.TestLayer")
local TestNativeBridgeLayer = class("TestNativeBridgeLayer", TestLayer)

function TestNativeBridgeLayer:ctor()
	TestLayer.ctor(self)
end

function TestNativeBridgeLayer:init()
	TestLayer.init(self)
    self:customLayout()

    nativeBridge.init()
end

function TestNativeBridgeLayer:clickTest()
    local t = {}
    t.action = enum.sdk.action.test
    t.callback = function(result, t)
        if result == enum.sdk.result.success then
            self._txtGo:GetComponent(typeof(UI.Text)).text = tostring(t.msg)
        end
    end
    nativeBridge.sendToNative(t)
end

function TestNativeBridgeLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Test", Vector2(0,100), Vector2(122,62), handler(self, self.clickTest))
    self._txtGo = self:createText(self._go.transform, "0", Vector2(0,0), Vector2(800,400))
end

return TestNativeBridgeLayer
