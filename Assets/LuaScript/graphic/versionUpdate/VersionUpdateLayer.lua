local GLayer = require("graphic.core.GLayer")
local VersionUpdateLayer = class("VersionUpdateLayer", GLayer)

function VersionUpdateLayer:ctor()
    GLayer.ctor(self)
end

function VersionUpdateLayer:init()
    GLayer.init(self)

    self._ui = {}
    local go = self:loadUiPrefab("Prefabs/UI/versionUpdate.prefab")

    local tempGo = go.transform:Find("des").gameObject
    self._ui.des = {}
    self._ui.des.text = tempGo:GetComponent(typeof(UI.Text))

    local tempGo = go.transform:Find("bar").gameObject
    self._ui.bar = {}
    self._ui.bar.gameObject = tempGo
    self._ui.bar.image = tempGo:GetComponent(typeof(UI.Image))

    log.tracePoint("checkUpdate")
    self._constData = require("base.VersionUpdateData")
    self._control = require("base.VersionUpdateControl").new(self, self._constData) --动更的控制器
    self:initLanguages()

    self._control:start()
end

function VersionUpdateLayer:OnUpdate()
    self._control:update(Time.deltaTime)
end

function VersionUpdateLayer:showUpdateInfoTips(msg, yesCallback)
    local data = {}
    data.type = enum.ui.messagebox.type.info
    data.msg = msg
    data.yesCallback = yesCallback
    event.broadcast(event.ui.messagebox, data)
end

function VersionUpdateLayer:showUpdateInfoDialog(msg, yesCallback, noCallback)
    local data = {}
    data.type = enum.ui.messagebox.type.question
    data.msg = msg
    data.yesCallback = yesCallback
    data.noCallback = noCallback
    event.broadcast(event.ui.messagebox, data)
end


--以下函数需要重构,以适应动更逻辑
--------------------------UI-Begin---------------------------------

--[[
    显示更新提示文字
--]]
function VersionUpdateLayer:showUpdateTipWords()
    self._ui.des.text.text = tipWords
end

--[[
    更新动更进度
--]]
function VersionUpdateLayer:updateProgress(precentage)
    self._ui.bar.image.fillAmount = precentage
end

--[[
    设置更新进度条的显示状态
--]]
function VersionUpdateLayer:setProgressBarVisible(visible)
    self._ui.bar.gameObject:SetActive(visible)
end

--------------------------UI-End---------------------------------

--[[
    userDefalut.xml存储key值
--]]

-- 当前资源路径key
function VersionUpdateLayer:getUserDefaultCurResPathKey()
    return "game_currentResourcePath"
end

-- gameVersion key
function VersionUpdateLayer:getUserDefaultGameVersionKey()
    return "game_luaVersion"
end

-- 当前的cdn index key
function VersionUpdateLayer:getUserDefaultCdnIndexKey()
    return "game_defaultCdnIndex"
end

-- ---------------------------------------------------------------

function VersionUpdateLayer:setStringForKey(key, value)
    PlayerPrefs.SetString(key, value)
end

function VersionUpdateLayer:getStringForKey(key)
    return PlayerPrefs.GetString(key)
end

function VersionUpdateLayer:setIntegerForKey(key, value)
    PlayerPrefs.SetInt(key, value)
end

function VersionUpdateLayer:getIntegerForKey(key)
    return PlayerPrefs.GetInt(key)
end

function VersionUpdateLayer:flushUserDefault()
    PlayerPrefs.Save()
end

function VersionUpdateLayer:getFileUtils()
    return CS.Game.GFileUtils.GetInstance()
end

function VersionUpdateLayer:getGResumeDownloadThread()
    if self._download == nil then
        self._download = CS.Game.GDownload()
    end

    return self._download
end

function VersionUpdateLayer:getGZipTools()
    if self._zip == nil then
        self._zip = CS.Game.GZipUtils()
    end

    return self._zip;
end

-- ---------------------------------------------------------------

-- 输出日志信息
function VersionUpdateLayer:printLog(...)
    --log.info(...)
    print(...)
end

-- 输出lua table
function VersionUpdateLayer:showTable(luaTable)

end

-- 记录玩家操作记录
function VersionUpdateLayer:opRecord(message)
    log.tracePoint(message)
end

function VersionUpdateLayer:reportError(message)
    log.monitor("checkUpdate", message)
end

function VersionUpdateLayer:getCheckUpdateUrl()
    return "http://47.101.157.173/checkUpdate.action"
end

-- 获得 检测更新url header
function VersionUpdateLayer:getCheckUpdateUrlHost()
    return 'mlist.aoshitang.com'
end

function VersionUpdateLayer:getGameId()
    return "qzbsg"
    --return config.gameId
end

function VersionUpdateLayer:getChannelFlag()
    return "ios_appstore"
    --return sdk._channelId
end

function VersionUpdateLayer:getYxSource()
    return ""
    --return sdk._yxSource or ""
end

--[[
    获得底包类型, 0: 正常包, 1: 30m小包
--]]
function VersionUpdateLayer:getPackageType()
    return 0
    -- local packageType = self:getIntegerForKey("packageType")
    -- return packageType
end

-- ---------------------------------------------------------------

--[[
    初始化动更语言包
--]]
function VersionUpdateLayer:initLanguages()

    self.languages = {
        [400001] = g_language:get("versionUpdate_1"),
        [400002] = g_language:get("versionUpdate_2"),
        [400003] = g_language:get("versionUpdate_3"),
        [400004] = g_language:get("versionUpdate_4"),
        [400005] = g_language:get("versionUpdate_5"),
        [400006] = g_language:get("versionUpdate_6"),
        [400007] = g_language:get("versionUpdate_7"),
        [400008] = g_language:get("versionUpdate_8"),
        [400009] = g_language:get("versionUpdate_9"),
        [400010] = g_language:get("versionUpdate_10"),
        [400011] = g_language:get("versionUpdate_11"),
        [400012] = g_language:get("versionUpdate_12"),
        [400013] = g_language:get("versionUpdate_13"),
    }
end

--[[
    获得提示语言
--]]
function VersionUpdateLayer:getString(id, ...)
    local text = string.format(self.languages[id], ...)
    return text
end

-- ---------------------------------------------------------------

-- 打开网页
function VersionUpdateLayer:openURL(url)
    Application.OpenURL(url)
end

-- 没有动更,进入游戏
function VersionUpdateLayer:enterGame()
    event.broadcast(event.ui.changeScene, {name=enum.ui.scene.login})
end

-- 退出游戏
function VersionUpdateLayer:exitGame()
    g_system:restartGame()
end

return VersionUpdateLayer

