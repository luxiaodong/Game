
local LuaComponent = require("graphic.component.LuaComponent")
local CFrameAnimation = class("CFrameAnimation", LuaComponent)

function CFrameAnimation:ctor()
    LuaComponent.ctor(self)
end

function CFrameAnimation:init(go, data)
    self._type = data.type or typeof(UI.Image)
    LuaComponent.init(self, go)
    self:reset(data)
end

function CFrameAnimation:reset(data)
    self._spriteFrames = data.spriteFrames --i,v数组.
    self._intervalTime = data.interval --间隔.
    self._isLoop = data.isLoop or false
    self._callback = data.callback
    self._passTime = 0
    self._currentIndex = nil
    
    if data.autoPlay == false then
        self._isPause = true
    else
        self._isPause = false
    end

    self:display(data.startIndex or 1) --显示第一帧
end

function CFrameAnimation:play()
    self._isPause = false
end

function CFrameAnimation:pause()
    self._isPause = true
end

function CFrameAnimation:isSupport()
    if self._go:GetComponent(self._type) then
        return true
    end

    return false
end

function CFrameAnimation:display(index)
    if self._currentIndex ~= index then
        if index > #self._spriteFrames then
            if self._isLoop then
                index = 1
            else
                self._isPause = true
                if self._callback then
                    self._callback()
                end
                -- self:unbindBehaviour(true)
                return 
            end
        end

        local image = self._go:GetComponent(self._type)
        image.sprite = self._spriteFrames[index]
        --image:SetNativeSize() --放大缩小,偏移处理有问题
        self._currentIndex = index
    end
end

function CFrameAnimation:OnUpdate()
    if self._isPause == true then return end

    self._passTime = self._passTime + Time.deltaTime
    if self._passTime >= self._intervalTime then
        self:display(self._currentIndex + 1)
        self._passTime = self._passTime - self._intervalTime
    end
end

return CFrameAnimation
