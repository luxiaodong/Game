
local GLuaBehaviour = class("GLuaBehaviour")

function GLuaBehaviour:ctor()
    self:init()
end

function GLuaBehaviour:init()
    self._csharpInstance = CS.Game.GLuaBehaviour.GetInstance()
    self._csharpInstance:Start()
    self._behaviors = {}
end

function GLuaBehaviour:register(key, class, func)
    -- print("[GLuaBehaviour] register ", key)
    if class._go then
        if not self._behaviors[key] then
            self._behaviors[key] = {}
            self._csharpInstance:BindUpdate(key, handler(self, self[key]))
        end

        self._behaviors[key][class] = func
    else
        error("not exist GameObject in self._go")
    end
end

function GLuaBehaviour:unregister(key, class)
    if self._behaviors[key] then
        if self._behaviors[key][class] then
            self._behaviors[key][class] = nil
        end
    end
end

function GLuaBehaviour:OnUpdate()
    self:updateByKey(enum.unity.behaviour.onUpdate)
end

function GLuaBehaviour:OnLateUpdate()
    self:updateByKey(enum.unity.behaviour.onLateUdpate)
end

function GLuaBehaviour:OnFixedUpdate()
    self:updateByKey(enum.unity.behaviour.onFixedUpdate)
end

function GLuaBehaviour:updateByKey(key)
    for class, func in pairs (self._behaviors[key]) do
        func(class)
    end
end

return GLuaBehaviour
