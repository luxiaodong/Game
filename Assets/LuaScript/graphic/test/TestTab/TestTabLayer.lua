local GTabLayer = require("graphic.popup.GTabLayer")
local TestTabLayer = class("TestTabLayer", GTabLayer)

local layerConfig =
{
	{layerName=enum.ui.layer.testPool, name="pool", class="graphic.test.TestPool.TestPoolLayer"},
	{layerName=enum.ui.layer.testShader, name="shader", class="graphic.test.TestShader.TestShaderLayer"},
    {layerName=enum.ui.layer.testBehaviourTouch, name="touch", class="graphic.test.TestBehaviour.TestBehaviourTouchLayer"},
}

function TestTabLayer:ctor()
	GTabLayer.ctor(self)
end

function TestTabLayer:init()
	GTabLayer.init(self, enum.ui.layer.testTab, layerConfig)
	self:setSelect(enum.ui.layer.testShader)
end

return TestTabLayer
