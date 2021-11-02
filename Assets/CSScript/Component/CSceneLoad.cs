using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using XLua;

namespace Game
{
    public class CSceneLoad : MonoBehaviour {

        public LuaTable m_luaClass;
        LuaFunction m_sceneLoaded;
        LuaFunction m_sceneUnLoaded;

        public static CSceneLoad Add(GameObject go, LuaTable tableClass)
        {
            CSceneLoad cmp = go.AddComponent<CSceneLoad>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CSceneLoad[] cmps = go.GetComponents<CSceneLoad>();
            if(cmps.Length > 0)
            {
                return cmps[0].m_luaClass;
            }
            return null;
        }

        public static void SetParent(GameObject go,Transform parent)
        {
            go.transform.SetParent(parent);
        }

        void InitFunctions()
        {
            SceneManager.sceneLoaded += OnSceneLoaded;
            SceneManager.sceneUnloaded += OnSceneUnloaded;

            m_sceneLoaded = m_luaClass.Get<LuaFunction>("OnSceneLoaded");
            m_sceneUnLoaded = m_luaClass.Get<LuaFunction>("OnSceneUnloaded");
        }

        public void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            if ( null != m_sceneLoaded)
            {
                m_sceneLoaded.Call(m_luaClass, scene, mode);
            }
        }

        public void OnSceneUnloaded(Scene scene)
        {
            if ( null != m_sceneUnLoaded)
            {
                m_sceneUnLoaded.Call(m_luaClass, scene);
            }
        }

        void OnDestroy()
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
            SceneManager.sceneUnloaded -= OnSceneUnloaded;
        }
    }
}
