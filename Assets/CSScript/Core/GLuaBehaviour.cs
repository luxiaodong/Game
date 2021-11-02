using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using XLua;

namespace Game
{
    public class GLuaBehaviour {

        private static GLuaBehaviour _g_luaBehaviour = null;

		public static GLuaBehaviour GetInstance()
		{
			if (_g_luaBehaviour == null)
			{
				_g_luaBehaviour = new GLuaBehaviour();
			}

			return _g_luaBehaviour;
		}

        private bool m_isUpdate = false;
        private string m_keyOnUpdate = "OnUpdate";
        private string m_keyOnLateUdpate = "OnLateUpdate";
        private string m_keyOnFixedUpdate = "OnFixedUpdate";
        private Dictionary<string, LuaFunction> m_behaviours = new Dictionary<string, LuaFunction>();

        public void BindUpdate(string key, LuaFunction func)
		{
            if(m_behaviours.ContainsKey(key))
            {
                Debug.LogWarning("[GLuaBehaviour][BindUpdate] bind key: "+ key);
            }
            else
            {
                m_behaviours.Add(key, func);
            }
		}

        public void Start()
        {
            m_isUpdate = true;
        }

        public void Pause()
        {
            m_isUpdate = false;
        }

        public void Stop()
        {
            m_isUpdate = false;
            m_behaviours.Clear();
        }

        public void OnUpdate()
		{   
            if( m_isUpdate && m_behaviours.ContainsKey(m_keyOnUpdate) )
            {
                LuaFunction func = m_behaviours[m_keyOnUpdate];
                func.Call();
            }
        }

        public void OnLateUpdate() 
		{
			if( m_isUpdate && m_behaviours.ContainsKey(m_keyOnLateUdpate) )
            {
                LuaFunction func = m_behaviours[m_keyOnLateUdpate];
                func.Call();
            }
		}

		public void OnFixedUpdate()
		{
			if( m_isUpdate && m_behaviours.ContainsKey(m_keyOnFixedUpdate) )
            {
                LuaFunction func = m_behaviours[m_keyOnFixedUpdate];
                func.Call();
            }
		}
    }
}
