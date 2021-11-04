
local GLayer = require("graphic.core.GLayer")
local TaskBriefLayer = class("TaskBriefLayer",GLayer)

function TaskBriefLayer:ctor()
	GLayer.ctor(self)
end

function TaskBriefLayer:init()
    GLayer.init(self)

    local go = self:loadUiPrefab("Sandbox/Prefabs/UI/taskBrief.prefab")
    --self:registerEvent(event.ui.pushText)
end

function TaskBriefLayer:handleEvent(e)
	if e.name == event.ui.pushText then
		self:showText(e.data.msg, e.data.pos, e.data.time)
    else
        GLayer.handleEvent(self, e)
	end
end

return TaskBriefLayer
