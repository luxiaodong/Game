local AsyncABRecord = class("AsyncABRecord")

function AsyncABRecord:ctor()
    self._abName = "" --主资源ab包名字
    self._abNameList = {} --资源依赖的ab包名称
    self._abList = {} --{abName, ab}映射表,这个是要加载的
    self._existAbList = {} --{abName, ab}映射表, 这个是已经存在的
    self._abcrList = {} -- {abName,AssetBundleCreateRequest}
    self._callbackList = {} --回调函数
    self._doneCount = 0 --完成的数量
    self._totalCount = 1 --总数量
    self._hasError = false --过程中是否有错误
end

function AsyncABRecord:appendCallback(callback)
   table.insert(self._callbackList, callback) 
end

function AsyncABRecord:percent()
    if self._totalCount == 1 then
        return self._abcrList[self._abName].progress
    end

    --简单模拟, 不细算百分比
    return self._doneCount/self._totalCount
end

function AsyncABRecord:isFinish()
    for abName,abcr in pairs(self._abcrList) do
        if abcr.isDone == true then
            self._doneCount = self._doneCount + 1
            self._abList[abName] = abcr.assetBundle
            self._abcrList[abName] = nil

            if abcr.assetBundle == nil then
                print("[error] loadAssetBundle failed! ", abName)
                self._hasError = true
            end
        end
    end

    if self._doneCount == self._totalCount then
        return true
    end

    return false
end

return AsyncABRecord
