
function GRedPoint:bindCallback()
	local map = {
		[enum.redPoint.activity.duanwu] = {
			layer=enum.ui.layer.activityTab,btn="duanwu", -- 红点的位置,
			func=handler(self, self.checkActivityDuanwu), -- 红点的显示逻辑,是否满足显示条件.
			-- parent=enum.redPoint.activity.tab -- 哪个红点点进来的.
			data={isShow=false, count=1} --数据自定义,用于显示.
		},

		[enum.redPoint.activity.zhongqiu] = {func=handler(self, self.checkActivityZhongqiu)},
	}
	return map
end

function GRedPoint:checkActivityDuanwu()
	return true
end

function GRedPoint:checkActivityZhongqiu()
	return false
end

-- 如果是子节点,根据后端某个字段来判断是否开启,或者今天是否点开过,用个本地记录
-- 如果是父节点,根据多个字段综合判断是否开启
