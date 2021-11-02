local G2DTools = class("G2DTools")

function G2DTools:ctor()
end

function G2DTools:camera()
    return GameObject.Find("/Canvas/UiCamera")
end

--3个值
--ui.go,
--ui.components,
--ui.children,
-- function G2DTools:bindUITable(go)
--     local ui = {}
--     ui.go = go
--     ui.components = {}

--     local componentTypes = go:GetComponents( typeof(Component) )
--     for i=1,componentTypes.Length do
--         local component = componentTypes[i-1]
--         local name = component:GetType():ToString()
--         ui.components[name] = component
--     end

--     ui.children = {}
--     for i=1, go.transform.childCount do
--         local subGo = go.transform:GetChild(i-1).gameObject
--         local subUiTable = self:bindUITable(subGo)
--         local name = subGo.name
--         ui.children[name] = subUiTable
--     end

--     return ui
-- end

function G2DTools:createCanvas(name)
    local go = self:createGameObject(name)
    go:AddComponent(typeof(Canvas))
    go:AddComponent(typeof(UI.GraphicRaycaster))
    return go
end

-- 基于go的常用函数
function G2DTools:createGameObject(name)
    local go = GameObject(name or "GameObject", typeof(RectTransform))
    go.layer = 5 --UI
    go.transform.anchorMin = Vector2(0,0)
    go.transform.anchorMax = Vector2(1,1)
    go.transform.offsetMin = Vector2(0,0)
    go.transform.offsetMax = Vector2(0,0)
    return go
end

-- Image
function G2DTools:createImage(fileName, groupName)
    local go = self:createGameObject("Image")
    local image = go:AddComponent(typeof(UI.Image))
    local texture = g_resource:loadAsset(fileName, groupName)
    image.sprite = self:convertTextureToSprite(texture)
    image:SetNativeSize()
    image.raycastTarget = false
    return go,image
end

function G2DTools:setImage(go, fileName, groupName)
    local image = go:GetComponent(typeof(UI.Image))
    local texture = g_resource:loadAsset(fileName, groupName)
    image.sprite = self:convertTextureToSprite(texture)
    return image
end

function G2DTools:setImageMaterial(go, fileName, groupName)
    local image = go:GetComponent(typeof(UI.Image))
    local mat = g_resource:loadAsset(fileName, groupName)
    image.material = mat
end

-- Text
function G2DTools:createText(str, fontName, fontSize, groupName)
    fontName = fontName or "Arial.ttf"
    fontSize = fontSize or 24
    local go = self:createGameObject("Text")
    local text = go:AddComponent(typeof(UI.Text))

    if string.find(fontName, '/') then
        text.font = g_resource:loadAsset(fontName, groupName)
    else
        text.font = CS.Game.GResource:GetInstance():LoadBuiltinResource(fontName)
    end

    text.text = str
    text.raycastTarget = false
    text.fontSize = fontSize
    return go
end

-- Button
function G2DTools:createButton(fileName, groupName)
    local go = self:createGameObject("Button")
    local image = go:AddComponent(typeof(UI.Image))
    local texture = g_resource:loadAsset(fileName, groupName)
    image.sprite = self:convertTextureToSprite(texture)
    -- image.sprite = g_resource:loadAsset(fileName, groupName)
    image:SetNativeSize()

    local btn = go:AddComponent(typeof(UI.Button))
    btn.targetGraphic = image
    return go, image, btn
end

-- 散图底层返回Texture2D, 图集里返回Sprite
function G2DTools:convertTextureToSprite(texture)
    if texture then
        if texture.width and texture.height then
            local rect = Rect(0, 0, texture.width, texture.height)
            return Sprite.Create(texture, rect, Vector2.zero)    
        else
            return texture
        end
    end
end

----------坐标转换相关函数---------------
---local是vector2, world是vector3, screen是vector2
-- 点
function G2DTools:pointLocalToWorld(go, pt)
    if pt == nil then
        return go.transform.position
    end

    return go.transform:TransformPoint(Vector3(pt.x, pt.y, 0))
end

function G2DTools:pointWorldToScreen(pos)
    local camera = self:camera():GetComponent(typeof(Camera))
    return camera:WorldToScreenPoint(pos)
end

function G2DTools:pointLocalToScreen(go, pt)
    return self:pointWorldToScreen( self:pointLocalToWorld(go, pt) )
end

function G2DTools:pointScreenToWorld(pos)
    local camera = self:camera():GetComponent(typeof(Camera))
    return camera:ScreenToWorldPoint(Vector3(pt.x, pt.y, 0))
end

-- 线段
function G2DTools:sizeLocalToWorld(go, s)
    return go.transform:TransformVector(Vector3(s.x, s.y, 0))
end

function G2DTools:sizeWorldToScreen(s)
    return self:pointWorldToScreen(s) - self:pointWorldToScreen(Vector3.zero)
end

function G2DTools:sizeLocalToScreen(go, s)
    return self:pointLocalToScreen(go, s) - self:pointLocalToScreen(go)
end
    
return G2DTools
