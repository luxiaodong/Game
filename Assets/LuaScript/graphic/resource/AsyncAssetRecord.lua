local AsyncAssetRecord = class("AsyncAssetRecord")

function AsyncAssetRecord:ctor()
    self._assetName = "" --资源名字
    self._abr = "" --AssetBundleRequest
    self._callbackList = {}
end

function AsyncAssetRecord:appendCallback(callback)
   table.insert(self._callbackList, callback) 
end

--该值不是很准确, 好几帧返回1.0,但isDone是false
function AsyncAssetRecord:percent()
    return self._abr.progress
end

function AsyncAssetRecord:isFinish()
    return self._abr.isDone
end

function AsyncAssetRecord:asset()
    return self._abr.asset
end

return AsyncAssetRecord
