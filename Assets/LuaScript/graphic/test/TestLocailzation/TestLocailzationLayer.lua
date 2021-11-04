local TestLayer = require("graphic.test.TestLayer")
local TestLocailzationLayer = class("TestLocailzationLayer", TestLayer)

function TestLocailzationLayer:ctor()
    TestLayer.ctor(self)
end

function TestLocailzationLayer:init()
    TestLayer.init(self)
    self:customLayout()

    print("current language is ", g_language:key())
end

function TestLocailzationLayer:changeLanguage()
    if g_language:key() == "cn" then
        g_language:storeKey("en")
    else
        g_language:storeKey("cn")
    end
    g_system:restartGame()
end

function TestLocailzationLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Change", Vector2(0,100), Vector2(122,62), handler(self, self.changeLanguage))

    local imageGo,image = self:createImage(self._go.transform, "Sandbox/Textures/UI/alien.png", Vector2(-150,0), Vector2(100,100), false)
    image:SetNativeSize()

    local str = g_language:get("exp").."\n"..g_language:formatNumber(1234567)
    self:createText(self._go.transform, str, Vector2(150,0), Vector2(800,400))
end

return TestLocailzationLayer

