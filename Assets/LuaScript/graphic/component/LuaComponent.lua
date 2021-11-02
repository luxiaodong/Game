
local LuaComponent = class("LuaComponent")

function LuaComponent:ctor()
    self._components = {}
    self._go = nil
    self._isExist = false
end

function LuaComponent:init(go)
    self._go = go
    if not self:isSupport() then
        print("not support component.")
        return 
    end

    self._isExist = true
    self:bindBehaviour()
    self:bindDestroy()
end

function LuaComponent:isSupport()
    return true
end

function LuaComponent:OnDestroy()
    self:unbindBehaviour()
    self._isExist = false
    self._go = nil
end

-- 绑定更新函数 --
function LuaComponent:bindBehaviour()
    for _,key in pairs(enum.unity.behaviour) do
        local func = self[key]
        if func then
            g_system._luaBehaviour:register(key, self, func)
            self._hasLuaBehaviour = true
        end
    end
end

function LuaComponent:unbindBehaviour()
    if self._hasLuaBehaviour then
        for _,key in pairs(enum.unity.behaviour) do
            local func = self[key]
            if func then
                g_system._luaBehaviour:unregister(key, self)
            end
        end
    end
end

function LuaComponent:bindDestroy()
    if not self._components.destroy then
        self._components.destroy = CS.Game.CDestroy.Add(self._go, self)
    end
end

function LuaComponent:unbindDestroy()
    if self._components.destroy then
        Object.Destroy(self._components.destroy)
        self._components.destroy = nil
    end
end

return LuaComponent
