
local GLayer = require("graphic.core.GLayer")
local EffectLayer = class("EffectLayer",GLayer)

function EffectLayer:ctor()
	GLayer.ctor(self)
end

function EffectLayer:createGameObject()
    local name = getmetatable(self).__className
    -- self._go = g_2dTools:createGameObject(name)
    self._go = g_2dTools:createCanvas(name)
end

function EffectLayer:init()
    self:registerEvent(event.ui.pushText)
end

--支持切换时的黑白闪屏
function EffectLayer:handleEvent(e)
	if e.name == event.ui.pushText then
		self:showText(e.data.msg, e.data.pos, e.data.time)
        --self:flyText(e.data.msg, e.data.pos, e.data.time)
    elseif e.name == event.ui.splashScreen then
        --闪屏一张图片
	end
end

function EffectLayer:showText(msg, pos, time)
    local go = g_2dTools:createText(msg)
    go:GetComponent(typeof(RectTransform)).anchoredPosition = pos or Vector2(0.5,0.5)
    go:GetComponent(typeof(UI.Text)).color = Color(1,0.15,0.15)
    go:GetComponent(typeof(UI.Text)).alignment = TextAnchor.MiddleCenter
    go:GetComponent(typeof(UI.Text)).fontSize = 40
    go.transform:SetParent(self._go.transform, false)
    Object.Destroy(go, time or 0.75)
end

function EffectLayer:flyText(msg, pos, time)
    local go = g_2dTools:createText(msg)
    go:GetComponent(typeof(RectTransform)).anchoredPosition = pos or Vector2(0, -50)
    go:GetComponent(typeof(UI.Text)).color = Color(1,0.15,0.15)
    go:GetComponent(typeof(UI.Text)).alignment = TextAnchor.MiddleCenter
    go:GetComponent(typeof(UI.Text)).fontSize = 40
    go.transform:SetParent(self._go.transform, false)
    go.transform:DOLocalMoveY(50, 0.5):OnComplete( function() Object.Destroy(go, time or 0.5) end )
end

return EffectLayer
