local GLayer = require("graphic.core.GLayer");
local SelectServerLayer = class("SelectServerLayer", GLayer)

local leftType = {
	normalServer = 1,
	myServer = 2,
	myPlayer = 3,
}

function SelectServerLayer:ctor()
    GLayer.ctor(self)
    self:loadUiFile("ui.selectServer")
end

function SelectServerLayer:init()
    local t = {
        event.login.failed
    }
    self:registerEvents(t)

	self._ui.root.children.bg.children.start:addTouchEventListener( handler(self, self.handleClick_start) )

	self:createRight()
	self:createLeft()
end

function SelectServerLayer:handleEvent(e)
	if e.name == event.login.failed then
		event.broadcast( event.ui.pushText, {msg=e.data} )
	end  
end

function SelectServerLayer:createLeft()
	------------------------------------ 准备数据
	local leftDataList = {}

	if self:myPlayerCount() > 0 then 
		table.insert(leftDataList, {t=leftType.myPlayer})
	elseif self:myServerCount() > 0 then
		table.insert(leftDataList, {min=1, max=math.min(3, self:myServerCount()), t=leftType.myServer})
	end 

	local serverCnt = self:serverCount()
	local leftCnt = math.ceil(serverCnt/20)

	for i = leftCnt, 1, -1 do 
		local min = (i-1)*20+1
		local max = math.min(i*20, serverCnt)

		table.insert(leftDataList, {min=min, max=max, t=leftType.normalServer})
	end 
	-------------------------------------- 绑定容器

	self._slvLeft = self._ui.root.children.bg.children.slvLeft
	self._slvLeft:setParams({
			direction = ccui.ScrollViewDir.vertical,
			count = 1,
			rowInterval = 10,
		})

	self._slvLeft:onBind(function(idx, data) 
			local str = ""
			if data.t == leftType.myPlayer then 
				str = g_language:get("login_my_role")
			elseif data.t == leftType.myServer then 
				str = g_language:get("login_my_server")
			elseif data.t == leftType.normalServer then 
				str = g_language:format("login_server_area", data.min, data.max)
			end 

			local template = clone(self._uidata.root.children.bg.children.leftTemplate)
			template.skipCreate = nil
			template.children.lbl.text = str
			local node = astGUIBuilder():createInstance(template)
			node.data = data
			node:addTouchEventListener(handler(self, self.handleClick_left))

			if idx == 1 then 
				self:handleClick_left(node, ccui.TouchEventType.ended)
			end 
			return astGUIGrid():createCell(node)
		end)

	for k, v in ipairs(leftDataList) do 
		self._slvLeft:pushBack(v)
	end 
	self._slvLeft:refresh()
end 

function SelectServerLayer:createRight()
	self._slvRight = self._ui.root.children.bg.children.slvRight

	-------------------------------------- 配置服务器类型的列表并保存到缓存
	self._slvRight:setParams({
			direction = ccui.ScrollViewDir.vertical,
			count = 2,
			rowInterval = 10,
			colInterval = 10,
		})

	self._slvRight:onBind(function(idx, data) 
			local template = clone(self._uidata.root.children.bg.children.serverTemplate)
			template.skipCreate = nil
			local node = astGUIBuilder():createInstance(template)
			node.data = data
			node.idx = idx
			node:addTouchEventListener(handler(self, self.handleClick_server))

			return astGUIGrid():createCell(node)
		end, function(idx, data, cell)
			cell.children.lbl:setString(data.name)
		end, function(idx, data, cell)
			if idx == 1 then 
				self:selectServer(idx, cell)
			end 
		end)

	for i = 1, 20 do 
		self._slvRight:pushBack({})
	end 
	-- 构造20个然后隐藏
	self._slvRight:updateAll({}, false)
	-- 保存到缓存
	self._slvRight:saveToCache("server")

	-------------------------------------- 配置角色类型的列表并保存到缓存
	self._slvRight:setParams({
			direction = ccui.ScrollViewDir.vertical,
			count = 1,
			rowInterval = 10,
		})

	self._slvRight:onBind(function(idx, data) 
			local template = clone(self._uidata.root.children.bg.children.playerTemplate)
			template.skipCreate = nil
			template.children.headBg.children.head.res = "server_head_"..self:getMyPlayerPic(idx)..".png"
			template.children.lblName.text = self:getMyPlayerName(idx)
			template.children.lblLv.text = g_language:format("selectServer_level", self:getMyPlayerLv(idx))
			template.children.lblTime.text = g_language:format("selectServer_time", self:getMyPlayerLastLoginTime(idx))
			template.children.lblServer.text = self:getMyPlayerServerName(idx)
			template.children.lblVip.text = g_language:format("selectServer_vip", self:getMyPlayerVip(idx))
			template.children.lblVip.skipCreate = (self:getMyPlayerVip(idx) == 0)

			local node = astGUIBuilder():createInstance(template)
			node.data = data
			node.idx = idx
			node:addTouchEventListener(handler(self, self.handleClick_player))

			return astGUIGrid():createCell(node)			
		end,nil,
		function(idx, data, cell)
			if idx == 1 then 
				self:selectPlayer(idx, cell)
			end 
		end)

	-- 该列表不再变动，构造的时候就完整创建
	for i = 1, self:myPlayerCount() do 
		self._slvRight:pushBack({})
	end 
	-- 保存到缓存
	self._slvRight:saveToCache("player")
end 

