
local VersionUpdateData = {}
local VersionUpdateControl = class( "VersionUpdateControl")

function VersionUpdateControl:ctor(view, versionUpdateConsts)
    -- upvalue
    VersionUpdateData = versionUpdateConsts
    self.view = view

    --外部类----------------------- --
    self._fileUtils = self:getFileUtils()
    self._Utils = self:getFileUtils()
    self._GResumeDownloadThread = self:getGResumeDownloadThread()
    self._GZipTools = self:getGZipTools()
    --键值----------------------- --
    self.ud_defaultCdnIndex = self:getUserDefaultCdnIndexKey()
    self.ud_curResPath = self:getUserDefaultCurResPathKey()
    self.ud_gameVersion = self:getUserDefaultGameVersionKey()

    -- 强制更新信息, 动更强更只会出现一个
    self.forceUpdateInfo = nil
    self.dynamicUpdateInfo = nil

    self.cdnIndex = 1 
    self.cdnReady = false --cdn地址没有用过
    self.packageVersion = nil --底包信息,sys_version
    self.savedGameVersion = nil --plist里存储的版本
    self.requetGameVersion = nil --向后端请求的版本,等同于fromGameVersion

    --目录------------------------
    self.writablePath = self._fileUtils:GetWritablePath().."/" --可读写的目录
    self.zipStoreDir = nil --压缩包存放位置
    self.currentResPath = nil --当前的资源目录, nil表示没有更新过
    self.zipList = {} --压缩包的列表, 多个关键更新时, 存放每个压缩包的名字

    self.state = nil --流程状态 
end

-- ---------------------------------------------------------------------------- --
function VersionUpdateControl:start()
    self.zipStoreDir = self.writablePath .. "game_tmp_zip"
    if not self._Utils:IsDirExist(self.zipStoreDir) then
        self._Utils:CreateDir(self.zipStoreDir)
    end

    local currentResPath = self:getStringForKey(self.ud_curResPath)
    if currentResPath and string.len(currentResPath) > 0 then
        self.currentResPath = currentResPath
    end

    local defaultIndex = self:getIntegerForKey(self.ud_defaultCdnIndex)
    if defaultIndex > 0 then
        self.cdnIndex = defaultIndex
    end

    if not sys_version then
        require( VersionUpdateData.file.version )
    end

    self.packageVersion = sys_version
    self.savedGameVersion = self:getStringForKey(self.ud_gameVersion)
    self.requetGameVersion = self.savedGameVersion
    self:changeState(VersionUpdateData.state.start)
end

function VersionUpdateControl:changeState(state)
    self:printLog("[versionUpdate] == VersionUpdateControl:changeState: " .. state)
    self.state = state
end

function VersionUpdateControl:update(dt)
    if self.state == VersionUpdateData.state.start then
        self:checkUpdate()
    elseif self.state == VersionUpdateData.state.downloading then
    elseif self.state == VersionUpdateData.state.download_zip then
        local percent = self._GResumeDownloadThread:Percentage()
self:printLog("[versionUpdate] download_zip ==", percent )
        self:updateProgress(percent)
        self:showUpdateTipWords(self:getString(400010, string.format("%.1f",percent*100), self:formatBytes(self.dynamicUpdateInfo.size))) --0
        self:setProgressBarVisible(true)

        if percent >= 1 then
            self:changeState(VersionUpdateData.state.download_zip_over)
        end

        if self._GResumeDownloadThread:IsAlive() == false then
            self._GResumeDownloadThread:Restart()
        end
    elseif self.state == VersionUpdateData.state.download_zip_over then
        self:updateProgress(100)
        self:showUpdateTipWords(self:getString(400011)) --0
        self:downloadZipOver()
    elseif self.state == VersionUpdateData.state.finishOne then
        self.requetGameVersion = self.dynamicUpdateInfo.gameVersion
        self:changeState(VersionUpdateData.state.start)
    elseif self.state == VersionUpdateData.state.unzip then
        local percent = self._GZipTools:Percentage()
