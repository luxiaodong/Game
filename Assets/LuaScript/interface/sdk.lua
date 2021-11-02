sdk = {}

--初始化
function sdk.init(callback)
	print("sdk.init")
	local t = {}
	t.action = enum.sdk.action.init
	t.callback = callback
	t.proxyAddress = "http://proxytest2.hlw.aoshitang.com/root/unisdkLoginCheck.action"
	nativeBridge.sendToNative(t)
	log.tracePoint("initSDK")
end

--初始化成功后设置渠道信息
function sdk.setArgs(t)
	sdk._yx = t.yx
	sdk._channelId = t.channelId
	sdk._yxSource = t.yxSource or ""
    sdk._xgToken = t.xgToken or ""

    g_system._device._astId = t.astId
	g_system._device._uuid = t.deviceUuid
	g_system._device._model = t.deviceModel
	g_system._device._brand = t.deviceBrand
	g_system._device._version = t.deviceVersion

	log._channelId = t.channelId
	log._deviceId = t.deviceUuid

	if t.isSdkLogin then
		config.isSdkLogin = true
	end
end

--登陆
function sdk.login(callback)
	print("sdk.login")
	local t = {}
	t.action = enum.sdk.action.login
	t.callback = callback
	nativeBridge.sendToNative(t)
	log.tracePoint("loginSDK")
end

function sdk.login_success(t)
	log.tracePoint("loginOver")
	sdk._yxLoginUrl = t.yxLoginUrl

	--当userId为空时, 用另一个获取接口
	sdk._userId = t.userId or 0 --屏蔽获取userId接口
	sdk._yxGetUserIdUrl = t.yxGetUserIdUrl
	sdk._yxQueueMoneyUrl = t.yxQueueMoneyUrl

	--如果token只能使用一次, 那每次都要请求sdk登录.
	-- if t.tokenUseOneTime then
	-- 	sdk._tokenUseOneTime = true
	-- else
	-- 	sdk._tokenUseOneTime = false
	-- end
end

--游戏先登出,通知sdk登出,没有回调
function sdk.logout()
	local t = {}
	t.action = enum.sdk.action.logout
	nativeBridge.sendToNative(t)
	log.tracePoint("logout")
end

--支付
function sdk.pay(t)
	t.action = enum.sdk.action.pay
	nativeBridge.sendToNative(t)
	log.tracePoint("sdk.pay")
end

--应用宝支付成功需要掉用查询接口
function sdk.pay_success(t)
	sdk._yxPayUrl = t.yxPayUrl
end

--权限请求,未测试
function sdk.permissionRequest(t)
	t.action = enum.system.permission.request
	nativeBridge.sendToNative(t)
end

--主动崩溃测试
function sdk.crash()
	local t = {}
	t.action = enum.sdk.action.crash
	nativeBridge.sendToNative(t)
end

--日志上报
-- point: createPlayer,enterGame,playerLevelUp
function sdk.submit(point)
	local t = {}
	t.action = "sdk.submit"
	t.point = point
	t.userId = ""
	t.serverId = "10001"
	t.serverName = "测服1"
	t.playerId = "20290"
	t.playerName = "大胖子"
	t.playerLv = "1"
	t.playerVip = "0"
	t.playerCreateTime = "0"
	t.sex = "1"
	t.gold = "0" --剩余金币
	t.money = "0" --剩余金额
	nativeBridge.sendToNative(t)
end

-- local t = {}
        -- t.action = "permission.request"
        -- t.name = "android.permission.READ_PHONE_STATE"
        -- t.des = "are your sure yes?"
        -- t.data = "test yes"
        -- t.handler = function() print("xxxxxx") end
        -- cppBridge.sendToCpp(t)

return sdk
