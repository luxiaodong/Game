
local GObject = require("graphic.core.GObject")
local BattleView = class("BattleView", GObject)

function BattleView:ctor()
    GObject.ctor(self)
end

function BattleView:init()
    GObject.init(self)

    local t = {
    	event.battle.avatar.create,
    	event.battle.avatar.pos
    }

    self:registerEvents(t)
    self:startBattle()
end

function BattleView:startBattle()
	g_battle:start()
	Time.fixedDeltaTime = 1/g_battle:convertSecondToFrame(1)

	self._avatars = {}
	for _, avatar in pairs(g_battle._avatars) do
		self:addAvatar(avatar)
	end
end

function BattleView:OnFixedUpdate()
	g_battle:fixUpdate()
	-- print(g_battle:currentFrame(), Time.time)
end

function BattleView:addAvatar(avatar)
	local go = require("graphic/battle/objects/VAvatar").create()
	go:init(avatar)
	self:addObject(go)
	self._avatars[avatar._id] = go
end

function BattleView:handleEvent(e)
	if e.name == event.battle.avatar.create then
		-- 先不考虑法术牌
		local avatar = g_battle:avatar(e.data.id)
		self:addAvatar(avatar)
	elseif e.name == event.battle.avatar.pos then
		-- local go = g_battle:avatar(e.data.id)
		local go = self._avatars[e.data.id]
		go:updatePosition()
		go:updateDirection()
	end
end

return BattleView
