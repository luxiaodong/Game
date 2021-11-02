
local GLayer = require("graphic.core.GLayer")
local BattleHpLayer = class("BattleHpLayer", GLayer)

--维护每个avatar的2d血条
function BattleHpLayer:ctor()
    GLayer.ctor(self)
end

function BattleHpLayer:init()
    GLayer.init(self)
end

return BattleHpLayer
