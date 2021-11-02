local TestLayer = require("graphic.test.TestLayer")
local TestQualityLayer = class("TestQualityLayer", TestLayer)

function TestQualityLayer:ctor()
    TestLayer.ctor(self)
end

function TestQualityLayer:init()
    TestLayer.init(self)

    self._qualityLevel = quality.level()
    quality.setFps(75)
    self._vSyncIndex = 0

    self:customLayout()
end

function TestQualityLayer:changeLevel()
    self._qualityLevel = self._qualityLevel + 1

    if self._qualityLevel > enum.unity.quality.ultra then
        self._qualityLevel = enum.unity.quality.veryLow
    end

    quality.setLevel(self._qualityLevel, true)
    self._txtLevel:GetComponent(typeof(UI.Text)).text = "Level :"..tostring(self._qualityLevel)
end

function TestQualityLayer:changeVsync()
    self._vSyncIndex = self._vSyncIndex + 1
    if self._vSyncIndex > enum.unity.vSync.everySecondVBlank then
        self._vSyncIndex = 0
    end

    quality.setVSyncCount(self._vSyncIndex)

    if self._vSyncIndex == 0 then
        Application.targetFrameRate = 45
    end

    self._txtvSync:GetComponent(typeof(UI.Text)).text = "vSync :"..tostring(self._vSyncIndex)
end

function TestQualityLayer:OnUpdate()
    if self._startTime == nil then
        self._startTime = Time.realtimeSinceStartup
        self._frameCount = Time.frameCount
    else
        local deltaTime = Time.realtimeSinceStartup - self._startTime
        if deltaTime > 1 then
            local deltaCount = Time.frameCount - self._frameCount
            self._average = math.floor(deltaCount/deltaTime)
            self._txtFps:GetComponent(typeof(UI.Text)).text = tostring(self._average)
            self._startTime = Time.realtimeSinceStartup
            self._frameCount = Time.frameCount
        end
    end
end

function TestQualityLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Level", Vector2(-200,100), Vector2(122,62), handler(self, self.changeLevel))
    self:createButtonWithText(self._go.transform, "vSync", Vector2(200,100), Vector2(122,62), handler(self, self.changeVsync))
    self._txtLevel = self:createText(self._go.transform, "Level :"..tostring(self._qualityLevel), Vector2(-150,0), Vector2(800,400))
    self._txtvSync = self:createText(self._go.transform, "vSync :"..tostring(self._vSyncIndex), Vector2(150,0), Vector2(800,400))
    self._txtFps = self:createText(self._go.transform, "0", Vector2(0,100), Vector2(800,400))
end


-- quality.setFps(30)
-- quality.setVSyncCount(enum.unity.vSync.everyVBlank)

-- enum.unity.quality.veryLow = 1
-- enum.unity.quality.low = 2
-- enum.unity.quality.medium = 3
-- enum.unity.quality.high = 4
-- enum.unity.quality.veryHigh = 5
-- enum.unity.quality.ultra = 6

return TestQualityLayer

