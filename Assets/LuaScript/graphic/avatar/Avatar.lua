
local GObject = require("graphic.core.GObject")
local Avatar = class("Avatar", GObject)

function Avatar:ctor()
    GObject.ctor(self)
    self._avatarGo = nil --真正的avatar, self._go,带有血条信息

    --动画
    self._controller = nil --动画控制器
    self._controlConfig = nil --动画控制器的配置数据
    self._controllerName = nil --当前控制器的名字
    self._tweens = {} --doTweens列表

    --换装
    self._combineMeshesRender = nil --换装管理器
    self._combineMap = nil --当前的装束

    --武器
    self._weaponMountPoint = "" --武器挂载点
    self._weaponGo = nil
end

--注意:GPUSkinning需要延迟一帧
function Avatar:init(name, isSync, callback)
    local function loadOver(prefab)
        if not prefab then
            return
        end

        self._avatarGo = Object.Instantiate(prefab)
        self._avatarGo.transform:SetParent(self._go.transform, false)
        if isSync then
            callback()
            -- g_tools:delayOneFrame(self:handler(function() callback() end))
        end
    end

    if isSync then
        self:loadAsset(name, true, function(prefab)
            loadOver(prefab)
        end)
    else
        local prefab = self:loadAsset(name)
        loadOver(prefab)
    end
end

function Avatar:exit()
    if self._controller then
        self._controller:stop()
        self._controller:setFrameKeyHandler(nil)
    end
    
    GObject.exit(self)
end

function Avatar:test()
    --self._controller:CrossFadeInFixedTime("not exist", 0.15)

    --测试,unity动画会自动忽略相同的,直到播放结束.
    -- for i=1,10 do
    --     g_tools:delayCall(0.3*i, 
    --     function() 
    --     print("enter "..i)
    --         self._controller:Play( enum.unity.animation.die, 
    --         function()
    --             print("exit "..i)
    --         end)
    --     end)
    -- end

    g_tools:delayCall(3,
    function()
        --self._controller:playAnimation(enum.unity.animation.run)
        self:playAnimation(enum.unity.animation.attack, function() print("attack") end)
        --self:changeController(resAlias.controller.grunt)
    end)
end

--换装相关
function Avatar:initCombineMeshesRender(map, isCombine, bonePath)
    self._combineMeshesRender = require("graphic.avatar.CombineMeshesRender").create()
    self._combineMeshesRender:init(self._avatarGo, isCombine, bonePath)
    self._combineMap = {}
    self:changeCombineMeshesRender(map)    
end

function Avatar:changeCombineMeshesRender(map)
    --非合并的需要过滤掉相等的
    if not self._combineMeshesRender._isCombine then
        for bodypart, path in pairs(map) do
            if self._combineMap[bodypart] == path then
                map[bodypart] = nil
            end
        end
    end

    local isOk = true
    local list = {}
    for bodypart, path in pairs(map) do
        local prefab = self:loadAsset(path)
        if not prefab then
            isOk = false
            break
        end

        table.insert(list, {bodypart=bodypart,prefab=prefab,path=path})
    end

    if not isOk then
        for i, v in ipairs(list) do
            self:unloadAsset(v.path)
        end
        error("[Avatar][changeCombineMeshesRender] prefab load failed")
        return
    end

    if #list > 0 then
        if self._combineMeshesRender._isCombine then
            self._combineMeshesRender:changeAllTogether(list)
        else
            for i, v in ipairs(list) do                
                self._combineMeshesRender:changeSingle(v.bodypart, v.prefab, v.path)
                self._combineMap[v.bodypart] = v.path
            end
        end
    end
end

--换武器, 可能导致换controller
function Avatar:initWeapon(weaponMountPoint, weaponPath)
    self._weaponMountPoint = weaponMountPoint
    self:changeWeapon(weaponPath)
end

