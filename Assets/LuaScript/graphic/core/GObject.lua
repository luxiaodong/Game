
local GObject = class("GObject")

function GObject:ctor()
    self._events = {}  --事件
	self._components = {} --组件
    self._assetGroup = getmetatable(self).__className --默认用类名
    self:createGameObject()
    self._isExist = true --标记是否已经销毁,用于停止回调处理
    self._hasLuaBehaviour = false --标记是否有LuaBehaviour
    self._enablePrint = true  --打印开关
end

function GObject:createGameObject()
    local name = getmetatable(self).__className
    self._go = GameObject(name)
end

function GObject:init()
    self:bindBehaviour()
    if self._hasLuaBehaviour then --有Update必须绑定Destory
        self:bindDestroy()
    end
end

--没有绑定Destory,需手动调用
function GObject:exit()
    if self._isExist then
        self:unbindDestroy() --反注册掉就不会收到OnDestroy
        Object.Destroy(self._go)
        self:OnDestroy()
    end
end

function GObject:OnDestroy()
    self:unloadAsset()
    self:unbindBehaviour()
    self:unregisterEvents()
    self._isExist = false
    self._go = nil
end

function GObject:setTag(tag)
    self._go.tag = tag
end

function GObject:setName(name)
    self._go.name = name
end

--unity编辑器上的layer
function GObject:setLayer(layer)
    self._go.layer = layer
end

function GObject:setVisible(isShow)
    self._go:SetActive(isShow)
end

function GObject:isVisible()
    return self._go.activeSelf
end

function GObject:position(isLocal)
    if isLocal then
        return self._go.transform.localPosition
    end

    return self._go.transform.position
end

function GObject:setPosition(position, isLocal)
    if isLocal then
        self._go.transform.localPosition = position
    end

    self._go.transform.position = position
end

--世界坐标系下, 人的坐标, 不是眼睛的坐标.
function GObject:lookAt(pos)
    local dir = pos - self._go.transform.position
    self._go.transform.forward = dir.normalized()
end

function GObject:setRotate(quaternion)
    self._go.transform.localRotation = quaternion
end

function GObject:setEuler(angle)
    self._go.transform.localEulerAngles = angle
end

function GObject:setEulerY(angle)
    self:setEuler(Vector3.up*angle)
end

function GObject:setScale(s)
    self._go.transform.localScale = s
end

function GObject:addObject(layer, isWorldPositionStays)
    layer._go.transform:SetParent(self._go.transform, isWorldPositionStays or false)
end

---------委托LuaBehaviour, 更新调用Update等函数---------------------
function GObject:bindBehaviour()
    for _,key in pairs(enum.unity.behaviour) do
        local func = self[key]
        if func then
            g_system._luaBehaviour:register(key, self, func)
            self._hasLuaBehaviour = true
        end
    end
end

function GObject:unbindBehaviour()
    if self._hasLuaBehaviour then
        for _,key in pairs(enum.unity.behaviour) do
            local func = self[key]
            if func then
                g_system._luaBehaviour:unregister(key, self)
            end
        end
    end
end

---------绑定C# Destroy等函数---------------------
function GObject:bindDestroy()
    if not self._components.destroy then
        self._components.destroy = CS.Game.CDestroy.Add(self._go, self)
    end
end

function GObject:unbindDestroy()
    if self._components.destroy then
        Object.Destroy(self._components.destroy)
        self._components.destroy = nil
    end
end

--------------------事件封装--------------------
function GObject:registerEvents(t)
    for i,v in ipairs(t) do
        self:registerEvent(v)
    end
end

function GObject:registerEvent(name)
    self:registerEventCore(name, handler(self, self.handleEvent) )
end

function GObject:registerEventCore(name, eventHandler)
    if name and self._events[name] == nil then
        local callback = function(t)
            eventHandler(t)
        end

        if event.addListener(name, callback) then
            self._events[name] = callback
        end     
    else
        print("registerEvent failed. "..name)
    end
end

function GObject:unregisterEvent(name)
    if self._events[name] ~= nil then
        local callback = self._events[name]
        event.removeListener(name, callback)
        self._events[name] = nil
    else
        print("unregisterEvent failed. "..name)
    end
end

function GObject:unregisterEvents()
    for k,v in pairs(self._events) do
        self:unregisterEvent(k)
    end

    self._events = {}
end

function GObject:handleEvent(e)
    print("[handleEvent] ", e.name)
end

--------------------回调封装------------
function GObject:handler(callback)
    if not callback then return end

    local function tempFunc(...)
        if self._isExist == true then
            callback(...)
        end
    end

    return tempFunc
end

----------------打印封装----------------
function GObject:print(...)
    if not self._enablePrint then return end

    local time = tostring(os.date("[%H:%M:%S]"))
    local name = "["..getmetatable(self).__className.."] "
    local msg = __G__PRINT__(...)
    local str = time..name..msg
    Debug.Log(str)
    -- log.writeToFile(str)
end

--加载图片,二次封装,当加载不到图片时,用默认图片替代
function GObject:loadSprite(fileName, isAsync, callback)
    local function convertTextureToSprite(texture)
        if texture.width and texture.height then
            local rect = Rect(0, 0, texture.width, texture.height)
            return Sprite.Create(texture, rect, Vector2.zero)    
        end

        return texture
    end

    -- 上面是个辅助函数
    if isAsync then
        local function tempFunc(asset)
            asset = asset or Texture2D.whiteTexture
            callback(convertTextureToSprite(asset))
        end

        self:loadAsset(fileName, isAsync, tempFunc)
        return 
    end

    local asset = self:loadAsset(fileName)
    asset = asset or Texture2D.whiteTexture
    return convertTextureToSprite(asset)
end

----------------资源加载----------------
function GObject:loadAsset(fileName, isAsync, callback)
    if isAsync then
        local function tempFunc(asset)
            if self._isExist == true then
                callback(asset)
            else
                --回来发现已经不存在父物体,再次释放
                g_resource:unloadAsset(self._assetGroup, fileName)
            end
        end

        g_resource:loadAsset(fileName, self._assetGroup, isAsync, tempFunc)
        return
    end
    
    return g_resource:loadAsset(fileName, self._assetGroup)
end

--传nil时,卸载掉组内所有资源
function GObject:unloadAsset(fileName)
    local groupName = getmetatable(self).__className
    if self._assetGroup == groupName then --被托管的资源不需要释放
        return g_resource:unloadAsset(self._assetGroup, fileName)
    end
end

function GObject:assetGroup()
    return self._assetGroup
end

--主要用于小资源拖管于界面, 统一释放, 过程不可逆
--hasLoaded,调用此函数前, 是否已经调用loadAsset, 如果没有, 就不去changeGroup, 因为肯定没有
function GObject:setAssetGroup(groupName, hasLoaded)
    if self._assetGroup ~= groupName then
        if hasLoaded then
            if g_resource:changeGroup(self._assetGroup, groupName) then
                self._assetGroup = groupName
            end
        else
            self._assetGroup = groupName
        end
    end
end

return GObject
