local GResource = class("GResource")

function GResource:ctor()
	self._csharpInstance = CS.Game.GResource:GetInstance()
	self._isAbMode = self._csharpInstance:IsAbMode()
	print("[GResource:ctor] isAsserBundle:",self._isAbMode)

	if self._isAbMode then
		self._abRelation = require("assetBundle")
	end
	
	self._aGroup = {} --一个groupName, 对应多个assetName, 表示一个界面使用到的ab包名字
	self._aMemory = {} --{assetName,{ref,asset}}, 表示assetName引用的次数和实体对象
	self._abMemory = {} --{abName,{ref,ab}}, 表示abName引用的次数和ab实体对象
	self._asyncA = {} --{AsyncAssetRecord}
	self._asyncAB = {} --{AsyncABRecord}
	self._asyncTimer = nil --定时器
end

function GResource:init()
	--可以放些全局的资源,配置,大内存等优先,避免过多碎片化
end

function GResource:test()
	print("crc32检查 或者 offset 检查")
	-- assetBundle,1-2M,太多导致头结构增多,不必要的io和解析
	-- r/w检测
	-- mipmaps检测
	
	-- 需要知道玩家的内存, 才能缓存资源
	-- 美术添加过后的资源,比如模型,贴图,粒子特效,过程中有增有减,如何确保最后的一致性
	-- meta的改变可能导致md5的改变，但meta改了不一定影响配置, 比如加入了平台信息. AssetFileHash
	-- 缓存池引用,需要关联asset,增加引用
	-- 同时有同步和异步加载, 可能导致unity内部死锁
	-- LoadAllAssets 比多次调用 LoadAssets
end

function GResource:info()
	if not self._isAbMode then return end

	print("============GResource Info================")
	-- self._csharpInstance:UnloadUnusedAssets()
	-- 这行代码是无效的,因为AssetBundle有对资源的引用

	print("============Asset In Group============")
	for groupName, t in pairs(self._aGroup) do
		local str = "{"
		for k,v in pairs(t) do
			str = str..k..","
		end
		str = str.."}"
		print(string.format("[group:%s] => %s", groupName, str))
	end

	print("============Asset In Memory===========")
	for assetName, t in pairs(self._aMemory) do
		print(string.format("[ref:%s] => %s", t.ref, assetName))
	end

	print("============AssetBundle In Memory===========")
	for abName, t in pairs(self._abMemory) do
		print(string.format("[ref:%s] => %s", t.ref, abName))
	end
end

--加载场景ab包,加载ab包失败未处理
function GResource:loadSceneAssetBundle(unitySceneName, isAsync, callback)
	if not self._isAbMode then
		if isAsync then --非ab包模式下,异步加载,用delay模拟
			g_tools:delayCall(0.1, callback, true)
		end
		return 
	end

	local abName = self:assetBundleName(unitySceneName)
	if isAsync then
		return self:loadAssetBundleAsync(abName, callback)
	end

	self:loadAssetBundle(abName)
end

--加载ab包进度的
function GResource:loadSceneAssetBundleProgress(unitySceneName)
	if not self._isAbMode then
		return 1
	end

	local abName = self:assetBundleName(unitySceneName)
	for i,async in ipairs(self._asyncAB) do
		if async._abName == abName then
			return async:percent()
		end
	end

	return 0
end

--卸载场景ab包,目前不支持异步---------------------------------
--注意: assetBundle.unload(true) 会把场景的 default-Material 都清掉
function GResource:unloadSceneAssetBundle(unitySceneName)
	if not self._isAbMode then return end
	local abName = self:assetBundleName(unitySceneName)
	self:unloadAssetBundle(abName)
end

