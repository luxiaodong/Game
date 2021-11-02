local LuaComponent = require("graphic.component.LuaComponent")
local CFastScroll = class("CFastScroll", LuaComponent)

function CFastScroll:ctor()
    LuaComponent.ctor(self)
end

-- 所有计算的索引从1开始
function CFastScroll:init(go, data)
    self._type = data.type or typeof(UI.ScrollRect)

    -- 组件列表和数据列表,增减由组件自己控制
    self._itemList = data.goList or {} 
    self._dataList = data.dataList
    self._contentGo = data.contentGo or go.transform:Find("Viewport/Content").gameObject
    -- 回调函数相关
    self._delegate = data.delegate

    self._displayWidth = math.floor(data.displaySize.x)
    self._displayHeight = math.floor(data.displaySize.y)
    self._displayCount = self._displayWidth*self._displayHeight
    self._isLoadPerFrame = data.isLoadPerFrame -- 是否每帧显示
    self._nextLoadIndex = #self._itemList + 1 -- 开始显示索引
    self._totalCount = #self._dataList

    self._isVerticalScroll = data.isVerticalScroll
    self._isAddListener = false -- 是否支持滑动监听
    self._maxIndex = 0 -- 记录当前画面下的最大索引

    -- 不开启则一次加载完成
    if not self._isLoadPerFrame then
        for i=1, self._displayCount do
            self:loadSingleItem()
        end
        self:setContentSize(self._totalCount)
    end

    self._callback = data.callback
    LuaComponent.init(self, go)
end

function CFastScroll:isSupport()
    self._component = self._go:GetComponent(self._type)
    if self._component then
        return true
    end

    return false
end

function CFastScroll:loadSingleItem()
    if self._nextLoadIndex <= math.min(self._displayCount, self._totalCount) then
        local itemGo = self._delegate.create(self._contentGo, self._nextLoadIndex)
        local i,j = self:convertIndex(self._nextLoadIndex)
        self:setItemPosition(itemGo, Vector2(i,j))
        self._delegate.fill(itemGo, self._dataList[self._nextLoadIndex], self._nextLoadIndex)
        self._nextLoadIndex = self._nextLoadIndex + 1
        table.insert(self._itemList, itemGo)
    end
end

function CFastScroll:deleteSingleItem(index)
    local itemIndex = self:itemIndex(index)
    local itemGo = table.remove(self._itemList, itemIndex)
    Object.Destroy(itemGo)
end

function CFastScroll:checkAddListener()
    if not self._isAddListener then
        if self._totalCount > self._displayCount then
            self._isAddListener = true
            self._component.onValueChanged:AddListener(handler(self, self.valueChanged))
            self._maxIndex = self._displayCount
        end
    end
end

function CFastScroll:OnUpdate()
    if self._isLoadPerFrame then
        if self._nextLoadIndex <= self._displayCount then
            self:loadSingleItem()
        else
            self._isLoadPerFrame = false
            self:setContentSize(self._totalCount)
        end
    else
        self:checkAddListener()
    end
end

function CFastScroll:setItemPosition(itemGo, pos)
    itemGo:GetComponent(typeof(RectTransform)).anchoredPosition = self._delegate.position(pos)
end

function CFastScroll:setContentSize(size)
    self._contentGo:GetComponent(typeof(RectTransform)).sizeDelta = self._delegate.resize(size)
end

--计算itemGo的索引号
function CFastScroll:itemIndex(index)
    local index = index%self._displayCount
    if index == 0 then
        index = self._displayCount
    end
    return index
end

--从一维index转成二维索引
function CFastScroll:convertIndex(index)
    local index = index - 1
    local i = math.floor(index%self._displayWidth)
    local j = math.floor(index/self._displayWidth)
    return i+1,j+1
end

--填充index的数据
function CFastScroll:fillIndex(index)
    if index <= self._totalCount then
        local itemGo = self._itemList[self:itemIndex(index)]
        local i,j = self:convertIndex(index)
        self:setItemPosition(itemGo, Vector2(i,j))
        self._delegate.fill(itemGo, self._dataList[index], index)
    end
end

function CFastScroll:valueChanged(vec)
    local heightCount = math.ceil(self._totalCount/self._displayWidth)
    local endIndex
    if self._isVerticalScroll then
        local p = Mathf.Clamp(vec.y, 0, 1) --横向从左到右
        endIndex = math.floor(heightCount + (self._displayHeight - heightCount)*p + (1-p))
    else
        local p = Mathf.Clamp(vec.x, 0, 1) --横向从上到下
        endIndex = math.floor(self._displayHeight + (heightCount - self._displayHeight)*p + p)
    end
    
    endIndex = math.min(endIndex*self._displayWidth, self._totalCount)

    if endIndex == self._maxIndex then      --滑动范围小,不需要更新
        return 
    elseif endIndex > self._maxIndex then   --向大端滑
        for index = self._maxIndex+1, endIndex do
            self:fillIndex(index)
        end
    elseif endIndex < self._maxIndex then   --向小端滑
        for index = endIndex+1 - self._displayCount, self._maxIndex - self._displayCount do
            self:fillIndex(index)
        end
    end

    self._maxIndex = endIndex
end

