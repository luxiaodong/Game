
local LuaComponent = require("graphic.component.LuaComponent")
local CFollow = class("CFollow", LuaComponent)

function CFollow:ctor()
    LuaComponent.ctor(self)
end

function CFollow:init(go, data)
    self._targetGo = data.targetGo
    LuaComponent.init(self, go)
end

function CFollow:OnStart()
    self._delt = self._go.transform.position - self._targetGo.transform.position
end

function CFollow:OnUpdate()
	local newPos = self._targetGo.transform.position + self._delt
	self._go.transform.position = newPos
end

return CFollow
