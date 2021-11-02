local TestLayer = require("graphic.test.TestLayer")
local TestFastScrollLayer = class("TestFastScrollLayer", TestLayer)

function TestFastScrollLayer:ctor()
    TestLayer.ctor(self)
end

function TestFastScrollLayer:getInfo()
    local t = {}
    for i=1,100 do
        table.insert(t, {name=i})
    end
    return t
end

function TestFastScrollLayer:init()
    TestLayer.init(self)

    local go = self:loadUiPrefab("Assets/Prefabs/UI/Test/testFastScroll.prefab")
    local t = self:getInfo()

    self:registerClick(go.transform:Find("Insert").gameObject)
    self:registerClick(go.transform:Find("Remove").gameObject)

    self._gap = Vector2(20,20)
    self._size = Vector2(200,200)
    self._tile = Vector2(5,6)
    self._isVerticalScroll = true

    local scrollViewGo = go.transform:Find("ScrollViewH").gameObject
    if self._isVerticalScroll then
        scrollViewGo = go.transform:Find("ScrollViewV").gameObject
    end
    scrollViewGo:SetActive(true)

    local contentGo = scrollViewGo.transform:Find("Viewport/Content").gameObject
    local imageGo = contentGo.transform:Find("Image").gameObject
    imageGo:SetActive(false)
    self._itemPrefab = imageGo

    local temp = {}
    temp.displaySize = self._tile
    temp.isLoadPerFrame = true
    temp.isVerticalScroll = self._isVerticalScroll
    temp.goList = {}
    temp.dataList = t
    -- temp.contentGo = contentGo
    temp.delegate = {
        ["resize"] = handler(self, self.resize),
        ["position"] = handler(self, self.itemPosition),
        ["create"] = handler(self, self.itemCreate),
        ["tile"] = handler(self, self.itemTile),
        ["fill"] = handler(self, self.itemFill),
        ["move"] = handler(self, self.itemMove),
        ["clicked"] = handler(self, self.itemClicked),
    }

    self._fastScroll = require("graphic.component.CFastScroll").create()
    self._fastScroll:init(scrollViewGo, temp)

    -- g_tools:delayCall(0.5, function() self:handleClick("Insert") end)
    -- g_tools:delayCall(0.2, function() self:handleClick("Remove") end)

    self._rootGo = go
    self:bindTouchHandler()
end

function TestFastScrollLayer:resize(count)
    if self._isVerticalScroll then
        return Vector2(0, math.ceil(count/self._tile.x)*(self._gap.y + self._size.y) + self._gap.y )
    else
        return Vector2(math.ceil(count/self._tile.x)*(self._gap.x + self._size.x) + self._gap.x, 0)
    end
end

function TestFastScrollLayer:itemPosition(vec)
    local x = self._gap.x + (self._gap.x + self._size.x)*(vec.x-1)
    local y = self._gap.y + (self._gap.y + self._size.y)*(vec.y-1)

    if self._isVerticalScroll then
        return Vector2(x + 100, -y - 100)
    else
        return Vector2(y + 100, -x - 100)
    end
end

function TestFastScrollLayer:itemCreate(parent, index)
-- print("2-->",os.clock())
    local itemGo = GameObject.Instantiate(self._itemPrefab)
    itemGo.name = tostring(index)
    itemGo.transform:SetParent(parent.transform, false)
    itemGo:SetActive(true)
-- print("3-->",os.clock())
    return itemGo
end

function TestFastScrollLayer:itemFill(itemGo, data, index)
    itemGo.name = tostring(index)
    -- print(tostring(index))
    local textGo = itemGo.transform:Find("GameObject").gameObject
    textGo:GetComponent(typeof(UI.Text)).text = data.name

    if index%2 == 0 then
        itemGo:GetComponent(typeof(UI.Image)).color = Color(245/255,245/255,245/255,1)
        textGo:GetComponent(typeof(UI.Text)).color = Color(130/255,130/255,130/255,1)
    else
        itemGo:GetComponent(typeof(UI.Image)).color = Color(210/255,210/255,210/255,1)
        textGo:GetComponent(typeof(UI.Text)).color = Color(83/255,83/255,83/255,1)
    end
end

function TestFastScrollLayer:itemMove(itemGo, pos, index)
    -- print(tostring(index))
    itemGo.name = tostring(index)
    local textGo = itemGo.transform:Find("GameObject").gameObject
    if index%2 == 0 then
        itemGo:GetComponent(typeof(UI.Image)).color = Color(245/255,245/255,245/255,1)
        textGo:GetComponent(typeof(UI.Text)).color = Color(130/255,130/255,130/255,1)
    else
        itemGo:GetComponent(typeof(UI.Image)).color = Color(210/255,210/255,210/255,1)
        textGo:GetComponent(typeof(UI.Text)).color = Color(83/255,83/255,83/255,1)
    end
end

function TestFastScrollLayer:itemTile(pos)
    local i = pos.x/(self._gap.x + self._size.x)
    local j = pos.y/(self._gap.y + self._size.y)

    if self._isVerticalScroll then
        return math.ceil(i), math.ceil(-j)
    else
        return math.ceil(-j), math.ceil(i)
    end
end

function TestFastScrollLayer:itemClicked(itemGo, data, index)
    print("clicked index is ", index)
    print("clicked name is ", data.name)
end

function TestFastScrollLayer:OnPointerClick(data)
    self._fastScroll:pointerClick(data)
end

function TestFastScrollLayer:handleClick(name)
    if name == "Insert" then
        -- self._fastScroll._isValueChangedStop = true
        self._fastScroll:insert({name=tostring(math.random(10))}, 29)
        -- self._fastScroll:printInfo()
        -- self._fastScroll:insertRange(29,32)
    elseif name == "Remove" then
        self._fastScroll:remove(29)
        -- self._fastScroll:printInfo()
    end
end

return TestFastScrollLayer