--self:printLog("[versionUpdate] unzip ==", percent )        
    elseif self.state == VersionUpdateData.state.exception then

        self:changeState(VersionUpdateData.state.exit)
    elseif self.state == VersionUpdateData.state.exit then
        self:enterGame()
    end
end

function VersionUpdateControl:checkUpdate()
    local _url = self:getCheckUpdateUrl()
    local _host = self:getCheckUpdateUrlHost()
    local _gameId = self:getGameId()
    local _channelFlag = self:getChannelFlag()
    local _yxSource = self:getYxSource()
    local _clientVersion = self.packageVersion.client
    local _gameVersion = self.requetGameVersion
    local _packageType = self:getPackageType()
    local _buildNo = self.packageVersion.buildNo or 0

    local _args = string.format("gameId=%s&channelId=%s&yxSource=%s&clientVersion=%s&gameVersion=%s&packageType=%s&buildNo=%s", _gameId, _channelFlag, _yxSource, _clientVersion, _gameVersion, _packageType, _buildNo)

    local function callback(code, msg)
        if code == 200 then
            self:printLog("[versionUpdate] == checkUpdate msg: %s",msg)
            self:checkUpdateOver( json.decode(msg) )
        else
            local tips = self:getString(400001)
            local function callback_exit()
                self:exitGame()
            end
            self:showUpdateInfoTips(tips, callback_exit)
        end
    end
    
    self:printLog("[versionUpdate] == checkUpdateUrl: %s, param: %s.", _url, _args)
    self:downloadWithUrl(string.format("%s?%s", _url, _args), callback, _host)
end

function VersionUpdateControl:checkUpdateOver(t)
    -- 1. 先判断状态, 0:无需更新, 1: 资源动态更新, 2: 推荐强制更新, 3: 必需强制更新 
    if t.state == 1 then
        self.dynamicUpdateInfo = t.dynamicInfo
        self:doDynamicUpdate()
    elseif t.state == 2 then
        self.dynamicUpdateInfo = t.dynamicInfo
        self.forceUpdateInfo = t.forceInfo
        self:doForceUpdate(false)
    elseif t.state == 3 then
        self.forceUpdateInfo = t.forceInfo
        self:doForceUpdate(true)
    elseif t.state == 0 then
        if #self.zipList > 0 then
            self:changeState(VersionUpdateData.state.unzip)
            self:doUnzip()
        else
            self:changeState(VersionUpdateData.state.exit)
        end
    else
        self:changeState(VersionUpdateData.state.exception)
    end
end

function VersionUpdateControl:doDynamicUpdate()
    --有执行文件,优先执行
    if self.dynamicUpdateInfo.execFile and string.len(self.dynamicUpdateInfo.execFile) > 0 then
        self:printLog("[versionUpdate] == doDynamicUpdate execFile")
        local function callback(code, msg)
            if code == 200 then
                self.cdnReady = true
                load(msg)
            else
                self:printLog("[versionUpdate] == @@ 下载 execFile失败.")
            end
            self.dynamicUpdateInfo.execFile = nil
            self:doDynamicUpdate()
        end

        self:downloadWithCdn(self._execFile, callback)
        return ;
    end

    --需要弹出对话框
    if self.dynamicUpdateInfo.tips and string.len(self.dynamicUpdateInfo.tips) > 0 then
        self:printLog("[versionUpdate] == doDynamicUpdate tips")
        local function callback()
            self.dynamicUpdateInfo.tips = nil
            self:doDynamicUpdate()
        end
        self:showUpdateInfoTips(self.dynamicUpdateInfo.tips, callback) --对话框
        return ;
    end

    --cdn还没有准备好
    if not self.cdnReady then
        self:printLog("[versionUpdate] == doDynamicUpdate cdnReady")
        local function callback(code, msg)
            if code == 200 then
                self.cdnReady = true
                self:doDynamicUpdate()
            else
                self:printLog("[versionUpdate] == doDynamicUpdate cdnReady bad.")
            end
        end

        local temp = self.dynamicUpdateInfo.fromGameVersion.."/"..VersionUpdateData.file.version..".lua"
        self:downloadWithCdn(temp, callback)
    end

    self:printLog("[versionUpdate] == doDynamicUpdate")
    local selectCdn = self.dynamicUpdateInfo.cdnList[self.cdnIndex]
    local urlArray = string.split(selectCdn, "|")
    local url = urlArray[1]..self.dynamicUpdateInfo.updateFile
    local host = urlArray[2]
    self:printLog("[versionUpdate] == cdn index :", self.cdnIndex )
    self:printLog("[versionUpdate] == server url:", url)
    self:printLog("[versionUpdate] == local zip :", self.zipStoreDir.."/"..self.dynamicUpdateInfo.gameVersion )
    self._GResumeDownloadThread:Start(url, host or "", self.zipStoreDir)
    self:changeState(VersionUpdateData.state.download_zip)
