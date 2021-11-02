
local AvatarController = class("AvatarController")

function AvatarController:ctor()
end

function AvatarController:init(controller)
    self._controller = controller
    self._animationName = nil
    self._callbackCount = 0 --回调个数
    self._isPlaying = false --是否在播放某个动画
    self._ignoreSame = true --前后两个动作相同时, 忽略不放 or 中断从新放
    self._ignoreSameCallback = false --前后两个动作相同时, 是否忽略回调
    self._pauseSpeed = 0 --暂停时的播放速度
    self._timers = {} --定时器表,用于中断
end

function AvatarController:setFrameKeyHandler(callback)
    self._handleKeyFrame = callback --关键帧回调函数
end

function AvatarController:changeRuntimeAnimator(controller, actConfig)
    self._controller.runtimeAnimatorController = controller
    self._actConfig = actConfig --resAlias里的配置表
    local lastName = self._animationName
    self._animationName = nil

    if lastName then
        local act = self._actConfig[lastName] --老名字在新动做下
        if act and act.loop then --也有且支持循环
            self._controller:Play(lastName)
        end
    end
end

function AvatarController:isPlaying()
    return self._isPlaying
end

function AvatarController:currentAnimationName()
    return self._animationName
end

function AvatarController:unityPlay(name, transDuration)
    transDuration = transDuration or 0.15
    if transDuration > 0 then
        self._controller:CrossFadeInFixedTime(name, transDuration)
    else
        self._controller:Play(name)
    end
end

function AvatarController:duration(name)
    return self._actConfig[name].time
end

function AvatarController:isLoop(name)
    return self._actConfig[name].loop or false
end

function AvatarController:playAnimation(name, callback, speed, data, transDuration)
    if name == nil then
        print("[AvatarController:playAnimation] name is nil")
        return false
    end

    if self._animationName == enum.unity.animation.die then
        return false
    end

    local length = self:duration(name)
    local isLoop = self:isLoop(name)
    speed = speed or 1
    local canPlay = true
    local canCallback = not isLoop      --攻击,受击才支持回调,idle,move不支持回调
    if name == self._animationName then --前后两个动作相同
        if isLoop then return false end
        if self._isPlaying then
            canPlay = not self._ignoreSame
        else
            canPlay = true
        end

        if canPlay then
            canCallback = not self._ignoreSameCallback
            --unity动画自机制会忽略相同的,故插入一个idle
            self:unityPlay(enum.unity.animation.idle, 0)
            -- self._controller:Play(enum.unity.animation.idle)
        end
    end

    if canPlay then
        self:setPlaySpeed(speed)
        self:unityPlay(name, transDuration)
    
        if not self._isPlaying then
            self:start()
        end

        self._animationName = name
        self._isPlaying = true

        local frames = self._actConfig[name].frame or {}
        for key, t in pairs(frames) do
            local timer = nil
            timer = g_tools:delayCall(t/speed,function()
                self._timers[timer] = nil
                if self._handleKeyFrame then 
                    self._handleKeyFrame(name, key, data) 
                end
            end)
            self._timers[timer] = true
        end
    end

    if canCallback and callback then
        if canPlay then
            self._callbackCount = self._callbackCount + 1
            local timer = nil
            timer = g_tools:delayCall(length/speed, function()
                self._timers[timer] = nil
                self._callbackCount = self._callbackCount - 1
                if self._animationName == name then
                    if self._callbackCount == 0 then
                        self._isPlaying = false
                    end
                end

                callback() --这里可能掉用playAnimation, 所以放最后
            end)
            self._timers[timer] = true
        else
            --不播放的回调放这边,否则isPlaying不准
            local timer = nil
            timer = g_tools:delayCall(length/speed, function() 
                self._timers[timer] = nil; 
                callback() 
            end)
            self._timers[timer] = true
        end
    end

    return canPlay
end

--整个动画机的播放速度
function AvatarController:setPlaySpeed(speed)
    self._controller.speed = speed
end

function AvatarController:pause()
    if self._controller.speed > 0 then
        self._pauseSpeed = self._controller.speed
        self._controller.speed = 0
    end

    for timer, _ in pairs(self._timers) do
        g_tools:pause(timer)
    end
end

function AvatarController:resume()
    self._controller.speed = self._pauseSpeed

    for timer, _ in pairs(self._timers) do
        g_tools:resume(timer)
    end
end

function AvatarController:start()
    self._controller.enabled = true
end

function AvatarController:stop()
    self._controller.enabled = false
    for timer, _ in pairs(self._timers) do
        g_tools:stop(timer)
    end
end

function AvatarController:setParamInt(name, value)
    self._controller:SetInt(name, value)
end

function AvatarController:setParamFloat(name, value)
    self._controller:SetFloat(name, value)
end

function AvatarController:setParamBool(name, value)
    self._controller:SetBool(name, value)
end

function AvatarController:setLayerWeight(index, value)
    self._controller:SetLayerWeight(index, value)
end

function AvatarController:layerWeight(index)
    return self._controller:GetLayerWeight(index)
end

return AvatarController
