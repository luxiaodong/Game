local TestLayer = require("graphic.test.TestLayer")
local TestShaderLayer = class("TestShaderLayer", TestLayer)

function TestShaderLayer:ctor()
    TestLayer.ctor(self)
end

function TestShaderLayer:init()
    TestLayer.init(self)
    self:customLayout()
    self.angle = 0
end

function TestShaderLayer:OnFixedUpdate()
    if self._image then
        self.angle = self.angle + 1
        local matrix = self:constructionMatrix(self.angle)
        self._image.material:SetMatrix("_hueMatrix", matrix)
    end
end

function TestShaderLayer:constructionMatrix(angle)
    local alpha = -45
    local sita = math.atan(1/1.414)/math.pi*180
    local q1 = Quaternion.AngleAxis(alpha, Vector3(1,0,0))
    local q2 = Quaternion.AngleAxis(sita, Vector3(0,0,1))
    local q3 = Quaternion.AngleAxis(angle, Vector3(0,1,0))
    local q4 = Quaternion.AngleAxis(-sita, Vector3(0,0,1))
    local q5 = Quaternion.AngleAxis(-alpha, Vector3(1,0,0))
    local q = q5*q4*q3*q2*q1
    return Matrix4x4.Rotate(q)
end

function TestShaderLayer:customLayout()
    --用代码的方式效率较低,材质是实例,无法合批
    local imageGo,image = g_2dTools:createImage("Sandbox/Textures/UI/alien.png", self:assetGroup() )
    imageGo.transform:SetParent(self._go.transform, false)
    imageGo:GetComponent(typeof(RectTransform)).anchorMin = Vector2(0.5,0.5)
    imageGo:GetComponent(typeof(RectTransform)).anchorMax = Vector2(0.5,0.5)
    imageGo:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(-150,0)

    local shader = self:loadAsset("Sandbox/Shaders/Test/hue.shader")
    image.material = Material(shader)
    image.material:SetMatrix("_hueMatrix", self:constructionMatrix(0))
    self._image = image

    --第二个
    local imageGo,image = g_2dTools:createImage("Sandbox/Textures/UI/alien.png", self:assetGroup() )
    imageGo.transform:SetParent(self._go.transform, false)
    imageGo:GetComponent(typeof(RectTransform)).anchorMin = Vector2(0.5,0.5)
    imageGo:GetComponent(typeof(RectTransform)).anchorMax = Vector2(0.5,0.5)
    imageGo:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(150,0)

    image.material = self:loadAsset("Sandbox/Materials/Test/eyeFish.mat")
    image.mainTexture.wrapMode = TextureWrapMode.Repeat
end

return TestShaderLayer