--加载资源,外部调用核心函数
function GResource:loadAsset(assetName, groupName, isAsync, callback, isSandbox)
	if assetName == nil or assetName == "" 
	or groupName == nil or groupName == "" then
		print("[GResource:loadAsset] assetName or groupName is nil")

		if isAsync then
			callback() --直接返回会不会有问题?
		end

		return
	end

	--将资源转成多国语言版本
	assetName = self:localizedAssetName(assetName, isSandbox)
	
	if not self._isAbMode then
		local asset = self._csharpInstance:LoadAsset(assetName, nil)
		if isAsync then --非ab包模式下,异步加载,用delay模拟
			return g_tools:delayCall(0.1, function() callback(asset) end, true)
		else
			return asset
		end
	end

	if isAsync then
		local abName = self:assetBundleName(assetName)
		local assetBundleAsyncOver = function(isOk, ab)
			if isOk then
				self:appendABMemory(abName, ab)
				local assetAsyncOver = function(asset)
					if asset then
						self:appendAGroup(assetName, groupName)
						self:appendAMemory(assetName, asset)
					else
						self:removeABMemory(abName)
					end
					callback(asset)
				end

				self:loadAssetAsync(assetName, ab, assetAsyncOver)
			else
				callback(nil)
			end
		end

		self:loadAssetBundleAsync(abName, assetBundleAsyncOver)
		return
	end

	local abName = self:assetBundleName(assetName)
	local ab = self:loadAssetBundle(abName)
	if not ab then return nil end
	self:appendABMemory(abName, ab)

	local asset = self._csharpInstance:LoadAsset(assetName, ab)
	if asset then
		self:appendAGroup(assetName, groupName)
		self:appendAMemory(assetName, asset)
	else
		self:removeABMemory(abName)
	end
	return asset
end

--内部调用,在异步加载资源的情况下,先异步加载对应的ab包,加载成功后再异步加载资源
function GResource:loadAssetAsync(assetName, ab, callback)
	--是否已经在加载中
	for i,async in ipairs(self._asyncA) do
		if async._assetName == assetName then
			async:appendCallback(callback)
			return 
		end
	end

	local abr = self._csharpInstance:LoadAssetAsync(assetName, ab)
	local asyncRecord = require("graphic.resource.AsyncAssetRecord").create()
	asyncRecord._assetName = assetName
	asyncRecord._abr = abr
	asyncRecord:appendCallback(callback)
	table.insert(self._asyncA, asyncRecord)

	if self._asyncTimer == nil then
		self._asyncTimer = g_tools:loopCall(0.1, function() self:asyncUpdate() end, true)
	end
end

--异步更新,定时检查资源是否加载完成
function GResource:asyncUpdate()
	-- print("[GResource:asyncUpdate] frameCount:"..Time.frameCount)
	local count = #self._asyncAB
	for i=count,1,-1 do
		local asyncRecord = self._asyncAB[i]
		if asyncRecord:isFinish() then
			self:loadAssetBundleAsyncOver(asyncRecord)
			table.remove(self._asyncAB, i)
		end
	end

	local count = #self._asyncA
	for i=count,1,-1 do
		local asyncRecord = self._asyncA[i]
		if asyncRecord:isFinish() then
			self:loadAssetAsyncOver(asyncRecord)
			table.remove(self._asyncA, i)
		end
	end

	if #self._asyncAB == 0 and #self._asyncA == 0 then
		g_tools:stopLoopCall(self._asyncTimer)
		self._asyncTimer = nil
	end
end

function GResource:loadAssetBundleAsyncOver(asyncRecord)
	local mianAb = nil
	if asyncRecord._hasError then --结束了但是有错误
		--释放已经加载的ab包
		for abName,ab in pairs(asyncRecord._abList) do
			self:removeABMemory(abName)
		end
		--释放之前加过的ab包
		for abName,ab in pairs(asyncRecord._existAbList) do
			self:removeABMemory(abName)
		end
	else
		--成功时加进新的
		self:addDependToABMemory(asyncRecord._abName, asyncRecord._abList)
		self:removeABMemory(asyncRecord._abName)
		mianAb = asyncRecord._abList[asyncRecord._abName]
	end

	for i,callback in ipairs(asyncRecord._callbackList) do
		callback(not asyncRecord._hasError, mianAb)
	end
end

function GResource:loadAssetAsyncOver(asyncRecord)
	for i,callback in ipairs(asyncRecord._callbackList) do
		callback( asyncRecord:asset() )
	end
end

