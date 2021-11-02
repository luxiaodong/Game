
local GContainer = require("graphic.core.GContainer")
local GStage = class("GStage", GContainer)

local sceneConfig={
    [enum.ui.scene.login] = "graphic.scene.LoginScene",
    [enum.ui.scene.battle] = "graphic.scene.BattleScene",
    [enum.ui.scene.world] = "graphic.scene.WorldScene",
    [enum.ui.scene.versionUpdate] = "graphic.scene.VersionUpdateScene",
    [enum.ui.scene.test] = "graphic.test.TestScene",
}

function GStage:ctor()
    GContainer.ctor(self)
    local go = GameObject.Find("/Canvas")
    self._go.transform:SetParent(go.transform, false)
end

function GStage:createGameObject()
    local name = getmetatable(self).__className
    self._go = g_2dTools:createGameObject(name)
end

function GStage:init()
    GContainer.init(self)
	local t = {
        event.ui.changeScene,
    }
    self:registerEvents(t)
    self._uiCamera = require("graphic.camera.UiCamera").create()
    self._uiCamera:init()
    -- canvas是否可以嵌套,测试
    -- 加载场景时,可以预加载ab包

    self._scenes = self._layers
    self._currentSceneName = ""
    self._unitySceneManager = require("graphic.core.GUnitySceneManager").create()
    self._unitySceneManager:init()

    self:selectFirstSceneAndEnter()
end

function GStage:selectFirstSceneAndEnter()
    -- 主要确定是否需要动更, 是否有sdk
    if config.isOutNet
    and constant.launch.scene == enum.ui.scene.login
    and not CS.Game.GResource:GetInstance():IsEditorMode()
    and CS.Game.GResource:GetInstance():IsAbMode() then
        nativeBridge.init()
        sdk.init(function(result)
            if result == enum.sdk.result.success then 
                self:enterFirstScene(enum.ui.scene.versionUpdate)
            else
                self:enterFirstScene(enum.ui.scene.login)
            end
        end)
    else
        self:enterFirstScene(constant.launch.scene)
    end
end

function GStage:enterFirstScene(name)
	g_login = require("data.GLogin").create()
    -- g_player = require("data.GPlayer").create()
    -- g_battle = require("data.GBattle").create()

	g_language = require("graphic.resource.GLanguage").create()
    g_resource = require("graphic.resource.GResource").create() --这个时机有点乱
    g_objectPools = require("graphic.resource.GObjectPools").create() --这个时机有点乱

	-- 加载一些必要场景
	local scene = require("graphic.scene.DockScene").create()
	self:addScene(scene)
    scene:init()
    self._scenes[enum.ui.scene.dock] = scene

    local scene = require("graphic.scene.PopupScene").create()
    self:addScene(scene)
	scene:init()
    self._scenes[enum.ui.scene.popup] = scene

	-- 含义不是很明确. 名字没取好, 管理TouchLayer (省电模式), EffectLayer, NetworkLayer (网络层, 处理断线重连, 网络消息回调等)
	local scene = require("graphic.scene.TopScene").create()
	self:addScene(scene)
    scene:init()
    self._scenes[enum.ui.scene.top] = scene

    self:changeScene({name=name})
end

function GStage:handleEvent(e)
    if e.name == event.ui.changeScene then
        if e.data.transition then --决定走loading还是走过场动画
            if e.data.transition == enum.ui.transition.loading then
                self:changeScene(e.data, true)
            else
                event.broadcast(event.ui.transition, {close=e.data.transition, callback=function()
                    self:changeScene(e.data, false)
                end})
            end
        else
            self:changeScene(e.data, false)
        end
    end
end

