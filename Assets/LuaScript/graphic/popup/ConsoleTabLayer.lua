local GTabLayer = require("graphic.popup.GTabLayer")
local ConsoleTabLayer = class("ConsoleTabLayer", GTabLayer)

local layerConfig =
{
    {layerName=enum.ui.layer.gm, name="gm", class="graphic.popup.console.GmLayer"},
    {layerName=enum.ui.layer.deviceInfo, name="info", class="graphic.popup.console.DeviceInfoLayer"},
    {layerName=enum.ui.layer.protocol, name="protocol", class="graphic.popup.console.ProtocolLayer"},
}

function ConsoleTabLayer:ctor()
	GTabLayer.ctor(self)
end

function ConsoleTabLayer:init(data)
	GTabLayer.init(self, enum.ui.layer.consoleTab, layerConfig)
end

function ConsoleTabLayer:show(data)
	self:setSelect(data.subLayer)
end

function ConsoleTabLayer:close()
    self._closeCallback(enum.ui.layer.consoleTab)
end

return ConsoleTabLayer
