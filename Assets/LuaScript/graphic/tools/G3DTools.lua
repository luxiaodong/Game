local G3DTools = class("G3DTools")

function G3DTools:ctor()
end

function G3DTools:camera()
    -- return GameObject.Find("/Canvas/UiCamera")
    return g_system:currentUnitySceneCamera()
    -- return Camera.current
end

function G3DTools:lerpColor(src, dst, factor)
    factor = Mathf.SmoothStep(0,1,factor)
    local r = Mathf.Lerp(src.r, dst.r, factor)
    local g = Mathf.Lerp(src.g, dst.g, factor)
    local b = Mathf.Lerp(src.b, dst.b, factor)
    local a = Mathf.Lerp(src.a, dst.a, factor)
    return Color(r,g,b,a)
end

function G3DTools:screenToWorldPoint(pt)
    local camera = self:camera()
    return camera:ScreenToWorldPoint(Vector3(pt.x, pt.y, 0))
end

--设置unity的layer
--需要所有子孙, 不是儿子
function G3DTools:setChildrenLayer(go, value)
	go.layer = value
    for i=1, go.transform.childCount do
        local sub = go.transform:GetChild(i-1)
        self:setChildrenLayer(sub.gameObject, value)
    end
end

function G3DTools:setParticlePlay(go)
    local components = go:GetComponentsInChildren(typeof(ParticleSystem))
    for i=1,components.Length do
        local ps = components[i-1]
        ps:Play()
    end
end

function G3DTools:setParticleSpeed(go, speed)
    local components = go:GetComponentsInChildren(typeof(ParticleSystem))
	-- local components = go:GetComponents( typeof(ParticleSystem) )
    for i=1,components.Length do
        local ps = components[i-1]
        ps.main.simulationSpeed = speed
    end
end

function G3DTools:setParticleUseUnscaledTime(go, useUnscaledTime)
    local components = go:GetComponents( typeof(ParticleSystem) )
    for i=1,components.Length do
        local ps = components[i-1]
        ps.main.useUnscaledTime = useUnscaledTime
    end
end

return G3DTools
