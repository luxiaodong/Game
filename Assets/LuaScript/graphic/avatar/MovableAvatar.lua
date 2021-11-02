local Avatar = require("graphic.avatar.Avatar")
local MovableAvatar = class("MovableAvatar", Avatar)

function MovableAvatar:ctor()
    Avatar.ctor(self)
    self._moveSpeed = 0
    self._runThreshold = 1 --移动和跑的阀值
    self._moveLookTarget = nil
end

-- function MovableAvatar:init(avConfig)
--     Avatar.init(self, avConfig)
-- end

function MovableAvatar:setRunThreshold(threshold)
    self._runThreshold = threshold
end

--给上层掉用的统一接口
function MovableAvatar:startMove(speed)
    self._moveSpeed = speed
    self:setMoveAnimation()
end

--世界坐标系下
function MovableAvatar:moveTo(pos, t, callback, lookPos)
    local dis = Vector3.Distance(pos, self:position())
    self._moveSpeed = dis/t
    self:setMoveAnimation()
    self:moveByDoTween(pos, t, callback)

    if lookPos then
        self:lookAt(lookPos)
    end
end

function MovableAvatar:moveByDoTween(pos, t, callback, ease)
    ease = ease or DoTween.Ease.Linear
    local tween = self._go.transform:DOMove(pos, t):SetEase(ease)
    tween:OnComplete( function()
        self._tweens[tween] = nil
        if callback then callback() end
    end) --:SetUpdate(self._isUseRealTime)
    self._tweens[tween] = true
end

function MovableAvatar:moveByNaveMesh()
end

function MovableAvatar:stopMove()
    self._moveSpeed = 0
    self:setMoveAnimation()
end

--控制动画
--是否需要提供一个叠加的机制.
function MovableAvatar:setMoveAnimation()
    if self._moveSpeed <= 0 then --移动结束
        -- self._controller:setLayerWeight(enum.unity.animatorLayer.move, 0)
        if lastName == enum.unity.animation.walk or lastName == enum.unity.animation.run then
           self._controller:playAnimation(enum.unity.animation.idle)
        else
            --这里应该 剥离当前动作里的移动部分.
        end
    else
        --这里应该将 当前动作和移动混合.
        if self._moveSpeed < self._runThreshold then
            self._controller:playAnimation(enum.unity.animation.walk)
        else
            self._controller:playAnimation(enum.unity.animation.run)
        end
        -- self._controller:setParamFloat("speed", self._moveSpeed)
        -- self._controller:setLayerWeight(enum.unity.animatorLayer.move, 1)
    end
end

--播完受击,攻击,如果还在移动,则恢复移动状态
function MovableAvatar:handleNoAnimationToPlay(lastName)
    if self._moveSpeed > 0 then
        self:setMoveAnimation()
    else
        Avatar.handleNoAnimationToPlay(self, lastName)
    end
end

--临时api
--控制位移,控制的好走曲线, 起步曲线, 到达曲线
--self._avatarGo负责震动等坐标不会移动的, self._go负责移动坐标,旋转缩放等
--击退处理等

--控制朝向
--轴向移动,人物朝向就是移动方向
--靶向移动,朝向和面向独立
function MovableAvatar:setMoveLookTarget(target)
    self._moveLookTarget = target
    -- Animator.MatchTarget
end

return MovableAvatar
