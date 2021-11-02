local GLayer = require("graphic.core.GLayer");
local DeviceInfoLayer = class("DeviceInfoLayer", GLayer)

function DeviceInfoLayer:ctor()
	GLayer.ctor(self)
end

function DeviceInfoLayer:init()
    GLayer.init(self)

    local go = self:loadUiPrefab("Assets/Prefabs/UI/deviceInfo.prefab")
    local btn = go.transform:Find("close").gameObject
    self:registerClick(btn)

    local t = self:getInfo()
    local contentGo = go.transform:Find("ScrollView/Viewport/Content").gameObject
    contentGo:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(0, (#t+1)*30 )

    local textGo = contentGo.transform:Find("GameObject").gameObject
    for i,v in ipairs(t) do
        local go = GameObject.Instantiate(textGo)
        go.transform:SetParent(contentGo.transform, false)
        go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0, -15 - 30*i)
        go:GetComponent(typeof(UI.Text)).text = v
    end
end

function DeviceInfoLayer:handleClick(name)
    if name == "close" then
        self:exit()
    end
end

function DeviceInfoLayer:getInfo()
    local t = {}
    table.insert(t, "设备名称:"..tostring(SystemInfo.deviceName))
    table.insert(t, "设备模型:"..tostring(SystemInfo.deviceModel))
    table.insert(t, "设备类型:"..tostring(SystemInfo.deviceType:ToString()))
    table.insert(t, "设备标识ID:"..tostring(SystemInfo.deviceUniqueIdentifier))
    table.insert(t, "操作系统:"..tostring(SystemInfo.operatingSystem))
    table.insert(t, "CPU类型:"..tostring(SystemInfo.processorType))
    table.insert(t, "CPU数量:"..tostring(SystemInfo.processorCount))
    table.insert(t, "CPU频率:"..tostring(SystemInfo.processorFrequency.."MHz"))
    table.insert(t, "系统内存:"..tostring(SystemInfo.systemMemorySize.."M"))
    table.insert(t, "屏幕尺寸:"..tostring(Screen.width.."x"..Screen.height))
    table.insert(t, "显卡名称:"..tostring(SystemInfo.graphicsDeviceName))
    table.insert(t, "显卡供应商:"..tostring(SystemInfo.graphicsDeviceVendor))
    table.insert(t, "显卡供应唯一ID:"..tostring(SystemInfo.graphicsDeviceVendorID))
    table.insert(t, "显卡类型:"..tostring(SystemInfo.graphicsDeviceType:ToString()))
    table.insert(t, "显卡标识ID:"..tostring(SystemInfo.graphicsDeviceID))
    table.insert(t, "显卡版本:"..tostring(SystemInfo.graphicsDeviceVersion))
    table.insert(t, "显卡内存"..tostring(SystemInfo.graphicsMemorySize.."M"))
    table.insert(t, "显卡支持的渲染目标数量:"..tostring(SystemInfo.supportedRenderTargetCount))
    table.insert(t, "显卡最大材质尺寸:"..tostring(SystemInfo.maxTextureSize))
    table.insert(t, "显卡是否支持多线程渲染:"..tostring(SystemInfo.graphicsMultiThreaded))
    table.insert(t, "电量:"..tostring(SystemInfo.batteryLevel))
    table.insert(t, "电池状态:"..tostring(SystemInfo.batteryStatus))
    return t
end

return DeviceInfoLayer
