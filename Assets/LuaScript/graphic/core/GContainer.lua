
local GObject = require("graphic.core.GObject")
local GContainer = class("GContainer", GObject)

function GContainer:ctor()
    GObject.ctor(self)
    self._layers = nil --记录子节点的layer
end

function GContainer:init()
    GObject.init(self)
    self._layers = {}
end

function GContainer:initLayers(layers, layerConfig)
    for i,name in ipairs(layers) do
        local layer = require(layerConfig[name]).create()
        self:addObject(layer)
        self._layers[name] = layer
        layer:init()
    end
end

function GContainer:initViews(views, viewConfig)
    self:initLayers(views, viewConfig)
end

--没定义清楚是对象还是路径, 还有重复检测
function GContainer:appendLayer(name, layer)
    self._layers[name] = layer
end

function GContainer:exit()
    for k,v in pairs(self._layers or {}) do
        v:exit()
    end

    GObject.exit(self)
end

function GContainer:isLayerExist(name)
    if self._layers[name] then
        return true
    end

    return false
end

function GContainer:tryGetLayer(name)
    if self._layers[name] then
        return self._layers[name]
    end
end

function GContainer:isLayerVisible(name)
    if self._layers[name] then
        return self._layers[name]:isVisible()
    end

    return false
end

return GContainer