-- 插入数据
function CFastScroll:itemSwap(srcIndex, dstIndex)
    local srcItemIndex = self:itemIndex(srcIndex)
    local dstItemIndex = self:itemIndex(dstIndex)
    local srcItemGo = self._itemList[srcItemIndex]
    local dstItemGo = self._itemList[dstItemIndex]
    self._itemList[srcItemIndex] = dstItemGo
    self._itemList[dstItemIndex] = srcItemGo

    local i,j = self:convertIndex(srcIndex)
    self:setItemPosition(dstItemGo, Vector2(i,j))
    self._delegate.move(dstItemGo, Vector2(i,j), srcIndex)

    local i,j = self:convertIndex(dstIndex)
    self:setItemPosition(srcItemGo, Vector2(i,j))
    self._delegate.move(srcItemGo, Vector2(i,j), dstIndex)
end

function CFastScroll:insertRange(firstIndex, lastIndex)
    for i = lastIndex-1, firstIndex, -1 do
        self:itemSwap(i, i+1)
    end

    self:fillIndex(firstIndex)
end

function CFastScroll:removeRange(firstIndex, lastIndex)
    if firstIndex == lastIndex then return end
    for i = firstIndex+1, lastIndex do
        self:itemSwap(i, i-1)
    end

    self:fillIndex(lastIndex)
end

function CFastScroll:insert(data, index)
    index = index or self._totalCount + 1
    if index > self._totalCount + 1 then return end
    self._totalCount = self._totalCount + 1
    table.insert(self._dataList, index, data)

    -- 分帧加载时被插入
    if self._isLoadPerFrame then
        if index < self._nextLoadIndex then --已经被加载进去了
            self:insertRange(index, self._nextLoadIndex - 1)
        else
            -- 不需要处理,数据已经调整,分帧会加载到
        end
    else
        if not self._isAddListener then
            -- 设置的目的是调用loadSingleItem
            self._nextLoadIndex = self._totalCount
            self:loadSingleItem()
            local lastIndex = math.min(self._nextLoadIndex - 1, self._displayCount)
            self:insertRange(index, lastIndex)
            self:checkAddListener()
            if self._maxIndex%self._displayWidth > 0 then
                self._maxIndex = self._nextLoadIndex - 1
            end
        else
            if index <= self._maxIndex then
                local lastIndex = self._maxIndex
                local firstIndex = math.max(index, lastIndex - self._displayCount + 1)
                self:insertRange(firstIndex, lastIndex)

                if self._maxIndex%self._displayWidth > 0 then
                    self:fillIndex(self._totalCount)
                    self._maxIndex = self._maxIndex + 1
                end
            else
                -- 不需要处理,数据已经调整,滑下去会更新
            end
        end
        self:setContentSize(self._totalCount)
    end
end

-- 删除数据
function CFastScroll:remove(index)
    index = index or self._totalCount
    if index > self._totalCount then return end
    table.remove(self._dataList, index)
    self._totalCount = self._totalCount - 1

    if self._isLoadPerFrame then
        if index < self._nextLoadIndex then -- 已经被加载进去了
            self:removeRange(index, self._nextLoadIndex - 1)
            self:deleteSingleItem(self._nextLoadIndex - 1)
            self._nextLoadIndex = self._nextLoadIndex - 1
        end
    else
        if not self._isAddListener then
            local lastIndex = math.min(self._nextLoadIndex - 1, self._displayCount)
            self:removeRange(index, lastIndex)
            self:deleteSingleItem(lastIndex)
            self._nextLoadIndex = self._nextLoadIndex - 1
            self._maxIndex = self._nextLoadIndex - 1
        else
            if index < self._maxIndex then
                local lastIndex = self._maxIndex
                local firstIndex = math.max(index, lastIndex - self._displayCount + 1)
                self:removeRange(firstIndex, lastIndex)
                if self._displayCount <= self._totalCount then -- 不需要删除控件
                    self._maxIndex = math.min(self._maxIndex, self._totalCount)
                    if self._maxIndex == self._totalCount then
                        if lastIndex <= self._totalCount then
                            self:fillIndex(lastIndex)
                        else
                            self:fillIndex(lastIndex - self._displayCount)
                        end
                    else
                        self:fillIndex(lastIndex)
                    end

                    if self._displayCount == self._totalCount then
                        self._isAddListener = false
                        self._component.onValueChanged:RemoveAllListeners()
                        self._nextLoadIndex = self._displayCount + 1
                    end
                end
            end
        end
        self:setContentSize(self._totalCount)
    end
end

--需要被OnPointerClick调用,传入data
function CFastScroll:pointerClick(data)
    local rect = self._go:GetComponent(typeof(RectTransform)) --应该用mask组件的,这里用ScrollRect
    local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, data.position, data.pressEventCamera)

    if isOk then
        if rect.rect:Contains(pos) == true then
            local isOk, pos = RectTransformUtility.ScreenPointToLocalPointInRectangle(self._contentGo:GetComponent(typeof(RectTransform)), data.position, data.pressEventCamera)
            if isOk then
                local i,j = self._delegate.tile(pos)
                local index = math.floor(i+(j-1)*self._displayWidth)
                local itemIndex = self:itemIndex(index)
                self._delegate.clicked(self._itemList[itemIndex], self._dataList[index], index)
            end
        end
    end
end

function CFastScroll:printInfo()
    print("================================")
    print("totalCount is ", self._totalCount)
    print("maxIndex is ", self._maxIndex)
    print("nextLoadIndex is ", self._nextLoadIndex)
    for i,itemGo in ipairs(self._itemList) do
        print(i, itemGo.name)
    end
end

return CFastScroll
