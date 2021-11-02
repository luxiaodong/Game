
local GScene = require("graphic.core.GScene")
local VersionUpdateScene = class("VersionUpdateScene", GScene)

local layerConfig={
    [enum.ui.layer.versionUpdate] = "graphic.versionUpdate.VersionUpdateLayer",
    [enum.ui.layer.noticeBoard] = "graphic.versionUpdate.NoticeBoardLayer",
}

function VersionUpdateScene:ctor()
    GScene.ctor(self)
end

function VersionUpdateScene:init()
    GScene.init(self)

    local layers = {enum.ui.layer.versionUpdate, enum.ui.layer.noticeBoard}

print("VersionUpdateScene init....")
    self:initLayers(layers, layerConfig)

end

return VersionUpdateScene
