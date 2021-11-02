local TestLayer = require("graphic.test.TestLayer")
local TestAudioLayer = class("TestAudioLayer", TestLayer)

function TestAudioLayer:ctor()
    TestLayer.ctor(self)
end

function TestAudioLayer:init()
    TestLayer.init(self)
    self:customLayout()
end

function TestAudioLayer:playBGM()
    local temp = {}
    temp.fileName = "Assets/Audios/battle3.mp3"
    temp.group = enum.audio.group.background
    temp.isLoop = true
    event.broadcast(event.audio.play, temp)
end

function TestAudioLayer:playEffect()
    local temp = {}
    temp.fileName = "Assets/Audios/daKaiBaoXiang.mp3"
    temp.callback = function() print("effect over") end
    event.broadcast(event.audio.play, temp)
end

function TestAudioLayer:customLayout()
    self:createButtonWithText(self._go.transform, "BGM", Vector2(-100,100), Vector2(122,62), handler(self, self.playBGM))
    self:createButtonWithText(self._go.transform, "Effect", Vector2(100,100), Vector2(122,62), handler(self, self.playEffect))
end

return TestAudioLayer

