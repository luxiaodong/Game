local TestLayer = require("graphic.test.TestLayer")
local TestSpritePackerLayer = class("TestSpritePackerLayer", TestLayer)

function TestSpritePackerLayer:ctor()
    TestLayer.ctor(self)
end

function TestSpritePackerLayer:init()
    TestLayer.init(self)

    local go = self:loadUiPrefab("Sandbox/Prefabs/UI/Test/testSpritePacker.prefab")
    local imageGo = go.transform:Find("Image1").gameObject

    g_tools:delayCall(5, self:handler(function()
        g_2dTools:setImage(imageGo, "Sandbox/Textures/UI/Pay/chat_btn_01_p.png", self:assetGroup())
    end))
end

return TestSpritePackerLayer
