using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Experimental.Rendering;

public class URPDelegate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        RenderPipelineManager.beginFrameRendering += OnBeginFrameRendering;
    }

    void OnBeginFrameRendering(ScriptableRenderContext context, Camera[] cameras)
    {
        // Debug.Log("OnBeginFrameRendering");
    }

    void Update()
    {
        //var camera = GetComponent<Camera>();
        //Debug.Log(camera.pixelWidth + "," + camera.pixelHeight);
        //Debug.Log(SystemInfo.GetGraphicsFormat(DefaultFormat.LDR));
    }
}
