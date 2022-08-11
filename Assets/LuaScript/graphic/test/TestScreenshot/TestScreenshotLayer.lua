
local TestLayer = require("graphic.test.TestLayer")
local TestScreenshotLayer = class("TestScreenshotLayer", TestLayer)

function TestScreenshotLayer:ctor()
    TestLayer.ctor(self)
end

function TestScreenshotLayer:init()
    TestLayer.init(self)
    self:customLayout()
end

function TestScreenshotLayer:customLayout()
    self._ui = {}
    local go = self:loadUiPrefab("Sandbox/Prefabs/UI/Test/testScreenshot.prefab")
    self._ui.root = {}
    self._ui.root.transform = go.transform

    self:createButtonWithText(self._ui.root.transform, "screenshot", Vector2(-200,200), Vector2(150,60), handler(self, self.clickScreenshot))
    self:createButtonWithText(self._ui.root.transform, "texture", Vector2(-200,100), Vector2(150,60), handler(self, self.clickTexture))
    self:createButtonWithText(self._ui.root.transform, "show", Vector2(200,200), Vector2(150,60), handler(self, self.clickShow))
    self:createButtonWithText(self._ui.root.transform, "save", Vector2(200,100), Vector2(150,60), handler(self, self.clickSave))
end

function TestScreenshotLayer:clickScreenshot()
    local fileName = "abc.png"
    g_tools:captureScreenshot(fileName)
end

function TestScreenshotLayer:clickShow()
    local fileName = "abc.png"
    local filePath = CS.Game.GFileUtils.GetInstance():GetScreenshotPath().."/"..fileName
    local tex = CS.Game.GResource:GetInstance():LoadNativeImage(filePath)
    local imageGo = self._ui.root.transform:Find("RawImage").gameObject
    imageGo:GetComponent(typeof(UI.RawImage)).texture = tex
end

function TestScreenshotLayer:clickTexture()
    local luaCo = coroutine.create(function() 
        -- 帧结束时才获得材质
        yield_return(CS.UnityEngine.WaitForEndOfFrame())
        -- local tex = g_tools:captureScreenshotAsTexture()
        local tex2d = Texture2D(Screen.width, Screen.height)
        tex2d:ReadPixels(Rect(0, 0, Screen.width, Screen.height), 0, 0);
        tex2d:Apply()
        local imageGo = self._ui.root.transform:Find("RawImage").gameObject
        imageGo:GetComponent(typeof(UI.RawImage)).texture = tex2d
    end)

    coroutine.resume(luaCo)
end

function TestScreenshotLayer:clickSave()
    local luaCo = coroutine.create(function()
        -- 帧结束时才获得材质
        yield_return(CS.UnityEngine.WaitForEndOfFrame())
        -- local tex2d = g_tools:captureScreenshotAsTexture() 
        local tex2d = Texture2D(Screen.width, Screen.height)
        tex2d:ReadPixels(Rect(0, 0, Screen.width, Screen.height), 0, 0);
        tex2d:Apply()
        local bytes = tex2d:EncodeToPNG()
        local fileName = "abc.png"
        local filePath = CS.Game.GFileUtils.GetInstance():GetScreenshotPath().."/"..fileName
        CS.Game.GFileUtils.GetInstance():CreateFile(filePath, bytes)
        -- Object.Destroy(tex2d)
    end)

    coroutine.resume(luaCo)
end

return TestScreenshotLayer
