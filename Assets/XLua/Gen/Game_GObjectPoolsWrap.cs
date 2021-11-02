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
    public class GameGObjectPoolsWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.GObjectPools);
			Utils.BeginObjectRegister(type, L, translator, 0, 5, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Init", _m_Init);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "AddPrefabToPools", _m_AddPrefabToPools);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "RemovePrefabFromPools", _m_RemovePrefabFromPools);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Instantiate", _m_Instantiate);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Destroy", _m_Destroy);
			
			
			
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 2, 0, 0);
			Utils.RegisterFunc(L, Utils.CLS_IDX, "GetInstance", _m_GetInstance_xlua_st_);
            
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					Game.GObjectPools gen_ret = new Game.GObjectPools();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GObjectPools constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetInstance_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    
                        Game.GObjectPools gen_ret = Game.GObjectPools.GetInstance(  );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Init(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GObjectPools gen_to_be_invoked = (Game.GObjectPools)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.Init(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_AddPrefabToPools(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GObjectPools gen_to_be_invoked = (Game.GObjectPools)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.GameObject _prefab = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    int _preCreate = LuaAPI.xlua_tointeger(L, 3);
                    bool _hasLimit = LuaAPI.lua_toboolean(L, 4);
                    
                    gen_to_be_invoked.AddPrefabToPools( _prefab, _preCreate, _hasLimit );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_RemovePrefabFromPools(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GObjectPools gen_to_be_invoked = (Game.GObjectPools)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.GameObject _prefab = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    
                    gen_to_be_invoked.RemovePrefabFromPools( _prefab );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Instantiate(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GObjectPools gen_to_be_invoked = (Game.GObjectPools)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.GameObject _prefab = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    
                        UnityEngine.GameObject gen_ret = gen_to_be_invoked.Instantiate( _prefab );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Destroy(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GObjectPools gen_to_be_invoked = (Game.GObjectPools)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 2&& translator.Assignable<UnityEngine.GameObject>(L, 2)) 
                {
                    UnityEngine.GameObject _go = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    
                    gen_to_be_invoked.Destroy( _go );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 3&& translator.Assignable<UnityEngine.GameObject>(L, 2)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 3)) 
                {
                    UnityEngine.GameObject _go = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    float _dt = (float)LuaAPI.lua_tonumber(L, 3);
                    
                    gen_to_be_invoked.Destroy( _go, _dt );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GObjectPools.Destroy!");
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
