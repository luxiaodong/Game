local TestLayer = require("graphic.test.TestLayer")
local TestPoolLayer = class("TestPoolLayer", TestLayer)

function TestPoolLayer:ctor()
	TestLayer.ctor(self)
end

function TestPoolLayer:init()
	TestLayer.init(self)
    self:customLayout()
    self._flag = true
end

function TestPoolLayer:testCreate()
    local prefabPath = "Sandbox/Prefabs/Particles/fire.prefab"
    if self._flag then
        self._flag = false
        g_objectPools:addPrefab(prefabPath, 5, true) --预设5个,有上线
    end

    local go = g_objectPools:instance(prefabPath)
    if go then
        go.layer = enum.unity.layer.ui
        go.transform.position = Vector3(math.random()*800 - 400,0,0)
        go.transform:SetParent(self._go.transform, false)

        -- play on awake只在第一次生效. 复用需要自己屌用play
        g_3dTools:setParticlePlay(go)

        --10秒后删掉
        g_tools:delayCall(10, function() g_objectPools:destroy(go) end)
    end
end

function TestPoolLayer:customLayout()
    self:createButtonWithText(self._go.transform, "Create", Vector2(0,100), Vector2(122,62), handler(self, self.testCreate))
end

--有粒子系统必须在界面删掉前,回收
function TestPoolLayer:exit()
    local prefabPath = "Sandbox/Prefabs/Particles/fire.prefab"
    g_objectPools:removePrefab(prefabPath)
    TestLayer.exit(self)
end

return TestPoolLayer
