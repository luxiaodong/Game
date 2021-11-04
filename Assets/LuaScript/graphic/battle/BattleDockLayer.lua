
local GLayer = require("graphic.core.GLayer")
local BattleDockLayer = class("BattleDockLayer", GLayer)

function BattleDockLayer:ctor()
    GLayer.ctor(self)
end

function BattleDockLayer:init()
    GLayer.init(self)

    -- self:bindTouchHandler()
    -- self:testSpine()

    -- local imageGo, image = g_2dTools:createImage("Textures/test/alien.png")
    -- imageGo.transform:SetParent(self._go.transform, false)
    -- local shader = self:loadAsset("Shaders/hue.shader")
    -- image.material = Material(shader)

    -- for i=1,100 do
    --     g_tools:delayCall(i, function() 
    --         local angle = math.random(0,360)
    --         local angle = 60*i;
    --         local matrix = self:constructionMatrix(angle)
    --         image.material:SetMatrix("_hueMatrix", matrix)
    --     end)
    -- end

    -- local prefab = self:loadAsset(resAlias.prefab.particles.fire)
    -- local go = Object.Instantiate(prefab)
    -- CS.Game.GObjectPools.GetInstance():AddPrefabToPools(prefab)
    -- self._firePrefab = prefab
    -- self._count = 0
end

function BattleDockLayer:testSpine()
    local spineBoy = require("graphic.spine.spineBoy").create()
    spineBoy:setAssetGroup( self:assetGroup() )
    self:addObject(spineBoy)
    spineBoy:init()
end


function BattleDockLayer:OnPointerClick(data)

    -- print("----BattleDockLayer:OnPointerClick------")

    -- self._count = self._count + 1

    -- if self._count < 2 then
        -- event.broadcast(event.battle.fire, {prefab=self._firePrefab})
    -- elseif self._count == 2 then
    --     CS.Game.GObjectPools.GetInstance():RemovePrefabFromPools(self._firePrefab)
    -- else
    --     print("over")
    -- end

    -- if not self._canClickAgain then
    --     self._canClickAgain = true
    --     self:testShader()    
    -- end

    -- if not self._sceneIndex then
    --     self._sceneIndex = 2
    -- else
    --     if self._sceneIndex == 1 then
    --         self._sceneIndex = 2
    --     else
    --         self._sceneIndex = 1
    --     end
    -- end
end

function BattleDockLayer:testShader()
    local shader = self:loadAsset("Sandbox/Shaders/mosaic2.shader")
    local material = Material(shader)
    material:SetInt("_Width", Screen.width)
    material:SetInt("_Height", Screen.height)
    material:SetInt("_Offset", Time.timeSinceLevelLoad)
    
    event.broadcast(event.camera.bindRender, {material=material, cameraType=enum.camera.ui})

    g_tools:delayCall(math.pi/2, function()
        if self._sceneIndex == 2 then
            event.broadcast(event.ui.changeUnityScene, {name = enum.unity.scene.battle.level2})
        else
            event.broadcast(event.ui.changeUnityScene, {name = enum.unity.scene.battle.level1})
        end
        --event.broadcast(event.uiCamera.unbindRender)
    end)

    g_tools:delayCall(math.pi, function()
        self._canClickAgain = false
        event.broadcast(event.camera.unbindRender, {cameraType=enum.camera.ui})
    end)
end

function BattleDockLayer:test()
    -- 
end

function BattleDockLayer:constructionMatrix(angle)
    local alpha = -45;
    local sita = math.atan(1/1.414)/math.pi*180;
    local q1 = Quaternion.AngleAxis(alpha, Vector3(1,0,0));
    local q2 = Quaternion.AngleAxis(sita, Vector3(0,0,1));
    local q3 = Quaternion.AngleAxis(angle, Vector3(0,1,0));
    local q4 = Quaternion.AngleAxis(-sita, Vector3(0,0,1));
    local q5 = Quaternion.AngleAxis(-alpha, Vector3(1,0,0));
    local q = q5*q4*q3*q2*q1;
    return Matrix4x4.Rotate(q);
end

return BattleDockLayer
