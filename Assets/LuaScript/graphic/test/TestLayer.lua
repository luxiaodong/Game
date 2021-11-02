local GLayer = require("graphic.core.GLayer")
local TestLayer = class("TestLayer", GLayer)

function TestLayer:ctor()
    GLayer.ctor(self)
end

function TestLayer:init()
    GLayer.init(self)
end

function TestLayer:createButtonWithText(parent, str, pos, size, callback)
    local buttonGo = g_2dTools:createButton("", self:assetGroup())
    local rect = buttonGo:GetComponent(typeof(RectTransform))
    rect:SetParent(parent, false)
    rect.anchorMin = Vector2(0.5,0)
    rect.anchorMax = Vector2(0.5,0)
    rect.anchoredPosition = pos
    rect.sizeDelta = size
    buttonGo:GetComponent(typeof(UI.Button)).onClick:AddListener(callback)

    local txtGo = g_2dTools:createText(str, "Arial.ttf", 30, self:assetGroup() )
    local rect = txtGo:GetComponent(typeof(RectTransform))
    rect:SetParent(buttonGo.transform, false)
    rect.sizeDelta = size
    local text = txtGo:GetComponent(typeof(UI.Text))
    text.color = Color(0,0,0,1)
    text.alignment = TextAnchor.MiddleCenter
    return buttonGo, txtGo
end

function TestLayer:createText(parent, str, pos, size)
    local txtGo = g_2dTools:createText(str, "Arial.ttf", 50, self:assetGroup() )
    local rect = txtGo:GetComponent(typeof(RectTransform))
    rect:SetParent(parent, false)
    rect.sizeDelta = size
    rect.anchoredPosition = pos
    local text = txtGo:GetComponent(typeof(UI.Text))
    text.color = Color(1,1,1,1)
    text.alignment = TextAnchor.MiddleCenter
    return txtGo
end

function TestLayer:createImage(parent, filePath, pos, size, isRaycast)
    local imageGo = g_2dTools:createImage(filePath, self:assetGroup() )
    local rect = imageGo:GetComponent(typeof(RectTransform))
    rect:SetParent(parent, false)
    rect.anchorMin = Vector2(0.5,0.5)
    rect.anchorMax = Vector2(0.5,0.5)
    rect.sizeDelta = size
    rect.anchoredPosition = pos

    local image = imageGo:GetComponent(typeof(UI.Image))
    image.raycastTarget = isRaycast
    return imageGo, image
end

return TestLayer
