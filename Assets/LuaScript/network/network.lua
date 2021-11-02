
-- 所有访问的url地址
local address = {
	mlist_ip = "47.101.157.173",
	mlist_host = "mlist.aoshitang.com",
	patch_ip = "47.101.157.173",
	patch_host = "patch-"..config.gameId..".aoshitang.com",

	proxy_ip = "39.96.0.112",
	proxy_ip_test = "39.96.0.112",
	proxy_host = "proxytest2."..config.gameId..".aoshitang.com",
	proxy_host_test = "proxytest2."..config.gameId..".aoshitang.com",

	upload_voice = "http://voice.gc.aoshitang.com/root/voice/write.action",
	download_voice = "http://voice.gc.aoshitang.com/root/voice/read.action",
}

network = {}

-- 测试服请求注册,正式服走渠道的.
function network.requestTestServerRegister(callback, name, password)
end

function network.requestTestServerLogin(callback, name, password, ip, port)
end

-- REGISTER_URL

-- 获取开服列表
-- curl 'mlist.aoshitang.com/getServerList.action?gameId=atm&channelId=ios_caohua&yxSource=0&buildNo=1&userId=0&args'
function network.requestServerList(callback, channelId, yxSource, buildNumber, userId, args)
	local ip = "http://"..address.mlist_ip
	local host = address.mlist_host
	local url = string.format("%s/getServerList.action?gameId=%s&channelId=%s&yxSource=%s&buildNo=%s&userId=%s&args=%s", ip, config.gameId, channelId, yxSource, buildNumber, userId, args)
	local http = require("network.GHttp").create()
	http:get(url, callback, host)
end

-- 登录中控
function network.requestLoginProxy(callback, yxLoginAction, serverHost)
	print("network.requestLoginProxy")
	local action = string.format("%s&host=%s", yxLoginAction, serverHost)
	return network.request_proxy_core(callback, action)
end

-- 获取uid
function network.requestGetUserId(callback, getUserIdAction)
	print("network.requestGetUserId")
	return network.request_proxy_core(callback, getUserIdAction)
end

-- 获取用户余额, 目前仅用于应用宝
function network.requestQueueMoney(callback, queueMoneyAction)
	print("network.requestQueueMoney")
	return network.request_proxy_core(callback, queueMoneyAction)
end

-- 请求扣款, 目前仅用于应用宝
function network.requestPay(callback, payAction)
	print("network.requestPay")
	return network.request_proxy_core(callback, payAction)
end

function network.request_proxy_core(callback, action)
	local url = "http://"..address.proxy_ip.."/root/"..action
	local host = address.proxy_host
	local http = require("network.GHttp").create()
	http:get(url, callback, host)
end

-- 断线重连时获取版本信息
function network.requestVersionInfo(callback, channelId, yxSource, clientVersion, gameVersion, packageType, buildNumber)
	local ip = "http://"..address.mlist_ip
	local host = address.mlist_host
	local url = string.format("%s/checkUpdate.action?gameId=%s&channelId=%s&yxSource=%s&clientVersion=%s&gameVersion=%s&packageType=%s&buildNo=%s",ip, config.gameId, channelId, yxSource, clientVersion, gameVersion, packageType, buildNumber)
	print("network.requestVersionInfo:", url)
	local http = require("network.GHttp").create()
	http:get(url, callback, host)
end

-- 活动公告下载图片
function network.getActivityConfig(callback)
    local ip = "http://"..address.patch_ip.."/"
	local host = address.patch_host
	local url = string.format("%s%s/static_resources/activity_post/ActivityConfig.lua", ip, config.gameId)
	local http = require("network.GHttp").create()
	local header = "Host:"..host
	print("network.getActivityConfig:", url)
	http:downloadFileByHttp(url, host, callback, header)
end 

function network.downloadActivityImage(callback, ip, host, downloadTarget, saveTarget)
	local url = ip .. downloadTarget
	local http = require("network.GHttp").create()
	local header = "Host:"..host
	print("network.downloadActivityImage:", url)
	http:downloadFileByHttp(url, host, callback, header, saveTarget)
end

function network.disconnectHttp()
	network._giveupHttpCallback = true
end

------------------------------------------
-- tcp函数,暂时用全局函数
-- g_tcpManager = require("network.GTcpManager").create()

-- function network.connect(ip, port, connectFunc, disconnectFunc, timeout)
-- 	print("network.connect :", ip, port)
-- 	return g_tcpManager:connect(ip, port, connectFunc, disconnectFunc, timeout)
-- end

-- function network.disconnect(id)
-- 	print("network.disconnect. ", id)
-- 	g_tcpManager:disconnect(id)
-- end

-- function network.registerPush(callback, protocol)
-- 	g_tcpManager:registerPushHandler(protocol, callback)
-- end

-- function network.unregisterPush(protocol)
-- 	g_tcpManager:unregisterPushHandler(protocol)
-- end

-- function network.request(id, callback, p, ...)
-- 	g_tcpManager:send(id, callback, p, ...)
-- end

-- function network.requestWithError(callback, p, ...)
--     if p and p.name then
-- 		local args = string.format(p.args, ...)
-- 		g_tcp:sendRequest(callback, {name=p.name, args=args, notModal=p.notModal} )
-- 	else
-- 		print("[network] unkonw request. empty args.")
-- 	end
-- end

-- function network.request(callback, p, ... )
-- 	local function tempFunc(isOk, name, data, sendData)
-- 		if isOk == true then
-- 			if callback then
-- 				callback(name, data, sendData)
-- 			end
-- 		end
-- 	end

-- 	network.requestWithError(tempFunc, p, ...)
-- end
