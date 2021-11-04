Shader "Custom/vortex" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _Warp ("Vortex Warp", Range(-100, 100)) = 0.05
        _Speed  ("Rotate Speed", Range(0, 10)) = 1
        _Interval ("Interval", Range(0, 5)) = 1
    }

    SubShader {
        Pass {
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
            float _Warp;
            float _Speed;
            float _Interval;
            
            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };
            
            struct v2f {
                float4 vertex : SV_POSITION;
                half2 uv : TEXCOORD0;
            } ;
            
            v2f o;
            v2f vert(appdata_t v)
            {
                o.vertex = UnityObjectToClipPos (v.vertex);
                o.uv = v.texcoord;
                return o;
            }
            
            fixed4 frag (v2f i) : COLOR
            {
                float interval = _Interval;
                float curtime = _Time.y; //当前时间
                float starttime = floor(curtime/interval) * interval; // 本次flash开始时间
                float passtime = curtime - starttime;//本次flash流逝时间
                float scaleFactor = (interval - passtime)/interval;
                fixed2 center = fixed2(0.5,0.5);
                fixed2 offset = float2(i.uv.x - center.x, i.uv.y - center.y);
                float dist = sqrt(offset.x * offset.x + offset.y * offset.y);
                float warp = _Warp*_Warp*(1-scaleFactor);
                float rotate = _Speed*_Speed*scaleFactor;

                if (dist > 1.414*scaleFactor)
                {
                    return fixed4(0,0,0,0);
                }

                float a = atan2(offset.y, offset.x);
                a += dist*warp + rotate;
                float2 outuv = center + float2(dist*cos(a), dist*sin(a));

                return tex2D(_MainTex, outuv);
                //fixed4 col = tex2D(_MainTex, i.uv);
            }
            ENDCG
        }
    }

    Fallback off
}