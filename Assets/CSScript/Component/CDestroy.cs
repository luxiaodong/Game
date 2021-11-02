using System;
using UnityEngine;
using XLua;

namespace Game
{
    public class CDestroy : MonoBehaviour {

        public LuaTable m_luaClass;
        LuaFunction m_luaOnDestroy;

        public static CDestroy Add(GameObject go, LuaTable tableClass)
        {
            CDestroy cmp = go.AddComponent<CDestroy>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CDestroy[] cmps = go.GetComponents<CDestroy>();
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
            m_luaOnDestroy = m_luaClass.Get<LuaFunction>("OnDestroy");
        }

        private void OnDestroy()
        {
            if (null != m_luaOnDestroy)
            {
                m_luaOnDestroy.Call(m_luaClass);
            }
        }

    }

}
