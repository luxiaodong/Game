
local GLayer = require("graphic.core.GLayer")
local JoystickLayer = class("JoystickLayer",GLayer)

function JoystickLayer:ctor()
	GLayer.ctor(self)
end

function JoystickLayer:init()
    GLayer.init(self)
    self:bindTouchHandler()

    self._ui = {}
    local go = self:loadUiPrefab("Assets/Prefabs/UI/joystick.prefab")

    local tempGo = go.transform:Find("attack").gameObject
    self._ui.attack = {}
    self._ui.attack.gameObject = tempGo

    local tempGo = go.transform:Find("jump").gameObject
    self._ui.jump = {}
    self._ui.jump.gameObject = tempGo

    local t = {
        self._ui.attack.gameObject,
        self._ui.jump.gameObject
    }
    self:registerClicks(t)

    -- ui[""]["RectTransform"].anchoredPosition = Vector2(1,1)
    -- self._uiCache[""]["RectTransform"].anchoredPosition = Vector2(1,1)
    -- self._uiCache[""]["RectTransform"].sizeDelta = Vector2(1,1)
    -- self:ui("", "RectTransform").anchoredPosition = Vector2(2,2)
    go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(2,2)
    -- print( self:ui("", "GameObject").name )

    self._radius = 64
    -- self._origin = self._ui.children.circle.components["UnityEngine.RectTransform"].anchoredPosition
    -- print(self._origin.x, self._origin.y)
end

function JoystickLayer:handleClick(name)
    print(name)

    if name == "attack" then
        -- g_objectPools:addPrefab(resAlias.prefab.particles.fire)

        -- local data = {}
        -- data.fileName = resAlias.audio.kaibaoxiang
        -- data.callback = function() print("audio over") end
        -- event.broadcast(event.audio.play, data)

        if not self._xxx then
            self._xxx = true
            event.broadcast(event.audio.mute, {mute=false})
        else
            self._xxx = false
            event.broadcast(event.audio.mute, {mute=true})
        end

        -- self:playSound(e.data.fileName, e.data.isLoop, e.data.callback)

    elseif name == "jump" then
        -- g_objectPools:instance(resAlias.prefab.particles.fire)
        -- event.broadcast(event.battle.fire, {prefab=resAlias.prefab.particles.fire})

        -- local data = {}
        -- data.fileName = resAlias.audio.battle
        
        -- event.broadcast(event.audio.play, data)
    end
end

-- function JoystickLayer:OnPointerDown(data)
--     self:calculatePosition(data)
-- end

-- function JoystickLayer:OnDrag(data)
--    self:calculatePosition(data) 
-- end

-- function JoystickLayer:OnPointerUp(data)
--     self._ui.children.circle.children.circleRed.components["UnityEngine.RectTransform"].anchoredPosition = Vector2.zero
--     event.broadcast(event.battle.joystick, {pos=Vector2.zero})
-- end

-- function JoystickLayer:calculatePosition(data)
--     local rect = self._ui.children.circle.components["UnityEngine.RectTransform"]
--     local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.enterEventCamera)
--     if isOk then
--         local pt = pos.normalized*self._radius     
--         self._ui.children.circle.children.circleRed.components["UnityEngine.RectTransform"].anchoredPosition = pt
--         event.broadcast(event.battle.joystick, {pos=pos.normalized})
--     end
-- end

return JoystickLayer
