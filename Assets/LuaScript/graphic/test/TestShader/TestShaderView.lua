
local GObject = require("graphic.core.GObject")
local TestShaderView = class("TestShaderView", GObject)

function TestShaderView:ctor()
    GObject.ctor(self)
end

function TestShaderView:init()
    GObject.init(self)

    --地面
    -- local go = GameObject.CreatePrimitive(PrimitiveType.Quad)
    -- go.transform:SetParent(self._go.transform)
    -- go.transform.localEulerAngles = Vector3(90,0,0)
    -- go.transform.localScale = Vector3(10,10,10)

    local camera = g_system:currentUnitySceneCamera()
    camera.depthTextureMode = DepthTextureMode.Depth
    self:test()
    -- self:postProcessEffect()
    -- self:testReplacementShader()
end

function TestShaderView:test()
    local go = self:createSphere()
    local render = go:GetComponent(typeof(MeshRenderer))
    render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter1/Shield.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter0/FirstLighting.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter6/VertexLighting.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter6/PixedLighting.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter6/BlinPhongLighting.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter6/BuildinBlinPhongLighting.mat")
    
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter7/SingleTexture.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter7/NormalMapInTangentSpace.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter7/NormalMapInWorldSpace.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter7/RampTexture.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter8/AlphaTest.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter8/AlphaBlend.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter8/AlphaBlendZWrite.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter8/AlphaBlendDobuleSide.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter9/ForwardAdd.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter9/Shadow.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter9/BuildinShadow.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter9/AlphaTestWithShadow.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter10/Reflection.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter10/Refraction.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter10/Fresnel.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter10/GlassRefraction.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter11/ImageSequenceAnimation.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter11/ScrollingBackground.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter11/Water.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter11/Billboard.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter11/WaterWithShadow.mat")

    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter14/ToonShading.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter15/Dissolve.mat")
    -- render.material = self:loadAsset("Assets/Materials/Tutorials/Chapter15/WaterWave.mat")

end

function TestShaderView:postProcessEffect()
    -- local material = self:loadAsset("Assets/Materials/Test/gray.mat")
    -- local material = self:loadAsset("Assets/Materials/Tutorials/Chapter12/BrightnessSaturationAndContrast.mat")
    -- local material = self:loadAsset("Assets/Materials/Tutorials/Chapter12/EdgeDetection.mat")
    -- local material = self:loadAsset("Assets/Materials/Tutorials/Chapter12/GaussianBlur.mat")
    -- local material = self:loadAsset("Assets/Materials/Tutorials/Chapter12/Bloom.mat")
    -- local material = self:loadAsset("Assets/Materials/Tutorials/Chapter13/MotionBlurWithDepthTexture.mat")
    local material = self:loadAsset("Assets/Materials/Tutorials/Chapter13/EdgeDetectNormalsAndDepth.mat")

    event.broadcast(event.camera.bindRender, {material=material, cameraType=enum.camera.scene})

    -- g_tools:delayCall(5, function() 
    --     event.broadcast(event.camera.unbindRender, {cameraType=enum.camera.scene})
    -- end)
end

function TestShaderView:testReplacementShader()
    g_tools:delayCall(1, function()
        -- local shader = self:loadAsset("Assets/Scenes/TestScene/Shader/ZDepth.shader")
        local shader = self:loadAsset("Assets/Shaders/Tutorials/Chapter13/DepthAndNormal.shader")
        event.broadcast(event.camera.replaceShader, {shader=shader, cameraType=enum.camera.scene})
    end)

    -- g_tools:delayCall(5, function()
    --     event.broadcast(event.camera.replaceShader, {cameraType=enum.camera.scene})
    -- end)
end

function TestShaderView:createSphere()
    local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Sphere.prefab")
    -- local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Plane.prefab")
    -- local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Cube.prefab")
    -- local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Suzanne.prefab")

    local go = Object.Instantiate(prefab)
    go.transform:SetParent(self._go.transform)
    go.transform.position = Vector3(0,0,0)
    go.transform.localScale = Vector3(9,9,9)

    -- local moveCmp = require("graphic.component.CMove").create()
    -- moveCmp:init(go,{moveSpeed=2})

    -- go.transform:DORotate(Vector3(0, 180, 0), 5):SetEase(DoTween.Ease.Linear):SetLoops(-1, DoTween.LoopType.Incremental)
    return go
end

return TestShaderView
