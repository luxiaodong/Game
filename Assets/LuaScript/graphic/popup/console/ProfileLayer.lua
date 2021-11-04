local GLayer = require("graphic.core.GLayer")
local ProfileLayer = class("ProfileLayer", GLayer)

function ProfileLayer:ctor()
    GLayer.ctor(self)
end

function ProfileLayer:init()
    GLayer.init(self)

    self._ui = {}
    local go = self:loadUiPrefab("Prefabs/UI/profile.prefab")

    local tempGo = go.transform:Find("fps/average").gameObject
    self._ui.average = {}
    self._ui.average.text = tempGo:GetComponent(typeof(UI.Text))

    local tempGo = go.transform:Find("fps/high").gameObject
    self._ui.high = {}
    self._ui.high.text = tempGo:GetComponent(typeof(UI.Text))

    local tempGo = go.transform:Find("fps/low").gameObject
    self._ui.low = {}
    self._ui.low.text = tempGo:GetComponent(typeof(UI.Text))

    self._low = 100
    self._average = nil
    self._high = 0
    self._startTime = nil
    self._frameCount = nil
    quality.setFps(-1) --关闭垂直同步,只看cpu的算力,手机上无效,必开,可能为了省电
end

function ProfileLayer:OnUpdate()
    if self._startTime == nil then
        self._startTime = Time.realtimeSinceStartup
        self._frameCount = Time.frameCount
    else
        local deltaTime = Time.realtimeSinceStartup - self._startTime
        if deltaTime > 1 then
            local deltaCount = Time.frameCount - self._frameCount
            self._average = math.floor(deltaCount/deltaTime)
            self._ui.average.text.text = self._average
            self._startTime = Time.realtimeSinceStartup
            self._frameCount = Time.frameCount

            if self._average > self._high then
                self._high = self._average
                self._ui.high.text.text = self._high
            end

            if self._average < self._low then
                self._low = self._average
                self._ui.low.text.text = self._low
            end
        end
    end
end

return ProfileLayer
