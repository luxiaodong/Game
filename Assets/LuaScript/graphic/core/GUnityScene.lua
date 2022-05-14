
local GContainer = require("graphic.core.GContainer")
local GUnityScene = class("GUnityScene", GContainer)

function GUnityScene:ctor()
    GContainer.ctor(self)
    self._asyncOperation = nil --unity的AsyncOperation
    self._unitySceneName = ""
    --如果有多个,再扩展.
    self._sceneCamera = nil
end

function GUnityScene:init()
    GContainer.init(self)
end

--只做场景初始化,比例建立灯光,相机索引
function GUnityScene:initUnity()
    --这里调用激活是为了相机能用GameObject.Find找到
    local scene = SceneManagement.SceneManager.GetSceneByName(self._unitySceneName)
    SceneManagement.SceneManager.SetActiveScene(scene)
    SceneManagement.SceneManager.MoveGameObjectToScene(self._go, scene)
    self:initCamera()
end

function GUnityScene:exit()
    GContainer.exit(self) --释放子节点的ab包资源
    self._sceneCamera:exit()
    self:unloadUnityScene()
end

--调用changeScene时,传的是自己,如果有3d场景,会触发此函数
function GUnityScene:reload()
end

--相机相关操作
function GUnityScene:initCamera()
    self._sceneCamera = require("graphic.camera.SceneCamera").create()
    self._sceneCamera:init()
    self:addObject(self._sceneCamera)
end

function GUnityScene:cameraComponent()
    return self._sceneCamera:camera()
end

--调整相机,当场景有两个相机时候,需要删除一个相机
function GUnityScene:adjustCamera()
    self._sceneCamera:adjustCamera()
end

function GUnityScene:setCameraVisible(isShow)
    self._sceneCamera:setVisible(isShow)
end

function GUnityScene:addUiCameraToStack(uiCamera)
    self._sceneCamera:addUiCameraToStack(uiCamera)
end

--场景过渡
function GUnityScene:unitySceneName()
    return self._unitySceneName
end

function GUnityScene:progress()
    --分两块,加载Ab包,和加载scene,假设7/3开
    --或者改成加载资源和解压资源两块提示
    if self._asyncOperation then
        return 0.7 + 0.3*self._asyncOperation.progress
    end

    return 0.7*g_resource:loadSceneAssetBundleProgress(self._unitySceneName)
end

function GUnityScene:loadUnityScene(unitySceneName, isAsync)
    self._asyncOperation = nil
    self._unitySceneName = unitySceneName
    if isAsync == true then
        g_resource:loadSceneAssetBundle(unitySceneName, true, function()
            self._asyncOperation = SceneManagement.SceneManager.LoadSceneAsync(self._unitySceneName, SceneManagement.LoadSceneMode.Additive)
        end)
    else
        g_resource:loadSceneAssetBundle(unitySceneName)
        SceneManagement.SceneManager.LoadScene(unitySceneName, SceneManagement.LoadSceneMode.Additive)
    end
end

function GUnityScene:unloadUnityScene()
    SceneManagement.SceneManager.UnloadSceneAsync(self._unitySceneName)
    g_resource:unloadSceneAssetBundle(self._unitySceneName)
end

function GUnityScene:setActiveScene()
    local scene = SceneManagement.SceneManager.GetSceneByName(self._unitySceneName)
    SceneManagement.SceneManager.SetActiveScene(scene)
end

function GUnityScene:moveToDontDestroyScene()
    Object.DontDestroyOnLoad(self._go)
end

function GUnityScene:moveFromDontDestroyScene()
    local scene = SceneManagement.SceneManager.GetSceneByName(self._unitySceneName)
    SceneManagement.SceneManager.MoveGameObjectToScene(self._go, scene)
end

return GUnityScene
