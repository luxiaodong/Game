local TestLayer = require("graphic.test.TestLayer")
local TestSdkLayer = class("TestSdkLayer", TestLayer)

function TestSdkLayer:ctor()
	TestLayer.ctor(self)
end

function TestSdkLayer:init()
	TestLayer.init(self)
    self:customLayout()

    nativeBridge.init()
end

function TestSdkLayer:clickInit()
    print("init")
    sdk.init(function(result)
        if result == enum.sdk.result.success then 
            self._txtGo:GetComponent(typeof(UI.Text)).text = "init ok"
        else
            self._txtGo:GetComponent(typeof(UI.Text)).text = "init failed"
        end
    end)
end

function TestSdkLayer:clickLogin()
    print("login")
    sdk.login(function() 
        self._txtGo:GetComponent(typeof(UI.Text)).text = "init test"
    end)
end

function TestSdkLayer:clickPay()
    print("pay")
    sdk.submit(enum.sdk.submitPoint.enterGame)
end

function TestSdkLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Login", Vector2(0,100), Vector2(122,62), handler(self, self.clickLogin))
    self:createButtonWithText(self._go.transform, "Init", Vector2(-200,100), Vector2(122,62), handler(self, self.clickInit))
    self:createButtonWithText(self._go.transform, "Pay", Vector2(200,100), Vector2(122,62), handler(self, self.clickPay))
    self._txtGo = self:createText(self._go.transform, "0", Vector2(0,0), Vector2(800,400))
end

return TestSdkLayer
