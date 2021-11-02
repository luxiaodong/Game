
local LuaComponent = require("graphic.component.LuaComponent")
local CMove = class("CMove", LuaComponent)

function CMove:ctor()
    LuaComponent.ctor(self)
end

function CMove:init(go, data)
    self._moveSpeed = data.moveSpeed or 2
    LuaComponent.init(self, go)
end

function CMove:OnUpdate()
    if Input.GetKey(KeyCode.W) then
        local value = Time.deltaTime*self._moveSpeed
        self:move( Vector3.forward*value, 0)
    elseif Input.GetKey(KeyCode.S) then
        local value = Time.deltaTime*self._moveSpeed
        self:move( Vector3.back*value, 180)
    elseif Input.GetKey(KeyCode.A) then
        local value = Time.deltaTime*self._moveSpeed
        self:move( Vector3.left*value, -90)
    elseif Input.GetKey(KeyCode.D) then
        local value = Time.deltaTime*self._moveSpeed
        self:move( Vector3.right*value, 90)
    end
end

function CMove:move(delt, angle)
    local oldPos = self._go.transform.position
    self._go.transform.position = oldPos + delt
    -- self._go.transform.localRotation = Quaternion.AngleAxis(angle, Vector3.up)
    self._go.transform.localEulerAngles = Vector3.up*angle
end

return CMove
