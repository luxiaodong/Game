service = {}
service._tcpIndex = nil --标记哪个tcp
service._gateway = nil	--网关信息
service._gameServer = nil --游戏服信息

-- 这个是建立tcp连接. 使用参考 RegisterLoginLayer
function service.connect(connectFunc, disconnectFunc, timeout)
	print("service.connect :", service._gateway.host, service._gateway.port)
	service._tcpIndex = g_tcpManager:connect(service._gateway.host, service._gateway.port, connectFunc, disconnectFunc, timeout)
end

-- 如果tcp连接成功, 会用sessionId建立游戏服连接
function service.reconnect(callback)
	g_tcpManager:send(service._tcpIndex, service._gateway.host, service._gateway.port, callback, protocol.player.loginWithSession, service._gateway.sessionId)
end

function service.disconnect()
	g_tcpManager:disconnect(service._tcpIndex)
end

function service.request(id, callback, p, ...)
	service.send(id, callback, p, ...)
end

-- service[p.handle] 给你封装数据机会,将服务器的数据,转成ui需要的数据,也可以保存.看需求
-- 注意:不要在函数里判断是否第一次接受数据,这种逻辑,回调给上层再做判断.
function service.send(callback, p, ...)
	local tempFunc = callback
	if p.handle and service[p.handle] then
		tempFunc = function(name, data, sendData)
			service[p.handle](name, data, sendData, callback)
		end
	end

	g_tcpManager:send(service._tcpIndex, service._gameServer.serverType, service._gameServer.serverId, tempFunc, p, ...)
end

function service.registerPush(callback, protocol)
	g_tcpManager:registerPushHandler(protocol, callback)
end

function service.unregisterPush(protocol)
	g_tcpManager:unregisterPushHandler(protocol)
end

require("service.playerService")
require("service.battleService")
