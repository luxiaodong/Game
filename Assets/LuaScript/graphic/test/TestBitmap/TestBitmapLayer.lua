local TestLayer = require("graphic.test.TestLayer")
local TestBitmapLayer = class("TestBitmapLayer", TestLayer)

function TestBitmapLayer:ctor()
    TestLayer.ctor(self)
end

function TestBitmapLayer:init()
    TestLayer.init(self)
    self:customLayout()
end

function TestBitmapLayer:customLayout()
    self._ui = {}
    local go = self:loadUiPrefab("Assets/Prefabs/UI/Test/testBitmap.prefab")
    self._ui.root = {}
    self._ui.root.transform = go.transform

    local tempGo = go.transform:Find("name").gameObject
    self._ui.name = {}
    self._ui.name.gameObject = tempGo
    self._ui.name.text = tempGo:GetComponent(typeof(UI.Text))

    local tempGo = go.transform:Find("BMFont").gameObject
    self._ui.bmFont = {}
    self._ui.bmFont.gameObject = tempGo

    local txtGo = g_2dTools:createText("custom font: 0000", "Assets/Fonts/ttf/Hack_Regular.ttf", 30, self:assetGroup() )
    txtGo.transform:SetParent(self._ui.root.transform, false)

    txtGo:GetComponent(typeof(RectTransform)).anchorMin = Vector2(0.5,0.5)
    txtGo:GetComponent(typeof(RectTransform)).anchorMax = Vector2(0.5,0.5)
    txtGo:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(500,62)
    txtGo:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0,10)
    txtGo:GetComponent(typeof(UI.Text)).color = Color(1,1,1,1)
    txtGo:GetComponent(typeof(UI.Text)).alignment = TextAnchor.MiddleCenter
    
    local cmp = require("graphic.component.CScrollNumber").create()
    cmp:init(txtGo, {
        srcValue=0,
        dstValue=9999,
        duration=3,
        -- format="custom font: %04d",
    })

    local cmp = require("graphic.component.CCountDown").create()
    cmp:init(self._ui.name.gameObject, {
        remainTime=10, 
        callback=function() 
            self._ui.name.text.text = "cd is over"
    end})

    local cmp = require("graphic.component.CCountDown").create()
    cmp:init(self._ui.bmFont.gameObject, {
        remainTime=65,
        formats={"%02d-%02d-%02d","%02d-%02d","%d"},
        type=typeof(TextMesh)
    })

end

return TestBitmapLayer
