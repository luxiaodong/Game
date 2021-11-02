local GLayer = require("graphic.core.GLayer")
local GmLayer = class("GmLayer", GLayer)

local gmConfig = {}
for i=1,100 do
    table.insert(gmConfig, {name="获取版本信息"..i,command="版本"..i})
end

function GmLayer:ctor()
    GLayer.ctor(self)
end

function GmLayer:init()
    GLayer.init(self)
    local go = self:loadUiPrefab("Assets/Prefabs/UI/gm.prefab")

    local btn = go.transform:Find("send").gameObject
    self:registerClick(btn)

    local contentGo = go.transform:Find("ScrollView/Viewport/Content").gameObject
    contentGo:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(0, #gmConfig*30)

    self._goList = {}
    local imageGo = contentGo.transform:Find("Image").gameObject
    for i,v in ipairs(gmConfig) do
        if i > 20 then break end
        local go = GameObject.Instantiate(imageGo)
        go.transform:SetParent(contentGo.transform, false)
        go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0, 15-30*i)

        local textGo = go.transform:Find("GameObject").gameObject
        textGo:GetComponent(typeof(UI.Text)).text = v.name

        if i%2 == 0 then
            go:GetComponent(typeof(UI.Image)).color = Color(245/255,245/255,245/255,1)
            textGo:GetComponent(typeof(UI.Text)).color = Color(130/255,130/255,130/255,1)
        else
            go:GetComponent(typeof(UI.Image)).color = Color(210/255,210/255,210/255,1)
            textGo:GetComponent(typeof(UI.Text)).color = Color(83/255,83/255,83/255,1)
        end

        table.insert(self._goList, go)
    end
    imageGo:SetActive(false)
    self._rootGo = go
    self:bindTouchHandler()

    -- local go = self._rootGo.transform:Find("input").gameObject
    -- local input = go:GetComponent(typeof(UI.InputField))
    -- input.onValueChanged:AddListener(function() print("onValueChanged") end)

    local scrollView = go.transform:Find("ScrollView").gameObject
    local scrollRect = scrollView:GetComponent(typeof(UI.ScrollRect))
    print(scrollRect.onValueChanged)
    scrollRect.onValueChanged:AddListener(function(vec2) self:scroll(vec2) end)
    self._indexOffset = 0
end

function GmLayer:scroll(vec2)
    local displayCount = 20
    local totalCount = #gmConfig
    local p = Mathf.Clamp(vec2.y,0,1)
    local endIndex = math.ceil(totalCount + (displayCount - totalCount)*p)

    for i=1,displayCount do
        local index = endIndex + 1 - i
        local go = self._goList[ index%displayCount +1 ]
        go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0, 15-30*index)

        local v = gmConfig[index]
        local textGo = go.transform:Find("GameObject").gameObject
        textGo:GetComponent(typeof(UI.Text)).text = v.name
    end
end

function GmLayer:OnPointerClick(data)
    local go = self._rootGo.transform:Find("ScrollView/Viewport").gameObject
    local rect = go:GetComponent(typeof(RectTransform))
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)

    if isOk then
        if rect.rect:Contains(pos) == true then
            local go = self._rootGo.transform:Find("ScrollView/Viewport/Content").gameObject
            local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(go:GetComponent(typeof(RectTransform)), data.position, data.pressEventCamera)
            if isOk then
                local i = math.floor(math.abs(pos.y)/30) + 1
                local go = self._rootGo.transform:Find("input").gameObject
                local input = go:GetComponent(typeof(UI.InputField))
                input.text = gmConfig[i].name
            end
        end
    end
end

function GmLayer:handleClick(name)
    if name == "send" then
        self:send()
    end
end

function GmLayer:send()
    local go = self._rootGo.transform:Find("input/Text").gameObject
    local str = go:GetComponent(typeof(UI.Text))

    if str == "append" then
        print("click append")
        event.broadcast(event.ui.appendTabLayer, {config={layerName=enum.ui.layer.sdkLogin, name="xsdk", class="ui.login.SdkLoginLayer"}, index=2})
    elseif str == "remove" then
        print("click remove")
        event.broadcast(event.ui.removeTabLayer, {name=enum.ui.layer.sdkLogin})
    else
        print(str)
    end
end

return GmLayer
