
require("interface.dialog")
local GPopupLayer = require("graphic.popup.GPopupLayer")
local DialogLayer = class("DialogLayer", GPopupLayer)

function DialogLayer:ctor()
    GPopupLayer.ctor(self)
end

function DialogLayer:init()
    GPopupLayer.init(self, enum.ui.layer.dialog)
end

function DialogLayer:show(data)
    self._dialogCallback = data.callback
    self._data = dialog[data.id]
    if self._data == nil then
    	self:close()
    	return 
    end

    self._count = #self._data
    self._index = 1
    self:say()
    self:bindTouchHandler()
end

function DialogLayer:say()
	local tempData = self._data[self._index]
	print("DialogLayer:say")
	print(tempData.pic)
	print(tempData.pos)
	print(tempData.word)
end

function DialogLayer:OnPointerClick(data)
	self._index = self._index + 1
	if self._index <= self._count then
		self:say()
		return
	end

	self:unbindTouchHandler()
	self:close()
    if self._dialogCallback then
        self._dialogCallback()
    end
end

return DialogLayer
