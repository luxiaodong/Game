using System;
using System.Collections.Generic;
using UnityEngine;
using XLua;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace Game
{
    public class CTouch : MonoBehaviour , IPointerClickHandler,
    IPointerDownHandler, IPointerUpHandler,
    IPointerEnterHandler, IPointerExitHandler,
    IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        public LuaTable m_luaClass;

        LuaFunction m_pointerClick;
        LuaFunction m_pointerDown;
        LuaFunction m_pointerUp;
        LuaFunction m_pointerEnter;
        LuaFunction m_pointerExit;
        LuaFunction m_beginDrag;
        LuaFunction m_drag;
        LuaFunction m_endDrag;
        
        public static CTouch Add(GameObject go, LuaTable tableClass)
        {
            CTouch cmp = go.AddComponent<CTouch>();
            cmp.m_luaClass = tableClass;
            cmp.InitFunctions();
            return cmp;
        }

        public static LuaTable Get(GameObject go, LuaTable table)
        {
            CTouch[] cmps = go.GetComponents<CTouch>();
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
            m_pointerClick = m_luaClass.Get<LuaFunction>("OnPointerClick");
            m_pointerDown = m_luaClass.Get<LuaFunction>("OnPointerDown");
            m_pointerUp = m_luaClass.Get<LuaFunction>("OnPointerUp");
            m_pointerEnter = m_luaClass.Get<LuaFunction>("OnPointerEnter");
            m_pointerExit = m_luaClass.Get<LuaFunction>("OnPointerExit");
            m_beginDrag = m_luaClass.Get<LuaFunction>("OnBeginDrag");
            m_drag = m_luaClass.Get<LuaFunction>("OnDrag");
            m_endDrag = m_luaClass.Get<LuaFunction>("OnEndDrag");
        }

        public void OnPointerClick(PointerEventData data)
        {
            if ( null != m_pointerClick)
            {
                m_pointerClick.Call(m_luaClass, data);
            }
        }

        public void OnPointerDown(PointerEventData data)
        {
            if ( null != m_pointerDown)
            {
                m_pointerDown.Call(m_luaClass, data);
            }
        }

        public void OnPointerUp(PointerEventData data)
        {
            if ( null != m_pointerUp)
            {
                m_pointerUp.Call(m_luaClass, data);
            }
        }

        public void OnPointerEnter(PointerEventData data)
        {
            if ( null != m_pointerEnter)
            {
                m_pointerEnter.Call(m_luaClass, data);
            }
        }

        public void OnPointerExit(PointerEventData data)
        {
            if ( null != m_pointerExit)
            {
                m_pointerExit.Call(m_luaClass, data);
            }
        }

        public void OnBeginDrag(PointerEventData data)
        {
            if ( null != m_beginDrag)
            {
                m_beginDrag.Call(m_luaClass, data);
            }
        }

        public void OnDrag(PointerEventData data)
        {
            if ( null != m_drag)
            {
                m_drag.Call(m_luaClass, data);
            }
        }

        public void OnEndDrag(PointerEventData data)
        {
            if ( null != m_endDrag)
            {
                m_endDrag.Call(m_luaClass, data);
            }
        }
    }
}
