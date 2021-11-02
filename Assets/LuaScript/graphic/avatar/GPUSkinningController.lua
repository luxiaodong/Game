
local AvatarController = require("graphic.avatar.AvatarController")
local GPUSkinningController = class("GPUSkinningController", AvatarController)

function GPUSkinningController:ctor()
    AvatarController.ctor(self)
end

function GPUSkinningController:changeRuntimeAnimator(controller)    
end

function GPUSkinningController:start()
    self._controller:Resume()
end

function GPUSkinningController:stop()
    self._controller:Stop()
end

return GPUSkinningController
