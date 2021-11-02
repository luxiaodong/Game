
--记录整个游戏界面切换的布局, 用于新手引导和小红点.
layout = {}
layout.layer = {}
layout.layer[enum.ui.layer.mainMenu] = {
	froms = {},
	parent = enum.ui.scene.dock,
	links = {
		world = enum.ui.scene.world,
		battle = enum.ui.scene.battle,
		gm = enum.ui.layer.gm,
	--  btnName = scene or layer
	}
}

layout.layer[enum.ui.layer.gm] = {
	froms = {{enum.ui.layer.mainMenu, "gm"}},
	parent = enum.ui.scene.popup, -- 这里不用 enum.ui.layer.consoleTab 做父节点, 
	links = {}
}

-- 如何指定标签页, 界面跳转时指导一次, 还是两次?

--在不打开界面的情况下, 知道父节点, 从哪个界面哪个按钮点开来
layerChart = {}
layerChart[enum.ui.scene.login] = {} --没有引导返回登录的
layerChart[enum.ui.scene.dock] = {}
layerChart[enum.ui.scene.popup] = {}
layerChart[enum.ui.scene.battle] = {from=enum.ui.layer.mainMenu, btn="battle"}
layerChart[enum.ui.scene.test] = {from=enum.ui.layer.mainMenu, btn="setting"}

layerChart[enum.ui.layer.consoleTab] = {parent=enum.ui.scene.popup, from=enum.ui.layer.mainMenu, btn="console"}
layerChart[enum.ui.layer.test] = {parent=enum.ui.scene.test}
layerChart[enum.ui.layer.taskBrief] = {parent=enum.ui.scene.dock}
layerChart[enum.ui.layer.mainMenu] = {parent=enum.ui.scene.dock}
layerChart[enum.ui.layer.gm] = {parent=enum.ui.layer.consoleTab, from=enum.ui.layer.consoleTab, btn="gm"}
layerChart[enum.ui.layer.protocol] = {parent=enum.ui.layer.consoleTab, from=enum.ui.layer.consoleTab, btn="protocol"}

--可以一次计算依赖,存成tree数据结构.不必每次都去查找,空间换时间, 或者线下算好.
-- 这两个查找函数废弃. 新手要重新设计,

--父节点是谁
function layerChart.findParentPath(layerName)
	local t = {}
	local name = layerName
	while true do
		local data = layerChart[name]
		if data then
			table.insert(t, 1, name)
			if data.parent then
				name = data.parent
			else
				break
			end
		else
			error("not exist layer:"..name)
			break
		end
	end

-- print("layerChart.findParentPath ", layerName)
-- 	for i,layer in ipairs(t) do
-- 		print("    ",i, layer)
-- 	end

	return t
end

--打开你的是谁
--TODO. 可能有多个,上层需要结合实际处理.
function layerChart.findFromPath(layerName)
	local t = {}
	local name = layerName
	while true do
		local data = layerChart[name]
		if data then
			table.insert(t, 1, name)
			if data.from then
				name = data.from
			elseif data.parent then
				name = data.parent
			else
				break
			end
		else
			error("not exist layer:"..name)
			break
		end
	end

-- print("layerChart.findFromPath ", layerName)
-- 	for i,layer in ipairs(t) do
-- 		print("    ",i, layer)
-- 	end

	return t
end

return layerChart
