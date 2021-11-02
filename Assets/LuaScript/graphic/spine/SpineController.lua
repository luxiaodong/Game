
local AvatarController = require("graphic.avatar.AvatarController")
local SpineController = class("SpineController", AvatarController)

function SpineController:ctor()
    AvatarController.ctor(self)
end

function SpineController:setActConfig(actConfig)
    self._actConfig = actConfig
end

function SpineController:unityPlay(name)
    local isLoop = self:isLoop(name)
    self._controller.AnimationState:SetAnimation(0, name, isLoop)
end

function SpineController:setPlaySpeed(speed)
    self._controller.timeScale = speed
end

function SpineController:pause()
    self._pauseSpeed = self._controller.timeScale
    self._controller.timeScale = 0

    for timer, _ in pairs(self._timers) do
        g_tools:pause(timer)
    end
end

function SpineController:resume()
    self._controller.timeScale = self._pauseSpeed

    for timer, _ in pairs(self._timers) do
        g_tools:resume(timer)
    end
end

function SpineController:start()
    -- self._controller.AnimationState:Start()
end

function SpineController:stop()
    -- self._controller.AnimationState:End()
    for timer, _ in pairs(self._timers) do
        g_tools:stop(timer)
    end
end

return SpineController
