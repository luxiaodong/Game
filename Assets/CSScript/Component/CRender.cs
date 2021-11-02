using System;
using UnityEngine;
using XLua;

namespace Game
{
    public class CRender : MonoBehaviour {

        public LuaTable m_luaClass;

        LuaFunction m_willRenderObject;
        LuaFunction m_preCull;
        LuaFunction m_becameVisible;
        LuaFunction m_becameInvisible;
        LuaFunction m_preRender;
        LuaFunction m_renderObject;
        LuaFunction m_postRender;
        LuaFunction m_renderImage;

        public static CRender Add(GameObject go, LuaTable tableClass)
        {
            CRender cmp = go.AddComponent<CRender>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CRender[] cmps = go.GetComponents<CRender>();
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
            m_willRenderObject = m_luaClass.Get<LuaFunction>("OnWillRenderObject");
            m_preCull = m_luaClass.Get<LuaFunction>("OnPreCull");
            m_becameVisible = m_luaClass.Get<LuaFunction>("OnBecameVisible");
            m_becameInvisible = m_luaClass.Get<LuaFunction>("OnBecameInvisible");
            m_preRender = m_luaClass.Get<LuaFunction>("OnPreRender");
            m_renderObject = m_luaClass.Get<LuaFunction>("OnRenderObject");
            m_postRender = m_luaClass.Get<LuaFunction>("OnPostRender");
            m_renderImage = m_luaClass.Get<LuaFunction>("OnRenderImage");
        }

        void OnWillRenderObject()
        {
            if( null != m_willRenderObject)
            {
                m_willRenderObject.Call(m_luaClass);
            }
        }

        void OnPreCull()
        {
            if( null != m_preCull)
            {
                m_preCull.Call(m_luaClass);
            }
        }

        void OnBecameVisible()
        {
            if( null != m_becameVisible)
            {
                m_becameVisible.Call(m_luaClass);
            }
        }

        void OnBecameInvisible()
        {
            if( null != m_becameInvisible)
            {
                m_becameInvisible.Call(m_luaClass);
            }
        }

        void OnPreRender()
        {
            if( null != m_preRender)
            {
                m_preRender.Call(m_luaClass);
            }
        }

        void OnRenderObject()
        {
            if( null != m_renderObject)
            {
                m_renderObject.Call(m_luaClass);
            }
        }

        void OnPostRender()
        {
            if( null != m_postRender)
            {
                m_postRender.Call(m_luaClass);
            }
        }

        void OnRenderImage(RenderTexture source, RenderTexture destination)
        {
            if ( null != m_renderImage)
            {
                m_renderImage.Call(m_luaClass, source, destination);
            }
        }
    }
}
