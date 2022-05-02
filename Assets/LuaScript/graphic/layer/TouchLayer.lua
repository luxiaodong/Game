local GLayer = require("graphic.core.GLayer")
local TouchLayer = class("TouchLayer",GLayer)

--记录玩家操作,用于回放
function TouchLayer:ctor()
	GLayer.ctor(self)
end

function TouchLayer:init()
    GLayer.init(self)
    self:bindTouchHandler()

    self._clickIndex = 0
    self._beginTime = 0
end

function TouchLayer:IsRaycastLocationValid(sp, eventCamera)
    if g_system:currentSceneName() == enum.ui.scene.test then
        return false
    end

    local rect = self._go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, sp, eventCamera)
    local isSwallow = false --是否吞噬
    if isOk then        
        if rect.rect:Contains(pos) == true then
            if pos.y > rect.rect.y + rect.rect.height - 50 then
                if pos.x < rect.rect.x + 50 then
                    isSwallow = true
                elseif pos.x > rect.rect.x + rect.rect.width - 50 then
                    isSwallow = true
                end
            end
        end
    end

    return isSwallow
end

function TouchLayer:openGmLayer()
    event.broadcast(event.ui.popupLayer, {name = enum.ui.layer.consoleTab})
end

function TouchLayer:OnPointerClick(data)
    local rect = self._go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)

    local isSwallow = false --是否吞噬
    if isOk then
        if rect.rect:Contains(pos) == true then
            if pos.y > rect.rect.y + rect.rect.height - 50 then
                if pos.x < rect.rect.x + 50 then
                    self._clickIndex = 1
                    self._beginTime = Time.time
                elseif pos.x > rect.rect.x + rect.rect.width - 50 then
                    local delt = Time.time - self._beginTime
                    if self._clickIndex == 1 and delt < 2 then
                        self._clickIndex = 0
                        self:openGmLayer()
                        isSwallow = true
                    end
                end
            end
        end
    end

    -- if not isSwallow then
    --     print(typeof(data))
    --     print("================")
    --     --print(data.pointerCurrentRaycast.gameObject)
    --     print(typeof(EventSystems.RaycastResult))
    --     local list = CS.System.Collections.Generic.List(EventSystems.RaycastResult)
    --     --local list = CS.System.Collections.Generic["List`1[UnityEngine.EventSystems.RaycastResult]"]()
    --     local a,b = EventSystems.EventSystem.current.RaycastAll(data, list)
    --     print(a)
    --     print(b)        
    --     --EventSystems.ExecuteEvents.Execute(self._go, data, EventSystems.ExecuteEvents.pointerClickHandler)
    -- end
end

return TouchLayer