end

function VersionUpdateControl:doForceUpdate(mustForce)
    self:printLog("[versionUpdate] == doForceUpdate")
    
    local forceTips = self.forceUpdateInfo.forceTips
    if forceTips == nil or string.len(forceTips) == 0 then
        forceTips = self:getString(400004)
    end

    local function callback_openUrl()
        if self.forceUpdateInfo.forceUrl == nil or string.len(self.forceUpdateInfo.forceUrl) == 0 then
            self:exitGame()
        else
            self:openURL(self.forceUpdateInfo.forceUrl)
        end
    end

    local function callback_cancel()
        self:doDynamicUpdate()
    end

    if mustForce then
        self:showUpdateInfoTips(forceTips, callback_openUrl)
    else
        self:showUpdateInfoDialog(forceTips, callback_openUrl, callback_cancel)
    end
end

function VersionUpdateControl:downloadZipOver()
    self:printLog("[versionUpdate] == downloadZipOver")

    local zipFile = self.zipStoreDir.."/"..self.dynamicUpdateInfo.gameVersion
    if self._Utils:IsFileExist(zipFile) then
        local zipFileMd5 = self._Utils:Md5File(zipFile)
        if self.dynamicUpdateInfo.md5 == zipFileMd5 then
            self:printLog("[versionUpdate] == unzip ok")
            self:showUpdateTipWords(self:getString(400013))
            table.insert(self.zipList, self.dynamicUpdateInfo.gameVersion)
            self:changeState(VersionUpdateData.state.finishOne)
            return 
        else
            self:printLog("[versionUpdate] == fail: zip file md5 compare failed.")
            self:printLog("[versionUpdate] == fail: server md5: ", self.dynamicUpdateInfo.md5 )
            self:printLog("[versionUpdate] == fail: client md5: ", zipFileMd5 )
        end
    else
        self:changeState(VersionUpdateData.state.exception)
    end
end

