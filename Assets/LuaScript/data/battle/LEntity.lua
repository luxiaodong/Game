
local LEntity = class("LEntity")

-- 构造函数负责静态数据
-- 初始化负责动态数据
function LEntity:ctor()
	self._type = nil   	-- enum.battle.entity.troop
	self._card = nil	-- enum.battle.card.skeletons
	self._name = nil  	-- enum.battle.avatar.skeleton
	self._offset = nil  -- 出生时候的偏移量
	self._prefab = nil  -- 模型的路径
	self._createCd = nil -- 创建的cd, 卡牌落下到落地的帧数
	self._deployCd = nil -- 部署的cd, 落地到行动的延迟帧数
end

function LEntity:init(id, side, pos)
	self._id = id
	self._side = side

	self._offset = self._offset or Vector2.zero
	if self._side == enum.battle.side.blue then
		self._offset = Vector2.zero - self._offset
	end

	self._originPos = pos +	self._offset -- 卡组释放时的位置
	self._buffers = {}
end

function LEntity:update()
	assert(true, "can't be called")
	return
end

function LEntity:pos()
	return self._originPos
end

function LEntity:posIn3D()
	return Vector3(self._originPos.x, 0, self._originPos.y)
end

function LEntity:direction()
	if self._side == enum.battle.side.red then
		return Vector3.forward
	elseif self._side == enum.battle.side.blue then
		return Vector3.back
	end
end

function LEntity:hasBuffer(name)
	return self._buffers[name]
end

function LEntity:appendBuffer(name)
	self._buffers[name] = true --先设置成true
end

function LEntity:removeBuffer(name)
	self._buffers[name] = nil
end

return LEntity
