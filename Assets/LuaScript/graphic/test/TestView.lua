
local GObject = require("graphic.core.GObject")
local TestView = class("TestView", GObject)

function TestView:ctor()
    GObject.ctor(self)
end

function TestView:init()
    GObject.init(self)

    self:registerEvent("event.test.grunt")
    self:registerEvent("event.test.monkey")
end

function TestView:handleEvent(e)
    if e.name == "event.test.grunt" then
        if e.data.func == "create" then
            self:createGrunt()
        elseif e.data.func == "play" then
            self:playGrunt()
        elseif e.data.func == "pause" then
            self:pauseGrunt()
        elseif e.data.func == "resume" then
            self:resumeGrunt()
        elseif e.data.func == "move" then
            self:moveGrunt()
        end
    elseif e.name == "event.test.monkey" then
        if e.data.func == "create" then
            self:createMonkey()
        end
    end
end

function TestView:createGrunt()
    if self._avatar then
        self._avatar:exit()
        self._avatar = nil
    end

    local avatar = require("graphic.avatar.MovableAvatar").create()
    avatar:init("Sandbox/Prefabs/Characters/Grunt/GruntURP.prefab",nil,nil,true)
    self:addObject(avatar)
    avatar:setEulerY(180)
    self._avatar = avatar

    --动作配置文件
    local t = {
        ["ac"]  = {
            [enum.unity.controller.none] = {
                ["path"] = "Sandbox/Animations/Characters/Grunt/Freedom.controller",
                ["act"] = {
                    [enum.unity.animation.idle] = {time=1,loop=true},
                    [enum.unity.animation.walk] = {time=1.333,loop=true},
                    [enum.unity.animation.run] = {time=0.667,loop=true},
                    [enum.unity.animation.die] = {time=1},
                    [enum.unity.animation.hit] = {time=1.333},
                    [enum.unity.animation.attack] = {time=1.333, 
                        frame={
                            [enum.unity.keyframe.attackEffect]=0.3, 
                            [enum.unity.keyframe.hitEffect]=0.8,
                        },
                    },
                },
            },
        },
    }
    avatar:initController(t, enum.unity.controller.none)
    self._avatar = avatar
end

function TestView:playGrunt()
    local array = {
        enum.unity.animation.idle, 
        enum.unity.animation.walk,
        enum.unity.animation.run,
        enum.unity.animation.die,
        enum.unity.animation.hit,
        enum.unity.animation.attack,
    }

    local index = math.random(6)
    if self._avatar then     
        self._avatar:playAnimation(array[index], function() print("play end") end)
    end
end

function TestView:pauseGrunt()
    if self._avatar then
        self._avatar:pause()
    end
end

function TestView:resumeGrunt()
    if self._avatar then
        self._avatar:resume()
    end
end

function TestView:moveGrunt()
    if self._avatar then
        self._avatar:moveTo(Vector3(2,0,0), 3, function() print("move end") end)
    end
end

function TestView:createMonkey()

    if self._avatar then
        self._avatar:exit()
        self._avatar = nil
    end

    local avatar = require("graphic.avatar.Avatar").create()
    self:addObject(avatar)
    avatar:init("Sandbox/Prefabs/Characters/Monkey/ch_pc_hou.prefab")
    avatar:setEulerY(180)
    self._avatar = avatar

    local config = {
        [enum.unity.bodyparts.head] = {
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_004_tou.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_006_tou.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_008_tou.prefab",
        },

        [enum.unity.bodyparts.body] = {
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_004_shen.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_006_shen.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_008_shen.prefab",
        },

        [enum.unity.bodyparts.hand] = {
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_004_shou.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_006_shou.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_008_shou.prefab",
        },

        [enum.unity.bodyparts.foot] = {
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_004_jiao.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_006_jiao.prefab",
            "Sandbox/Prefabs/Characters/Monkey/ch_pc_hou_008_jiao.prefab",
        }
    }

    local t = {}
    for k,v in pairs(config) do
        t[k] = v[math.random(3)]
    end

    avatar:initCombineMeshesRender(t, true, "Bone_root01")

    local t = {
        "Sandbox/Prefabs/Characters/Monkey/ch_we_one_hou_004.prefab",
        "Sandbox/Prefabs/Characters/Monkey/ch_we_one_hou_006.prefab",
        "Sandbox/Prefabs/Characters/Monkey/ch_we_one_hou_008.prefab",
    }

    avatar:initWeapon("Bone_root01/Bone_root02/weapon_hand_r", t[math.random(3)])
end

return TestView
