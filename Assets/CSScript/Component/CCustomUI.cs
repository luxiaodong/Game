using System;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace Game
{
    public class CCustomUI : Graphic {

        public LuaTable m_luaClass;
        LuaFunction m_populateMesh;

        Vector3[] vct;

        public static CCustomUI Add(GameObject go, LuaTable tableClass)
        {
            CCustomUI cmp = go.AddComponent<CCustomUI>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CCustomUI[] cmps = go.GetComponents<CCustomUI>();
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
            m_populateMesh = m_luaClass.Get<LuaFunction>("OnPopulateMesh");
        }

        void Update()
        {
            SetAllDirty();
        }

        protected override void OnPopulateMesh(VertexHelper vh)
        {
            if ( null != m_populateMesh)
            {
                m_populateMesh.Call(m_luaClass, vh);
            }
        }
    }
}
