Shader "Custom/mask"
{
    Properties
    {
        _MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}
        _Speed("width", Float) = 1
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
            //Cull Off
            //Lighting Off
            //ZWrite Off
            //Fog { Mode Off }
            //Offset -1, -1
            Blend SrcAlpha OneMinusSrcAlpha

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            uniform float4 _Points[10];
            int _Point_Count;
            float _Speed;

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
    
            struct v2f
            {
                float4 vertex : SV_POSITION;
                half2 uv : TEXCOORD0;
            };

            bool checkPoint(float2 uv, float d)
            {
                for (int j=0; j<_Point_Count; j++)
                {
                    float4 v = _Points[j];
                    if(v.x*uv.x + v.y*uv.y + v.z < d)
                    {
                        return false;
                    }
                }
                return true;
            }

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag (v2f i) : COLOR
            {
                fixed2 uv = i.uv;
                fixed4 col = tex2D(_MainTex, uv);
                float passtime = _Time.y - floor(_Time.y);
                float d = _Speed*(passtime-1);

                if ( checkPoint(uv, d) )
                {
                    return fixed4(0,0,0,0);
                }

                return fixed4(0.5,0.5,0.5,0.5);
            }
            ENDCG
        }
    }
}