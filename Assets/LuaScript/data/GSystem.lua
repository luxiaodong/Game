
-- 存放整个游戏生命周期中的内存持久化数据
local GSystem = class("GSystem")

function GSystem:ctor()
    --版本信息
    self._version = {} --记录系统版本信息. version.lua
    self._device = {} --记录设备信息

    --全局变量,使用小心点,都是跨文件的
    self._stage = nil
    self._luaBehaviour = nil
end

function GSystem:restartGame()
    -- 重启lua虚拟机,c#那边的数据要做到重置.

    -- 断开网络
    network.disconnectHttp()
    g_tcpManager:clear()

    -- 停掉所有Update
    CS.Game.GLuaBehaviour.GetInstance():Stop()
    
    -- 停掉所有的DOTween回调
    tween.stop()

    -- 删掉所有的定时器
    g_tools:stopAllTimer()

    -- 删掉所有在c#注册的lua函数的UI按钮
    event.broadcast(event.csharp.removeInvoke)

    -- 删掉缓存池的GameObject
    -- 这个函数可以不掉,切场景时会回收
    g_objectPools:removeAllPrefab(true)

    -- 删掉多余的场景
    self._stage:doSomethingBeforeRestart()

    -- 最后删资源,因为是异步的,可能需要等待
    local function tryRestart()
        local isOk = g_resource:unloadAllAssetBundle(true)
        if isOk then
            CS.Game.GXLuaManager.GetInstance():Restart()
            -- local util = require("base.xlua.util")
            -- util.print_func_ref_by_csharp()
        else
            g_tools:delayCall(0.1, tryRestart)
        end
    end

    tryRestart()
end

function GSystem:currentSceneName()
	return self._stage._currentSceneName
end

function GSystem:currentUnitySceneName()
    return self._stage:currentUnitySceneName()
end

function GSystem:currentUnitySceneCamera()
    return self._stage:currentUnitySceneCamera()
end

function GSystem:setUnitySceneCameraVisible(isVisible)
    self._stage:setUnitySceneCameraVisible(isVisible)
end

function GSystem:isLayerExist(layerName)
    if self._stage:findLayer(layerName) then
        return true
    end

    return false
end

function GSystem:isLayerVisible(layerName)
	return self._stage:isLayerVisible(layerName)
end

function GSystem:showMaskOnButton(layerName, name, callback)
	return self._stage:showMaskOnButton(layerName, name, callback)
end

function GSystem:callLayerFunc(layerName, func, args)
	return self._stage:callLayerFunc(layerName, func, args)
end

function GSystem:callLayerGuide(layerName, callback, args)
    return self._stage:callLayerGuide(layerName, callback, args)
end

function GSystem:isConflictBetweenGuideAndPopup(layerName)
    return self._stage:isConflictBetweenGuideAndPopup(layerName)
end

return GSystem
