
protocol = {}
protocol.system = {}
protocol.system.heart = {name="system@heartbeat", args="", notModal=true} --心跳接口
--protocol.system.reconnect = {name="reconnect", args=""} --重连
protocol.system.gm = {name="gm@gmcommand", args="cmd=%s"} --GM
protocol.system.version = {name="version", args=""}

protocol.player = {}
protocol.player.create = {name="user@createUser", args="userName=%s&password=%s"} --内网账号密码登录
protocol.player.login = {name="user@login", args="userName=%s&password=%s"} --内网账号密码登录
protocol.player.loginWithSession = {name="reconnect", args="sessionId=%s", notModal=true} --外网中控登陆接口
protocol.player.logout = {name="user@logout", args="", notModal=true} --登出

protocol.player.createSelect = {name="player@getRandomRoleNames", args="male=%s"} -- 玩家创建选择
protocol.player.createDone = {name="player@createRole", args="pic=%s&playerName=%s"} -- 玩家创建确定
protocol.player.delete = {name="player@deleteRole", args="playerId=%s"} --删除角色
protocol.player.recover = {name="player@recoverRole", args="playerId=%s"} --恢复角色

protocol.player.list = {name="player@getPlayerList", args = "platform=%s"} -- 玩家列表
protocol.player.info = {name="player@getPlayerInfo", args="playerId=%s"} --玩家信息
protocol.player.create = {name="player@createRole", args="playerName=%s&pic=%s"}

protocol.player.createPayOrder = {name="pay@createPayOrder", args="itemId=%s"} --支付创建接口

--系统
protocol.player.registerIdfa = {name="device@registerIdfa", args="idfa=%s", notModal=true}
protocol.player.registerSid = {name="player@registerSid", args="sid=%s&channelFlag=%s", notModal=true}
protocol.player.regPushToken = {name="player@regPushToken", args="token=%s", notModal=true}

--聊天
protocol.chat = {}
protocol.chat.speak = {name="chat@speak", args="id=%s&time=%s&chatType=%s&to=%s"}

--推送, 放最后
protocol.push = {}
protocol.push.player = {name="push@player", args=""}
protocol.push.task = {name="push@task", args=""}
protocol.push.chat = {name="push@chat", args=""}
