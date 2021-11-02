local TestLayer = require("graphic.test.TestLayer")
local TestAvatarLayer = class("TestAvatarLayer", TestLayer)

function TestAvatarLayer:ctor()
    TestLayer.ctor(self)
end

function TestAvatarLayer:init()
    TestLayer.init(self)
    self:customLayout()
end

function TestAvatarLayer:createAvatar()
    event.broadcast("event.test.grunt", {func="create"})
end

function TestAvatarLayer:playAnimation()
    event.broadcast("event.test.grunt", {func="play"})
end

function TestAvatarLayer:playMove()
   event.broadcast("event.test.grunt", {func="move"})
end

function TestAvatarLayer:pause()
    event.broadcast("event.test.grunt", {func="pause"})
end

function TestAvatarLayer:resume()
    event.broadcast("event.test.grunt", {func="resume"})
end

function TestAvatarLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Create", Vector2(-400,100), Vector2(122,62), handler(self, self.createAvatar))
    self:createButtonWithText(self._go.transform, "Play", Vector2(-200,100), Vector2(122,62), handler(self, self.playAnimation))
    self:createButtonWithText(self._go.transform, "Move", Vector2(0,100), Vector2(122,62), handler(self, self.playMove))
    self:createButtonWithText(self._go.transform, "Pause", Vector2(200,100), Vector2(122,62), handler(self, self.pause))
    self:createButtonWithText(self._go.transform, "Resume", Vector2(400,100), Vector2(122,62), handler(self, self.resume))
end

-- function TestAvatarLayer:init()
--     GObject.init(self)
--     -- self:testGpuSkinning()
--     -- self:testAvatar()
--     -- self:testAvatarController()

--     local t = {
--         event.battle.fire,
--     }
--     self:registerEvents(t)
-- end

-- function TestAvatarLayer:exit()
--     if self._orc then
--         self._orc:exit()
--     end
--     GObject.exit(self)
-- end

-- function TestAvatarLayer:handleEvent(e)
--     if e.name == event.battle.fire then
--         local go = CS.Game.GObjectPools.GetInstance():Instantiate(e.data.prefab)
--         go.transform:SetParent(self._go.transform, false)
--         g_tools:delayCall(5, function() CS.Game.GObjectPools.GetInstance():Destroy(go) end)
--     end
-- end

-- function TestAvatarLayer:testAvatar()
--     local orc = require("graphic.battle.Orc").create()
--     orc:setAssetGroup( self:assetGroup() )
--     self:addObject(orc)
--     orc:init()

--     g_tools:delayCall(1, function()
--         orc:playAnimation(enum.unity.animation.attack, function() print("orc attack end") end, 0.1)
--     end)
-- end

-- function TestAvatarLayer:testAvatarController()
--     local orc = require("graphic.battle.Orc").create()
--     orc:setAssetGroup( self:assetGroup() )
--     self:addObject(orc)
--     orc:init()
--     orc:setPosition(Vector3(2,0,2))

--     local orc1 = require("graphic.battle.Orc").create()
--     self:addObject(orc1)
--     orc1:init()

--     local prefab = self:loadAsset(resAlias.prefab.particles.fire)
--     local fire1 = Object.Instantiate(prefab)
--     fire1.transform:SetParent(orc1._go.transform, false)

--     local fire2 = Object.Instantiate(prefab)
--     fire2.transform:SetParent(orc._go.transform, false)

--     g_tools:delayCall(2, function() 
--         orc1:playAnimation(enum.unity.animation.attack, function() print("orc1 attack end") end)
--         orc:moveTo(Vector3(2,0,-2), 3, function() print("orc move end") end)

--         g_tools:delayCall(0.5,
--         function() 
--             Time.timeScale = 0.001;
--             g_tools:delayOneFrame(function() 
--                 orc._controller:setPlaySpeed(1000); 
--                 orc:setUseRealTime(true);
--                 g_3dTools:setParticleUseUnscaledTime(fire2, true)
--             end)
--         end, true)
--         g_tools:delayCall(3.5, 
--         function() 
--             Time.timeScale = 1; 
--             orc._controller:setPlaySpeed(1);
--             orc:setUseRealTime(false);
--             g_3dTools:setParticleUseUnscaledTime(fire2, false);
--         end, true)
--     end)

--     -- local fileName = "Assets/Particle/fire.prefab"
--     -- local go = self:loadAsset(fileName)
--     -- local ps = go:GetComponent(typeof(ParticleSystem))
--     -- ps:Play()
--     -- go.transform.position = Vector3(0,2,0)
--     -- go.transform:SetParent(orc._go.transform, false)

--     --控制粒子的速度.需要遍历
--     -- g_tools:delayCall(4.5, function() orc:setVisible(false) end)
--     -- g_tools:delayCall(5.5, function() orc:setVisible(true) end)
-- end

-- function TestAvatarLayer:testGpuSkinning()
--     local index = 1
--     local count = 50
--     for i=-count,count do
--         for j=-count,count do
--             local orc = require("graphic.avatar.Avatar").create()
--             self:addObject(orc)
--             orc:init()
--             orc:setPosition( Vector3(i,0,j) )
--             orc:setName(index)
--             index = index + 1
--         end
--     end
-- end

-- function TestAvatarLayer:updateGuide()
--     if self._currentGuideName == guide.task.searchDog.name then
--         --发布引导
--         --发布之前
--         --触发条件
--     end
-- end

return TestAvatarLayer
