using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;
 
 // http://www.xuanyusong.com/archives/4573

public class UIMeshRebuildChecker : MonoBehaviour {
 
    IList<ICanvasElement> m_LayoutRebuildQueue;
    IList<ICanvasElement> m_GraphicRebuildQueue;
 
    private void Awake()
    {
        System.Type type = typeof(CanvasUpdateRegistry);
        FieldInfo field = type.GetField("m_LayoutRebuildQueue", BindingFlags.NonPublic | BindingFlags.Instance);
        m_LayoutRebuildQueue = (IList<ICanvasElement>)field.GetValue(CanvasUpdateRegistry.instance);
        field = type.GetField("m_GraphicRebuildQueue", BindingFlags.NonPublic | BindingFlags.Instance);
        m_GraphicRebuildQueue = (IList<ICanvasElement>)field.GetValue(CanvasUpdateRegistry.instance);
    }
 
    private void Update()
    {
        for (int j = 0; j < m_LayoutRebuildQueue.Count; j++)
        {
            var rebuild = m_LayoutRebuildQueue[j];
            if (ObjectValidForUpdate(rebuild))
            {
                Debug.LogFormat("layout:{0}引起{1}网格重建,{2}", rebuild.transform.name, rebuild.transform.GetComponent<Graphic>().canvas.name, Time.frameCount);
            }
        }
 
        for (int j = 0; j < m_GraphicRebuildQueue.Count; j++)
        {
            var element = m_GraphicRebuildQueue[j];
            if (ObjectValidForUpdate(element))
            {
                Debug.LogFormat("element:{0}引起{1}网格重建,{2}", element.transform.name, element.transform.GetComponent<Graphic>().canvas.name, Time.frameCount);
            }
        }
    }
    private bool ObjectValidForUpdate(ICanvasElement element)
    {
        var valid = element != null;
 
        var isUnityObject = element is Object;
        if (isUnityObject)
            valid = (element as Object) != null; //Here we make use of the overloaded UnityEngine.Object == null, that checks if the native object is alive.
 
        return valid;
    }
}