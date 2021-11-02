local GObject = require("graphic.core.GObject")
local GCamera = class("GCamera", GObject)

-- ui相机用Gamma空间, 场景相机用Linear空间是否可行
function GCamera:ctor()
    self._testInstanceId = nil
    self._type = nil -- 相机类型 enum.camera.ui or enum.camera.main
    self._material = nil -- 后处理所用的材质    
    self._camera = nil -- 相机组件, self._camera.gameObject 相机, self._go --相机父节点
    GObject.ctor(self)
end

function GCamera:createGameObject()
    error("base class, must be inherit")
end

function GCamera:init()
    local t = {
        event.camera.bindRender,
        event.camera.unbindRender,
        event.camera.replaceShader,
    }

    self:registerEvents(t)
end

function GCamera:handleEvent(e)
    --一个类型也有可能多个相机,可能需要id判断
    if not self._type then return end
    if self._type ~= e.data.cameraType then
        return
    end

    if e.name == event.camera.bindRender then
        -- self._camera.depthTextureMode = DepthTextureMode.Depth
        self._camera.depthTextureMode = DepthTextureMode.DepthNormals
        self._previousViewProjectionMatrix = self._camera.projectionMatrix * self._camera.worldToCameraMatrix;
        self._material = e.data.material
        self:bindRender()
    elseif e.name == event.camera.unbindRender then
        self:unbindRender()
    elseif e.name == event.camera.replaceShader then
        if e.data.shader then
            self._camera.depthTextureMode = DepthTextureMode.Depth
            self._camera:SetReplacementShader(e.data.shader, e.data.tag or "")
        else
            self._camera:ResetReplacementShader()
        end
    end
end

function GCamera:camera()
    return self._camera
end

--使用相机组件不可见,可能有其他组件
function GCamera:setVisible(isShow)
    self._camera.enabled = isShow
end

function GCamera:isVisible()
    return self._camera.enabled
end

function GCamera:setClearFlag(flag)
    self._camera.clearFlags = flag
end

function GCamera:bindRender()
    if not self._components.render then
        self._components.render = CS.Game.CRender.Add(self._camera.gameObject, self)
    else
        self._components.render.enabled = true
    end
end

function GCamera:unbindRender(isRemove)
    if self._components.render then
        if isRemove then
            Object.Destroy(self._components.render)
            self._components.render = nil
        else
            self._components.render.enabled = false
        end
    end
end

------- unity回调函数 ----------
-- function GCamera:OnWillRenderObject()
--     print("1. GCamera:OnWillRenderObject")
-- end

-- function GCamera:OnPreCull()
--     print("2. GCamera:OnPreCull")
-- end

-- 给gameObject
-- function GCamera:OnBecameVisible()
--     print("3. GCamera:OnBecameVisible")
-- end

-- function GCamera:OnBecameInvisible()
--     print("4. GCamera:OnBecameInvisible")
-- end

-- function GCamera:OnPreRender()
--     print("5. GCamera:OnPreRender")
-- end

-- function GCamera:OnRenderObject()
--     print("6. GCamera:OnRenderObject")
-- end

-- function GCamera:OnPostRender()
--     print("7. GCamera:OnPostRender")
-- end

-- Unity引擎后处理性能优化方案解析
-- https://www.jianshu.com/p/8808664d87b9
function GCamera:OnRenderImage(src, dst)
    Graphics.Blit(src, dst, self._material)
    -- self:GaussianBlur(src, dst)
    -- self:MotionBlurWithDepthTexture(src,dst)
end

-- 测试函数
function GCamera:GaussianBlur(src, dst)
    local srcW = src.width
    local srcH = src.height
    local buffer = RenderTexture.GetTemporary(srcW, srcH, 0) --这个尺寸可以小一点
    Graphics.Blit(src, buffer, self._material, 0)
    Graphics.Blit(buffer, dst, self._material, 1)
    RenderTexture.ReleaseTemporary(buffer)
end

function GCamera:MotionBlurWithDepthTexture(src, dst)
    self._material:SetMatrix("_PreviousViewProjectionMatrix", self._previousViewProjectionMatrix)
    local currentViewProjectionMatrix = self._camera.projectionMatrix * self._camera.worldToCameraMatrix
    local currentViewProjectionInverseMatrix = currentViewProjectionMatrix.inverse
    self._material:SetMatrix("_CurrentViewProjectionInverseMatrix", currentViewProjectionInverseMatrix)
    self._previousViewProjectionMatrix = currentViewProjectionMatrix
    Graphics.Blit(src, dst, self._material)
end

return GCamera
