
local GRedPoint = class("GRedPoint")

function GRedPoint:ctor()
	-- 红点分 动态数据, 静态数据
	self._bindMap = self:bindCallback()
end

function GRedPoint:init()	
end

-- 各个界面 需要注册 红点的东西, 中间节点也用

-- 取消红点配置,这个是清除叶子节点数据的,需要递归通知UI,清楚UI的红点
function GRedPoint:cancel(redPointName)

end

function GRedPoint:checkCondition(redPointName)
	local node = self._bindMap[redPointName]
	if node then
		local data = node.func(redPointName)
		if data.isShow then
			-- 递归往上通知, 更新, 哪个红点, 显示, 显示的参数, 数字还是图片
			-- event.broadcast(redPointName, data)
		end
	end
end

require("data.redpoint.GRedPointCondition")
return GRedPoint
