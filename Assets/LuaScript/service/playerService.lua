
g_player = require("data.GPlayer").create()

function service.playerInfo(name, data, sendData, callback)
	if g_player._id == 0 then
		g_player._id = data.id
	end

	if callback then
		callback(name, data, sendData)
	else
		event.broadcast(name, data) --断线重连时,基本没有发送数据
	end
end

--推送必须发消息出去.
function service.playerPush(name, data)
	event.broadcast(name, data)
end
