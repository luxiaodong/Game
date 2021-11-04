
local GObject = require("graphic.core.GObject")
local HpBar = class("HpBar", GObject)

function HpBar:ctor()
    GObject.ctor(self)
end

function HpBar:createGameObject()
    self._go = GameObject.CreatePrimitive(PrimitiveType.Quad)
    self._go.transform.localScale = Vector3(2, 0.25, 1)
    self._go.name = "HpBar"
end

function HpBar:init()
    GObject.init(self)
    self:setPercent(100)
end

function HpBar:setPercent()
    local shader = self:loadAsset("Sandbox/Shaders/Test/redHp.shader")
    local render = self._go:GetComponent(typeof(MeshRenderer))
    render.material = Material(shader)
end

return HpBar
