
local GLayer = require("graphic.core.GLayer")
local NoticeBoardLayer = class("NoticeBoardLayer",GLayer)

function NoticeBoardLayer:ctor()
    GLayer.ctor(self)
end

function NoticeBoardLayer:init()
    GLayer.init(self)
end

return NoticeBoardLayer
