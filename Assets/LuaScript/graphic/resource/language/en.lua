
local language = {
    ["left_bracket"] = "(",
    ["right_bracket"] = ")",
    ["percent"] = "%s/%s",
    ["max"] = "Max",
    ["lv"] = "Lv. %s",
    ["exp"] = "exp",
    ["none"] = "none",
    ["plus"] = "+%s",
}

function language.formatNumber(value, func)
    func = func or math.floor

    local digit = string.len(math.floor(value))
    if digit > 10 then
        return string.format("%0.0f%s", func(value/1000000000), "G")
    elseif digit > 9 then
        local str = string.format("%0.2f%s", value/1000000000, "G")
        str = string.gsub(str, "%.00", "")
        str = string.gsub(str, "0G", "G")
    elseif digit > 7 then
        return string.format("%0.0f%s", func(value/1000000), "M")
    elseif digit > 6 then
        local str = string.format("%0.2f%s", value/1000000, "M")
        str = string.gsub(str, "%.00", "")
        str = string.gsub(str, "0M", "M")
        return str
    elseif digit > 4 then
        return string.format("%0.0f%s", func(value/1000), "K")
    elseif digit > 3 then
        local str = string.format("%0.2f%s", value/1000, " K")
        str = string.gsub(str, "%.00", "")
        str = string.gsub(str, "0K", "K")
        return str
    end

    return math.floor(value)
end

return language
