local GTcpManager = class("GTcpManager")

function GTcpManager:ctor()
	self._tcps = {} -- 多个GTcp列表 {tcpId=tcp} 键值对
	self._index = 0
	self._pushCallbacks = {}
	self._requestCallbacks = {}
	self._requestArguments = {}
	self._requestIndex = 0
end

function GTcpManager:init()
end

--清除所有tcp,--这个函数不出发回调
function GTcpManager:clear()
	for id, tcp in pairs(self._tcps) do
		tcp:disconnect()
	end
end

--返回tcp的标记
function GTcpManager:connect(ip, port, connectFunc, disconnectFunc, timeout)
	self._index = self._index + 1
	local tcp = require("network.GTcp").create()
	self._tcps[self._index] = tcp

	local function connectCallback(id, state)
		if state == enum.tcpConnectState.success then
			connectFunc(true)
		else
			self._tcps[id]:disconnect()
			self._tcps[id] = nil
			connectFunc(false)
		end
	end

	local function disconnectCallback(id)
		self._tcps[id]:disconnect()
		self._tcps[id] = nil
		if disconnectFunc then disconnectFunc() end
	end

	tcp:init(self._index, connectCallback, disconnectCallback, handler(self, self.handleTcpData))
	tcp:connect(ip, port, timeout)
	return self._index
end

function GTcpManager:disconnect(id)
	local tcp = self._tcps[id]
	tcp:disconnect()
end

function GTcpManager:send(id, serviceType, serviceId, callback, p, ...)
	if p and p.name then
		local tcp = self._tcps[id]
		if tcp then
			local args = string.format(p.args, ...)
			self._requestIndex = self._requestIndex + 1
			tcp:send(serviceType, serviceId, {name=p.name, args=args}, self._requestIndex)

			if callback then --保留发送的数据
				self._requestCallbacks[self._requestIndex] = callback
				if p.keepData then
					local newArgs = {}
					local len = select("#", ...)
					for i = 1, len do
						table.insert(newArgs, select(i, ...))
					end
					self._requestArguments[self._requestIndex] = newArgs
				end
			end
		else
			print("[GTcpManager] unkonw tcpId :", id)
		end
	else
		print("[GTcpManager] unkonw protocol.")
	end
end

function GTcpManager:handleTcpData(id, requestId, protocolName, state, data)
	if requestId > 0 then
		local callback = self._requestCallbacks[requestId]
		self._requestCallbacks[requestId] = nil
		
		local sendArgs = self._requestArguments[requestId]
		self._requestArguments[requestId] = nil

		if state == enum.server.response.success then	--正常返回
			if callback then
				callback(protocolName, data, sendArgs)
			end
		else
			self:handleException(protocolName, state)
		end
	else
		if state == enum.server.response.push then	--推送数据
			local callback = self._pushCallbacks[protocolName]
			if callback then
				callback(protocolName, data)
			end
		elseif state == enum.server.response.disconnect then --断开,被服务器踢掉,比如,帐号被顶掉
			self._tcps[id]:disconnect()
			self._tcps[id] = nil
			local msg = data.msg or ""
			event.broadcast(event.network.disconnectByServer, {msg=msg}) --有一根线被踢掉了
		else
			self:handleException(protocolName, state)
		end
	end
end

--异常处理,反映到上层可能点了没有反应
function GTcpManager:handleException(protocolName, state)
	warning(protocolName, tostring(state))
end

--不支持两个函数同时注册一个推送
function GTcpManager:registerPushHandler(protocol, callback)
	if not protocol or not callback then
		print("[GTcpManager] protocol or callback is empty.")
		return 
	end

	self._pushCallbacks[protocol.name] = callback
end

function GTcpManager:unregisterPushHandler(protocol)
	if protocol == nil then
		print("[GTcpManager] protocol is empty.")
		return 
	end

	self._pushCallbacks[protocol.name] = nil
end

return GTcpManager
