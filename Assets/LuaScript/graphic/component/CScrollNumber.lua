
local LuaComponent = require("graphic.component.LuaComponent")
local CScrollNumber = class("CScrollNumber", LuaComponent)

function CScrollNumber:ctor()
    LuaComponent.ctor(self)
end

function CScrollNumber:init(go, data)
    self._type = data.type or typeof(UI.Text) --只要组件支持.text
    self._format = data.format or "%d" --显示格式
    self._srcValue = data.srcValue or 0
    self._dstValue = data.dstValue
    self._duration = data.duration or 1
    self._callback = data.callback
    self._displayValue = ""
    self._startTime = Time.unscaledTime --真实时间
    LuaComponent.init(self, go)
end

function CScrollNumber:isSupport()
    self._component = self._go:GetComponent(self._type)
    if self._component then
        return true
    end

    return false
end

function CScrollNumber:OnUpdate()
    local passTime = Time.unscaledTime - self._startTime
    local p = passTime/self._duration
    if p > 1.0 then
        self._displayValue = self._dstValue
        self:refreshValue()

        self:unbindBehaviour()
        if self._callback then
            self._callback()
        end
    else
        -- p = math.sin(math.pi/2*p), 曲线这边处理.暂时不放参数
        self._displayValue = self._srcValue + (self._dstValue - self._srcValue)*p
        self:refreshValue()
    end
end

function CScrollNumber:refreshValue()
    self._component.text = string.format(self._format, math.floor(self._displayValue))
end

return CScrollNumber
