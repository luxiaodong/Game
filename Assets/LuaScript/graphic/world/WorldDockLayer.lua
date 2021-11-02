
local GLayer = require("graphic.core.GLayer")
local WorldDockLayer = class("WorldDockLayer", GLayer)

function WorldDockLayer:ctor()
    GLayer.ctor(self)
end

function WorldDockLayer:init()
    GLayer.init(self)
end

return WorldDockLayer
