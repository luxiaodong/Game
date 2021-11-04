
local GScene = require("graphic.core.GScene")
local TestScene = class("TestScene", GScene)

function TestScene:ctor()
    GScene.ctor(self)
    self._closeBtn = nil
end

function TestScene:init()
    GScene.init(self)
    self:registerEvent(event.ui.changeLayer)
    self:customLayout()

    self:changeLayer({name = enum.ui.layer.testMenu, class="graphic.test.TestMenuLayer"})
    -- self:changeLayer({name = enum.ui.layer.testTransform, class="graphic.popup.console.GmLayer"})
    -- self:changeLayer({name = enum.ui.layer.testFastScrollLayer, class="graphic.test.TestFastScroll.TestFastScrollLayer"})
    -- self:changeLayer({name = enum.ui.layer.testTransform, class="graphic.test.TestTransform.TestTransformLayer"})
end

function TestScene:reload()
    self:changeLayer({name = enum.ui.layer.testMenu, class="graphic.test.TestMenuLayer"})
end

function TestScene:layerFilePath(name)
    return layerConfig[name]
end

function TestScene:changeLayer(data)
	GScene.changeLayer(self, data)
	self._closeBtn.transform:SetSiblingIndex(2)

    -- if data.name == enum.ui.layer.testAvatar 
    -- or data.name == enum.ui.layer.testDoTweenAvatar
    -- or data.name == enum.ui.layer.testCombineMeshes then
    --     g_system:setUnitySceneCameraVisible(true)
    -- else
    --     g_system:setUnitySceneCameraVisible(false)
    -- end
end

function TestScene:customLayout()
	-- 非标准写法
	-- local closeBtn = g_2dTools:createButton("Sandbox/Textures/UI/Pay/close.png", self:assetGroup())
    local closeBtn = g_2dTools:createButton("Sandbox/Textures/UI/close.png", self:assetGroup())
    closeBtn.transform:SetParent(self._go.transform, false)
    closeBtn:GetComponent(typeof(RectTransform)).anchorMin = Vector2(1,1)
    closeBtn:GetComponent(typeof(RectTransform)).anchorMax = Vector2(1,1)
    closeBtn:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(70,70)
    closeBtn:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(-40,-40)

    --有问题,回调函数指针被c#持有,lua这边没这个指针.无法释放
    closeBtn:GetComponent(typeof(UI.Button)).onClick:AddListener(function()
    	self:changeLayer({name = enum.ui.layer.testMenu, class="graphic.test.TestMenuLayer"})
        -- g_tools:printTable( debug.getregistry() )

        -- local image = closeBtn:GetComponent(typeof(UI.Image))
        -- image.sprite = self:loadSprite("unknow")

        -- self:loadSprite("unknow", true, function(sprite) 
        --     local image = closeBtn:GetComponent(typeof(UI.Image))
        --     image.sprite = sprite
        -- end)
    end)

    self._closeBtn = closeBtn

    local temp = function() print("over") end
    local image = closeBtn:GetComponent(typeof(UI.Image)) 
    image:DOFillAmount(1, 1):OnComplete(temp)
    -- closeBtn.transform:DOAnchorPos(Vector2(1,1), 2):OnComplete(temp)
end

return TestScene
