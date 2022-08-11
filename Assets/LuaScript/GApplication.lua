local GApplication = class("GApplication")

function GApplication:ctor()
	require("constant.enum")
	require("constant.event")
	-- require("constant.layout")
	require("constant.constant")
	
	require("interface.quality")
	require("interface.log")
	require("interface.nativeBridge")
	require("interface.sdk")
	require("interface.tween")
	require("interface.resAlias")

	require("service.protocol")
	g_tcpManager = require("network.GTcpManager").create()
	require("service.service")
	require("network.network")

	g_tools = require("graphic.tools.GTools").create()
    g_2dTools = require("graphic.tools.G2DTools").create()
    g_3dTools = require("graphic.tools.G3DTools").create()
    g_system = require("data.GSystem").create()
end

function GApplication:init()
	-- self:checkPackageVersion()
    g_system._version.client = PlayerPrefs.GetString("game_cppVersion")
    g_system._version.game = PlayerPrefs.GetString("game_luaVersion")

    tween.init()
    self:coroutineInit()

	-- 随机数
	-- math.randomseed( os.time() ) -- tonumber(os.time()):reverse():sub(1,6)
	-- 埋点
	local isFirstOpen = PlayerPrefs.GetInt("firstOpenTag")
    if isFirstOpen == 0 then
        log.tracePoint("firstOpen")
        PlayerPrefs.SetInt("firstOpenTag", 1)
    end
    log.tracePoint("open")

    local luaBehaviour = require("graphic.core.GLuaBehaviour").create()
    g_system._luaBehaviour = luaBehaviour

 	local stage = require("graphic.core.GStage").create()
	g_system._stage = stage --将stage挂载倒system
	g_tools:delayOneFrame(function() stage:init() end)
end

function GApplication:coroutineInit()
	local go = GameObject.Find("GameObject")
	local coroutineComponent = go:GetComponent(typeof(CS.Game.CCoroutine))
	if coroutineComponent == nil then
		coroutineComponent = go:AddComponent(typeof(CS.Game.CCoroutine))
	end
 
	local function async_yield_return(to_yield, cb)
	    coroutineComponent:YieldAndCallback(to_yield, cb)
	end
	
	local util = require 'xlua.util' 
	yield_return = util.async_to_sync(async_yield_return)
end

return GApplication
