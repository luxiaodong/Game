local GTcp = class("GTcp")

function GTcp:ctor()
	self._id = 0
	self._ip = ""
	self._port = 0
	self._tcp = nil
	self._connectCallback = nil --网络状态的回调函数
	self._disconnectCallback = nil --链接成功后断开的回调函数
	self._messageCallback = nil --网络消息的回调函数

	--统计
	self._totalCount = 0 --发出消息的个数
	self._totalTime = 0 --RTT的总时间
	self._sendTimeList = {} --发送时间戳列表,假设requestId>0才是自己发的
	--日志
end

--三个回调函数
function GTcp:init(id, connectCallback, disconnectCallback, messageCallback)
	self._id = id
	self._connectCallback = connectCallback
	self._disconnectCallback = disconnectCallback
	self._messageCallback = messageCallback
end

function GTcp:averageRTT()
	return self._totalTime/self._totalCount
end

function GTcp:connect(ip, port, timeout)
	if not self._tcp then
		self._ip = ip
		self._port = port
		self._tcp = CS.Game.GTcp()
		self._tcp:RegisterLuaUpdate( handler(self, self.receive) )
		self._tcp:Connect(ip, port, timeout or 3)
	end
end

--主动调用,断开连接
function GTcp:disconnect()
	if self._tcp then
		self._tcp:UnregisterLuaUpdate()
		self._tcp:Disconnect()
		self._tcp = nil
	end
end

--可能没有使用
function GTcp:isConnect()
	if self._tcp then
		return self._tcp:IsConnected()	
	end
	
	return false
end

function GTcp:send(serviceType, serviceId, protocol, requestId)
	print(string.format( "[GTcp] send (%s,%s) %s %s",protocol.name, protocol.args, requestId, self._id))
	self._tcp:Send(serviceType, serviceId, protocol.name, protocol.args, requestId)
	table.insert(self._sendTimeList, Time.realtimeSinceStartup)
end

--这个函数不是每帧都调用,有数据才调用,详见GTcp.cs
function GTcp:receive(requestId, protocolName, content)

	if requestId > 0 then
		local dt = Time.realtimeSinceStartup - table.remove(self._sendTimeList, 1)
		self._totalTime = self._totalTime + dt
		self._totalCount = self._totalCount + 1
		--超时包计算.
		--写入本地.
	end

	if content == nil or content == "" then
		print("[GTcp] warning content is empty. ", protocolName)
		return 
	end

	print("[GTcp] test ================ ", requestId, protocolName)

	local action = json.decode(content)

	if action == nil or action == "" then
		print("[GTcp] warning json decode failed. ", protocolName)
		return 
	end

	print("[GTcp] test ================ ", requestId, protocolName, content)

	if action.state == enum.server.response.localLoop then
		if action.data.state == enum.tcpConnectState.fail then --连接直接失败
		elseif action.data.state == enum.tcpConnectState.timeout then --连接时超时失败			
		elseif action.data.state == enum.tcpConnectState.success then --连接成功
			self._connectCallback(self.id, action.data.state)	
		elseif action.data.state == enum.tcpConnectState.disconnect then --从连上变成断开
			self._disconnectCallback(self.id)
		end
	else
		print(string.format( "[GTcp] receive (%s,%s) %s", protocolName, g_tools:tableToString(action.data or {}), self._id))
		self._messageCallback(self.id, requestId, protocolName, action.state, action.data) --服务器数据
	end
end

return GTcp
