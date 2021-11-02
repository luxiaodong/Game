using System;
using UnityEngine;
using XLua;

namespace Game
{
    public class CPhysics : MonoBehaviour {

        public LuaTable m_luaClass;

        LuaFunction m_fixedUpdate;
        LuaFunction m_triggerEnter;
        LuaFunction m_triggerStay;
        LuaFunction m_triggerExit;
        LuaFunction m_collisionEnter;
        LuaFunction m_collisionStay;
        LuaFunction m_collisionExit;

        public static CPhysics Add(GameObject go, LuaTable tableClass)
        {
            CPhysics cmp = go.AddComponent<CPhysics>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CPhysics[] cmps = go.GetComponents<CPhysics>();
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
            m_fixedUpdate = m_luaClass.Get<LuaFunction>("FixedUpdate");
            m_triggerEnter = m_luaClass.Get<LuaFunction>("OnTriggerEnter");
            m_triggerStay = m_luaClass.Get<LuaFunction>("OnTriggerStay");
            m_triggerExit = m_luaClass.Get<LuaFunction>("OnTriggerExit");
            m_collisionEnter = m_luaClass.Get<LuaFunction>("OnCollisionEnter");
            m_collisionStay = m_luaClass.Get<LuaFunction>("OnCollisionStay");
            m_collisionExit = m_luaClass.Get<LuaFunction>("OnCollisionExit");
        }

        void FixedUpdate()
        {
            if( null != m_fixedUpdate)
            {
                m_fixedUpdate.Call(m_luaClass);
            }
        }

        void OnTriggerEnter(Collider collider)
        {
            if ( null != m_triggerEnter)
            {
                m_triggerEnter.Call(m_luaClass, collider);
            }
        }

        void OnTriggerStay(Collider collider)
        {
            if ( null != m_triggerStay)
            {
                m_triggerStay.Call(m_luaClass, collider);
            }
        }

        void OnTriggerExit(Collider collider)
        {
            if ( null != m_triggerExit)
            {
                m_triggerExit.Call(m_luaClass, collider);
            }
        }

        void OnCollisionEnter(Collision collision)
        {
            if ( null != m_collisionEnter)
            {
                m_collisionEnter.Call(m_luaClass, collision);
            }
        }

        void OnCollisionStay(Collision collision)
        {
            if ( null != m_collisionStay)
            {
                m_collisionStay.Call(m_luaClass, collision);
            }
        }

        void OnCollisionExit(Collision collision)
        {
            if ( null != m_collisionExit)
            {
                m_collisionExit.Call(m_luaClass, collision);
            }
        }
    }
}
