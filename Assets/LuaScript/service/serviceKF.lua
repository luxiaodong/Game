
--这个给跨服用
serviceKF = {}
serviceKF._tcpIndex = nil --标记哪个tcp

function serviceKF.connect(ip, port, connectFunc, disconnectFunc, timeout)
	print("serviceKF.connect :", ip, port)
	serviceKF._tcpIndex = g_tcpManager:connect(ip, port, connectFunc, disconnectFunc, timeout)
end

function serviceKF.request(callback, p, ...)
	serviceKF.send(callback, p, ...)
end

function serviceKF.send(callback, p, ...)
	if p.handle and serviceKF[p.handle] then
		local tempFunc = function(name, data, sendData)
			serviceKF[p.handle](name, data, sendData, callback)
		end
		g_tcpManager:send(serviceKF._tcpIndex, serviceKF[p.handle], p, ...)
	else
		g_tcpManager:send(serviceKF._tcpIndex, callback, p, ...)
	end
end
