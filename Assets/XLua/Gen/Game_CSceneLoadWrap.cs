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
    public class GameCSceneLoadWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.CSceneLoad);
			Utils.BeginObjectRegister(type, L, translator, 0, 2, 1, 1);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "OnSceneLoaded", _m_OnSceneLoaded);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "OnSceneUnloaded", _m_OnSceneUnloaded);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "m_luaClass", _g_get_m_luaClass);
            
			Utils.RegisterFunc(L, Utils.SETTER_IDX, "m_luaClass", _s_set_m_luaClass);
            
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 4, 0, 0);
			Utils.RegisterFunc(L, Utils.CLS_IDX, "Add", _m_Add_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "Get", _m_Get_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "SetParent", _m_SetParent_xlua_st_);
            
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					Game.CSceneLoad gen_ret = new Game.CSceneLoad();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.CSceneLoad constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Add_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _go = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    XLua.LuaTable _tableClass = (XLua.LuaTable)translator.GetObject(L, 2, typeof(XLua.LuaTable));
                    
                        Game.CSceneLoad gen_ret = Game.CSceneLoad.Add( _go, _tableClass );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Get_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _go = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    XLua.LuaTable _table = (XLua.LuaTable)translator.GetObject(L, 2, typeof(XLua.LuaTable));
                    
                        XLua.LuaTable gen_ret = Game.CSceneLoad.Get( _go, _table );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetParent_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _go = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    UnityEngine.Transform _parent = (UnityEngine.Transform)translator.GetObject(L, 2, typeof(UnityEngine.Transform));
                    
                    Game.CSceneLoad.SetParent( _go, _parent );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_OnSceneLoaded(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.CSceneLoad gen_to_be_invoked = (Game.CSceneLoad)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.SceneManagement.Scene _scene;translator.Get(L, 2, out _scene);
                    UnityEngine.SceneManagement.LoadSceneMode _mode;translator.Get(L, 3, out _mode);
                    
                    gen_to_be_invoked.OnSceneLoaded( _scene, _mode );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_OnSceneUnloaded(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.CSceneLoad gen_to_be_invoked = (Game.CSceneLoad)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.SceneManagement.Scene _scene;translator.Get(L, 2, out _scene);
                    
                    gen_to_be_invoked.OnSceneUnloaded( _scene );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_m_luaClass(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Game.CSceneLoad gen_to_be_invoked = (Game.CSceneLoad)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.m_luaClass);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_m_luaClass(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Game.CSceneLoad gen_to_be_invoked = (Game.CSceneLoad)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.m_luaClass = (XLua.LuaTable)translator.GetObject(L, 2, typeof(XLua.LuaTable));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
