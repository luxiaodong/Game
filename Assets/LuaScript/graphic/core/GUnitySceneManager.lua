
local GObject = require("graphic.core.GObject")
local GUnitySceneManager = class("GUnitySceneManager", GObject)

local unitySceneConfig = {
    [enum.unity.scene.battle] = "graphic.scene.BattleUnityScene",
    [enum.unity.scene.world] = "graphic.scene.WorldUnityScene",
    [enum.unity.scene.test] = "graphic.test.TestUnityScene",
}

local sceneConfig={
    [enum.ui.scene.battle] = {
        enum.unity.scene.battle,
        ["isAsync"] = true --有这个字段表示场景异步加载
    },
    [enum.ui.scene.world] = {
        enum.unity.scene.world,
    },
    [enum.ui.scene.test] = {
        enum.unity.scene.test,
    }
}

function GUnitySceneManager:ctor()
    GObject.ctor(self)
    Object.DontDestroyOnLoad(self._go)

    self._currentUnitySceneName = "" --激活的场景名字
    self._unityScenes = {} --unitySceneName, class
    self._callback = nil

    self._asyncTimer = nil --定时器
    self._loadingScenes = {} --unitySceneName, class
    self._loadingDoneCount = 0 --加载完的个数
    self._loadingTotalCount = 0 --总共加载的个数
end

function GUnitySceneManager:init()
    local t = {
        event.ui.replaceUnityScene,
        -- event.ui.appendUnityScene,
        -- event.ui.removeUnityScene,
    }
    self:registerEvents(t)
end

function GUnitySceneManager:reload()
    local currentUnityScene = self:currentUnityScene()
    if currentUnityScene then
        currentUnityScene:reload()
    end
end

-- 这个函数是逻辑的初始化
function GUnitySceneManager:initScene()
    self:currentUnityScene():init()
end

--这个逻辑场景里是否带有unity场景
--参数不是unitySceneName,而是sceneName
function GUnitySceneManager:hasUnityScene(sceneName)
    if sceneConfig[sceneName] then 
        return true
    end
    return false
end

function GUnitySceneManager:currentUnityScene()
    return self._unityScenes[self._currentUnitySceneName]
end

function GUnitySceneManager:setActiveScene(unitySceneName)
    --各个场景初始化时打乱了激活的是谁,现在重新指定
    if unitySceneName then
        local unityScene = self._unityScenes[unitySceneName]
        if unityScene then
            unityScene:setActiveScene()
            self._currentUnitySceneName = unitySceneName
        else
            error(string.format("unitySceneName %s is not exist.",unitySceneName))
        end
    else
        if self._currentUnitySceneName ~= "" then --当前的还在
            local unityScene = self:currentUnityScene()
            unityScene:setActiveScene()
        else
            --看看现在谁是激活的
            local scene = SceneManagement.SceneManager.GetActiveScene()
            local name = scene.name

            if self._unityScenes[name] then
                self._currentUnitySceneName = unitySceneName
            else
                --可能是ui场景在激活状态
                -- for name, _ in pairs(self._unityScenes) do --随便一个,不合理
                --     unitySceneName = name
                --     self._currentUnitySceneName = unitySceneName
                --     break
                -- end
            end
        end
    end

    if self._currentUnitySceneName ~= "" then
        for unitySceneName, unityScene in pairs(self._unityScenes) do
            unityScene:setCameraVisible(self._currentUnitySceneName == unitySceneName)
        end
    end
end

function GUnitySceneManager:handleEvent(e)
    if e.name == event.ui.replaceUnityScene then
        if e.data.transition then --仿照stage写法
            if e.data.transition == enum.ui.transition.loading then
                self:replaceUnityScene(e.data, true)
            else
                event.broadcast(event.ui.transition, {close=e.data.transition, callback=function()
                    self:replaceUnityScene(e.data, false)
                end})
            end
        else
            self:replaceUnityScene(e.data, false)
        end
    -- elseif e.name == event.ui.appendUnityScene then
    -- elseif e.name == event.ui.removeUnityScene then
    end
end

--场景替换,用于关卡切换,保留数据
--这个数据不经过 self._loadingScenes
function GUnitySceneManager:replaceUnityScene(data, hasProgress)
    if data.oldSceneName == nil then
        data.oldSceneName = self._currentUnitySceneName
        data.newSceneName = data.newSceneName or data.unitySceneName
    end

    if data.oldSceneName == data.newSceneName then
        data.callback(false)
        return
    end

    if unitySceneConfig[data.oldSceneName] ~= unitySceneConfig[data.newSceneName] then
        data.callback(false)
        return
    end

    local oldUnityScene = self._unityScenes[data.oldSceneName]
    local newUnityScene = self._unityScenes[data.newSceneName]

    --老的有,新的没有
    if oldUnityScene and not newUnityScene then
        if not data.isDestroyGo then --不销毁意味着保留到新场景
            oldUnityScene:moveToDontDestroyScene()
        end

        oldUnityScene:unloadUnityScene() --比 self:unloadUnityScene 少删一个self._go
        newUnityScene = oldUnityScene

        self._callback = function()
            newUnityScene:setActiveScene()
            
            if not data.isDestroyGo then --不销毁意味着需要恢复
                newUnityScene:moveFromDontDestroyScene()
                newUnityScene:adjustCamera()
            else 
                newUnityScene:initUnity()
            end

            self._currentUnitySceneName = data.newSceneName
            self._unityScenes[data.oldSceneName] = nil
            self._unityScenes[data.newSceneName] = newUnityScene

            if data.transition then
                if data.transition ~= enum.ui.transition.loading then
                    event.broadcast(event.ui.transition, {open=data.transition})
                end
            end

            data.callback(true)
        end
    
        self:bindSceneLoad()
        self._loadingDoneCount = 0
        self._loadingTotalCount = 1
        newUnityScene:loadUnityScene(data.newSceneName, data.isAsync)

        local function progressUpdate()
            local p = newUnityScene:progress()
            event.broadcast(event.ui.loading, {percent=p})
        end

        self:progressBegin(data.isAsync and hasProgress, progressUpdate)
    else
        data.callback(false)
        return
    end
