Shader "Custom/SimplexNoise"
{
    Properties
    {
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

            // --- hash function 
            fixed2 hash22(fixed2 p)
            {
                p = fixed2(dot(p, fixed2(127.1,311.7)), dot(p, fixed2(269.5,183.3)));
                p = -1.0 + 2.0 * frac(sin(p)*43758.5453123);
                //return normalize(p);
                return p;
            }

            float simplex_noise(fixed2 p)
            {
                const float K1 = 0.366025404; // (sqrt(3)-1)/2;
                const float K2 = 0.211324865; // (3-sqrt(3))/6;

                fixed2 i = floor(p + (p.x + p.y) * K1);
                fixed2 a = p - (i - (i.x + i.y) * K2);
                fixed2 o = (a.x < a.y) ? fixed2(0.0, 1.0) : fixed2(1.0, 0.0);
                fixed2 b = a - o + K2;
                fixed2 c = a - 1.0 + 2.0 * K2;
                fixed3 h = max(0.5 - fixed3(dot(a, a), dot(b, b), dot(c, c)), 0.0);
                fixed3 n = h * h * h * h * fixed3(dot(a, hash22(i)), dot(b, hash22(i + o)), dot(c, hash22(i + 1.0)));
                return dot(fixed3(70.0, 70.0, 70.0), n);
            }

            float noise(fixed2 p)
            {
                return simplex_noise(p);
            }

            float fractal_noise(fixed2 p)
            {
                float f = 0.0;
                p = p * 2.0;
                //mat2 m = mat2( 1.6,  1.2, -1.2,  1.6 );
                f += 1.0000 * noise(p); p = 2.0 * p;
                f += 0.5000 * noise(p); p = 2.0 * p;
                f += 0.2500 * noise(p); p = 2.0 * p;
                f += 0.1250 * noise(p); p = 2.0 * p;
                f += 0.0625 * noise(p); p = 2.0 * p;
                return f;
            }

            fixed4 frag (v2f i) : COLOR
            {
                const fixed4 skycolour1 = fixed4(0.2, 0.4, 0.6, 1.0);
                const fixed4 skycolour2 = fixed4(0.4, 0.7, 1.0, 1.0);

                float f = simplex_noise( (i.texcoord + fixed2(_Time.y/20, 0))*8 );
                //float f = fractal_noise( i.texcoord + fixed2(_Time.y/20, 0) );
                f = 0.5 + 0.5*f;
                return fixed4(f,f,f,1);
            }
            ENDCG
        }
    }
}