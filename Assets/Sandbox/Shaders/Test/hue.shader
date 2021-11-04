Shader "Custom/hue"
{
    Properties
    {
        _MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}
        _Angle("angle", Range(0, 360)) = 0
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
            uniform float4x4 _hueMatrix;
            float4 _MainTex_ST;
            float _Angle;

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };
    
            struct v2f
            {
                float4 vertex : SV_POSITION;
                half2 texcoord : TEXCOORD0;
            };

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                return o;
            }

            //左手系,大拇指朝向增长方向为正角,2维逆时针旋转
            float4x4 rotateX(float sita)
            {
                float4x4 m = {1, 0, 0, 0, 
                            0, cos(sita), -sin(sita), 0,
                            0, sin(sita), cos(sita), 0,
                            0, 0, 0, 1 };
                return m;
            }

            //左手系,大拇指朝向增长方向为正角,2维顺时针旋转
            float4x4 rotateY(float sita)
            {
                float4x4 m = {cos(sita), 0, sin(sita), 0, 
                            0, 1, 0, 0,
                            -sin(sita), 0, cos(sita), 0,
                            0, 0, 0, 1 };
                return m;
            }

            //左手系,大拇指朝向增长方向为正角,2维逆时针旋转
            float4x4 rotateZ(float sita)
            {
                float4x4 m = {cos(sita), -sin(sita), 0, 0,
                            sin(sita), cos(sita), 0, 0,
                            0, 0, 1, 0,
                            0, 0, 0, 1 };
                return m;
            }

            float4x4 calculateMatrix(float hue)
            {
                float pi = 3.1415926;
                float alpha = -pi/4;
                float sita = atan(1/1.414);
                float4x4 m1 = rotateX(alpha);
                float4x4 m2 = rotateZ(sita);
                float4x4 m3 = rotateY(hue*pi/180);
                float4x4 m4 = rotateZ(-sita);
                float4x4 m5 = rotateX(-alpha);
            
                return mul(m5, mul(m4, mul(m3, mul(m2, m1))));
            }

            float4 frag (v2f i) : COLOR
            {
                // float4x4 mat = calculateMatrix(_Angle);
                // float4 col = tex2D(_MainTex, i.texcoord);
                // return mul(mat, col);

                float4 col = tex2D(_MainTex, i.texcoord);
                return mul(_hueMatrix, col);
            }

            ENDCG
        }
    }
}