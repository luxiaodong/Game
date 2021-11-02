
-- 可能出现引导点击某个界面里的按钮
-- 界面是打开了, 但是要等待某个动画播放完成
-- 才能出箭头的引导
-- 没法定义配置的具体行为
-- 时序性很难控制, 需要上帝视角, 没有界面数据, 有些行为没法配置, 比如删除最后一个物品
-- 时间(触发条件):开宝箱结束后,  地点:哪个界面,  谁:哪个按钮, 操作: 点一下
-- 缺点: 无法知道上下文, 多个引导的连续性如何控制

guide = {}
guide[enum.guide.test.test] = {
	{action=enum.guide.action.open, layer=enum.ui.layer.protocol, auto=true},
	{action=enum.guide.action.click, layer=enum.ui.layer.protocol, btn="send"},
	{action=enum.guide.action.wait, tag="test"},
}

guide = {}
guide.test = {}
guide.test.click = {action=enum.guide.action.click, layer=enum.ui.layer.protocol, btn="send"}
guide.test.dialog = {action=enum.guide.action.dialog, layer=enum.ui.layer.protocol, dialogId="welcome"}
guide.test.func = {action=enum.guide.action.func, layer=enum.ui.layer.protocol, func="test",auto=true, next="guide.test.click"}
guide.test.callback = {action=enum.guide.action.callback, layer=enum.ui.layer.protocol, auto=true, next="guide.test.click"}
guide.test[1] = guide.test.click
guide.test[2] = guide.test.dialog
guide.test[3] = guide.test.callback 
--控制引导顺序.

guide.task = {}
guide.task.key1 = {action="open", layer="menu", prefix=true} --在任务前面

--生成名字
for k, v in pairs(guide) do
	for j, w in pairs(v) do
		name = "guide."..k.."."..j -- guide.test.click
		w.name = name
	end
end

return guide
