
local LuaComponent = require("graphic.component.LuaComponent")
local CCountDown = class("CCountDown", LuaComponent)

function CCountDown:ctor()
    LuaComponent.ctor(self)
end

function CCountDown:init(go, data)
    self._type = data.type or typeof(UI.Text) --只要组件支持.text
    self._formats = data.formats or {"%02d:%02d:%02d","%02d:%02d","%d"} --显示格式
    self._remainTime = data.remainTime --单位:秒
    self._callback = data.callback
    self._displayTime = ""
    self._startTime = Time.time 
    LuaComponent.init(self, go)
end

function CCountDown:reset(data)
    -- self:bindBehaviour()
end

function CCountDown:isSupport()
    if self._go:GetComponent(self._type) then
        return true
    end

    return false
end

function CCountDown:OnUpdate()
    local passTime = Time.time - self._startTime
    local displayTime = math.ceil(self._remainTime - passTime)

    if self._displayTime == displayTime then
        return 
    end

    self._displayTime = displayTime
    self:refreshTime()

    if self._displayTime == 0 then
        self:unbindBehaviour()
        if self._callback then
            self._callback()
        end
    end
end

function CCountDown:refreshTime()
    local component = self._go:GetComponent( self._type )

    local h,m,s = self:calculateHMS()
    if h > 0 then
        component.text = string.format(self._formats[1],h,m,s)
    elseif m > 0 then
        component.text = string.format(self._formats[2],m,s)
    else
        component.text = string.format(self._formats[3],s)
    end
end

function CCountDown:calculateHMS()
    local h = math.floor(self._displayTime/3600)
    local m = math.floor( (self._displayTime - h*3600)/60 )
    local s = math.floor( self._displayTime%60 )
    return h,m,s
end

return CCountDown
