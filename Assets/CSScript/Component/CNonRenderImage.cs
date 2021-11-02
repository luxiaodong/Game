using System;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace Game
{
    public class CNonRenderImage : Image {

        public LuaTable m_luaClass;
        LuaFunction m_isRaycastValid;

        public static CNonRenderImage Add(GameObject go, LuaTable tableClass)
        {
            CNonRenderImage cmp = go.AddComponent<CNonRenderImage>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CNonRenderImage[] cmps = go.GetComponents<CNonRenderImage>();
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
            m_isRaycastValid = m_luaClass.Get<LuaFunction>("IsRaycastLocationValid");
        }

        protected override void OnPopulateMesh(VertexHelper vh)
        {
            vh.Clear();
        }

        override public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
        {
            if ( null != m_isRaycastValid)
            {
                object[] obj = m_isRaycastValid.Call(m_luaClass, sp, eventCamera);
                if (obj[0] is bool)
                {
                    return (bool)obj[0];
                }
            }

            return false;
        }
    }
}
