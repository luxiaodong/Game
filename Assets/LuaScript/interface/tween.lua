
local funcs = {
	"OnComplete",
}

tween = {}
tween._state = 0

function tween.stop()
	tween._state = 1
end

function tween.onComplete(callback)
	if tween._state == 1 then return end
	xpcall(callback, __G__TRACKBACK__ )
end

--注意:对同一张元表不要进行多次封装
function tween.changeCore(mt)
	local oldIndex = rawget(mt, "__index")
	local newIndex = function(t, key)
		if key == funcs[1] then --多个要改成循环
			return function(tt, args)
				local originFunc = oldIndex(tt, funcs[1])
				originFunc(tt, function() tween.onComplete(args) end)
			end
		else
			return oldIndex(t, key)
		end
	end
	rawset(mt, "__index", newIndex)
end

function tween.init()
	if tween._state == 1 then return end
	-- 需要勾上 save mode
	local go = GameObject("tween")
	go:SetActive(false)
	local t = go.transform:DOScale(Vector3.zero, 0)
	tween.changeCore( getmetatable(t) )
	local com = go:AddComponent(typeof(RectTransform))
	local t = com:DOAnchorPos(Vector2.zero, 0)
	tween.changeCore( getmetatable(t) )
	local com = go:AddComponent(typeof(UI.Image))
	local t = com:DOFillAmount(0, 0)
	tween.changeCore( getmetatable(t) )
	Object.Destroy(go)
	tween._state = 1
end
