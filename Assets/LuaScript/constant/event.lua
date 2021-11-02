event = {}

event.camera = {}
event.camera.bindRender = "event.camera.bindRender"
event.camera.unbindRender = "event.camera.unbindRender"
event.camera.follow = "event.camera.follow"
event.camera.replaceShader = "event.camera.replaceShader"

event.audio = {}
event.audio.play = "event.audio.play"
event.audio.stop = "event.audio.stop"
event.audio.pause = "event.audio.pause"
event.audio.resume = "event.audio.resume"
event.audio.volume = "event.audio.volume"
event.audio.mute = "event.audio.mute"

event.ui = {}
event.ui.replaceUnityScene = "event.ui.replaceUnityScene"
event.ui.appendUnityScene = "event.ui.appendUnityScene"
event.ui.removeUnityScene = "event.ui.removeUnityScene"
event.ui.changeScene = "event.ui.changeScene"
event.ui.changeLayer = "event.ui.changeLayer"
event.ui.popupLayer = "event.ui.popupLayer"
event.ui.closeLayer = "event.ui.closeLayer" --针对popup取反
event.ui.appendTabLayer = "event.ui.appendTabLayer" --只针对tabLayer
event.ui.removeTabLayer = "event.ui.removeTabLayer" --只针对tabLayer
event.ui.messagebox  = "event.ui.messagebox"
event.ui.loading = "event.ui.loading" --切场景时显示进度条
event.ui.tips = "event.ui.tips"
event.ui.showMask = "event.ui.showMask"
event.ui.openWebView = "event.ui.openWebView"
event.ui.pushText = "event.ui.pushText"
event.ui.splashScreen = "event.ui.splashScreen"
event.ui.dialog = "event.ui.dialog"
event.ui.transition = "event.ui.transition"

event.ui.guide = {}
event.ui.guide.append = "event.ui.guide.append"
event.ui.guide.pauseForClosePopup = "event.ui.guide.pauseForClosePopup"
event.ui.guide.resumeAfterClosePopup = "event.ui.guide.resumeAfterClosePopup"

event.login = {}
event.login.failed = "event.login.failed"
event.login.goback = "event.login.goback" --返回登录

event.task = {}
event.task.preview = "event.task.preview"
event.task.update = "event.task.update"

event.battle = {}
event.battle.fire = "event.battle.fire"
event.battle.joystick = "event.battle.joystick"

event.battle.avatar = {}
event.battle.avatar.create = "event.battle.avatar.create"
event.battle.avatar.pos = "event.battle.avatar.pos"

event.chat = {}
event.chat.recvChat = "event.chat.recvChat"
event.chat.privateName = "event.chat.privateName"
event.chat.leaveChat = "event.chat.leaveChat"
event.chat.voice2Msg = "event.chat.voice2Msg"

-- event.player = {
-- 	init = {name="event.player.init", args=""},
-- 	reconnect = {name="event.player.reconnect", args=""}, --玩家重连后得到数据
-- 	levelup = {name="event.player.levelup", args=""},
-- 	expChanged = {name="event.player.expChanged", args=""},
-- 	goldChanged = {name="event.player.goldChanged", args=""},
-- }

event.network = {}
event.network.showModel = "event.network.showModel"
event.network.hideModel = "event.network.hideModel"
event.network.protocolException = "event.network.protocolException"
event.network.connectToServer = "event.network.connectToServer"
event.network.disconnectByServer = "event.network.disconnectByServer"
event.network.disconnectByNetwork = "event.network.disconnectByNetwork"
event.network.heartbeat = "event.network.heartbeat"

event.csharp = {}
event.csharp.removeInvoke = "event.csharp.removeInvoke"

event.backgroundDownload = {}
event.backgroundDownload.update = "event.backgroundDownload.update"
event.backgroundDownload.result = "event.backgroundDownload.result"

-- event.system = {
-- 	memoryWarning = {name="event.system.memoryWarning", args=""}, --收到内存警告
-- 	resize = {name="event.system.resize", args=""}, --切换分辨率
--     reload = {name="event.system.reload", args=""}, --退回登录场景时清理资源
--     enterSavePowerMode = {name="event.system.enterSavePowerMode", args=""}, -- 进入省电模式
--     leaveSavePowerMode = {name="event.system.leaveSavePowerMode", args=""},	-- 退出省电模式
-- }

function event.broadcast(name, data)
    -- print("event.broadcast :", name)
    -- print("event.broadcast :", name, data)
	event.dispatch({name=name, data=data})
end

event._listeners = {}
event._isPause = false
function event.addListener(name, callback)
    if name == nil or name == "" then return false end
    if callback == nil then return false end

    if not event._listeners[name] then
        event._listeners[name] = {}
    end

    table.insert(event._listeners[name], callback)
    return true
end

function event.removeListener(name, callback)
    if name == nil or name == "" then return false end
    if callback == nil then return false end
    if not event._listeners[name] then return false end

    for i,v in ipairs(event._listeners[name]) do
        if v == callback then
            table.remove(event._listeners[name], i)
            return true
        end
    end

    return false
end

function event.dispatch(t)
    if event._isPause then return end
    if not event._listeners[t.name] then return end

    for i,callback in ipairs(event._listeners[t.name]) do
        callback(t)
    end
end

function event.pause()
    event._isPause = true
end

function event.resume()
    event._isPause = false
end

function event.stop()
    event._listeners = {}
    event._isPause = false
end
