local GTools = class("GTools")

function GTools:ctor()
end

function GTools:delayOneFrame(callback)
    return self:delayCall(0.01, callback, true)
end

--默认游戏时间,受timeScale影响
function GTools:delayCall(t, callback, isUseRealTime)
    return CS.Game.GScheduler.DelayCall(t, callback, isUseRealTime)
end

function GTools:loopCall(t, callback, isUseRealTime)
    return CS.Game.GScheduler.LoopCall(t, callback, isUseRealTime)
end

function GTools:stopLoopCall(timer)
    return CS.Game.GScheduler.StopLoop(timer)
end

function GTools:frameCall(callback, isUseRealTime)
    return CS.Game.GScheduler.FrameCall(callback, isUseRealTime)
end

function GTools:pause(timer)
    CS.Game.GScheduler.Pause(timer)
end

function GTools:resume(timer)
    CS.Game.GScheduler.Resume(timer)
end

function GTools:stop(timer)
    CS.Game.GScheduler.StopLoop(timer)
end

function GTools:stopFrameCall(timer)
    CS.Game.GScheduler.StopLoop(timer)
end

function GTools:stopAllTimer()
    CS.Game.GScheduler.StopAllTimer()
end

function GTools:listTable(tb, table_list, level)
    local ret = ""
    local indent = string.rep(" ", level*4)

    for k, v in pairs(tb) do
        local quo = type(k) == "string" and "\"" or ""
        ret = ret .. indent .. "[" .. quo .. tostring(k) .. quo .. "] = "

        if type(v) == "table" then
            local t_name = table_list[v]
            if t_name then
                ret = ret .. tostring(v) .. " -- > [\"" .. t_name .. "\"]\n"
            else
                table_list[v] = tostring(k)
                ret = ret .. "{\n"
                ret = ret .. self:listTable(v, table_list, level+1)
                ret = ret .. indent .. "}\n"
            end
        elseif type(v) == "string" then
            ret = ret .. "\"" .. tostring(v) .. "\"\n"
        else
            ret = ret .. tostring(v) .. "\n"
        end
    end

    local mt = getmetatable(tb)
    if mt then 
        ret = ret .. "\n"
        local t_name = table_list[mt]
        ret = ret .. indent .. "<metatable> = "

        if t_name then
            ret = ret .. tostring(mt) .. " -- > [\"" .. t_name .. "\"]\n"
        else
            ret = ret .. "{\n"
            ret = ret .. self:listTable(mt, table_list, level+1)
            ret = ret .. indent .. "}\n"
        end
    end

   return ret
end

function GTools:tableToString(t)
    if type(t) ~= "table" then
        error("Sorry, it's not table, it is " .. type(t) .. ".")
    end

    local ret = " = {\n"
    local table_list = {}
    table_list[t] = "root table"
    ret = ret .. self:listTable(t, table_list, 1)
    ret = ret .. "}"
    return ret
end

function GTools:printTable(t)
    -- log.writeToFile(self:tableToString(t))
    print(tostring(t) .. self:tableToString(t))
end

--表内位置随机重排
function GTools:shuffle(t)
    local count = #t
    for i = count,2,-1 do
        local j = math.random(i)
        local temp = t[i]
        t[i] = t[j]
        t[j] = temp
    end
end

function GTools:deepCopy(t)
    local lookup_table = {}
    local function _copy(t)
        if type(t) ~= "table" then
            return t
        elseif lookup_table[t] then
            return lookup_table[t]
        end
        local new_table = {}
        lookup_table[t] = new_table
        for index, value in pairs(t) do
            new_table[_copy(index)] = _copy(value)
        end
        return setmetatable(new_table, getmetatable(t))
    end

    return _copy(t)
end

function GTools:captureScreenshot(fileName)
    local filePath = CS.Game.GFileUtils.GetInstance():GetScreenshotPath().."/"..fileName;
    ScreenCapture.CaptureScreenshot(filePath);
end

return GTools
