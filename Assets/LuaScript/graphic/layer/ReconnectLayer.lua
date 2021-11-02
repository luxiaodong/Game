
local GLayer = require("graphic.core.GLayer")
local ReconnectLayer = class("ReconnectLayer",GLayer)

function ReconnectLayer:ctor()
	GLayer.ctor(self)

    self._lastSyncTime = 0
    self._reconnectCount = 0 --重连次数
end

function ReconnectLayer:init()
    GLayer.init(self)

    local t = {
        event.network.heartbeat,
        event.network.connectToServer,
        event.network.disconnectByServer,
        event.network.disconnectByNetwork,
    }

    self:registerEvents(t)
end

function ReconnectLayer:handleEvent(e)
    if e.name == event.network.disconnectByServer then
        self:print("disconnectByServer")
        local data = {}
        data.type = enum.ui.messagebox.type.info
        data.msg = e.data.msg
        data.yesCallback = handler(self, self.requestVersionInfo)
        event.broadcast(event.ui.messagebox, data)
    elseif e.name == event.network.disconnectByNetwork then
        self:print("disconnectByNetwork")
        --点重连, 点返回登录, 重连不行后, 只有返回登录.
        local data = {}
        data.type = enum.ui.messagebox.type.question
        data.msg = "是否重连"
        data.yesCallback = handler(self, self.requestVersionInfo)
        data.noCallback = handler(self, self.syncHeart)
        event.broadcast(event.ui.messagebox, data)
    elseif e.name == event.network.connectToServer then
        self:print("connectToServer")
        self._reconnectCount = 0

        self._lastSyncTime = os.time()
        CS.Game.GScheduler.DelayCall(60, handler(self, self.syncHeart))
    elseif e.name == event.network.heartbeat then
        --普通协议通着,心跳包重新计时
        self._lastSyncTime = os.time()
    end
end

function ReconnectLayer:syncHeart()
    local currentTime = os.time()
    if currentTime - self._lastSyncTime > 59 then
        network.request(nil, protocol.system.heart)
        self._lastSyncTime = currentTime
        CS.Game.GScheduler.DelayCall(60, handler(self, self.syncHeart))
    else
        local delt = 60 - (currentTime - self._lastSyncTime)
        CS.Game.GScheduler.DelayCall(delt, handler(self, self.syncHeart))
    end
end

-- 重连要请求版本信息.
function ReconnectLayer:requestVersionInfo()
    local channelId = sdk._channelId
    local yxSource = sdk._yxSource
    local clientVersion = PlayerPrefs.GetString("game_cppVersion")
    local gameVersion = PlayerPrefs.GetString("game_luaVersion")
    local packageType = 0 --PlayerPrefs.GetString("ast_packageType")
    local buildNumber = 0
    network.requestVersionInfo(handler(self, self.gotVersionInfo), channelId, yxSource, clientVersion, gameVersion, packageType, buildNumber)
end

function ReconnectLayer:gotVersionInfo(code, context)
    print("version info: ", code, context)
    local data = {}
    if code == 200 then
        data = json.decode(context)
        if data.errorMsg ~= nil then
            data.state = 0 --让它走重连
        end
    else
        data.state = 0
    end

    -- 0:无需更新, 1:资源动态更新, 2:推荐强制更新, 3:必需强制更新
    local state = data.state
    if state == 0 then
        self:tryToReconnect()
    else
        g_system:restartGame()
    end
end

function ReconnectLayer:tryToReconnect()
    if self._reconnectCount >= 3 then
        g_system:restartGame()
        return
    end

    local function connectResult(code)
        if code == enum.server.tcpState.success then
            local sessionId = PlayerPrefs.GetString("login_session")
            self:request(protocol.player.loginWithSession, sessionId)
        else
            self._reconnectCount = self._reconnectCount + 1
            self:tryToReconnect()
        end
    end

    network.connect(g_login._selectServer.ip, g_login._selectServer.port, connectResult)
end

function ReconnectLayer:handleProtocol(name, data)
    if name == protocol.player.loginWithSession.name then
        self:reconnectSuccess()
    end
end

function ReconnectLayer:handleProtocolError(name, data)
    if name == protocol.player.loginWithSession.name then
        g_system:restartGame()
    end
end

function ReconnectLayer:reconnectSuccess()
    -- 这里如何恢复数据,不同界面可能处理不一样, 请求玩家信息
    -- 还是发消息出去算了
end

return ReconnectLayer
