
local GLogin = class("GLogin")

--.登录支持三种情况.
--1.内网登录 registerLayer写死服务器, 直接账号密码验证登录, 获得sessiond登录
--2.外网账密登录 registerLayer存储账号密码, 拉取服务器列表, 选服, 账号密码验证登录, 获得session
--3.外网sdk登录 sdkLoginLayer唤醒sdk, sdk登录成功, 拉取服务器列表, 登录中控, 获得session
--1.2获得session的同时, 已与服务器建立连接, 3时还要调用发送session建立连接确认

function GLogin:ctor()
	self._isAutoLoginSdk = false --第一次是否自动登录sdk.
	self._skipSelectServer = false --是否跳过选服
	self._skipSelectPlayer = false --是否跳过选角色

	if config.isSdkLogin then
		self._skipSelectPlayer = true --sdk登录默认跳过选角色
	end

    --获得token后, 防止因为后续步骤失败，导致重新获取token.
    self._isGotToken = false
    self._isUseToken = false

	--角色选服存储变量
	-------------------------------------------
	self._myPlayers = {} --我的角色
	self._myServers = {} --我的服务器
	self._serverList = {} --服务器发过来的数据
	self._serverIndex = {} --整理后的数据,按自然数映射到serverId.
	self._recommendServerIndex = {} --推荐服
	self._serverListCount = 0 --服务器总数 

	self._mySelectPlayerSSP = 0 --我的角色中选中的角色的ssp
	self._selectServer = nil
	self._isGotServerList = false --是否获得过开服列表
	-------------------------------------------

	--角色列表信息,每个游戏可以不一致.
	self._playerList = nil
	--self._selectIndex = 1 --记录选择角色的索引, 以后可能记录创建选择的索引

	--返回登录
	self._isBackLogin = false
	self._backToWitchLayer = "" --返回到哪一层
end

function GLogin:init()
end

--请求登录sdk
function GLogin:requestLoginSDK(callback)
	--获得token但没有使用过
	if self._isGotToken == true and self._isUseToken == false then
		self:requestServerList();
		return ;
	end

	self._isGotToken = false
	self._isUseToken = false

	sdk.login(callback)
end

--请求开服列表
function GLogin:requestServerList()
	if self._isGotServerList == true then
		self:tryToAutoSelectServer()
		return ;
	end

	if sdk._userId then
		local buildNo = 0
		log.tracePoint("getServerList")
		network.requestServerList( handler(self, self.parseServerList), sdk._channelId, sdk._yxSource, buildNo, sdk._userId, "")
		return 
	end

	self:requestGetUserId()
end

--请求中控获得userId
function GLogin:requestGetUserId()
	local function callback(code, context)
		local gotUserId = 0 
		if code == 200 then
			print("context: ", context)
			local data = json.decode(context)
			if data and data.data then
				if data.data.userId then
					gotUserId = data.data.userId
				end
			end
		end

		--抓不到的话就用0登录,不能卡这
		sdk._userId = gotUserId
		self:requestServerList()
	end

	network.requestGetUserId(callback, sdk._yxGetUserIdUrl)
end

function GLogin:parseServerList(code, context)
	-- data.zoneList 暂时不用分区字段, ui要换.
	-- data.myServerList 是否我的列表里面.
	-- data.lastestZoneServerList
	print("server list:", code, context)

	if code ~= 200 then
		event.broadcast( event.login.failed, g_language:get("loginFailed_downloadServerList") )
		return 
	end

	local data = json.decode(context)

	if data.errorMsg ~= nil then
		event.broadcast( event.login.failed, g_language:get("loginFailed_serverListFormat") )
		return 
	end

	log.tracePoint("gotServerList")

	--1. 先处理我的角色. 按登录时间顺序排序
	--TODO 还要处理角色是否被删除
	table.sort( data.myServerList, handler(self, self.sortMyServer) )
	self._myPlayers = data.myServerList

	--2. 处理本地的缓存开服列表数据
	self._myServers = {}
	for i=1,3 do --只记录最近登陆的3个服
		local serverId = PlayerPrefs.GetString("last_login_serverId_"..i)		
		if serverId ~= nil and serverId ~= "" then
			self._myServers[i] = serverId
		end
	end

	--3. 再处理开服列表, 先排序
	table.sort( data.lastestZoneServerList, handler(self, self.sortServer) )

	self._serverList = {}
	self._serverListCount = 0
	--构造服列表数据. 标记推荐服
	self._recommendServerIndex = {}
	for i,v in ipairs(data.lastestZoneServerList) do
		--过滤掉 即将开启的服
		if v.statusValue ~= 0 then
			self._serverListCount = self._serverListCount + 1
			self._serverIndex[self._serverListCount] = v.serverId
			self._serverList[v.serverId] = v

			if v.statusValue == 2 then
				table.insert(self._recommendServerIndex, v.serverId)
			end
		end
	end

	self._isGotServerList = true
	self:tryToAutoSelectServer()