--异步加载AB包
function GResource:loadAssetBundleAsync(abName, callback)
	local t = self._abMemory[abName]
	if t then callback() return end

	--是否已经在加载中
	local asyncRecord = nil
	for i,async in ipairs(self._asyncAB) do
		if async._abName == abName then
			asyncRecord = async
			break
		end
	end

	if asyncRecord then
		asyncRecord:appendCallback(callback)
		return
	end

	local abNameList = {}
	self:dependAbNameList(abName, abNameList)

	--统计需要加载的数目
	local count = 0
	local abcrList = {} --AssetBundleCreateRequest
	local existAbList = {}
	for abName,_ in pairs(abNameList) do
		if self._abMemory[abName] then
			existAbList[abName] = self._abMemory[abName]
		else
			local abcr = self._csharpInstance:LoadAssetBundleAsync(abName)
			abcrList[abName] = abcr
			count = count + 1
		end
	end

	--防止在加载时,原先的资源被释放掉.
	self:addDependToABMemory(abName, existAbList)

	asyncRecord = require("graphic.resource.AsyncABRecord").create()
	asyncRecord._abName = abName
	asyncRecord._abNameList = abNameList
	asyncRecord._abcrList = abcrList
	asyncRecord._existAbList = existAbList
	asyncRecord._totalCount = count
	asyncRecord:appendCallback(callback)
	table.insert(self._asyncAB, asyncRecord)

	if self._asyncTimer == nil then
		self._asyncTimer = g_tools:loopCall(0.1, function() self:asyncUpdate() end, true)
	end
end

--同步加载AB包
function GResource:loadAssetBundle(abName)
	local t = self._abMemory[abName]
	if t then return t.ab end

	local abNameList = {}
	self:dependAbNameList(abName, abNameList)

	local findCount = 0
	local totalCount = 0
	local newABList = {}
	local existAbList = {}

	for abName,_ in pairs(abNameList) do
		totalCount = totalCount + 1
		if self._abMemory[abName] then
			existAbList[abName] = self._abMemory[abName]
			findCount = findCount + 1
		else --如果异步加载ab包时,同时有个同步加载ab包,怎么处理,暂时不处理
			local ab = self._csharpInstance:LoadAssetBundle(abName)
			if ab then
				self:appendABMemory(abName, ab)
				newABList[abName] = ab
				findCount = findCount + 1
			else
				print("[GResource][loadAssetBundle] error : "..abName)
				break
			end
		end
	end

	--没加载全, 新的全都释放掉
	if totalCount ~= findCount then
		for abName,_ in ipairs(newABList) do
			self:removeABMemory(abName)
		end
		return nil
	end

	self:addDependToABMemory(abName, existAbList)
	self:removeABMemory(abName)
	return newABList[abName]
end

--卸载ab包,引用为0时才能卸载
--不精准的调用会报错
function GResource:unloadAssetBundle(abName)
	local t = self._abMemory[abName]
	if t and t.ref == 0 then
		self._csharpInstance:UnloadAssetBundle(t.ab, false)
		self._abMemory[abName] = nil
	else
		print("===[GResource][removeABMemory] warning===")
		print( debug.traceback("", 2) )
		self:info()
	end
end

--卸载界面的资源,如果asset不指定,就全部卸载
function GResource:unloadAsset(groupName, assetName, isSandbox)
	if not self._aGroup[groupName] then return end

	local assetNameList = {}
	if assetName then
		table.insert(assetNameList, self:localizedAssetName(assetName, isSandbox))
	else
		assetNameList = self._aGroup[groupName]
	end
	
	for assetName,_ in pairs(assetNameList or {}) do
		local abName = self:assetBundleName(assetName)
		self:removeAGroup(assetName, groupName)
		self:removeAMemory(assetName)
		self:removeABMemory(abName)
	end
end

--以下是辅助函数---------------------------------
function GResource:appendAGroup(assetName, groupName)
	if not self._aGroup[groupName] then
		self._aGroup[groupName] = {}
	end

	if not self._aGroup[groupName][assetName] then
		self._aGroup[groupName][assetName] = true
	end
end

function GResource:removeAGroup(assetName, groupName)
	if self._aGroup[groupName][assetName] then
		self._aGroup[groupName][assetName] = nil
	else
		print("===[GResource][removeAGroup] warning===")
		print( debug.traceback("", 2) )
		self:info()
	end
end

function GResource:appendAMemory(assetName, asset)
	if not self._aMemory[assetName] then
		self._aMemory[assetName] = {}
		self._aMemory[assetName].ref = 0
		self._aMemory[assetName].asset = asset
	end

	self._aMemory[assetName].ref = self._aMemory[assetName].ref + 1
end

-- UnloadAsset may only be used on individual assets and can not be used on GameObject's / Components or AssetBundles
-- https://zhuanlan.zhihu.com/p/32240483?edition=yidianzixun&utm_source=yidianzixun&yidian_docid=0Hyg6Mpd
function GResource:removeAMemory(assetName)
	if self._aMemory[assetName] then
		self._aMemory[assetName].ref = self._aMemory[assetName].ref - 1
		if self._aMemory[assetName].ref == 0 then
			self._csharpInstance:UnloadAsset(self._aMemory[assetName].asset)
			self._aMemory[assetName] = nil
		end
	else
		print("===[GResource][removeAMemory] warning===")
		print( debug.traceback("", 2) )
		self:info()
	end
