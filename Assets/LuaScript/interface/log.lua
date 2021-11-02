log = {}
log.cache = {}
log._deviceId = ""
log._channelId = ""
log._gameVersion = ""
log._clientVersion = ""
log._playerId = ""
log._serverId = ""
log._serverIp = ""
log._userId = ""
log._playerId = ""
log._playerName = ""
log._playerLv = ""
log._logFilePath = CS.Game.GFileUtils.GetInstance():GetWritablePath().."/log.txt"

log._mode = 0 --0.本地打印, 1.线上打印

--目前日志分分埋点,采集,活动,异常,错误
function log.server(action, msg)
	if log._mode == 0 then
		print("log.server: "..action..","..msg)
		return 
	end

	local ip = "http://42.62.92.212"
	local host = "log.pub.aoshitang.com"
	local url = string.format("%s/root/%s.action?%s",ip,action,msg)
	local http = require("network.GHttp").create()
	http:get(url, nil, host)
end

--埋点
--[firstOpen, 首次打开]
--[open, 每次打开]
--[checkUpdate, 检查动更前]
--[updateOver, 动更结束]
--[initSDK, sdk初始化前],这步可能在checkUpdate前
--[loginSDK, sdk登录前]
--[loginOver, sdk登录完成]
--[getServerOver, 获取服务器列表完成]
--[gameStartUp, 点击游戏开始前]
--[enterGame, 真正进入游戏]
--[createPlayer, 创建角色]
--[selectPlayer, 选择角色]
function log.tracePoint(name)
	if log._mode == 0 then
		print("log.tracePoint: "..name)
		return
	end

	local gameId = config.gameId
	local channelId = log._channelId
	local flag = name
	local deviceId = log._deviceId
	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = "" --自定义字段

	local msg = string.format("%s#%s#%s#%s#%s#%s#%s#%s",gameId,channelId,flag,deviceId,resVersion,clientVersion,buildNo,expression)
	log.server("log","log="..string.urlencode(msg))
end

--fps帧率
--1分钟内平均值
--1分钟内最低值
function log.fps(average, lowest)
	if log._mode == 0 then
		print("log.fps: "..average..","..lowest)
		return
	end

	local gameId = config.gameId
	local channelId = log._channelId
	local flag = "fps"
	local fps = average
	local lowerFPS = lowest
	local deviceId = log._deviceId
	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = "" --自定义字段

	local msg = string.format("log=%s#%s#%s#%s#%s#%s#%s#%s#%s#%s",gameId,channelId,flag,fps,lowerFPS,deviceId,resVersion,clientVersion,buildNo,expression)
	log.server("log","log="..string.urlencode(msg))
end

--网络加载导致的延迟
function log.networkLoading(protocolName)
	if log._mode == 0 then
		print("log.networkLoading: "..protocolName)
		return
	end

	local gameId = config.gameId
	local channelId = log._channelId
	local flag = "networkLoading"
	local userId = log._userId
	local playerId = log._playerId
	local playerName = log._playerName
	local playerLv = log._playerLv
	local actionName = protocolName
	local serverIP = log._serverIp
	local serverId = log._serverId
	local deviceId = log._deviceId
	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = "" --自定义字段

	local msg = string.format("log=%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s",gameId,channelId,flag,userId,playerId,playerName,playerLv,actionName,serverIP,serverId,deviceId,resVersion,clientVersion,buildNo,expression)
	log.server("log","log="..string.urlencode(msg))
end

--重要节点监控日志,主要是监控,可以自定义其他的
--[checkUpdate, 检查动更]
--[initSDK, 初始化SDK]
--[loginSDK, 登录SDK]
--[getServerList, 获取服务器列表]
--[enterGame, 进入游戏]
--[initPay, 初始支付SDK]
--[pay, 支付失败]

--监控步骤, 错误原因
function log.monitor(step, reason)
	if log._mode == 0 then
		print("log.monitor: "..step..","..reason)
		return
	end

	local gameId = config.gameId
	local channelId = log._channelId
	local flag = "monitor" 
	local monitorKey = step
	local monitorStatus = reason
	local deviceId = log._deviceId
	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = "" --自定义字段

	local msg = string.format("log=%s#%s#%s#%s#%s#%s#%s#%s#%s#%s",gameId,channelId,flag,monitorKey,monitorStatus,deviceId,resVersion,clientVersion,buildNo,expression)
	log.server("log","log="..string.urlencode(msg))
end

--设备采集
--每次打开, 进入游戏时上报
function log.collectionDeviceInfo(info)
	local gameId = config.gameId
	local channelId = log._channelId
	local flag = "device"
	local userId = log._userId
	local playerId = log._playerId
	local playerName = log._playerName
	local playerLv = log._playerLv
	local deviceId = log._deviceId
	
	local manufacturer = info.manufacturer or ""
	local deviceModel = info.deviceModel or ""
	local osVersion = info.osVersion or ""
	local openglVersion = info.openglVersion or ""
	local memSize = info.memSize or ""
	local resolution = info.resolution or ""

	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = "" --自定义字段

	local msg = string.format("log=%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s",gameId,channelId,flag,userId,playerId,playerName,playerLv,deviceId,manufacturer,deviceModel,osVersion,openglVersion,memSize,resolution,resVersion,clientVersion,buildNo,expression)
	log.server("log","log="..string.urlencode(msg))
end

--错误日志
--errorLv luastack|error
function log.error(errorLv, msg)
	if log._mode == 0 then
		print("log.error: "..errorLv..","..msg)
		return 
	end

	--防止连续的报错不停的发.
	if table.indexof(log.cache, msg) > 0 then
		return 
	end
	table.insert(log.cache, msg)

	local errorStack = "\n"..tostring(msg).."\n"..debug.traceback("", 2).."\n"

	local game = config.gameId
	local channelId = log._channelId
	local flag = errorLv
	local userId = log._userId
	local playerId = log._playerId
	local playerName = log._playerName
	local serverId = log._serverId
	local resVersion = log._gameVersion
	local clientVersion = log._clientVersion
	local buildNo = ""
	local expression = ""
	local stack = "" 
	
	local msg = string.format("%s#%s#%s#%s#%s#%s#%s#%s#%s#%s#%s",channelId,flag,userId,playerId,playerName,serverId,resVersion,clientVersion,buildNo,expression,stack)
	log.server("error","game="..game.."&log="..string.urlencode(msg).."&errorStack="..string.urlencode(errorStack))
end

--------------------------------------------
--同时支持bugly的日志上传
--------------------------------------------
--errorLv:v,d,i,w,e
function log.bugly(errorLv,tag,msg)
	local t = {}
	t.action = "bugly.log"
	t.level = errorLv
	t.tag = tag
	t.msg = msg
	nativeBridge.sendToNative(t)
end

--写入本地文件
function log.writeToFile(msg)
	print(log._logFilePath)
	if log._file == nil then
		os.remove(log._logFilePath)
		log._file = io.open(log._logFilePath, "w+")
		log._file:seek("set")
	else
		log._file:seek("end")
	end
	
	log._file:write(msg.."\n")
	log._file:flush()
end
