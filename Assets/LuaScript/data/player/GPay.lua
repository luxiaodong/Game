
local GPay = class("GPay")

function GPay:ctor()
    --self._voiceRecord = require("data.player.GVoiceRecord").create()
    self:init()
end

function GPay:init()
    network.registerPush( handler(self, self.handleProtocol), protocol.push.chat )
    self._chatList = {}
end

function GPay:handleProtocol(name, data)
    if name == protocol.push.chat.name then
        if data.chatSend then 
            self:addChat(data.chatSend)
        end 
    end
end

return GChat

