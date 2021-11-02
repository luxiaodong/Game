local GPopupLayer = require("graphic.popup.GPopupLayer")
local MessageBoxLayer = class("MessageBoxLayer", GPopupLayer)

--必须发消息唤起messagebox
--data.type = question or tips
--data.msg = msg
--data.yesCallback
--data.noCallback

function MessageBoxLayer:ctor()
    GPopupLayer.ctor(self)
	
	self._yesCallback = nil
	self._noCallback = nil
    self._okCallback = nil
end

function MessageBoxLayer:init()
    GPopupLayer.init(self, enum.ui.layer.messagebox)

    local go = self:loadUiPrefab("Assets/Prefabs/UI/messagebox.prefab")
    self._msg = go.transform:Find("bg/msg")

    self._btnYes = go.transform:Find("bg/yes").gameObject
    self._btnNo = go.transform:Find("bg/no").gameObject
    self._btnOk = go.transform:Find("bg/ok").gameObject
    self:registerClicks({self._btnYes, self._btnNo, self._btnOk})
end

function MessageBoxLayer:handleClick(name)
    self:close()

    if name == "yes" then
        if self._yesCallback then
            self._yesCallback()
        end
    elseif name == "no" then
        if self._noCallback then
            self._noCallback()
        end
    elseif name == "ok" then
        if self._okCallback then
            self._okCallback()
        end
    end
end

function MessageBoxLayer:show(data)
    if data.type == enum.ui.messagebox.type.question then
        self:showQuestion( data )
    elseif data.type == enum.ui.messagebox.type.info then
        self:showInfo( data )
    end
end

function MessageBoxLayer:showQuestion(data)
    self:setText(data.msg)
    self._yesCallback = data.yesCallback
    self._noCallback = data.noCallback

    self._btnYes.transform.localScale = Vector3.one
    self._btnNo.transform.localScale = Vector3.one
    self._btnOk.transform.localScale = Vector3.zero
end

function MessageBoxLayer:showInfo(data)
    self:setText(data.msg)
    self._okCallback = data.okCallback

    self._btnYes.transform.localScale = Vector3.zero
    self._btnNo.transform.localScale = Vector3.zero
    self._btnOk.transform.localScale = Vector3.one
end

function MessageBoxLayer:setText(msg)
    local comTxt = self._msg:GetComponent( typeof(UI.Text) )
    comTxt.text = msg
end

return MessageBoxLayer
