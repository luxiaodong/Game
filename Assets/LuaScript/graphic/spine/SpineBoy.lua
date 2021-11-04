
local Spine = require("graphic.spine.Spine")
local SpineBoy = class("SpineBoy", Spine)

function SpineBoy:ctor()
    Spine.ctor(self)
end

function SpineBoy:init(pic)
    Spine.init(self)

    if pic == nil then
    	-- pic = "Sandbox/Dragon/Dragon.prefab"
        pic = "Sandbox/Hero/hero.prefab"
    end

    self:loadAsset(pic, true, function(prefab)
        print("[SpineBoy:init] prefab ok.")
        local go = Object.Instantiate(prefab)
        self:initController(go)
        go.transform:SetParent(self._go.transform, true)

        local before = Time.time
        self:playAnimation(enum.unity.animation.attack, function() print("attack over i "..tostring(Time.time - before)) end, 0.1)
        g_tools:delayCall(0.2, function() self:pause() end)
        g_tools:delayCall(8.2, function() self:resume() end, true)

    end, true)
end

return SpineBoy