end

function GUnitySceneManager:changeUnityScene(sceneName, callback, hasProgress)
    --1. 能否找到场景配置文件
    local t = sceneConfig[sceneName]
    if not t then
        callback()
        return
    end

    --2. 删除要卸载的场景
    for unitySceneName, unityScene in pairs(self._unityScenes) do
        if not t[unitySceneName] then
            self:unloadUnityScene(unitySceneName)
        end
    end

    self._callback = callback
    local isAsync = t.isAsync
    t.isAsync = nil

    self._loadingScenes = {}
    self._loadingTotalCount = 0
    for _, unitySceneName in ipairs(t) do
        if not self._unityScenes[unitySceneName] then --不在才加载
            --因为unity异步释放,所以当前激活的可能是个准备删除的场景
            local className = unitySceneConfig[unitySceneName]
            local scene = require(className).create()
            scene:moveToDontDestroyScene() --initUnity时会移回来
            self._loadingScenes[unitySceneName] = scene
            self._loadingTotalCount = self._loadingTotalCount + 1
        end
    end

    --因为unity同步加载也需要隔一帧才加载完.所以全部绑定回调
    self:bindSceneLoad()
    self._loadingDoneCount = 0
    for unitySceneName, unityScene in pairs(self._loadingScenes) do
        unityScene:loadUnityScene(unitySceneName, isAsync)
    end

    self:progressBegin(isAsync and hasProgress, handler(self, self.progressUpdate) )
    t.isAsync = isAsync
end

function GUnitySceneManager:unitySceneLoaded()
    self._loadingDoneCount = self._loadingDoneCount + 1

    --全部加载完成
    if self._loadingDoneCount == self._loadingTotalCount then
        self:progressEnd()

        for unitySceneName, unityScene in pairs(self._loadingScenes) do
            unityScene:initUnity() --新加载的场景有一次初始化
            self._unityScenes[unitySceneName] = unityScene
            self._currentUnitySceneName = unitySceneName
        end

        self._loadingScenes = {}
        self:unbindSceneLoad(true)
        self._callback()
    end
end

--进度条更新
function GUnitySceneManager:progressBegin(isShow, callback)
    if isShow == true then
        if self._asyncTimer == nil then
            self._asyncTimer = g_tools:frameCall(callback)
        end
    end
end

function GUnitySceneManager:progressEnd()
    if self._asyncTimer then
        event.broadcast(event.ui.loading, {percent=1})
        g_tools:stopLoopCall(self._asyncTimer)
        self._asyncTimer = nil
    end
end

function GUnitySceneManager:progressUpdate()
    local p = 0
    for _, unityScene in pairs(self._loadingScenes) do
        p = p + unityScene:progress()/self._loadingTotalCount
    end

    event.broadcast(event.ui.loading, {percent=p})
end

--绑定unity回调
function GUnitySceneManager:bindSceneLoad()
    if not self._components.sceneLoad then
        self._components.sceneLoad = CS.Game.CSceneLoad.Add(self._go, self)
    else
        self._components.sceneLoad.enabled = true    
    end
end

function GUnitySceneManager:unbindSceneLoad(isRemove)
   if self._components.sceneLoad then
        if isRemove then
            Object.Destroy(self._components.sceneLoad)
            self._components.sceneLoad = nil
        else
            self._components.sceneLoad.enabled = false
        end        
    end 
end

function GUnitySceneManager:OnSceneLoaded(scene, mode)
    print("GUnitySceneManager:OnSceneLoaded ", scene.name)
    self:unitySceneLoaded()
end

function GUnitySceneManager:OnSceneUnloaded(scene)
    print("GUnitySceneManager:OnSceneUnloaded ",scene.name)
end

--销毁场景
function GUnitySceneManager:unloadUnityScene(unitySceneName)
    local unityScene = self._unityScenes[unitySceneName]
    if unityScene then
        unityScene:exit()
        self._unityScenes[unitySceneName] = nil

        if unitySceneName == self._currentUnitySceneName then
            self._currentUnitySceneName = ""
        end
    end
end

--卸载所有的unityScenes
function GUnitySceneManager:unloadUnityScenes()
    for _, unityScene in pairs(self._unityScenes) do
        unityScene:exit()
    end

    self._unityScenes = {}
    self._currentUnitySceneName = ""
end

return GUnitySceneManager
