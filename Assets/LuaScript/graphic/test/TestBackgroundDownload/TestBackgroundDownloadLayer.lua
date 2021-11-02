local TestLayer = require("graphic.test.TestLayer")
local TestBackgroundDownloadLayer = class("TestBackgroundDownloadLayer", TestLayer)

function TestBackgroundDownloadLayer:ctor()
	TestLayer.ctor(self)
end

function TestBackgroundDownloadLayer:init()
	TestLayer.init(self)
    self:customLayout()

    self:registerEvent(event.backgroundDownload.update)
    self:registerEvent(event.backgroundDownload.result)
    nativeBridge.init()

    local t = {}
    t.action = enum.backgroundDownload.init
    t.callback = function(result, t)
        if result == enum.sdk.result.success then
            if tonumber(t.count) > 0 then
                self:clickStart()
            end
        end
    end
    nativeBridge.sendToNative(t)

    self._url = "https://dl.google.com/android/repository/android-ndk-r21d-darwin-x86_64.dmg"
end

function TestBackgroundDownloadLayer:handleEvent(e)
    if e.name == event.backgroundDownload.update then
        self._txtGo:GetComponent(typeof(UI.Text)).text = tostring(e.data.percent)
    elseif e.name == event.backgroundDownload.result then
        print("-----------------------------------------")
        print(e.data.filePath)
        if e.data.filePath then
            print(CS.Game.GFileUtils.GetInstance():IsFileExist(e.data.filePath))
        end
        print("-----------------------------------------")
    end
end

function TestBackgroundDownloadLayer:clickStart()
    print("start")
    local t = {}
    t.action = enum.backgroundDownload.start
    t.url = self._url
    t.fileName = "433e4ce7bd937c654c2c26d6e34fdcaa.dmg"
    t.fileMd5 = "433e4ce7bd937c654c2c26d6e34fdcaa"
    nativeBridge.sendToNative(t)
end

function TestBackgroundDownloadLayer:clickPause()
    print("pause")
    local t = {}
    t.action = enum.backgroundDownload.pause
    t.url = self._url
    nativeBridge.sendToNative(t)
end

function TestBackgroundDownloadLayer:clickCancel()
    print("cancel")
    local t = {}
    t.action = enum.backgroundDownload.cancel
    t.url = self._url
    nativeBridge.sendToNative(t)
end

function TestBackgroundDownloadLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Start", Vector2(0,100), Vector2(122,62), handler(self, self.clickStart))
    self:createButtonWithText(self._go.transform, "Pause", Vector2(-200,100), Vector2(122,62), handler(self, self.clickPause))
    self:createButtonWithText(self._go.transform, "Cancel", Vector2(200,100), Vector2(122,62), handler(self, self.clickCancel))
    self._txtGo = self:createText(self._go.transform, "0", Vector2(0,0), Vector2(800,400))
end

return TestBackgroundDownloadLayer