function SelectServerLayer:handleClick_left(sender, eventType)
	if eventType == ccui.TouchEventType.ended then 
		local data = sender.data

		self._selectT = data.t
		-- 利用缓存切换容器
		if data.t == leftType.myPlayer then 
			self._slvRight:initFromCache("player")
			self:updatePlayer(data)
		else 
			self._slvRight:initFromCache("server")
			self:updateServer(data)
		end 
	end 
end 

function SelectServerLayer:selectServer(idx, cell)
	self:_hideAllSelectSprite()
	if not cell then return end 

	self._selectServer = idx

	if not self._selectRightSprite then
	    self._selectRightSprite = astGUI().createSprite("server_right_light.png")
	    self._slvRight:getContainer():addChild(self._selectRightSprite, 1000)
    end
	self._selectRightSprite:setPosition(cell:getPosition())
	self._selectRightSprite:setVisible(true)
end 

function SelectServerLayer:selectPlayer(idx, cell)
	self:_hideAllSelectSprite()
	if not cell then return end 

	self._selectPlayer = idx

    if not self._selectPlayerSprite then
	    self._selectPlayerSprite = astGUI().createSprite("server_role_light.png")
	    self._slvRight:getContainer():addChild(self._selectPlayerSprite, 1000)
    end
	self._selectPlayerSprite:setPosition(cell:getPosition())
	self._selectPlayerSprite:setVisible(true)
end 

function SelectServerLayer:_hideAllSelectSprite()
	if self._selectPlayerSprite then 
		self._selectPlayerSprite:setVisible(false)
	end 
	if self._selectRightSprite then 
		self._selectRightSprite:setVisible(false)
	end 
end 

function SelectServerLayer:handleClick_server(sender, eventType)
	if eventType == ccui.TouchEventType.ended then 
		self:selectServer(sender.idx, sender)
	end 
end 

function SelectServerLayer:handleClick_player(sender, eventType)
	if eventType == ccui.TouchEventType.ended then 
		self:selectPlayer(sender.idx, sender)
	end 
end 

function SelectServerLayer:updateServer(data)
	-- 全部隐藏
	self._slvRight:updateAll({}, false)

	-- 需要的显示并更新数据
	for i = data.min, data.max do 
		if data.t == leftType.myServer then 
			if self:isExistMyServer(i) then 
				self._slvRight:update(i, {name=self:getMyServerName(i)}, true)
			end 
		elseif data.t == leftType.normalServer then 
			self._slvRight:update(i, {name=self:getServerName(i)}, true)
		end 
	end 

	self._slvRight:refresh()

	self:selectServer(1, self._slvRight:getCellByIdx(1))
end 

function SelectServerLayer:updatePlayer(data)
	self._slvRight:refresh()

	self:selectPlayer(1, self._slvRight:getCellByIdx(1))
end 

function SelectServerLayer:handleClick_start(sender, eventType)
    if eventType == ccui.TouchEventType.ended then 
		self:setLoginServer()
		g_login:tryToLoginServer()
	end
end

function SelectServerLayer:setLoginServer()
	if self._selectT == leftType.myPlayer then 
		self:setServerFromMyPlayer(self._selectPlayer)
	elseif self._selectT == leftType.myServer then 
		self:setServerFromMyServer(self._selectServer)
	elseif self._selectT == leftType.normalServer then 
		self:setServerFromServer(self._selectServer)
	end
end

------------------------------------------------------------------
--服务器列表个数. 1-n
function SelectServerLayer:serverCount()
	return g_login._serverListCount
end

-- 我的服务器
function SelectServerLayer:myServerCount()
print("--> : ", #g_login._myServers)
	return #g_login._myServers
end

-- 我的角色
function SelectServerLayer:myPlayerCount()
	return #g_login._myPlayers
end

function SelectServerLayer:getMyPlayerPic(index)
	local data = g_login._myPlayers[index]
	return data.playerInfo.pic
end

function SelectServerLayer:getMyPlayerName(index)
	local data = g_login._myPlayers[index]
	return data.playerInfo.playerName
end

function SelectServerLayer:getMyPlayerLv(index)
	local data = g_login._myPlayers[index]
	return data.serverInfo.serverName
end

function SelectServerLayer:getMyPlayerLastLoginTime(index)
	local data = g_login._myPlayers[index]
	return data.playerInfo.lastLoginTime
end

function SelectServerLayer:getMyPlayerVip(index)
	local data = g_login._myPlayers[index]
	return data.serverInfo.vip
end

function SelectServerLayer:getMyPlayerServerName(index)
	local data = g_login._myPlayers[index]
	return data.serverInfo.serverName
end

function SelectServerLayer:isExistMyServer(index)
	local serverId = g_login._myServers[index]
	local server = g_login._serverList[serverId]
	if server then
		return true
	end

	return false
end

function SelectServerLayer:getMyServerName(index)
	local serverId = g_login._myServers[index]
	local server = g_login._serverList[serverId]
	return server.serverName
end

function SelectServerLayer:getServerName(index)
	local server = g_login._serverList[g_login._serverIndex[index]]
	return server.serverName
end

function SelectServerLayer:setServerFromMyPlayer(index)
	g_login._selectServer = g_login._myPlayers[index].serverInfo
	g_login._mySelectPlayerSSP = g_login._myPlayers[index].playerInfo.ssp
end

function SelectServerLayer:setServerFromMyServer(index)
	g_login._selectServer = g_login._serverList[g_login._myServers[index]]
end

function SelectServerLayer:setServerFromServer(index)
	g_login._selectServer = g_login._serverList[ g_login._serverIndex[index] ]
end


return SelectServerLayer
