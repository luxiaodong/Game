local AvatarController = require("graphic.avatar.AvatarController")
local AvatarStateController = class("AvatarStateController", AvatarController)

function AvatarStateController:ctor()
    AvatarController.ctor(self)
    self._triggers = {}
    self._mapHashToNames = {}
end

function AvatarStateController:init(controller)
    AvatarController.init(self, controller)
print("AvatarStateController:init")
    for k,v in pairs(enum.unity.animation) do
        local key = Animator.StringToHash(v)
print(v, key)
        self._mapHashToNames[key] = v
    end
end

function AvatarStateController:unityPlay(name)
    
    -- self:resetTrigger()
print("AvatarController:unityPlay ==> ", name)
    
    -- if name == "Walk" then
    --     print("stop attack")
    --     self._controller:ResetTrigger("Attack")
    -- end

    --在播C动画时,可能A,B两个动画正在混合.如何处理.
    --A,B无法打断,导致再trigger C时,状态混乱.
    --有办法立即结束吗.
    --转向还要测试.
    --如果设定 exit time, 如何设置delay时间?

    --if self._controller:IsInTransition(enum.unity.animatorLayer.base) then
    --    self._controller:Play(name)
    --else
        self._controller:SetTrigger(name)
    --end

    self._triggers[name] = true
end

-- 同时有多个触发器会乱掉. 例:
-- self._controller:SetTrigger("Walk")
-- self._controller:SetTrigger("Attack")
-- Attack不会顶掉Walk. unity会混合两个

function AvatarController:resetTrigger()
    for name,v in pairs(self._triggers) do
print("AvatarController:resetTrigger ==> ", name)
        self._controller:ResetTrigger(name)
    end
    self._triggers = {}
end

function AvatarStateController:playAnimation(name, callback, data, speed, transDuration)
    local isOk = self._controller:IsInTransition()
    print("playAnimation ===>",name, isOk)
    if isOk then
        local transInfo = self._controller:GetAnimatorTransitionInfo(enum.unity.animatorLayer.base)
        if transInfo then
            print("transInfo ", transInfo.duration, transInfo.durationUnit, transInfo.normalizedTime)
        end
    end

    local currentStateInfo = self._controller:GetCurrentAnimatorStateInfo(enum.unity.animatorLayer.base)
    if currentStateInfo then
        print("currentStateInfo",self._mapHashToNames[currentStateInfo.shortNameHash], currentStateInfo.shortNameHash, currentStateInfo.normalizedTime)
    end

    local nextStateInfo = self._controller:GetNextAnimatorStateInfo(enum.unity.animatorLayer.base)
    if nextStateInfo then
        print("nextStateInfo",self._mapHashToNames[currentStateInfo.shortNameHash],currentStateInfo.shortNameHash,nextStateInfo.normalizedTime)
    end

    -- local currentClipInfo = self._controller:GetCurrentAnimatorClipInfo(enum.unity.animatorLayer.base)
    -- if currentClipInfo then
    --     print("currentClipInfo")
    --     print(currentClipInfo[0].clip.length)
    -- end

    -- local nextClipInfo = self._controller:GetNextAnimatorClipInfo(enum.unity.animatorLayer.base)
    -- if nextClipInfo then
    --     print("nextClipInfo")
    -- end

    AvatarController.playAnimation(self, name, callback, data, speed, transDuration)
end

--     --如果先攻击,再移动,混合,那么直接播移动,不设置混合.
--     --如果先移动,再攻击,混合,那么需要设置混合,在攻击结束后,设置回来.

-- print("AvatarStateController:playAnimation 1")
--     if name == enum.unity.animation.hit or name == enum.unity.animation.attack then
-- print("AvatarStateController:playAnimation 2")
--         if self._animationName == enum.unity.animation.walk
--         or self._animationName == enum.unity.animation.run then
-- print("AvatarStateController:playAnimation 3")
--             if AvatarController.playAnimation(self, name, callback, data, speed, transDuration) then
--                 self:setLayerWeight(enum.unity.animatorLayer.move, 0.5)
--                 --打完之后,上下层各50%运行walk,run,是否可行
--             end
--         end
--     else
-- print("AvatarStateController:playAnimation 4")
--         if AvatarController.playAnimation(self, name, callback, data, speed, transDuration) then
-- print("AvatarStateController:playAnimation 5")
--             self:setLayerWeight(enum.unity.animatorLayer.move, 0)
--         end
--     end
-- end

return AvatarStateController
