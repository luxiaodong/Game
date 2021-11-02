
local GObject = require("graphic.core.GObject")
local WorldView = class("WorldView", GObject)

function WorldView:ctor()
    GObject.ctor(self)
end

function WorldView:init()
    GObject.init(self)
end

return WorldView
