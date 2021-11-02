
local LEntity = require("data.battle.LEntity").create()
local LSpell = class("LSpell", LEntity)

function LSpell:ctor()
	LEntity.ctor(self)
	self._type = enum.battle.entity.spell
	self._effectRange = nil --技能影响范围
end

function LSpell:init(id, side, pos)
	LEntity.ctor(self, id, side, pos)
	-- self._flyCd = g_battle:convertSecondToFrame(1)
end

function LSpell:update()

end

return LSpell
