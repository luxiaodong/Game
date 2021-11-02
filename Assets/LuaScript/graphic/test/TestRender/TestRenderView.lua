
local GObject = require("graphic.core.GObject")
local TestRenderView = class("TestRenderView", GObject)

function TestRenderView:ctor()
    GObject.ctor(self)
end

function TestRenderView:init()
    GObject.init(self)
    -- self:test()

    self:testDrawMeshInstanced()
end

function TestRenderView:testBlockAndInstance()
	local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Sphere.prefab")
	local material = self:loadAsset("Assets/Materials/Tutorials/RenderPipeline/FirstRP_Instance.mat")
	local go = Object.Instantiate(prefab)
    go.transform:SetParent(self._go.transform)
    go.transform.position = Vector3(math.random()*5, math.random()*5, math.random()*5)

    local baseColorId = Shader.PropertyToID("_BaseColor")
    local block = MaterialPropertyBlock()
    block:SetColor(baseColorId, Color(math.random(),math.random(),math.random(),1))

    go:GetComponent(typeof(Renderer)).material = material
    go:GetComponent(typeof(Renderer)):SetPropertyBlock(block)
end

function TestRenderView:testDrawMeshInstanced()
    local prefab = self:loadAsset("Assets/Prefabs/Tutorials/Sphere.prefab")
    local mesh = prefab:GetComponent(typeof(MeshFilter)).sharedMesh
    local material = self:loadAsset("Assets/Materials/Tutorials/RenderPipeline/FirstRP_Instance.mat")
    local matrices = {}
    local baseColors = {}
    local count = 512

    math.randomseed(1)

    for i=1,count do
        local m = Matrix4x4.TRS(Vector3(math.random(),math.random(),math.random()) * 5,
                Quaternion.Euler(0,0,0),
                Vector3.one *  math.random(100, 300)/200)

        table.insert(matrices, m)
        table.insert(baseColors, Vector4(math.random(),math.random(),math.random(),1) )
    end

    local baseColorId = Shader.PropertyToID("_BaseColor")
    local block = MaterialPropertyBlock()
    block:SetVectorArray(baseColorId, baseColors)

    Graphics.DrawMeshInstanced(mesh, 0, material, matrices, count, block)
end

function TestRenderView:OnUpdate()
    -- self:testBlockAndInstance()
    self:testDrawMeshInstanced()
end

return TestRenderView
