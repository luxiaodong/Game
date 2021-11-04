
local GLayer = require("graphic.core.GLayer")
local AudioLayer = class("AudioLayer",GLayer)

--这里只支持2d音效, 3d音效绑定在物体上,物体删除会导致声音中断.需要特殊处理.
function AudioLayer:ctor()
	GLayer.ctor(self)
end

function AudioLayer:init()
    local t = {
        event.audio.play,
        -- event.audio.pause,
        -- event.audio.resume,
        -- event.audio.stop,
        event.audio.volume,
        event.audio.mute,
    }
    self:registerEvents(t)

    local path = "Audios/AudioMixer.mixer"
    self._audioMixer = self:loadAsset(path)

    self._audioMixerGroup = {}
    self._audioMixerGroup[enum.audio.group.master] = self._audioMixer:FindMatchingGroups("Master")[0]
    self._audioMixerGroup[enum.audio.group.background] = self._audioMixer:FindMatchingGroups("Master/Background")[0]
    self._audioMixerGroup[enum.audio.group.effect] = self._audioMixer:FindMatchingGroups("Master/Effect")[0]

    --默认音量设置.
    self:setAudioVolume(enum.audio.group.master, 1)
    self:setAudioVolume(enum.audio.group.background, 1)
    self:setAudioVolume(enum.audio.group.effect, 1)
end

function AudioLayer:handleEvent(e)
	if e.name == event.audio.play then
        self:play(e.data.fileName, e.data.isLoop, e.data.callback, e.data.group)
        -- e.data.group = "effect"

    -- elseif e.name == event.audio.stop then
    --     self:stop(e.data.fileName)
    -- elseif e.name == event.audio.pause then
    --     self:pasue(e.data.fileName)
    -- elseif e.name == event.audio.resume then
    --     self:resume(e.data.fileName)
    elseif e.name == event.audio.volume then --全局
        AudioListener.volume = e.data.value
    elseif e.name == event.audio.mute then --全局
        AudioListener.pause = e.data.mute
	end
end

--只对单独的声音有效
function AudioLayer:findAudioSource(key)
    local t = self._components.audio[key]
    if t and #t == 1 then
        return t[1]
    end
end

function AudioLayer:pause(key)
    local audioSource = self:findAudioSource(key)
    if audioSource then
        audioSource:Pause()
    end
end

function AudioLayer:resume(key)
    local audioSource = self:findAudioSource(key)
    if audioSource then
        audioSource:UnPause() --测试下来无效
    end
end

function AudioLayer:stop(key)
    local audioSource = self:findAudioSource(key)
    if audioSource then
        audioSource:Stop()
    end
end

function AudioLayer:play(fileName, isLoop, callback, group)
    if not self._components.audio then
        self._components.audio = {} --2维表,不同声音,同一声音多个.
    end

    local key = fileName
    local index = 0 --尝试查找相同声音,不在播放的.
    if self._components.audio[key] then
        for i,v in ipairs(self._components.audio[key]) do
            if v.isPlaying then
                if group == enum.audio.group.background then --相同的背景音乐过滤掉
                    if v.loop == true then
                        return
                    end
                end
            else
                index = i
                break
            end
        end
    end

    --优化:可以不用遍历,利用时间回调,直接回收.
    --问题:pasue住的也是not playing, 可能导致无法resume.
    local audioSource = nil
    if index == 0 then --没找到
        local keyNotPlaying = "" --尝试查找不同声音,不在播放的
        for k, t in pairs(self._components.audio) do
            if k ~= key then
                for i,v in ipairs(t) do
                    if not v.isPlaying then
                        index = i
                        keyNotPlaying = k
                    end
                end

                if index > 0 then
                    break
                end
            end
        end

        if index == 0 then --没找到,创建
            audioSource = self._go:AddComponent(typeof(AudioSource))            
        else --找到,替换声源播放
            audioSource = table.remove(self._components.audio[keyNotPlaying], index)
        end
    
        if not self._components.audio[key] then
            self._components.audio[key] = {}
        end
        table.insert(self._components.audio[key], audioSource)

        -- 加载声源
        -- 声音资源需要特殊管理. 何时释放?
        audioSource.clip = self:loadAsset(fileName)
    else --找到,直接使用
        audioSource = self._components.audio[key][index]
    end

    if isLoop then
        audioSource.loop = true    
    end

    if group == enum.audio.group.background then
        audioSource.outputAudioMixerGroup = self._audioMixerGroup[enum.audio.group.background]
    else
        audioSource.outputAudioMixerGroup = self._audioMixerGroup[enum.audio.group.effect]
    end

    audioSource:Play()

    if not isLoop and callback then
        g_tools:delayCall(audioSource.clip.length, self:handler(callback), true)
    end
    
    return audioSource
end

function AudioLayer:setAudioVolume(group,value)
    if group == enum.audio.group.master then
        self._audioMixer:SetFloat("MasterVolume", self:volumeToDb(value))
    elseif group == enum.audio.group.background then
        self._audioMixer:SetFloat("BackgroundVolume", self:volumeToDb(value))
    elseif group == enum.audio.group.effect then
        self._audioMixer:SetFloat("EffectVolume", self:volumeToDb(value))
    end
end

function AudioLayer:setAudioMute(group,value)
end

--从音量0-1,转成unity适用的分贝
--映射关系待定
function AudioLayer:volumeToDb(value)
    return 1
    -- return 100*value
end

return AudioLayer