end

function GLogin:tryToAutoSelectServer()
	--弹出选服界面
	if self._skipSelectServer == false then
		event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.selectServer})
		return false
	end

	--选择哪个服进游戏, 先置空
	self._selectServer = nil
	self._mySelectPlayerSSP = 0 --标记没有选过
	
	--1.根据服务器的登录记录
	if #self._myPlayers > 0 then
		local loginServer = self._myPlayers[1].serverInfo
		if loginServer ~= nil then
			self._selectServer = loginServer
			local playerInfo = self._myPlayers[1].playerInfo
			self._mySelectPlayerSSP = playerInfo.ssp
		end
	end

	--2.根据本地存储的
	if self._selectServer == nil then
		self._selectServer = self._serverList[self._myServers[1]] --这个id可能在这里找不到了
	end

	--3.直接进推荐服
	if self._selectServer == nil then
		--有多个推荐服时, 随机进入
		local count = #self._recommendServerIndex
		if count > 0 then
			local index = math.random(#self._recommendServerIndex)
			local serverId = self._recommendServerIndex[index]
			self._selectServer = self._serverList[serverId] --后端标记的推荐服
		end
	end

	--4.直接进最新服
	if self._selectServer == nil then
		local newestServerId = self._serverIndex[ #self._serverIndex ]
		if newestServerId ~= nil then
			local loginServer = self._serverList[newestServerId]
			if loginServer ~= nil then
				self._selectServer = loginServer
			end
		end
	end

	--5.一个服都没有,完蛋了,报警吧.
	if self._selectServer == nil then
		print("warning, select server is null.")
		event.broadcast( event.login.failed, g_language:get("loginFailed_serverListEmpty") )
		return 
	end

	--6.第一次进,直接跳过选服列表
	if self._skipSelectServer == true then
		self:tryToLoginServer()
	end
end

function GLogin:tryToLoginServer()
	if self._selectServer == nil then
		print("select server is null.")
		return 
	end

	log._serverId = self._selectServer.serverId
	print("serverId:", self._selectServer.serverId )
	print("serverName:", self._selectServer.serverName )

	if self._selectServer.statusValue == 4 then --维护状态
		if self._skipSelectServer then
			self._skipSelectServer = false
			event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.selectServer})
		else
			event.broadcast( event.login.failed, g_language:get("loginFailed_serverStatue4") )
		end
		return 
	end

	if config.isSdkLogin then
		self:requestLoginProxy()
	else
		self:requestLoginWithNamePassword()
	end
end

--请求登陆中控
function GLogin:requestLoginProxy()
	local function callback(code, context)
		print("proxy code: ", code)
		print("proxy context: ", context)
		if code == 200 then
			local data = json.decode(context)
			if data and data.data then
				if data.data.sessionId then
					print("sessionId :", data.data.sessionId)
        			log.tracePoint("gotSession")
        			PlayerPrefs.SetString("login_session", data.data.sessionId)

        			--中控登录成功
        			self:requestLoginGameWithSession(data.data.sessionId)
        			return --必须返回
				end
			end
		end

		event.broadcast( event.login.failed, g_language:get("loginFailed_proxyFailed") )
	end

	--不管是否返回正确,都标记已用过
	self._isUseToken = true
	log.tracePoint("loginProxy")
	network.requestLoginProxy(callback, sdk._yxLoginUrl, self._selectServer.host)
end

--请求登陆游戏服
function GLogin:requestLoginGameWithSession()

	local function connectResult(isSuccess)
		if isSuccess then
			service.reconnect(handler(self, self.handleProtocol))
		else
			event.broadcast( event.login.failed, g_language:get("network_connect_failed") )	
		end
	end

	service.connect(connectResult)
end

--测服直接用帐号密码登录
--目前该函数已弃用,账号密码用http请求登录
function GLogin:requestLoginWithNamePassword()
	local function connectResult(isSuccess)
		if isSuccess then
			service.send( handler(self, self.handleProtocol), protocol.player.login, self._selectServer.name, self._selectServer.password)
		else
			event.broadcast( event.login.failed, g_language:get("network_connect_failed") )
		end
	end

	service.connect(self._selectServer.ip, self._selectServer.port, connectResult)
end

function GLogin:handleProtocol(name, data)
	if name == protocol.player.login.name then --这支是给测服用的.
		print("sessionId :", data.sessionId)
        PlayerPrefs.SetString("login_session", data.sessionId)

        self:loginSuccess()
		PlayerPrefs.SetString("test_login_name", self._selectServer.name)
    	PlayerPrefs.SetString("test_login_password", self._selectServer.password)
	elseif name == protocol.player.loginWithSession.name then 
		service.setServerTypeAndID(self._gameServer.serverType, self._gameServer.serverId)

		service.send(handler(self, self.handleProtocol), protocol.player.list, "ios")
		print("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx") -- self:loginSuccess()
	elseif name == protocol.player.list.name then
		log.tracePoint("gotPlayerList")
		if #data.playerList == 0 then
			--发送通知创建角色
			print("data.playerList is empty.")
			self:test() --每个游戏可能不一样
			--event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.createPlayer})
		else
			--直接登录最近的游戏角色, 最近登录的号
			--暂时没有回到选服，选角色，否则要测试下
			self._playerList = data.playerList
			table.sort( self._playerList, handler(self, self.sortPlayer) )
			self:handlePlayerList()
		end
	elseif name == protocol.player.create.name then
		g_player:getPlayerInfo(data.playerId)
	elseif name == protocol.player.info.name then
		sdk.submit(enum.sdk.submitPoint.enterGame)
		self:enterGame()
	end
