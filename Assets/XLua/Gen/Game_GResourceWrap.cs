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
    public class GameGResourceWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.GResource);
			Utils.BeginObjectRegister(type, L, translator, 0, 13, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Init", _m_Init);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "IsAbMode", _m_IsAbMode);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "IsEditorMode", _m_IsEditorMode);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadAsset", _m_LoadAsset);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadAssetAsync", _m_LoadAssetAsync);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnloadAsset", _m_UnloadAsset);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadAssetBundle", _m_LoadAssetBundle);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadAssetBundleAsync", _m_LoadAssetBundleAsync);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnloadAssetBundle", _m_UnloadAssetBundle);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnloadUnusedAssets", _m_UnloadUnusedAssets);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadBuiltinResource", _m_LoadBuiltinResource);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadBuiltinFont", _m_LoadBuiltinFont);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadBuiltinMaterial", _m_LoadBuiltinMaterial);
			
			
			
			
			
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
					
					Game.GResource gen_ret = new Game.GResource();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GResource constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetInstance_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    
                        Game.GResource gen_ret = Game.GResource.GetInstance(  );
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
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.Init(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_IsAbMode(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                        bool gen_ret = gen_to_be_invoked.IsAbMode(  );
                        LuaAPI.lua_pushboolean(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_IsEditorMode(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                        bool gen_ret = gen_to_be_invoked.IsEditorMode(  );
                        LuaAPI.lua_pushboolean(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadAsset(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    UnityEngine.AssetBundle _ab = (UnityEngine.AssetBundle)translator.GetObject(L, 3, typeof(UnityEngine.AssetBundle));
                    
                        UnityEngine.Object gen_ret = gen_to_be_invoked.LoadAsset( _fileName, _ab );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadAssetAsync(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    UnityEngine.AssetBundle _ab = (UnityEngine.AssetBundle)translator.GetObject(L, 3, typeof(UnityEngine.AssetBundle));
                    
                        UnityEngine.AssetBundleRequest gen_ret = gen_to_be_invoked.LoadAssetAsync( _fileName, _ab );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnloadAsset(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.Object _asset = (UnityEngine.Object)translator.GetObject(L, 2, typeof(UnityEngine.Object));
                    
                    gen_to_be_invoked.UnloadAsset( _asset );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadAssetBundle(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _abName = LuaAPI.lua_tostring(L, 2);
                    
                        UnityEngine.AssetBundle gen_ret = gen_to_be_invoked.LoadAssetBundle( _abName );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadAssetBundleAsync(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _abName = LuaAPI.lua_tostring(L, 2);
                    
                        UnityEngine.AssetBundleCreateRequest gen_ret = gen_to_be_invoked.LoadAssetBundleAsync( _abName );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnloadAssetBundle(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.AssetBundle _ab = (UnityEngine.AssetBundle)translator.GetObject(L, 2, typeof(UnityEngine.AssetBundle));
                    bool _isIncludeAsset = LuaAPI.lua_toboolean(L, 3);
                    
                    gen_to_be_invoked.UnloadAssetBundle( _ab, _isIncludeAsset );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnloadUnusedAssets(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.UnloadUnusedAssets(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadBuiltinResource(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    
                        UnityEngine.Object gen_ret = gen_to_be_invoked.LoadBuiltinResource( _fileName );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadBuiltinFont(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    
                        UnityEngine.Font gen_ret = gen_to_be_invoked.LoadBuiltinFont( _fileName );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadBuiltinMaterial(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GResource gen_to_be_invoked = (Game.GResource)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    
                        UnityEngine.Material gen_ret = gen_to_be_invoked.LoadBuiltinMaterial( _fileName );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
