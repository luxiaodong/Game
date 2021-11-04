local MovableAvatar = require("graphic.avatar.MovableAvatar")
local VAvatar = class("VAvatar", MovableAvatar)

function VAvatar:ctor()
    MovableAvatar.ctor(self)

    self._avatar = nil -- LEntity
end

function VAvatar:createGameObject()
end

function VAvatar:init(avatar)
	local prefab = self:loadAsset(avatar._prefab)
	self._go = Object.Instantiate(prefab)
	self._avatar = avatar
	self:updateMaterial()
	self:updatePosition()
	self:updateDebug()
	self:updateDirection()
end

function VAvatar:updateMaterial()
	local matPath
	if self._avatar._side == enum.battle.side.red then
		matPath = "Materials/Entity/redColor.mat"
	elseif self._avatar._side == enum.battle.side.blue then
		matPath = "Materials/Entity/blueColor.mat"
	end

	local go = self._go.transform:Find("entity").gameObject
	local render = go:GetComponent(typeof(MeshRenderer))
    render.material = self:loadAsset(matPath)

    if self._avatar._polygon._type == enum.battle.sdf.roundBox
    or self._avatar._polygon._type == enum.battle.sdf.box then
    	local s = self._avatar._polygon._size
    	go.transform.localScale = Vector3(2*s.x,1,2*s.y)
    elseif self._avatar._polygon._type == enum.battle.sdf.circle then
    	local s = self._avatar._polygon._radius
    	go.transform.localScale = Vector3(2*s,2*s,2*s)
    end
end

function VAvatar:updateDebug()

	local s = Vector3.zero
	if self._avatar._visualRange then
		local r = self._avatar._visualRange
		s = Vector3(2*r,0.1,2*r)
	end
	local go = self._go.transform:Find("debug/visualRange").gameObject
	go.transform.localScale = s

	local s = Vector3.zero
	if self._avatar._attackRange then
		local r = self._avatar._attackRange
		s = Vector3(2*r,0.2,2*r)
	end
	local go = self._go.transform:Find("debug/attackRange").gameObject
	go.transform.localScale = s

	local go = self._go.transform:Find("debug").gameObject
	go:SetActive(false)
end

function VAvatar:updatePosition()
	self:setPosition(self._avatar:posIn3D())
end

function VAvatar:updateDirection()
	if self._avatar._visualRange then
		local go = self._go.transform:Find("debug/direction").gameObject
		go.transform.forward = self._avatar:direction()
	end
end

-- TODO: 可见范围, 方向, 加个显示, 然后写follow
-- function VAvatar:view()
-- end

return VAvatar
