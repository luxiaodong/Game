
local GContainer = require("graphic.core.GContainer")
local GScene = class("GScene", GContainer)

function GScene:ctor()
    GContainer.ctor(self)
end

function GScene:createGameObject()
    local name = getmetatable(self).__className
    self._go = g_2dTools:createGameObject(name)
end

function GScene:init()
    GContainer.init(self)
    self._currentLayerName = ""
end

--调用changeScene时,传的是自己,会触发此函数
function GScene:reload()
end

function GScene:setZOrder(index)
    self._go.transform:SetSiblingIndex(index)
end

function GScene:handleEvent(e)
    if e.name == event.ui.changeLayer then
        self:changeLayer( e.data )
    end
end

--核心函数.用于切换layer
function GScene:changeLayer(data)
    --1. 相等情况下不处理
    if data.name == self._currentLayerName then
        print("prev == next") --可以放个reload的函数
        return 
    end

    --2. 清除当前的场景
    if self._layers[self._currentLayerName] then
        self._layers[self._currentLayerName]:exit()
        --不清楚可以隐藏起来
    end

    --3. 载入layer
    local className = data.class or self:layerFilePath(data.name)
    local layer = require(className).create() --create
    self:addLayer(layer)
    layer:init()

    --4. 同步变量
    self._currentLayerName = data.name
    self._layers[self._currentLayerName] = layer
end

--抽象函数,必须实现.
function GScene:layerFilePath(name)
    error("must inherited")
end

function GScene:addLayer(layer, isWorldPositionStays)
    self:addObject(layer, isWorldPositionStays)
end

return GScene
