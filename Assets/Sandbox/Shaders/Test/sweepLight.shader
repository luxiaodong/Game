Shader "Custom/sweepLight"
{
    Properties
    {
        _MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}
        _Color("Color", Color) = (1,1,1,1)
        _Angle("angle", Range(0, 90)) = 45
        _Width("width", Range(0, 1)) = 0.2
        _FlashTime("flash time", Range(0, 100)) = 1
        _DelayTime("delay time", Range(0, 100)) = 0.2
        _LoopInterval("interval time", Range(0, 100)) = 2
    }
    
    SubShader
    {
        LOD 200

        Tags
        {
            "Queue" = "Transparent"
            "IgnoreProjector" = "True"
            "RenderType" = "Transparent"
        }
        
        Pass
        {
            Cull Off
            Lighting Off
            ZWrite Off
            Fog { Mode Off }
            Offset -1, -1
            Blend SrcAlpha OneMinusSrcAlpha

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _Color;
            float _Angle;
            float _Width;
            float _FlashTime;
            float _DelayTime;
            float _LoopInterval;
            float4 _MainTex_ST;

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
                fixed4 color : COLOR;
            };
    
            struct v2f
            {
                float4 vertex : SV_POSITION;
                half2 texcoord : TEXCOORD0;
                fixed4 color : COLOR;
            };
    
            v2f o;
            v2f vert (appdata_t v)
            {
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                o.color = v.color;
                return o;
            }
            
            // @计算亮度
            // @param uv 角度 宽度(x方向) 运行时间 开始时间 循环间隔
            float flash(float2 uv, float angle, float w, float runtime, float delay, float interval)
            {
                float brightness = 0;
                float curtime = _Time.y; //当前时间
                float starttime = floor(curtime/interval) * interval; // 本次flash开始时间
                float passtime = curtime - starttime;//本次flash流逝时间
                if (passtime > delay)
                {
                    float tanValue = tan(angle/180*3.14);
                    float baseValue = 1 + (passtime - delay)/runtime*(-tanValue-1);
                    float testValue = -tanValue*uv.x + uv.y;
                    float delt = abs(testValue - baseValue);

                    if(delt < w)
                    {
                        brightness = 1 - delt/w;
                    }
                }
                return brightness;
            }
            
            float4 frag (v2f i) : COLOR
            {
                float4 col = tex2D(_MainTex, i.texcoord);
                float bright = flash(i.texcoord, _Angle, _Width, _FlashTime, _DelayTime, _LoopInterval);
                float4 outcol = col + _Color*bright * col.a;// * step(0.5, col.a);
                return outcol;
            }
            
            ENDCG
        }
    }

    SubShader
    {
        LOD 100

        Tags
        {
            "Queue" = "Transparent"
            "IgnoreProjector" = "True"
            "RenderType" = "Transparent"
        }
        
        Pass
        {
            Cull Off
            Lighting Off
            ZWrite Off
            Fog { Mode Off }
            Offset -1, -1
            ColorMask RGB
            Blend SrcAlpha OneMinusSrcAlpha
            ColorMaterial AmbientAndDiffuse
            
            SetTexture [_MainTex]
            {
                Combine Texture * Primary
            }
        }
    }
}
