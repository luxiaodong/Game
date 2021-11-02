
-- local function start()
--     -- local app = require("GApplication").create()
--     -- app:init()
-- print("0")
--     g_2dTools = require("graphic.tools.G2DTools").create()
-- print("1")
-- end

-- xpcall(start, function(...) print(...) error("X") end )

function checkPackageVersion()
	local function removeDir(path)
	    if path and CS.Game.GFileUtils.GetInstance():IsDirExist(path) then
	        CS.Game.GFileUtils.GetInstance():RemoveDir(path)
	    end
	end

	local function stringSplit(input)
		local pos = 0
		local arr = {}
		for st,sp in function() return string.find(input,'.', pos, true) end do
        	table.insert(arr, string.sub(input, pos, st - 1))
        	pos = sp + 1
	    end
	    table.insert(arr, string.sub(input, pos))
	    return arr
	end

	--0.小于 1.相等 2.大于 3.格式错误
	local function compareTwoVersion(one, other)
		if one == nil or other == nil then
			return 3
		end

		local oneList = stringSplit(one)
		local otherList = stringSplit(other)

		if #oneList ~= 4 or #otherList ~= 4 then
			return 3
		end

		for i = 1,4 do		
			local oneNumber = tonumber(oneList[i])
			local otherNumber = tonumber(otherList[i])

			if oneNumber < otherNumber then
				return 0
			elseif oneNumber > otherNumber then
				return 2
			end
		end

		return 1
	end

	local PlayerPrefs = CS.UnityEngine.PlayerPrefs
    local currentResPath = PlayerPrefs.GetString("game_currentResourcePath")

	require "version"
	local packageClientVersion = sys_version.client
	local packageGameVersion = sys_version.game

    -- mac os的bug
    -- https://answers.unity.com/questions/1185920/editor-playerprefs-getting-repopulated-with-delete.html
	local savedClientVersion = PlayerPrefs.GetString("game_cppVersion")
    local savedGameVersion = PlayerPrefs.GetString("game_luaVersion")
    
	if savedClientVersion == nil or savedClientVersion == "" then
		--第一次装包
		PlayerPrefs.SetString("game_cppVersion", packageClientVersion)
		PlayerPrefs.SetString("game_luaVersion", packageGameVersion)
		PlayerPrefs.Save()
	else
		local savedGameVersion = PlayerPrefs.GetString("game_luaVersion")
		local value = compareTwoVersion(savedClientVersion, packageClientVersion)
		--0.小于 1.相等 2.大于 3.格式错误
		if value == 0 then ----client版本前进. 覆盖安装
			PlayerPrefs.SetString("game_cppVersion", packageClientVersion)
			UnityEngine.PlayerPrefs.SetString("game_luaVersion", packageGameVersion)
			--删掉 currentResPath 保存的资源
            removeDir(currentResPath)
            currentResPath = nil
			PlayerPrefs.Save()
		elseif value == 1 then
			local value = compareTwoVersion(savedGameVersion, packageGameVersion)
			if value == 0 or value == 1 then
				--删掉 currentResPath 保存的资源
                removeDir(currentResPath)
                currentResPath = nil
			end
		elseif value == 2 then --client版本倒退
			PlayerPrefs.SetString("game_cppVersion", packageClientVersion)
			PlayerPrefs.Save()
		end
	end

	if currentResPath and string.len(currentResPath) > 0 then
        CS.Game.GFileUtils.GetInstance():AddSearchPath(currentResPath)
    end

    local savedClientVersion = PlayerPrefs.GetString("game_cppVersion")
    local savedGameVersion = PlayerPrefs.GetString("game_luaVersion")
    print("[version] cpp:"..savedClientVersion..",lua:"..savedGameVersion..",path:"..tostring(currentResPath))
end

-- 保证只有main和version无法动更,其他文件都能动更
checkPackageVersion()
json = require("rapidjson")
require("base.string")
require("base.functions")
require("constant.alias")
print("[main] lua memory use:"..string.format("%.2f",collectgarbage("count")).."K")

config = {}
config.gameId = "hlw"
config.isOutNet = true
config.isSdkLogin = false

if Application.platform == RuntimePlatform.WindowsEditor or 
 	Application.platform == RuntimePlatform.WindowsPlayer then
	config.platform = "win"
elseif Application.platform == RuntimePlatform.IPhonePlayer then
	config.platform = "ios"
elseif Application.platform == RuntimePlatform.Android then
	config.platform = "android"
elseif Application.platform == RuntimePlatform.OSXPlayer or 
	Application.platform == RuntimePlatform.OSXEditor then
	config.platform = "macos"
end

if config.platform == "win" then
	config.isOutNet = false
end

function __G__PRINT__(...)
	local str = ""
    local arg1 = select(1,...)
    if type(arg1) == "string" and string.find(arg1,'%%s') then
        str = string.format(...)
    else
        local s = tostring(arg1)
        for i = 2,select('#',...) do
            s = table.concat({s, ' ', tostring(select(i,...))})
        end

        str = s
    end
    return debug.traceback(str, 3)
end

function print(...)
	Debug.Log(__G__PRINT__(...))
end

function warning(...)
	Debug.LogWarning(__G__PRINT__(...))
end

-- unity的error无法暂停掉lua线程
-- function error(...)
-- 	Debug.LogError(__G__PRINT__(...))
-- end

function assert(flag, ...)
 	Debug.Assert(flag, __G__PRINT__(...))
end

local function start()
    local app = require("GApplication").create()
    app:init()
end

function __G__TRACKBACK__(msg)
	-- error(msg) 奇怪,无法在控制台里打印出来
	Debug.LogError( debug.traceback(msg, 2) ) 
	if config.isOutNet and config.isSdkLogin then
		log.server(msgWithStack)
	end
end

xpcall(start, __G__TRACKBACK__ )