function GStage:changeScene(data, hasProgress)
	print("changeScene, prev:", self._currentSceneName)
	print("changeScene, next:", data.name)

	-- 1.相等情况下不处理
	if data.name == self._currentSceneName then
        if data.isForce then --强制刷新,删掉再加载, 否则走reload场景自己调整
        else
            self._scenes[self._currentSceneName]:reload()
            self._unitySceneManager:reload()
            
            --往下通知,有没有
            if data.transition then
                if data.transition ~= enum.ui.transition.loading then
                    event.broadcast(event.ui.transition, {open=data.transition})
                end
            end

            return 
        end
	end

	-- 2.清除当前的场景
	if self._scenes[self._currentSceneName] then
        self._scenes[self._currentSceneName]:exit()
        self._scenes[self._currentSceneName] = nil
	end

    self._currentSceneName = ""
    collectgarbage("collect")
    print("[GStage][changeScene] lua memory use:"..string.format("%.2f",collectgarbage("count")).."K")

    -- 3.载入,但没有初始化
    local scene = require(sceneConfig[data.name]).create()
    self:addScene(scene)
    scene:setZOrder(0) --SetSiblingIndex
    self._scenes[data.name] = scene

    local function unitySceneLoaded()
        -- 5.真正初始化
        self._currentSceneName = data.name
        if self._unitySceneManager:hasUnityScene(data.name) then
            self._uiCamera:setCameraRenderOverlay(true)
            self._unitySceneManager:currentUnityScene():addUiCameraToStack( self._uiCamera:camera() )
            self._unitySceneManager:setActiveScene(data.unitySceneName)
            self._unitySceneManager:initScene()
        else
            self._uiCamera:setCameraRenderOverlay(false)
        end
        
        self._scenes[self._currentSceneName]:init()
        self._scenes[enum.ui.scene.dock]:changeScene(self._currentSceneName)
        --往下通知,其他初始化,--比如有需要清掉弹框
        --self._popupScene:changeScene(data.name)

        if data.transition then
            if data.transition ~= enum.ui.transition.loading then
                event.broadcast(event.ui.transition, {open=data.transition})
            end
        end
    end

    -- 4.如果有3d unity场景,加载
    self._unitySceneManager:changeUnityScene(data.name, unitySceneLoaded, hasProgress)
end

function GStage:addScene(scene, isWorldPositionStays)
    self:addObject(scene, isWorldPositionStays)
end

--系统的辅助函数---------------------------------
function GStage:currentUnitySceneName()
    return self._unitySceneManager._currentUnitySceneName
end

function GStage:currentUnitySceneCamera()
    local currentUnityScene = self._unitySceneManager:currentUnityScene()
    if currentUnityScene then
        return currentUnityScene:cameraComponent()
    end
end

function GStage:doSomethingBeforeRestart()
    self._unitySceneManager:unloadUnityScenes()
    self._unitySceneManager:exit()
    self:exit()
end

--有3D场景的情况下,对3D场景的摄像机进行开关.
function GStage:setUnitySceneCameraVisible(isVisible)
    local unityScene = self._unitySceneManager:currentUnityScene()
    if unityScene then
        --关掉场景相机时,让UI相机改成Base模式.
        unityScene:setCameraVisible(isVisible)
        self._uiCamera:setCameraRenderOverlay(isVisible)
    end
end

function GStage:findLayer(layerName)
    local pList = layerChart.findParentPath(layerName)
    if #pList > 0 then
        local container = self
        for i,name in ipairs(pList) do
            local layer = container:tryGetLayer(name)
            if layer then
                if i == #pList then
                    return layer
                else
                    container = layer
                end
            else
                return false
            end
        end
    end
end

function GStage:isLayerVisible(layerName)
    local pList = layerChart.findParentPath(layerName)
    if #pList > 0 then
        local container = self
        for i,name in ipairs(pList) do
            local layer = container:tryGetLayer(name)
            if layer then
                if i == #pList then
                    return layer:isVisible()
                else
                    if layer:isVisible() then
                        container = layer
                    else
                        return false
                    end
                end
            else
                return false
            end
        end
    end

    return false
end

function GStage:showMaskOnButton(layerName, btnName, callback)
    local layer = self:findLayer(layerName)
    if layer then
        layer:showMaskOnButton(btnName, callback)
        return true
    end

    return false
end

function GStage:callLayerGuide(layerName, callback, args)
    local layer = self:findLayer(layerName)
    if layer then
        layer:handleGuide(args, callback)
        return true
    end

    return false
end

function GStage:callLayerFunc(layerName, func, args)
    local layer = self:findLayer(layerName)
    if layer then
        if layer[func] then
            layer[func](layer, args)
        else
            print("[GStage:callLayerFunc] function not exist. ",layerName, func)
        end

        return true
    end

    return false
end

function GStage:isConflictBetweenGuideAndPopup(layerName)
    return self._scenes[enum.ui.scene.popup]:isConflictWithGuide(layerName)
end

return GStage
