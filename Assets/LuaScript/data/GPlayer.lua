
local GPlayer = class("GPlayer")

function GPlayer:ctor()

	-- self._chat = require("data.player.GChat").create()
	-- self._task = require("data.player.GTask").create()
    -- self._guide = require("data.player.GGuide").create()
    -- self._activity = require("data.player.GActivity").create()
    
	self._id = 0 --玩家id
    self:init()
end

function GPlayer:init()
    service.registerPush(service.playerPush, protocol.push.player)

	-- self._chat:init()
 --    self._task:init()
 --    self._guide:init(false)
	-- self._activity:init()
    
    -- network.registerPush( handler(self, self.handleProtocol), protocol.push.player)
end

-- function GPlayer:handleProtocol(name, data)
--     if name == protocol.player.info.name then
--         event.broadcast(event.ui.changeScene, {name=enum.ui.scene.test})
--         sdk.submit(enum.sdk.submitPoint.enterGame)
--     end
-- end

-- function GPlayer:getPlayerInfo(playerId)
--     network.request( handler(self, self.handleProtocol), protocol.player.info, playerId)
-- end

-- function GPlayer:enterFirstScene()
--     --也有可能后端控制着前端的场景切换
--     --发布任务
-- end

return GPlayer
