
local GUnityScene = require("graphic.core.GUnityScene")
local TestUnityScene = class("TestUnityScene", GUnityScene)

local viewConfig={
    [enum.ui.view.test] = "graphic.test.TestView",
}

function TestUnityScene:ctor()
    GUnityScene.ctor(self)
end

function TestUnityScene:init()
    GUnityScene.init(self)
    
    local views = {enum.ui.view.test}
    self:initViews(views, viewConfig)

    -- self:testShader()
end

function TestUnityScene:testShader()
	-- local view = require("graphic.test.TestShader.TestShaderView").create()
	-- self:addObject(view)
	-- view:init()

	-- local view = require("graphic.test.TestRender.TestRenderView").create()
 --    self:addObject(view)
 --    view:init()
end

return TestUnityScene
