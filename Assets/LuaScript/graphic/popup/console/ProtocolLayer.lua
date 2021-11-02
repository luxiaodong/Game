local GLayer = require("graphic.core.GLayer");
local ProtocolLayer = class("ProtocolLayer", GLayer)

function ProtocolLayer:ctor()
    GLayer.ctor(self)
end

function ProtocolLayer:init()
    GLayer.init(self)
    local go = self:loadUiPrefab("Assets/Prefabs/UI/gm.prefab")
    local t = self:getInfo()

    local btn = go.transform:Find("send").gameObject
    self:registerClick(btn)

    local contentGo = go.transform:Find("ScrollView/Viewport/Content").gameObject
    contentGo:GetComponent(typeof(RectTransform)).sizeDelta = Vector2(0, #t*30)

    local imageGo = contentGo.transform:Find("Image").gameObject
    for i,v in ipairs(t) do
        local go = GameObject.Instantiate(imageGo)
        go.transform:SetParent(contentGo.transform, false)
        go:GetComponent(typeof(RectTransform)).anchoredPosition = Vector2(0, 15-30*i)

        local textGo = go.transform:Find("GameObject").gameObject
        textGo:GetComponent(typeof(UI.Text)).text = v.name.." "..v.args

        if i%2 == 0 then
            go:GetComponent(typeof(UI.Image)).color = Color(245/255,245/255,245/255,1)
            textGo:GetComponent(typeof(UI.Text)).color = Color(130/255,130/255,130/255,1)
        else
            go:GetComponent(typeof(UI.Image)).color = Color(210/255,210/255,210/255,1)
            textGo:GetComponent(typeof(UI.Text)).color = Color(83/255,83/255,83/255,1)
        end
    end
    imageGo:SetActive(false)
    self._rootGo = go
    self:bindTouchHandler()
end

function ProtocolLayer:getInfo()
    local t = {}
    for m,v in pairs(protocol) do --偷懒做法,假设协议二层结构
        if m ~= "push" then --推送消息不能发送
            for n,w in pairs(v) do
                table.insert(t, w)
            end
        end
    end

    table.sort(t, function(a, b) return a.name < b.name end )
    self._protocls = t;
    return t;
end

function ProtocolLayer:OnPointerClick(data)
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
                input.text = self._protocls[i].name.." "..self._protocls[i].args
            end
        end
    end
end

function ProtocolLayer:handleClick(name)
    if name == "send" then
        self:send()
    end
end

function ProtocolLayer:handleGuide(name, callback)
    if name == guide.test.func.name then
        self:test()
    end

    --这两个函数都行
    --GLayer.handleGuide(self, name, callback)
    g_tools:delayOneFrame(callback)
end

function ProtocolLayer:test()
    print("ProtocolLayer:test")
    local go = self._rootGo.transform:Find("input").gameObject
    local input = go:GetComponent(typeof(UI.InputField))
    input.text = "just test guide"
end

function ProtocolLayer:send()
    local go = self._rootGo.transform:Find("input/Text").gameObject
    local str = go:GetComponent(typeof(UI.Text))

    local list = string.split(str, " ")
    local p = {}
    p.name = list[1]
    p.args = list[2]
    table.remove(list,1)
    table.remove(list,1)

    --判断下%个数与参数是否相等.
    network.requestWithError( nil, p, unpack(list) )
end

return ProtocolLayer