--文件操作全在这边
function VersionUpdateControl:doUnzip()
    self:printLog("[versionUpdate] == doUnzip zipPackageCount: ", #self.zipList)

    local newResPath = self.writablePath..self.requetGameVersion
    if self.currentResPath then
        self._Utils:CopyDir(self.currentResPath, newResPath)
    else
        self._Utils:CreateDir(newResPath)
    end

    --现在不在线程里.必须依次覆盖.
    for i,v in ipairs(self.zipList) do
        local zipFile = self.zipStoreDir.."/"..v
        self._GZipTools:UnzipFile(zipFile, "", newResPath)
        self._Utils:RemoveFile(zipFile)
    end
    
    self.zipList = {}
    self:setStringForKey(self.ud_gameVersion, self.requetGameVersion)
    self:setStringForKey(self.ud_curResPath, newResPath)
    if self.currentResPath then
        self._Utils:RemoveFile(self.currentResPath)
    end
    self.currentResPath = newResPath
    --重启游戏.
    self:exitGame()
end

--------------------------------------------------------------------------------------------------------
function VersionUpdateControl:downloadWithCdn(fileName, callback)

    if self.cdnIndex > #self.dynamicUpdateInfo.cdnList then
        self.cdnIndex = 1
    end

    self:printLog("[versionUpdate] == downloadWithCdn: ", fileName,self.cdnIndex)

    local cdnItem = self.dynamicUpdateInfo.cdnList[self.cdnIndex]
    local urlArray = string.split(cdnItem, "|")
    local url = urlArray[1]
    local host = urlArray[2]

    local function downloadWithCdnOver(code, msg)
        if code == 200 then
            -- 请求成功, 存储当前的cdn地址index
            self:printLog("[versionUpdate] == find cdn index is : ", self.cdnIndex)
            --self:setIntegerForKey(self.ud_defaultCdnIndex, self.cdnIndex) --放在最后存储吧
            callback(code, msg)
        else
            --self:requestFaild(url, code, msg)
            self.cdnIndex = self.cdnIndex + 1
            return self:downloadWithCdn(fileName, callback)
        end
    end

    self:downloadWithUrl(url..fileName, downloadWithCdnOver, host)
end

function VersionUpdateControl:downloadWithUrl(url, callback, host)
    self:printLog("[versionUpdate] == downloadWithUrl : ", url, host)
    local http = require("network.GHttp").create()
    http:get(url, callback, host)
    self:changeState(VersionUpdateData.state.downloading)
end

--------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
-- --------------------------------update---------------------------------- --


--[[
    请求cdn失败处理
--]]
function VersionUpdateControl:requestFaild(visitorUrl, errcode, errMessage)
   -- 报错, 向错误日志中控输出
    local errorMsg = string.format("versionUpdate error: %s::%s::%s.", visitorUrl, errcode, errMessage)
    self:reportError(errorMsg)
end

-- --------------------------------------downloadFile回调------------------------------------- --


-- ---------------------------------方法包装---------------------------------- --

--[[
    显示更新提示文字
--]]
function VersionUpdateControl:showUpdateTipWords(tipWords)
    if self.view and self.view.showUpdateTipWords then
        self.view:showUpdateTipWords(tipWords)
    end
end

--[[
    更新动更进度
--]]
function VersionUpdateControl:updateProgress(precentage)
    if self.view and self.view.updateProgress then
        self.view:updateProgress(precentage)
    end
end

--[[
    设置更新进度条的显示状态
--]]
function VersionUpdateControl:setProgressBarVisible(visible)
    if self.view and self.view.setProgressBarVisible then
        self.view:setProgressBarVisible(visible)
    end
end

--[[
    弹出面板
--]]
function VersionUpdateControl:showUpdateInfoDialog(message, okCallback, cancelCallback)
    if self.view and self.view.showUpdateInfoDialog then
        self.view:showUpdateInfoDialog(message, okCallback, cancelCallback)
    end
end

--[[
    显示更新内容提示
--]]
function VersionUpdateControl:showUpdateInfoTips(updateInfoTips, confirmCallback)
    if self.view and self.view.showUpdateInfoTips then
        self.view:showUpdateInfoTips(updateInfoTips, confirmCallback)
    end
end

function VersionUpdateControl:setStringForKey(key, value)
    if self.view and self.view.setStringForKey then
        self.view:setStringForKey(key, value)
    end
end

function VersionUpdateControl:getStringForKey(key)
    local value = nil
    if self.view and self.view.getStringForKey then
        value = self.view:getStringForKey(key)
    end
    return value
end

function VersionUpdateControl:setIntegerForKey(key, value)
    if self.view and self.view.setStringForKey then
        self.view:setIntegerForKey(key, value)
    end
end

function VersionUpdateControl:getIntegerForKey(key)
    local value = nil
    if self.view and self.view.getStringForKey then
        value = self.view:getIntegerForKey(key)
    end
    return value
end

function VersionUpdateControl:flushUserDefault()
    if self.view and self.view.flushUserDefault then
        self.view:flushUserDefault()
    end
end

function VersionUpdateControl:getString(id, ...)
    local text = ""
    if self.view and self.view.getString then
        text = self.view:getString(id, ...)
    end
    return text
end

function VersionUpdateControl:printLog(...)
    if self.view and self.view.printLog then
        self.view:printLog(...)
    end
end

function VersionUpdateControl:showTable(luaTable)
    if self.view and self.view.showTable then
        self.view:showTable(luaTable)
    end
end

function VersionUpdateControl:opRecord(message)
    if self.view and self.view.opRecord then
        self.view:opRecord(message)
    end
end

function VersionUpdateControl:reportError(errorMsg)
    if self.view and self.view.reportError then
        self.view:reportError(errorMsg)
    end
end

function VersionUpdateControl:getGameId()
    local gameId = 0
    if self.view and self.view.getGameId then
        gameId = self.view:getGameId()
    end
    return gameId
end

function VersionUpdateControl:getChannelFlag()
    local channelFlag = ''
    if self.view and self.view.getChannelFlag then
        channelFlag = self.view:getChannelFlag()
    end
    return channelFlag
end

function VersionUpdateControl:getYxSource()
    local yxSource = ''
    if self.view and self.view.getYxSource then
        yxSource = self.view:getYxSource()
    end
    return yxSource
end

function VersionUpdateControl:getPackageType()
    local packageType = 0
    if self.view and self.view.getPackageType then
        packageType = self.view:getPackageType()
    end
    return packageType
end

function VersionUpdateControl:getCheckUpdateUrl()
    local checkUpdateUrl = nil
    if self.view and self.view.getCheckUpdateUrl then
        checkUpdateUrl = self.view:getCheckUpdateUrl()
    end
    return checkUpdateUrl
end

function VersionUpdateControl:getCheckUpdateUrlHost()
    local urlHost = nil
    if self.view and self.view.getCheckUpdateUrlHost then
        urlHost = self.view:getCheckUpdateUrlHost()
    end
    return urlHost
end

-- ------------------------------------------------------------------ --

function VersionUpdateControl:getFileUtils()
    if self.view and self.view.getFileUtils then
        return self.view:getFileUtils()
    end
    return nil
end

function VersionUpdateControl:getGResumeDownloadThread()
    if self.view and self.view.getGResumeDownloadThread then
        return self.view:getGResumeDownloadThread()
    end
    return nil
end

function VersionUpdateControl:getGZipTools()
    if self.view and self.view.getGZipTools then
        return self.view:getGZipTools()
    end
    return nil
end

-- -------------------------------userDefault.xml key----------------------------- --

-- 当前资源路径key
function VersionUpdateControl:getUserDefaultCurResPathKey()
    if self.view and self.view.getUserDefaultCurResPathKey then
        return self.view:getUserDefaultCurResPathKey()
    end
    return "game_currentResourcePath"
end

-- gameVersion key
function VersionUpdateControl:getUserDefaultGameVersionKey()
    if self.view and self.view.getUserDefaultGameVersionKey then
        return self.view:getUserDefaultGameVersionKey()
    end
    return "game_luaVersion"
end

function VersionUpdateControl:getUserDefaultCdnIndexKey()
    if self.view and self.view.getUserDefaultCdnIndexKey then
        return self.view:getUserDefaultCdnIndexKey()
    end
    return "game_defaultCdnIndex"
end

-- ------------------------------------------------------------------ --

function VersionUpdateControl:openURL(url)
    if self.view and self.view.openURL then
        self.view:openURL(url)
    end
end

function VersionUpdateControl:enterGame()
    if self.view and self.view.enterGame then
        self.view:enterGame()
    end
end

function VersionUpdateControl:exitGame()
    if self.view and self.view.exitGame then
        self.view:exitGame()
    end
end

-- ---------------------------------工具方法---------------------------------- --

--[[
    格式化文件字节数
--]] 
function VersionUpdateControl:formatBytes(size)
    local finalSize = 0
    local unit = "B"
    if size > 1024 then
        finalSize = size / 1024
        unit = "KB"
    end

    if finalSize > 1024 then
        finalSize = finalSize / 1024
        unit = "MB"
    end

    if finalSize > 1024 then
        finalSize = finalSize / 1024
        unit = "GB"
    end
    -- 显示2位小数
    finalSize = finalSize - finalSize%0.01    
    return string.format("%s %s", finalSize, unit)
end

return VersionUpdateControl