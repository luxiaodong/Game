#if USE_UNI_LUA
using LuaAPI = UniLua.Lua;
using RealStatePtr = UniLua.ILuaState;
using LuaCSFunction = UniLua.CSharpFunctionDelegate;
#else
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
#endif

using XLua;
using System.Collections.Generic;


namespace XLua.CSObjectWrap
{
    using Utils = XLua.Utils;
    public class GameGSchedulerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.GScheduler);
			Utils.BeginObjectRegister(type, L, translator, 0, 0, 0, 0);
			
			
			
			
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 8, 0, 0);
			Utils.RegisterFunc(L, Utils.CLS_IDX, "DelayCall", _m_DelayCall_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "LoopCall", _m_LoopCall_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "FrameCall", _m_FrameCall_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "Pause", _m_Pause_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "Resume", _m_Resume_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "StopLoop", _m_StopLoop_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "StopAllTimer", _m_StopAllTimer_xlua_st_);
            
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					Game.GScheduler gen_ret = new Game.GScheduler();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GScheduler constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DelayCall_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    float _t = (float)LuaAPI.lua_tonumber(L, 1);
                    XLua.LuaFunction _call = (XLua.LuaFunction)translator.GetObject(L, 2, typeof(XLua.LuaFunction));
                    bool _usesRealTime = LuaAPI.lua_toboolean(L, 3);
                    
                        Timer gen_ret = Game.GScheduler.DelayCall( _t, _call, _usesRealTime );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoopCall_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    float _t = (float)LuaAPI.lua_tonumber(L, 1);
                    XLua.LuaFunction _call = (XLua.LuaFunction)translator.GetObject(L, 2, typeof(XLua.LuaFunction));
                    bool _usesRealTime = LuaAPI.lua_toboolean(L, 3);
                    
                        Timer gen_ret = Game.GScheduler.LoopCall( _t, _call, _usesRealTime );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_FrameCall_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    XLua.LuaFunction _call = (XLua.LuaFunction)translator.GetObject(L, 1, typeof(XLua.LuaFunction));
                    bool _usesRealTime = LuaAPI.lua_toboolean(L, 2);
                    
                        Timer gen_ret = Game.GScheduler.FrameCall( _call, _usesRealTime );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Pause_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    Timer _t = (Timer)translator.GetObject(L, 1, typeof(Timer));
                    
                    Game.GScheduler.Pause( _t );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Resume_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    Timer _t = (Timer)translator.GetObject(L, 1, typeof(Timer));
                    
                    Game.GScheduler.Resume( _t );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_StopLoop_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    Timer _t = (Timer)translator.GetObject(L, 1, typeof(Timer));
                    
                    Game.GScheduler.StopLoop( _t );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_StopAllTimer_xlua_st_(RealStatePtr L)
        {
		    try {
            
            
            
                
                {
                    
                    Game.GScheduler.StopAllTimer(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