end

function GResource:appendABMemory(abName, ab)
	if not self._abMemory[abName] then
		self._abMemory[abName] = {}
		self._abMemory[abName].ref = 0
		self._abMemory[abName].ab = ab
	end

	self._abMemory[abName].ref = self._abMemory[abName].ref + 1
end

function GResource:removeABMemory(abName)
	if self._abMemory[abName] then
		self._abMemory[abName].ref = self._abMemory[abName].ref - 1
		if self._abMemory[abName].ref < 0 then
			print("===[GResource][removeABMemory] error===")
			print( debug.traceback("", 2) )
			self:info()
		end
	end
end

function GResource:addDependToABMemory(mainABName, abList)
	for abName,ab in pairs(abList) do
		self:appendABMemory(abName, ab)
	end
end

--通过abName返回依赖的所有abName
function GResource:dependAbNameList(abName, t)
	t[abName] = 1
	local depArray = self._abRelation.dep[abName]
	if depArray then
		for i,v in ipairs(depArray) do
			self:dependAbNameList(v, t)
		end
	end
end

--通过资源文件名查找对应语种的资源文件名
function GResource:localizedAssetName(assetName, isSandbox)

	if isSandbox and g_language:isDefault() then
		assetName = "Sandbox/" + assetName
	end

	if self._isAbMode then
		if not g_language:isDefault() then
			if self._abRelation["language_"..g_language:key()][assetName] then --该资源标记为有多国语言版本
				assetName = g_language:assetsPrefix() + assetName
			end
		end
	else
		if not g_language:isDefault() then
			local testFile = string.format("Assets/%s%s", g_language:assetsPrefix(), assetName);
			if CS.Game.GFileUtils.GetInstance():IsFileExistInEditor(testFile) then --检测是否有多国语言版本
				assetName = g_language:assetsPrefix() + assetName
			end
		end
	end

	return "Assets/" + assetName
end

--通过资源文件名查找ab包名
function GResource:assetBundleName(assetName)
	local abName = self._abRelation.map[assetName]
	if abName then
		return abName
	end	

	return string.lower(assetName)..".ab"	
end

--更换资源的托管组, 主要用于小资源拖管于界面, 统一释放, 过程不可逆
function GResource:changeGroup(oldGroup, newGroup)
	if not self._isAbMode then return end

	if not newGroup and string.len(newGroup) > 0 then
		print("[GResource:changeGroup] invalid group name")
		return false
	end

	if not self._aGroup[newGroup] then
		self._aGroup[newGroup] = {}
	end

	local t = self._aGroup[oldGroup]
	for k,v in pairs(t or {}) do
		if self._aGroup[newGroup][k] then --已经存在该资源的引用
			self._aMemory[k].ref = self._aMemory[k].ref - 1
		else
			self._aGroup[newGroup][k] = v
		end
	end

	self._aGroup[oldGroup] = nil
	return true
end

------内存不足时的处理接口-------
-- self:unloadUnusedAssetsBundle()	,不影响画面,再次加载时需要从磁盘读取.
-- self:unloadAllAssetBundle(false) ,不影响画面,再次加载时需要从磁盘读取, self._abMemory表将清空.
-- self:unloadAllAssetBundle(true)  ,影响画面,删掉所有资源,目前仅用于重启.

function GResource:receiveMemoryWarning()	
end

function GResource:unloadUnusedAssetsBundle()
	if not self._isAbMode then return true end
	
	for abName, t in pairs(self._abMemory) do
		if t.ref == 0 then
			self._csharpInstance:UnloadAssetBundle(t.ab, false)
			self._abMemory[abName] = nil
		end
	end	
end

--卸载掉所有ab包,如果有ab包在异步加载,返回false
function GResource:unloadAllAssetBundle(isIncludeAsset)
	if not self._isAbMode then return true end
	if self._asyncTimer then return false end

	for abName, t in pairs(self._abMemory) do
		self._csharpInstance:UnloadAssetBundle(t.ab, isIncludeAsset)
	end

	self._abMemory = {}
	return true
end

return GResource
