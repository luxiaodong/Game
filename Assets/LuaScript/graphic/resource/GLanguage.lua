
local GLanguage = class("GLanguage")

function GLanguage:ctor()
    self._support = {"cn","en"}
    self._defaultKey = "cn"
    self._key = ""
    self._assetsPrefix = ""
    self._isDefault = false
    self:init()
end

function GLanguage:init()
    local key = PlayerPrefs.GetString("game_language")
    if self:isSupport(key) then
        self._key = key
    else
        self._key = self._defaultKey
    end

    if self._defaultKey == self._key then
        self._isDefault = true
    else
        self._assetsPrefix = string.format("Localizations/%s/", string.upper(self._key))
    end

    self._language = require("graphic.resource.language."..self._key)
end

function GLanguage:storeKey(key)
    if self:isSupport(key) then 
        PlayerPrefs.SetString("game_language", key)
        PlayerPrefs.Save()
    end
end

function GLanguage:key()
    return self._key
end

function GLanguage:isDefault()
    return self._isDefault
end

function GLanguage:assetsPrefix()
    return self._assetsPrefix
end

function GLanguage:isSupport(key)
    for i,v in ipairs(self._support) do
        if v == key then
            return true
        end
    end

    return false
end

--以下抓取字符串函数
function GLanguage:get(id)
    return self._language[tostring(id)] or ""
end

function GLanguage:format(id, ...)
    if self._language[tostring(id)] then
        return string.format(self._language[tostring(id)], ...)
    end

    return ""
end

function GLanguage:localize(id, ...)
    local str = self._language[tostring(id)]
    if str then
        if type(str) == "string" then
            return string.format(str, ...)
        elseif type(str) == "table" then
            local args = {...}
            if #args == #str[2] then
                local temp = {}
                for i,v in ipairs(str[2]) do
                    temp[i] = args[v]
                end
                return string.format(str[1], table.unpack(temp))
            end
        end
    end

    return ""
end

function GLanguage:formatNumber(value, func)
    if self._language["formatNumber"] then
        return self._language["formatNumber"](value, func)
    end

    return ""
end

return GLanguage