end

--登录成功
function GLogin:loginSuccess()
	self:requestPlayerList()
	self:storeLastLoginServer()
end

--登陆进去了再调用.
function GLogin:storeLastLoginServer()
	if self._selectServer == nil then
		return 
	end

	local sid = self._selectServer.serverId
	local list = {}
	local findIndex = 0
	for i=1,3 do
		list[i] = PlayerPrefs.GetString("last_login_serverId_"..i)
		if sid == list[i] then
			findIndex = i
		end
	end

	if findIndex == 0 then --没找到
		for i=1,2 do
			if list[i] ~= nil and list[i] ~= "" then
				PlayerPrefs.SetString("last_login_serverId_"..(i+1), list[i])
			end
		end
		PlayerPrefs.SetString("last_login_serverId_1", sid)
		PlayerPrefs.Save()
	else
		if findIndex > 1 then --第一个的话啥都不用做了
			for i=1,findIndex-1 do
				PlayerPrefs.SetString("last_login_serverId_"..(i+1), list[i])
			end
			PlayerPrefs.SetString("last_login_serverId_1", list[findIndex])
			PlayerPrefs.Save()
		end
	end
end

--请求角色列表
function GLogin:requestPlayerList()
	print("GLogin:requestPlayerList")
	service.send(handler(self, self.handleProtocol), protocol.player.list, "ios")
end

--处理玩家列表
function GLogin:handlePlayerList()
	--检查下这个角色是否是删除状态
	--TODO

	if self._mySelectPlayerSSP == 0 then
		if self._skipSelectPlayer == true then
			self:selectedPlayer(1)
		else  
			if #self._playerList == 1 then
				self:selectedPlayer(1)
			else
				event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.selectPlayer})
			end
		end
	else
		local findIndex = 0
		
		for i,v in ipairs(self._playerList or {}) do
			if v.ssp == self._mySelectPlayerSSP then
				findIndex = i
				break;
			end
		end

		if findIndex == 0 then
			--这个角色已经被删除.
			event.broadcast(event.ui.changeLayer, {name=enum.ui.layer.selectPlayer})
		else
			self:selectedPlayer(findIndex)
		end			
	end
end

--选定玩家登录请求游戏数据
--这个接口离开登录模块
function GLogin:selectedPlayer(index)
	print("selected player :", index)
	local playerId = self._playerList[index].playerId
	service.send( handler(self, self.handleProtocol), protocol.player.info, playerId)
end



--按最后登录时间排序
function GLogin:sortMyServer(a, b)
	return a.playerInfo.lastLoginTime > b.playerInfo.lastLoginTime
end

--按开服时间排序
function GLogin:sortServer(a, b)
	return a.onlineDate < b.onlineDate
end

--按最后登陆时间排序
function GLogin:sortPlayer(a, b)
	return a.playerLv > b.playerLv
    -- if a.playerState == b.playerState then 
	   --  return a.loginTime > b.loginTime
    -- else
    --     return a.playerState < b.playerState 
    -- end 
end

function GLogin:enterGame()
	event.broadcast(event.ui.changeScene, {name=enum.ui.scene.test})
end

--返回登录, 返回到哪一层
function GLogin:backToLogin(name)
	if name == enum.ui.layer.sdkLogin
	or name == enum.ui.layer.selectServer
	or name == enum.ui.layer.selectPlayer then
		service.disconnect()
        -- self._isAutoLoginSdk = true --再次登录是否自动登录
		self._isBackLogin = true
		self._isGotServerList = false
		self._skipSelectServer = false
		self._skipSelectPlayer = false
		self._backToWitchLayer = name

		if g_system:currentSceneName() == enum.ui.scene.login then
            --event.broadcast(event.ui.clearPopupLayers)
			event.broadcast(event.ui.changeLayer, {name=name})
		else
			event.broadcast(event.ui.changeScene, enum.ui.scene.login)
		end
	end
end

------------------------------------------------------------------------------------

function GLogin:test()
	service.send( handler(self, self.handleProtocol), protocol.player.create, "张三", "1")
	--event.broadcast(event.ui.changeScene, enum.ui.scene.test)
	--event.broadcast(event.ui.popupLayer, enum.ui.layer.gm)
end

return GLogin 
