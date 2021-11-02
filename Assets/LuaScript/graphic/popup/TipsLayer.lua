local GPopupLayer = require("graphic.popup.GPopupLayer")
local TipsLayer = class("TipsLayer", GPopupLayer)

----------------------------------------------------------
    -- local go = self:loadUiPrefab("tips")
    -- local rect = go:GetComponent(typeof(RectTransform))
    -- --静态坐标可以position调整, 动态坐配合使用锚点
    -- rect.anchoredPosition = Vector2(0,0)
    -- rect.anchorMin = Vector2(1,0)
    -- rect.anchorMax = Vector2(1,0)
    -- rect.pivot = Vector2(1,0)
    -- local data = {}
    -- data.go = go
    -- event.broadcast(event.ui.tips, data)
----------------------------------------------------------    

function TipsLayer:ctor()
	GPopupLayer.ctor(self)
end

function TipsLayer:init()
	GPopupLayer.init(self, enum.ui.layer.tips)
	self._tipsGo = nil
end

function TipsLayer:close()
    GPopupLayer.close(self)
	if self._tipsGo then
		GameObject.Destroy(self._tipsGo)
		self._tipsGo = nil
	end
end

function TipsLayer:OnPointerClick(data)
	self:unbindTouchHandler()
	self:close()

    -- print(" TipsLayer:OnPointerClick(data) ")
    -- local rect = self._tipsGo:GetComponent(typeof(RectTransform))
    -- local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)
    -- if isOk then
    --     if rect.rect:Contains(pos) == true then
    --     	print("in rect")
    --     	self:unbindTouchHandler()
    --     	self:close()
    --     else
    --     	print("out rect")
    --     end
    -- else
    --     print("call failed")
    -- end
end

function TipsLayer:show(data)
	data.go.transform:SetParent(self._go.transform, false)
	self:bindTouchHandler()
	self._tipsGo = data.go
end

-- ----------------------------------
-- --测试拖动进出
-- function TipsLayer:handleEvent(e)
-- 	if e.name == event.ui.tips then
-- 		print("TipsLayer:handleEvent ...")
-- 		e.data.go.transform:SetParent(self._go.transform, false)
-- 		self._tipsGo = e.data.go
-- 		CS.Game.TouchComponent.Add(self._tipsGo, self)
-- 	end
-- end

function TipsLayer:OnPointerEnter(data)
	print("OnPointerEnter")
end

function TipsLayer:OnPointerExit(data)
	print("OnPointerExit")
end

function TipsLayer:OnBeginDrag(data)
	print("OnBeginDrag")
end

function TipsLayer:OnDrag(data)
	print("OnDrag")
	-- local rect = self._tipsGo:GetComponent(typeof(RectTransform))
 --    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.enterEventCamera)
 --    if isOk then
 --    	print("yes")
 --    else
 --    	print("no")
 --    end
end

function TipsLayer:OnEndDrag(data)
	print("OnEndDrag")
end

return TipsLayer