function Avatar:changeWeapon(weaponPath)
    local mountPointTrans = self._avatarGo.transform:Find(self._weaponMountPoint)
    if mountPointTrans then
        if self._weaponGo then
            Object.Destroy(self._weaponGo)
        end

        local prefab = self:loadAsset(weaponPath)
        local weaponGo = Object.Instantiate(prefab)
        weaponGo.transform:SetParent(mountPointTrans, false)
        self._weaponGo = weaponGo
    end
end

--动画相关
function Avatar:initController(ctlConfig, defaultName, isGpu)
    local controller = nil
    if isGpu then
        self._controller = require("graphic.avatar.GPUSkinningController").create()
        controller = self._avatarGo:GetComponent(typeof(CS.GPUSkinningPlayerMono)).Player
    else
        self._controller = require("graphic.avatar.AvatarController").create()
        controller = self._avatarGo:GetComponent(typeof(Animator))
    end

    self._controller:init(controller)
    self._controlConfig = ctlConfig
    self._controller:setFrameKeyHandler(handler(self, self.handleKeyFrame))
    self:changeController(defaultName or enum.unity.controller.none) --默认的和初始化设定的可能不一致
end

--换武器可能不换 controller
--换controller
function Avatar:changeController(ctlName)
    local fileName = self._controlConfig.ac[ctlName].path
    local controler = self:loadAsset(fileName)
    self._controller:changeRuntimeAnimator(controler, self._controlConfig.ac[ctlName].act)
    _controllerName = ctlName
end

--播放动画,动画的状态名字,非动作名字
function Avatar:playAnimation(name, callback, speed, transDuration)
    local function tempFunc()
        if self._isExist == true then
            if callback then callback() end --这里可能掉用playAnimation
            if not self._controller:isPlaying() then
                --可以拿出状态,最后一个是谁
                local lastName = self._controller:currentAnimationName()
                self:handleNoAnimationToPlay(lastName) --没有动画可播时的回调
            end
        end
    end

    self._controller:playAnimation(name, tempFunc, speed, transDuration)
end

--没有动画播放时候的回调
function Avatar:handleNoAnimationToPlay(lastName)
    if lastName == enum.unity.animation.die then
        self._controller:stop()
        self:handleDead()
    else
        self._controller:playAnimation(enum.unity.animation.idle)
    end
end

--处理死亡的回调
function Avatar:handleDead()
end

--处理关键帧动画,data包括这次动作的信息,比如攻击动作,攻击谁,是否特殊子弹,是否最后一击
function Avatar:handleKeyFrame(actName, keyName, data)
    --谁,拿什么武器,做什么动作,关键帧都有了
    -- print("handleKeyFrame ==> ",_controllerName,actName,keyName)
    -- if data then
    --     print(data.target)
    -- end
    --可以写些我自己的东西,发射子弹,刀光特效等
    --敌人的话,还需要发消息出去处理
end

function Avatar:pause()
    self._controller:pause()

    for tween,_ in pairs(self._tweens) do
        tween:Pause()
    end
end

function Avatar:resume()
    self._controller:resume()

    for tween,_ in pairs(self._tweens) do
        tween:Play()
    end
end

----unity的动画事件监听,可能不需要绑定,因为扩展性不强----
-- function Avatar:bindAnimationEventComponent(go)
--     if not self._components.animationEvent then
--         self._components.animationEvent = CS.Game.CAnimationEvent.Add(go, self)
--     else
--         self._components.animationEvent.enabled = true
--     end
-- end

-- function Avatar:unbindAnimationEventComponent(isRemove)
--     if self._components.animationEvent then
--         if isRemove then
--             Object.Destroy(self._components.animationEvent)
--             self._components.animationEvent = nil
--         else
--             self._components.animationEvent.enabled = false
--         end
--     end
-- end

-- function Avatar:OnAnimationEvent(keyName)
--     print("[Avatar][OnAnimationEvent] key name is "..keyName)
-- end

return Avatar
