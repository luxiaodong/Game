local GLayer = require("graphic.core.GLayer")
local RegisterLoginLayer = class("RegisterLoginLayer", GLayer)

local serverList = {
    { "文豪", "10.9.190.144:9921", "10.9.190.144", "9941" },
    { "楼圣铭", "10.9.190.66:9921", "10.9.190.66", "9941" },
    { "仲举", "10.9.190.169:9921", "10.9.190.169", "9941" },
}

function RegisterLoginLayer:ctor()
    GLayer.ctor(self)
end

function RegisterLoginLayer:init()
    GLayer.init(self)

    local go = self:loadUiPrefab("Assets/Prefabs/UI/register.prefab")

    local btn = go.transform:Find("login").gameObject
    self:registerClick(btn)

    local index = PlayerPrefs.GetString("test_login_serverIndex")
    if index == nil or index == "" then
        index = 0
    end
    local cmp = go.transform:Find("dropdown"):GetComponent( typeof(UI.Dropdown) )
    cmp.value = index
    self._dropdownCmp = cmp

    local name = PlayerPrefs.GetString("test_login_name")
    name = "a"
    local cmp = go.transform:Find("accountEdit"):GetComponent( typeof(UI.InputField) )
    cmp.text = name
    self._nameCmp = cmp

    local password = PlayerPrefs.GetString("test_login_password")
    password = "123"
    local cmp = go.transform:Find("passwordEdit"):GetComponent( typeof(UI.InputField) )
    cmp.text = password
    self._passwordCmp = cmp
end

function RegisterLoginLayer:handleClick(name)
    if name == "register" then
        self:handleClick_register()
    elseif name == "login" then
        self:handleClick_login()
    end
end

function RegisterLoginLayer:handleClick_register()
    PlayerPrefs.SetString("test_login_serverIndex", self._dropdownCmp.value)

    local name = self._nameCmp.text
    local password = self._passwordCmp.text

    if string.len(name) == 0 or string.len(password) == 0 then
        print("name or password is empty.")
        return
    end

    local index = self._dropdownCmp.value + 1
    index = 1
    local server = serverList[index] or serverList[1]

    self:registerBgGateway(server, name, password, function(code, context) 
        if code == 200 then
            local data = json.decode(context)
            if data then
                if data.state == 1 then
                    event.broadcast( event.ui.pushText, {msg=g_language:get("login_register_ok")} )
                else
                    event.broadcast(event.ui.messagebox, {type=enum.ui.messagebox.type.info, msg=data.data.msg} )
                end
            end
        end
    end)
end

function RegisterLoginLayer:handleClick_login()
    
    PlayerPrefs.SetString("test_login_serverIndex", self._dropdownCmp.value)

    local name = self._nameCmp.text
    local password = self._passwordCmp.text

    if string.len(name) == 0 or string.len(password) == 0 then
        print("name or password is empty.")
        return ;
    end

    local index = self._dropdownCmp.value + 1
    index = 1
    local server = serverList[index] or serverList[1]

    self:loginByGateway(server, name, password, function(code, context)
        print("code is ", code)
        if code == 200 then
            local data = json.decode(context)
            if data.state == 1 then
                service._gateway = data.data.gateway
                service._gameServer = data.data.gameServer

                -- g_login._selectServer = {}
                -- g_login._selectServer.statusValue = 1
                -- g_login._selectServer.ip = data.data.gateway.host
                -- g_login._selectServer.port = data.data.gateway.port
                -- g_login._selectServer.serverId = data.data.gateway.serverId
                -- g_login._selectServer.serverName = "外网测服"

                -- 对于sdk登录那块,需要重构下
                g_login:requestLoginGameWithSession()
            else
                event.broadcast(event.ui.messagebox, {type=enum.ui.messagebox.type.info, msg=data.data.msg} )
            end
        end
    end)    
end

function RegisterLoginLayer:registerBgGateway(server, name, password, callback)
    local action = "command=user@createUser&userName="..name.."&password="..password.."&yx=aoshitang"
    local url = "http://"..server[2].."/root/gateway.action?"..action
    local http = require("network.GHttp").create()
    http:get(url, callback)
end

function RegisterLoginLayer:loginByGateway(server, name, password, callback)
    local action = "command=user@login&userName="..name.."&password="..password.."&channelId=0&ip="..server[3].."&port="..server[4]
    local url = "http://"..server[2].."/root/gateway.action?"..action
    local http = require("network.GHttp").create()
    http:get(url, callback)
end

--用于账号密码直连服务器
function RegisterLoginLayer:loginByServers(ip, port, name, password)
    g_login._selectServer = {}
    g_login._selectServer.statusValue = 1
    g_login._selectServer.ip = ip --"10.9.190.144" --list[1] --"10.9.200.28"
    g_login._selectServer.port = port -- 9921 -- list[2] --
    g_login._selectServer.serverId = "0"
    g_login._selectServer.serverName = "外网测服"
    g_login._selectServer.name = name
    g_login._selectServer.password = password
    g_login:tryToLoginServer()
end

return RegisterLoginLayer
