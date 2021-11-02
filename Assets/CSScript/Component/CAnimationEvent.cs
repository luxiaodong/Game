using System;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace Game
{
    public class CAnimationEvent : MonoBehaviour {

        public LuaTable m_luaClass;
        LuaFunction m_animationEvent;

        public static CAnimationEvent Add(GameObject go, LuaTable tableClass)
        {
            CAnimationEvent cmp = go.AddComponent<CAnimationEvent>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CAnimationEvent[] cmps = go.GetComponents<CAnimationEvent>();
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
            m_animationEvent = m_luaClass.Get<LuaFunction>("OnAnimationEvent");
        }

        public void OnAnimationEvent(String keyName)
        {
            if ( null != m_animationEvent)
            {
                m_animationEvent.Call(m_luaClass, keyName);
            }
        }
    }
}
