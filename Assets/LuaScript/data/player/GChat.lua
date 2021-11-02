
local GChat = class("GChat")

function GChat:ctor()
    --self._voiceRecord = require("data.player.GVoiceRecord").create()
    self:init()
end

function GChat:init()
    network.registerPush( handler(self, self.handleProtocol), protocol.push.chat )
    self._chatList = {}
end

function GChat:handleProtocol(name, data)
    if name == protocol.push.chat.name then
        if data.chatSend then 
            self:addChat(data.chatSend)
        end 
    end
end

function GChat:checkMsg(msg)
    -- for cityInfo in string.gmatch(msg, "%[[^%[]-%]") do 
    --     local cityName = string.sub(cityInfo, 2, -2)
      
    --     local cityId = self._getCityIdByName[cityName]
    --     if cityId then 
    --         local cityData = g_language:format("chat_gotocity_d", cityId, cityName)
    --         cityInfo = string.gsub(cityInfo, "%[", "%%[")
    --         cityInfo = string.gsub(cityInfo, "%]", "%%]")

    --         msg = string.gsub(msg, cityInfo, cityData)
    --     end 
    -- end 
    return msg
end 

function GChat:addChat(data)
    if not data then 
        return 
    end 

    -- html 转义
    data.msg = string.restorehtmlspecialchars(data.msg)
    local msg = self:checkMsg(data.msg)

    if data.voice == true then 
        msg = string.sub(msg, 4, -4)
        local msgArr = string.split(msg, "|")
        data.voiceId = msgArr[1] or ""
        data.voiceSec = msgArr[2] or "-1"
        msg = "<img src='chat_voice_bubble.png' lbl='"..data.voiceSec.."″' href='voice:"..data.voiceId..":"..data.voiceSec.. "' />"
    end 

    if data.type == enum.chat.system then 
        data.finalString = g_language:format("chat_system_d", msg)    
    elseif data.type == enum.chat.private then 
        if data.to == g_player._name then 
            -- 别人对我说
            data.finalString = g_language:format("chat_from", self:toATag(data.from)) .. msg
            data.popup = true
        else 
            -- 我对别人说
            data.finalString = g_language:format("chat_to", self:toATag(data.to)) .. msg
        end 

        data.finalString = g_language:format("chat_private_d", data.finalString)
    elseif data.type == enum.chat.nation then 
        if string.find(msg, "event:goTo:%d+_1") then return end 

        if data.isNotice then 
            data.finalString = g_language:format("chat_nation_d", msg)
        else 
            local forceName = g_language:get("force_"..data.forceId)
            local officialName = ""
            local officialTemp = {
                [1] = "guanzhi_guojun",
                [2] = "guanzhi_yipin",
            }
            local strId = officialTemp[data.official] 
            if strId then 
                officialName = g_language:get(strId) .." "
            end 

            data.finalString = g_language:format("chat_force_d", forceName, officialName, self:toATag(data.from), msg)
            data.popup = true
        end 
    elseif data.type == enum.chat.world then 
        data.finalString = g_language:format("chat_world_d", msg)
    end 

    table.insert(self._chatList, data)
    event.broadcast(event.chat.recvChat, {data=data, totalCnt=table.getn(self._chatList)})
end 

function GChat:toATag(str)
    return "<a href=\"event:private:" .. str .. "\">" .. str .. "</a>"
end 

return GChat

