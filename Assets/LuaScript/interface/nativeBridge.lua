nativeBridge = {}
nativeBridge._isInited = false
nativeBridge._funcMap = {}

--接收消息和发送消息
function nativeBridge.receiveFromNative(str)
	print("receive from native:",str)
	local t = json.decode(str)

	if t.result == enum.sdk.result.success then
		if t.action == enum.sdk.action.init then
			sdk.setArgs(t)
		elseif t.action == enum.sdk.action.login then
			sdk.login_success(t)
		elseif t.action == enum.sdk.action.pay then
			--支付宝要特殊处理
		elseif t.action == enum.sdk.action.switch then
			--获得token和url,返回到登录界面,重新登录, 参考 login_success
		elseif t.action == enum.sdk.action.logout then --sdk先登出,游戏收到的消息
			event.broadcast(event.login.goback)
			g_login:backToLogin(enum.ui.layer.sdkLogin)
		elseif t.action == enum.system.network.changed then
			--网络变更
		elseif t.action == enum.backgroundDownload.update then
			event.broadcast(event.backgroundDownload.update, t)
		elseif t.action == enum.backgroundDownload.result then
			event.broadcast(event.backgroundDownload.result, t)
		end
	end

	local callback = nativeBridge._funcMap[t.action]
	if callback then
		nativeBridge._funcMap[t.action] = nil
		callback(t.result, t)
	end
end

function nativeBridge.sendToNative(t)
	if nativeBridge._isInited == false then
		return 
	end

	local str = json.encode(t)
	print("send to native:",str)
	CS.Game.GNativeBridge.GetInstance():SendToNative(str)
end

function nativeBridge.sendToNative(t)
	if nativeBridge._isInited == false then
		return 
	end

	nativeBridge._funcMap[t.action] = t.callback
	t.callback = nil
	local str = json.encode(t)
	print("send to native:",str)
	CS.Game.GNativeBridge.GetInstance():SendToNative(str)
end

function nativeBridge.init()
	CS.Game.GNativeBridge.GetInstance():RegisterLuaFunction(nativeBridge.receiveFromNative)
	nativeBridge._isInited = true
end

return nativeBridge
