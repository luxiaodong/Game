
local CombineMeshesRender = class("CombineMeshesRender")

--换装
function CombineMeshesRender:ctor()
    self._avatarGo = nil
    self._bones = nil --List
    self._bodyparts = {} --name, go
    self._hasMainSmr = false
    self._bonePath = nil
    self._isCombine = false --相同材质才设置成true, 否则只合并meshes
end

--能找到骨骼数据的path,可能是rootBone,可能是带有smr的go
function CombineMeshesRender:init(go, isCombine, bonePath)
    self._avatarGo = go
    self._isCombine = isCombine
    self._bonePath = bonePath
end

function CombineMeshesRender:changeAllTogether(list)
    local smrList = CS.System.Collections.Generic.List(SkinnedMeshRenderer)()
    local tempGos = {}
    for i, v in ipairs(list) do
        local go = Object.Instantiate(v.prefab)
        local key = self:findSmrName(v.path)
        local smrGo = go.transform:Find(key).gameObject
        local smr = smrGo:GetComponent(typeof(SkinnedMeshRenderer))
        smrList:Add(smr)
        table.insert(tempGos, go)
    end

    local bones = self:bones()
    local boneList = CS.System.Collections.Generic.List(Transform)()
    local materialList = CS.System.Collections.Generic.List(Material)()
    -- local meshList = CS.System.Collections.Generic.List(CombineInstance)()
    local meshTable = {}

    --合并mesh
    for i=1,smrList.Count do
        local smr = smrList[i-1]
        for i=1, smr.sharedMesh.subMeshCount do
            local ci = CombineInstance()
            ci.mesh = smr.sharedMesh
            ci.subMeshIndex = i-1
            -- meshList:Add(ci)
            table.insert(meshTable, ci)
        end

        materialList:AddRange(smr.sharedMaterials)

        if self._hasMainSmr then
            boneList:AddRange(bones)
        else
            for j=1, smr.bones.Length do
                for k=1, bones.Length do
                    if smr.bones[j-1].name == bones[k-1].name then
                        boneList:Add(bones[k-1])
                    end
                end
            end
        end
    end

    --合并texture
    local oldUvList = nil
    local newMaterial = nil
    if self._isCombine then
        --2维列表
        -- oldUvList = CS.System.Collections.Generic.List(CS.System.Collections.Generic.List(Vector2))()
        oldUvList = {}
        newMaterial = Material( Shader.Find("Universal Render Pipeline/Simple Lit") ) --这个Shader无法动更
        local textureList = CS.System.Collections.Generic.List(Texture2D)()
        for i=1, materialList.Count do
            textureList:Add(materialList[i-1]:GetTexture("_MainTex"))
        end

        local newTexture = Texture2D(512, 512, TextureFormat.RGBA32, true)
        local newTextureUV = newTexture:PackTextures(textureList:ToArray(), 0)
        newMaterial.mainTexture = newTexture

        -- for i=1, meshList.Count do
        for i=1, #meshTable do
            local uvb = CS.System.Collections.Generic.List(Vector2)()
            -- local uvs = meshList[i-1].mesh.uv
            local uvs = meshTable[i].mesh.uv
            for k=1, uvs.Length do
                local uv = Vector2((uvs[k-1].x * newTextureUV[i-1].width) + newTextureUV[i-1].x, (uvs[k-1].y * newTextureUV[i-1].height) + newTextureUV[i-1].y)
                uvb:Add(uv)
            end
            table.insert(oldUvList, uvs)
            -- meshList[i-1].mesh.uv = uvb:ToArray()
            meshTable[i].mesh.uv = uvb:ToArray()
        end
    end

    local oldSkin = self._avatarGo:GetComponent(typeof(SkinnedMeshRenderer))
    if oldSkin and not oldSkin:IsNull() then
        Object.DestroyImmediate(oldSkin)
    end
    
    local newSkin = self._avatarGo:AddComponent(typeof(SkinnedMeshRenderer))
    newSkin.sharedMesh = Mesh()
    -- newSkin.sharedMesh:CombineMeshes(meshList:ToArray(), self._isCombine, false)
    newSkin.sharedMesh:CombineMeshes(meshTable, self._isCombine, false)
    newSkin.bones = boneList:ToArray()
    newSkin.rootBone = self._avatarGo.transform:Find(self._bonePath)

    if self._isCombine then
        newSkin.material = newMaterial
        -- for i=1, meshList.Count do
        --     meshList[i-1].mesh.uv = oldUvList[i]
        -- end
        for i=1, #meshTable do
            meshTable[i].mesh.uv = oldUvList[i]
        end
    else
        newSkin.materials = materialList:ToArray()
    end

    --删掉加载的gameObject
    for _, go in ipairs(tempGos) do
        Object.Destroy(go)
    end
end

--换某个部位
function CombineMeshesRender:changeSingle(bodypart, prefab, path)
    local go = Object.Instantiate(prefab)
    local key = self:findSmrName(path)
    local newGo = go.transform:Find(key).gameObject
    newGo.transform:SetParent(self._avatarGo.transform, false)
    newGo.name = bodypart

    local smr = newGo:GetComponent(typeof(SkinnedMeshRenderer))
    local bones = self:bones()

    --获得骨骼节点
    if self._hasMainSmr then
        smr.bones = bones
    else
        -- local bones = {}
        local boneList = CS.System.Collections.Generic.List(Transform)()
        for j=1, smr.bones.Length do
            for k=1, bones.Length do
                if smr.bones[j-1].name == bones[k-1].name then
                    boneList:Add(bones[k-1])
                    -- table.insert(bones, bones[k-1])
                end
            end
        end
        smr.bones = boneList:ToArray()
        -- smr.bones = bones
    end

    Object.Destroy(go)

    local oldGo = self._bodyparts[bodypart]
    if oldGo then
        Object.Destroy(oldGo)        
    end

    self._bodyparts[bodypart] = newGo
end

--有smr就用smr的数据,没有就遍历transform
function CombineMeshesRender:bones()
    if self._bones then return self._bones end

    if self._hasMainSmr then
        local go = self._avatarGo.transform:Find(self._bonePath).gameObject
        local smr = go:GetComponent(typeof(SkinnedMeshRenderer))
        self._bones = smr.bones
    else
        local rootBone = self._avatarGo.transform:Find(self._bonePath).gameObject
        local cmps = rootBone:GetComponentsInChildren(typeof(Transform))
        self._bones = cmps

        -- Component 不知道怎么转成 Transform 数组, 所以这里绕了下
        -- local list = CS.System.Collections.Generic.List(Transform)()
        -- for i=1,cmps.Length do
        --     local component = cmps[i-1]
        --     list:Add( component.transform )
        -- end
        -- self._bones = list:ToArray()
    end

    return self._bones
end

function CombineMeshesRender:findSmrName(path)
    local temp = string.replace(path, "/", ".")
    local list = string.split(temp, ".")
    return list[#list-1]
end

-- materials材质数据，meshes数据，bones
-- function CustomizedAvatar

return CombineMeshesRender
