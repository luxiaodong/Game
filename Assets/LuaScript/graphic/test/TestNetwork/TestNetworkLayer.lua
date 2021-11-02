local TestLayer = require("graphic.test.TestLayer")
local TestNetworkLayer = class("TestNetworkLayer", TestLayer)

function TestNetworkLayer:ctor()
	TestLayer.ctor(self)
end

function TestNetworkLayer:init()
	TestLayer.init(self)
    self:customLayout()
end

function TestNetworkLayer:testHttp()
    local url = "http://www.baidu.com"
    local http = require("network.GHttp").create()
    http:get(url, function(code, msg)
        self._txtGo:GetComponent(typeof(UI.Text)).text = tostring(code.."\n"..msg)
    end)
end

function TestNetworkLayer:testTcp()
    local ip = "39.105.206.138"
    local port = "8340"
    local tcp = require("network.GTcp").create()
    tcp:init(0,function(id, state) 
                if state == enum.tcpConnectState.success then
                    self._txtGo:GetComponent(typeof(UI.Text)).text = tostring(state)
                    local protocol = {}
                    protocol.name = "user@login" --"user@createUser"
                    protocol.args = "userName=abc&password=123456&yx=ios"
                    tcp:send(protocol,1)
                end
            end, 
            nil,
            function(id, requestId, protocolName, state, data)
                if protocolName == "user@login" then
                    self._txtGo:GetComponent(typeof(UI.Text)).text = tostring(data.sessionId)
                end
            end)
    tcp:connect(ip, port)
end

function TestNetworkLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Tcp", Vector2(-100,100), Vector2(122,62), handler(self, self.testTcp))
    self:createButtonWithText(self._go.transform, "Http", Vector2(100,100), Vector2(122,62), handler(self, self.testHttp))
    self._txtGo = self:createText(self._go.transform, str, Vector2(0,0), Vector2(800,400))
end

return TestNetworkLayer
