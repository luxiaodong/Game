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
    public class GameGNativeBridgeWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.GNativeBridge);
			Utils.BeginObjectRegister(type, L, translator, 0, 6, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "RegisterLuaFunction", _m_RegisterLuaFunction);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SendToNative", _m_SendToNative);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SendToLua", _m_SendToLua);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "IsFileExist", _m_IsFileExist);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "ReadAllBytes", _m_ReadAllBytes);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "IsSupport64Bit", _m_IsSupport64Bit);
			
			
			
			
			
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
					
					Game.GNativeBridge gen_ret = new Game.GNativeBridge();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GNativeBridge constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetInstance_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    
                        Game.GNativeBridge gen_ret = Game.GNativeBridge.GetInstance(  );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_RegisterLuaFunction(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    XLua.LuaFunction _func = (XLua.LuaFunction)translator.GetObject(L, 2, typeof(XLua.LuaFunction));
                    
                    gen_to_be_invoked.RegisterLuaFunction( _func );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SendToNative(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _str = LuaAPI.lua_tostring(L, 2);
                    
                    gen_to_be_invoked.SendToNative( _str );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SendToLua(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _str = LuaAPI.lua_tostring(L, 2);
                    
                    gen_to_be_invoked.SendToLua( _str );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_IsFileExist(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    
                        bool gen_ret = gen_to_be_invoked.IsFileExist( _fileName );
                        LuaAPI.lua_pushboolean(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_ReadAllBytes(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _fileName = LuaAPI.lua_tostring(L, 2);
                    
                        byte[] gen_ret = gen_to_be_invoked.ReadAllBytes( _fileName );
                        LuaAPI.lua_pushstring(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_IsSupport64Bit(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GNativeBridge gen_to_be_invoked = (Game.GNativeBridge)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                        bool gen_ret = gen_to_be_invoked.IsSupport64Bit(  );
                        LuaAPI.lua_pushboolean(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
