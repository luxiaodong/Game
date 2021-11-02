
local Avatar = require("graphic.avatar.Avatar")
local Spine = class("Spine", Avatar)

function Spine:ctor()
    Avatar.ctor(self)
end

function Spine:createGameObject()
    local name = getmetatable(self).__className
    self._go = g_2dTools:createGameObject(name)
end

function Spine:initController(go)
    local controller = go:GetComponent(typeof(CS.Spine.Unity.SkeletonAnimation))
    self._controller = require("graphic.spine.SpineController").create()
    self._controller:init(controller)
    -- self._controller:setActConfig(resAlias.spine["test"]["act"])
    self._controller:setFrameKeyHandler(handler(self, self.handleKeyFrame))
    self._avatarGo = go
end

function Spine:handleKeyFrame(actName, keyName, data)
    print("handleKeyFrame ==> ",actName,keyName)
end

return Spine
