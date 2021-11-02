
local GObjectPools = class("GObjectPools")

function GObjectPools:ctor()
	self._csharpInstance = CS.Game.GObjectPools.GetInstance()
	self._groupName = getmetatable(self).__className
	self._map = {} --assetName,prefab
	--TODO:每个追踪每个prefab有多少个instance
end

--这两个函数操作prefab
--预创建多少个,是否有上线
function GObjectPools:addPrefab(assetName, preCreate, hasLimit)
	if not self._map[assetName] then
		local prefab = g_resource:loadAsset(assetName, self._groupName)
		self._csharpInstance:AddPrefabToPools(prefab, preCreate or 5, hasLimit or false)
		self._map[assetName] = prefab
	end
end

--需要验证,prefab删除后,GameObject是否会被删除
--如果不删除,重启时调用removeAllPrefab,可能会有问题
function GObjectPools:removePrefab(assetName)
	if self._map[assetName] then
		self._csharpInstance:RemovePrefabFromPools(self._map[assetName])
		self._map[assetName] = nil
		g_resource:unloadAsset(self._groupName, assetName)
	end
end

--删掉所有的缓存
function GObjectPools:removeAllPrefab(keepAsset)
	for assetName, prefab in pairs(self._map) do
		self._csharpInstance:RemovePrefabFromPools(prefab)
		if not keepAsset then
			g_resource:unloadAsset(self._groupName, assetName)
		end
	end

	self._map = {}
end

--这两个函数操作GameObject
function GObjectPools:instance(assetName)
	if self._map[assetName] then
		return self._csharpInstance:Instantiate(self._map[assetName])
	else
		error("[GObjectPools:instance] invalid assetName:"..assetName)
	end
end

function GObjectPools:destroy(go, dt)
	if dt then
		self._csharpInstance:Destroy(go, dt)
	else
		self._csharpInstance:Destroy(go)
	end
end

return GObjectPools
