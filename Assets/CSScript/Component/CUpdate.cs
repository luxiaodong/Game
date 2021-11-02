using System;
using UnityEngine;
using XLua;

namespace Game
{
    public class CUpdate : MonoBehaviour {

        public LuaTable m_luaClass;

        LuaFunction m_luaAwake;
        LuaFunction m_luaOnEnable;
        LuaFunction m_luaStart;
        LuaFunction m_luaUpdate;
        LuaFunction m_luaFixedUpdate;
        LuaFunction m_luaLateUpdate;
        LuaFunction m_luaOnDisable;
        LuaFunction m_luaOnDestroy;

        public static CUpdate Add(GameObject go, LuaTable tableClass)
        {
            CUpdate cmp = go.AddComponent<CUpdate>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            cmp.CallAwake();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CUpdate[] cmps = go.GetComponents<CUpdate>();
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
            m_luaAwake = m_luaClass.Get<LuaFunction>("OnAwake");
            m_luaOnEnable = m_luaClass.Get<LuaFunction>("OnEnable");
            m_luaStart = m_luaClass.Get<LuaFunction>("OnStart");
            m_luaUpdate = m_luaClass.Get<LuaFunction>("OnUpdate");
            m_luaFixedUpdate = m_luaClass.Get<LuaFunction>("OnFixedUpdate");
            m_luaLateUpdate = m_luaClass.Get<LuaFunction>("OnLateUpdate");
            m_luaOnDisable = m_luaClass.Get<LuaFunction>("OnDisable");
            m_luaOnDestroy = m_luaClass.Get<LuaFunction>("OnDestroy");
        }

        void CallAwake()
        {
            if ( null != m_luaAwake)
            {
                m_luaAwake.Call(m_luaClass);
            }
        }

        private void Start()
        {
            if ( null != m_luaStart)
            {
                m_luaStart.Call(m_luaClass);
            }
        }

        private void Update()
        {
            if (null != m_luaUpdate)
            {
                m_luaUpdate.Call(m_luaClass);
            }
        }

        private void FixedUpdate()
        {
            if (null != m_luaFixedUpdate)
            {
                m_luaFixedUpdate.Call(m_luaClass);
            }
        }

        private void OnDestroy()
        {
            if (null != m_luaOnDestroy)
            {
                m_luaOnDestroy.Call(m_luaClass);
            }
        }

        private void OnEnable()
        {
            if (null != m_luaOnEnable)
            {
                m_luaOnEnable.Call(m_luaClass);
            }
        }

        private void OnDisable()
        {
            if (null != m_luaOnDisable)
            {
                m_luaOnDisable.Call(m_luaClass);
            }
        }

        private void LateUpdate()
        {
            if (null != m_luaLateUpdate)
            {
                m_luaLateUpdate.Call(m_luaClass);
            }
        }
    }

}
