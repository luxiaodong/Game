
local GLayer = require("graphic.core.GLayer")
local LoadingLayer = class("LoadingLayer",GLayer)

function LoadingLayer:ctor()
	GLayer.ctor(self)
end

function LoadingLayer:init()
    GLayer.init(self)

    self._ui = {}
    local go = self:loadUiPrefab("Prefabs/UI/versionUpdate.prefab")

    local tempGo = go.transform:Find("bar").gameObject
    self._ui.bar = {}
    self._ui.bar.image = tempGo:GetComponent(typeof(UI.Image))
    
    local tempGo = go.transform:Find("des").gameObject
    self._ui.des = {}
    self._ui.des.text = tempGo:GetComponent(typeof(UI.Text))

    self:setVisible(false)
    self:registerEvent(event.ui.loading)
    self._timer = nil --定时器
    self._startTime = nil
    self._lastTipsIndex = nil
    self._leastShowTime = 1.2 --最少显示时间,防止一闪而过.
    self._tipsPerSecond = 2 --tips多少时间变一次.
end

--主要思想是用指数函数模拟0-1加载过程,让人感觉先快后慢
function LoadingLayer:smoothPercent(p)
    -- local passTime = Time.time - self._startTime
    -- local percent = 0

    -- if self._loadABUseTime then
    --     local p = 1 - math.exp(-2*self._loadABUseTime)
    --     percent = p + (1-p)*(passTime - self._loadABUseTime)
    -- else
    --     percent = 1 - math.exp(-2*passTime)
    -- end

    -- if percent >= 1 then
    --     percent = 0.99
    -- end
    return p
end

function LoadingLayer:handleEvent(e)
    if e.name == event.ui.loading then
        self._ui.bar.image.fillAmount = self:smoothPercent(e.data.percent)

        if not self._timer then
            self:start()
        end

        if e.data.percent == 1 then
            local passTime = Time.time - self._startTime
            if passTime > self._leastShowTime then
                self:stop()
            else
                g_tools:delayCall(self._leastShowTime - passTime, handler(self, self.stop))
            end
        end
    end
end

function LoadingLayer:start()
    self._timer = g_tools:loopCall(self._tipsPerSecond, function() self:loopShowTips() end, true)
    self:setVisible(true)
    self._startTime = Time.time
    self:loopShowTips()
end

function LoadingLayer:stop()
    g_tools:stopLoopCall(self._timer)
    self._timer = nil
    self:setVisible(false)
end

function LoadingLayer:loopShowTips()
    local count = 20 --tips词条的个数.
    local index = math.random(count)

    while true do
        if index == self._lastTipsIndex then
            index = math.random(count)
        else
            break
        end
    end

    self._lastTipsIndex = index
    self._ui.des.text.text = "tips ... "..index
end

return LoadingLayer
