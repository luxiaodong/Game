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
    public class GameGZipUtilsWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Game.GZipUtils);
			Utils.BeginObjectRegister(type, L, translator, 0, 4, 1, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Percentage", _m_Percentage);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnzipByte", _m_UnzipByte);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnzipFileThread", _m_UnzipFileThread);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UnzipFile", _m_UnzipFile);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "progress", _g_get_progress);
            
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 1, 0, 0);
			
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					Game.GZipUtils gen_ret = new Game.GZipUtils();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Game.GZipUtils constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Percentage(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GZipUtils gen_to_be_invoked = (Game.GZipUtils)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                        float gen_ret = gen_to_be_invoked.Percentage(  );
                        LuaAPI.lua_pushnumber(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnzipByte(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GZipUtils gen_to_be_invoked = (Game.GZipUtils)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    byte[] _inByte = LuaAPI.lua_tobytes(L, 2);
                    
                        byte[] gen_ret = gen_to_be_invoked.UnzipByte( _inByte );
                        LuaAPI.lua_pushstring(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnzipFileThread(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GZipUtils gen_to_be_invoked = (Game.GZipUtils)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _zipFilePath = LuaAPI.lua_tostring(L, 2);
                    string _outFolder = LuaAPI.lua_tostring(L, 3);
                    
                    gen_to_be_invoked.UnzipFileThread( _zipFilePath, _outFolder );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UnzipFile(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Game.GZipUtils gen_to_be_invoked = (Game.GZipUtils)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _archiveFilenameIn = LuaAPI.lua_tostring(L, 2);
                    string _password = LuaAPI.lua_tostring(L, 3);
                    string _outFolder = LuaAPI.lua_tostring(L, 4);
                    
                    gen_to_be_invoked.UnzipFile( _archiveFilenameIn, _password, _outFolder );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_progress(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Game.GZipUtils gen_to_be_invoked = (Game.GZipUtils)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.progress);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
		
		
		
		
    }
}
