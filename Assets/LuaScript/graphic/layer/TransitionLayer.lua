
local GLayer = require("graphic.core.GLayer")
local TransitionLayer = class("TransitionLayer",GLayer)

function TransitionLayer:ctor()
	GLayer.ctor(self)
end

function TransitionLayer:init()
	-- GLayer.init(self) --故意去掉
	self:bindBehaviour()

    self:registerEvent(event.ui.transition)

    self._ui = {}
    local go = self:loadUiPrefab("Prefabs/UI/transition.prefab")

	local tempGo = go.transform:Find("image").gameObject
    self._ui.image = {}
    self._ui.image.image = tempGo:GetComponent(typeof(UI.Image))
    
    self:setVisible(false)

    self._speed = 0.5 --播放速度
    self._passTime = 0 --特效经过的时间
    self._sign = 1 --用于标记打开还是关闭
    self._callback = nil
    --静止点击的测试.
end

function TransitionLayer:handleEvent(e)
	--参数是过度场景的类型.
	if e.name == event.ui.transition then
		local name = nil
		if e.data.open then
			self._sign = 1
			name = e.data.open
		elseif e.data.close then
			self._sign = -1
			name = e.data.close
		end

		self._callback = e.data.callback
		self:play(name)
	end
end

--shader按打开写,0开始,1结束.
--如果非线性变化,曲线这边处理.不要在shader里处理.
--函数参考 https://www.jianshu.com/p/ddff577138bf
function TransitionLayer:OnUpdate()
	self._passTime = self._passTime + self._sign*self._speed*Time.deltaTime
	self._ui.image.image.material:SetFloat("_Duration", self._passTime)

	if self._sign == 1 then
		if self._passTime > 1 then
			self:unbindBehaviour()
			self:setVisible(false)
			if self._callback then self._callback() end
		end
	elseif self._sign == -1 then
		if self._passTime < 0 then
			self:unbindBehaviour()
			if self._callback then self._callback() end
		end
	end
end

-- 具体过渡特效可参考
-- https://github.com/mob-sakai/UIEffect
function TransitionLayer:play(name)
	if name == enum.ui.transition.circle then
		local shader = self:loadAsset("Sandbox/Shaders/Test/TransitionCircle.shader")
		self._ui.image.image.material = Material(shader)
		self._speed = 2
		self._passTime = 0
	-- elseif name
	end

	if self._sign == -1 then
		self._passTime = 1
	end

	self._ui.image.image.material:SetFloat("_Duration", self._passTime)
	self:setVisible(true)
	self:bindBehaviour()
end

return TransitionLayer
