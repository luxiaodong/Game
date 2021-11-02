local GTcp = class("GTcp")

function GTcp:ctor()
	self:init()
end

function GTcp:init()
	self._ip = ""
	self._port = 0
	self._tcp = nil
	self._requestIndex = 1
	self._isMain = true --是否是主tcp,不是跨服的

	self._pushCallbacks = {}
	self._requestCallbacks = {}
	self._requestArguments = {}

	self._stateCallback = nil --建立连接时的回调函数
end

function GTcp:connect(ip, port, func)
	if self._tcp == nil then
		self._ip = ip
		self._port = port
		self._tcp = CS.Game.GTcp()
		self._tcp:RegisterLuaUpdate( handler(self, self.update) )
		self._tcp:Connect(ip, port, 3)
		self._stateCallback = func
		return true
	else
		if self._ip == ip and self._port == port then
			if self:isConnect() then
				func(enum.server.tcpState.success) --同样的ip,port.已经连上.
				return true
			end
		end

		self:disconnect()
		return self:connect(ip, port, func)
	end
	
	return false
end

function GTcp:connect(ip, port, func, timeout)
	self._ip = ip
	self._port = port
	self._tcp = CS.Game.GTcp()
	self._tcp:RegisterLuaUpdate( handler(self, self.update) )
	self._tcp:Connect(ip, port, timeout or 3)
	self._stateCallback = func
end

--主动调用,断开连接
function GTcp:disconnect()
	if self._tcp then
		self._tcp:Disconnect()
		self._tcp:UnregisterLuaUpdate()
		self._requestCallbacks = {}
		self._requestArguments = {}
		self._tcp = nil	
	end
end

function GTcp:update(protocolName, content, requestId)
	if self._isMain then
		event.broadcast(event.network.heartbeat)
	end

	if content and content ~= "" then
		print("GTcp:recv "..requestId..","..protocolName..","..content)
		local action = json.decode(content)
		self:responseHandler(requestId, protocolName, action )
	else
		print("GTcp: content is empty. ", protocolName)
	end
end

function GTcp:isConnect()
	if self._tcp then
		return self._tcp:IsConnected()	
	end
	
	return false
end

function GTcp:sendRequest(callback, protocol)
	if protocol == nil then
		print("GTcp: protocol is nil.")
		return false
	end

	if self._tcp == nil then
		print("GTcp: socket is nil.")
		return false
	end

	print("GTcp:send "..protocol.name..","..protocol.args)
	self._tcp:Send(protocol.name, protocol.args, self._requestIndex)

	if callback ~= nil then
		self._requestCallbacks[self._requestIndex] = callback

		if protocol.keepData then
			self._requestArguments[self._requestIndex] = protocol.args
		end

		self._requestIndex = self._requestIndex + 1
	end

	--模态处理. 默认开启
	if callback and protocol.notModal == nil then	
		local temp = {}
		temp.callback = callback
		temp.protocol = protocol
		event.broadcast(event.network.showModel, temp)
	end

	return true
end

function GTcp:responseHandler(requestId, protocolName, action)
	--requestId不为0表示是我请求的.
	local callback = nil
	local sendData = {}

	if requestId > 0 then
		event.broadcast(event.network.hideModel)

		callback = self._requestCallbacks[requestId]
		self._requestCallbacks[requestId] = nil
		
		local str = self._requestArguments[requestId]
		self._requestArguments[requestId] = nil
    
	    if str then
	        local list = string.split(str, "&")
	        for k, v in pairs(list) do 
	            if string.len(v) > 0 then 
	                local kv = string.split(v, "=")
	                sendData[kv[1]] = kv[2]
	            end
	        end
	    end
	end

	if action == nil or action == "" then
		print("GTcp warning action is empty: ", protocolName)
		return 
	end

	-- if type(action) == "table" then
	-- 	if action.action then	--有的消息后端没有去掉action. 多封装了一层
	-- 		print("GTcp warning, double action: ", protocolName)
	-- 		action = action.action --真正的action, 继续往下走.
	-- 	end
	-- end

	local state = action.state --0.fail, 1.success. 2.exception. 3.push 4.disconnect
	
	if state == enum.server.response.fail then
		if action.data and action.data.msg then
			if callback then
				callback(false, protocolName, action.data, sendData)
			else
				event.broadcast(event.network.protocolException, action.data.msg)
			end
		end
	elseif state == enum.server.response.success then	--正常返回
		if requestId == 0 then
			error("GTcp error. state == 1 but requestId == 0.")
			return 
		end

		if callback then
			callback(true, protocolName, action.data, sendData)
		end

 	elseif state == enum.server.response.exception then
 		if requestId == 0 then
			error("GTcp error. state == 2 but requestId == 0.")
			return 
		end

 		if action.data and action.data.state then
 			if callback then
 				callback(false, protocolName, action.data, sendData)
 			else
 				event.broadcast(event.network.protocolException, action.data.state)
 			end
 		end
	elseif state == enum.server.response.push then	--推送数据
		if requestId ~= 0 then
			error("GTcp error. state == 3 but requestId ~= 0.")
			return 
		end

		callback = self._pushCallbacks[protocolName]
		if callback then
			callback(protocolName, action.data)
		end
	elseif state == enum.server.response.disconnect then --断开,被服务器踢掉,比如,帐号被顶掉
		self:disconnect()
		--可能要退回到登陆界面
		local msg = ""
		if action.data and action.data.msg then
			msg = action.data.msg
		end
		print("[GTcp][state==4] ", msg)
		event.broadcast(event.network.disconnectByServer, {msg=msg})
	elseif state == enum.server.response.localLoop then --本地网络消息,非服务器的,比如,连上,断开等
		--{"state":1,"data":{"state":0}}
		if action.data.state == enum.server.tcpState.fail then --连接直接失败
			print("[GTcp][state==5] connect failed")
			if self._stateCallback then
				self._stateCallback(0)
			end
		elseif action.data.state == enum.server.tcpState.success then --连接成功
			print("[GTcp][state==5] connect success")
			if self._isMain then
				event.broadcast(event.network.connectToServer)
			end

			if self._stateCallback then
				self._stateCallback(1)
			end	
		elseif action.data.state == enum.server.tcpState.disconnect then --从连上变成断开
			print("[GTcp][state==5] disconnected")
			self:disconnect()
			event.broadcast(event.network.disconnectByNetwork)
		elseif action.data.state == enum.server.tcpState.timeout then --连接时超时失败
			print("[GTcp][state==5] connect timeout")
			if self._stateCallback then
				self._stateCallback(2)
			end
		end
	end
end

-- enum.server.tcpState.fail = 0		--直接连接失败
-- enum.server.tcpState.success = 1		--连接成功
-- enum.server.tcpState.disconnect = 2 	--连接断开
-- enum.server.tcpState.timeout = 3		--连接超时

--不支持两个函数同时注册一个推送
function GTcp:registerPushHandler(protocol, callback)
	if protocol == nil or callback == nil then
		print("GTcp protocol or callback is empty.")
		return 
	end

	local name = protocol.name
	if name ~= nil then
		self._pushCallbacks[name] = callback
	end
end

function GTcp:unregisterPushHandler(protocol)
	if protocol == nil then
		print("GTcp protocol is empty.")
		return 
	end

	local name = protocol.name
	if name ~= nil then
		self._pushCallbacks[name] = nil
	end
end

return GTcp
