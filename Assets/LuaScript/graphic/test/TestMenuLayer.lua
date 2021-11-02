local GLayer = require("graphic.core.GLayer")
local TestMenuLayer = class("TestMenuLayer", GLayer)

local config = {}
table.insert(config, {name=enum.ui.layer.testFastScrollLayer, class="graphic.test.TestFastScroll.TestFastScrollLayer"})
table.insert(config, {name=enum.ui.layer.testBackgroundDownload, class="graphic.test.TestBackgroundDownload.TestBackgroundDownloadLayer"})
table.insert(config, {name=enum.ui.layer.testNativeBridge, class="graphic.test.TestNativeBridge.TestNativeBridgeLayer"})
table.insert(config, {name=enum.ui.layer.testCombineMeshes, class="graphic.test.TestAvatar.TestCombineMeshesLayer"})
table.insert(config, {name=enum.ui.layer.testBehaviourUpdate, class="graphic.test.TestBehaviour.TestBehaviourUpdateLayer"})
table.insert(config, {name=enum.ui.layer.testBehaviourTouch, class="graphic.test.TestBehaviour.TestBehaviourTouchLayer"})
table.insert(config, {name=enum.ui.layer.testLocailzation, class="graphic.test.TestLocailzation.TestLocailzationLayer"})
table.insert(config, {name=enum.ui.layer.testSpritePacker, class="graphic.test.TestSpritePacker.TestSpritePackerLayer"})
table.insert(config, {name=enum.ui.layer.testTransition, class="graphic.test.TestTransition.TestTransitionLayer"})
table.insert(config, {name=enum.ui.layer.testNetwork, class="graphic.test.TestNetwork.TestNetworkLayer"})
table.insert(config, {name=enum.ui.layer.testQuality, class="graphic.test.TestQuality.TestQualityLayer"})
table.insert(config, {name=enum.ui.layer.testShader, class="graphic.test.TestShader.TestShaderLayer"})
table.insert(config, {name=enum.ui.layer.testAvatar, class="graphic.test.TestAvatar.TestAvatarLayer"})
table.insert(config, {name=enum.ui.layer.testBitmap, class="graphic.test.TestBitmap.TestBitmapLayer"})
table.insert(config, {name=enum.ui.layer.testAudio, class="graphic.test.TestAudio.TestAudioLayer"})
table.insert(config, {name=enum.ui.layer.testMask, class="graphic.test.TestMask.TestMaskLayer"})
table.insert(config, {name=enum.ui.layer.testPool, class="graphic.test.TestPool.TestPoolLayer"})
table.insert(config, {name=enum.ui.layer.testTab, class="graphic.test.TestTab.TestTabLayer"})
table.insert(config, {name=enum.ui.layer.testSdk, class="graphic.test.TestSdk.TestSdkLayer"})

function TestMenuLayer:ctor()
    GLayer.ctor(self)
    self.m_height = 60
end

function TestMenuLayer:init()
    GLayer.init(self)
    local go = self:loadUiPrefab("Assets/Prefabs/UI/Test/testMenu.prefab")
    
    local contentGo = go.transform:Find("ScrollView/Viewport/Content").gameObject
    contentGo:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(0, #config*self.m_height)

    local imageGo = contentGo.transform:Find("Image").gameObject
    for i,v in ipairs(config) do
        local go = GameObject.Instantiate(imageGo)
        go.transform:SetParent(contentGo.transform, false)
        go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0, self.m_height/2-self.m_height*i)

        local textGo = go.transform:Find("Text").gameObject
        textGo:GetComponent(typeof(UI.Text)).text = v.name
    end
    imageGo:SetActive(false)
    self._rootGo = go
    self:bindTouchHandler()
end

function TestMenuLayer:OnPointerClick(data)
    local go = self._rootGo.transform:Find("ScrollView/Viewport").gameObject
    local rect = go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)

    if isOk then
        if rect.rect:Contains(pos) == true then
            local go = self._rootGo.transform:Find("ScrollView/Viewport/Content").gameObject
            local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(go:GetComponent(typeof(RectTransform)), data.position, data.pressEventCamera)
            if isOk then
                local i = math.floor(math.abs(pos.y)/self.m_height)
                self:clickItem(i+1)
            end
        end
    end
end

function TestMenuLayer:clickItem(i)
    event.broadcast(event.ui.changeLayer, {name = config[i].name, class=config[i].class})
end

return TestMenuLayer
