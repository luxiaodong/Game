local GTask = class("GTask")

function GTask:ctor()
	self._list = {} --任务列表.以id为索引
end

function GTask:init()
	network.registerPush( handler(self, self.handleProtocol), protocol.push.task)
end

function GTask:handleProtocol(name, data)
    if name == protocol.push.task.name then
        self:sync(data)
    end
end

function GTask:sync(data)
	local taskId = data.taskInfo.id
	local state = data.taskInfo.state

	local oldData = self._list[taskId]
	if oldData then
		self:updateData(oldData, data.taskInfo)
	else
		self._list[taskId] = data.taskInfo
		--后端任务不区分第一次获得和第二次更新,统一叫开始,前端自己做区分
		if state == enum.server.task.state.begin then
			state = enum.server.task.state.init
		end
	end

	if state == enum.server.task.state.init then
		local function release()
			local guideData = self:tryGetGuideData(taskId)
			if guideData then
				if guideData.prefix then --先引导,再广播任务
					guideData.callback = function() self:release(taskId) end
					event.broadcast(event.ui.guide.append, guideData)
				else --先广播任务,再引导
					self:release(taskId)
					guideData.callback = function() print("self:release(taskId)") end
					event.broadcast(event.ui.guide.append, guideData)
					--如果要求上一个特效结束后,再开始引导,如何处理.
				end
			else
				self:release(taskId)
			end			
		end

		--接到新任务,老引导还没结束
		if g_player._guide:isInGuide() then
			g_player._guide:setTaskCallback(release)
		else
			release()
		end
	elseif state == enum.server.task.state.begin then
		--1/3 -> 2/3
		self:release(taskId)
	elseif state == enum.server.task.state.completed then
		self:getReward(taskId)
	elseif state == enum.server.task.state.finish then
		self:release(taskId)
		self._list[taskId] = nil --清空数据
		--如果携带的引导key还没完成,如何处理?
	end
end

function GTask:getReward(taskId)
	-- network.request( handler(self, self.handlerProtocol), protocol.player.getReward, data.id )
end

--更新任务的状态和数据
function GTask:updateData(old, new)
	old.state = new.state
	--其他数据,可能每个推送都不一样
end

--发布任务
function GTask:release(taskId)
	local task = self._list[taskId]
	event.broadcastWithData(event.task.update, task)
end

function GTask:tryGetGuideData(taskId)
	local task = self._list[taskId]
	if task.key or task.key == "" then
		return false
	end

	return guide.task[task.key]
end

return GTask
