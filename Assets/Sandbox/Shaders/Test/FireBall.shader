Shader "Custom/FireBall"
{
    Properties
    {
        _ScreenW("Screen Width", Range(1, 1000)) = 600
        _ScreenH("Screen Height", Range(1, 1000)) = 640
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
            float _ScreenW;
            float _ScreenH;

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
                return normalize(p);
                //return p;
            }

            // -- perlin
            float perlin_noise(fixed2 p)
            {
                fixed2 pi = floor(p);
                fixed2 pf = p - pi;
                fixed2 w = pf * pf * (3.0 - 2.0 * pf);

                return lerp(lerp(dot(hash22(pi + fixed2(0.0, 0.0)), pf - fixed2(0.0, 0.0)), 
                            dot(hash22(pi + fixed2(1.0, 0.0)), pf - fixed2(1.0, 0.0)), w.x), 
                        lerp(dot(hash22(pi + fixed2(0.0, 1.0)), pf - fixed2(0.0, 1.0)), 
                            dot(hash22(pi + fixed2(1.0, 1.0)), pf - fixed2(1.0, 1.0)), w.x),
                        w.y);
            }

            float noise(fixed2 p)
            {
                return perlin_noise(p);
            }

            float fractal_noise(fixed2 p)
            {
                float f = 0.0;
                p = p * 2.0;
                f += 1.0000 * noise(p); p = 2.0 * p;
                f += 0.5000 * noise(p); p = 2.0 * p;
                f += 0.2500 * noise(p); p = 2.0 * p;
                f += 0.1250 * noise(p); p = 2.0 * p;
                f += 0.0625 * noise(p); p = 2.0 * p;
                return f;
            }

            float snoise(fixed3 uv, float power)
            {
                const fixed3 s = fixed3(1e0, 1e2, 1e3);
                uv *= power;
                fixed3 uv0 = floor(fmod(uv, power))*s;
                fixed3 uv1 = floor(fmod(uv + fixed3(1.0,1.0,1.0), power))*s;
                
                fixed3 f = frac(uv);
                f = f*f*(3.0-2.0*f);

                fixed4 v = fixed4(uv0.x + uv0.y + uv0.z,
                                  uv1.x + uv0.y + uv0.z,
                                  uv0.x + uv1.y + uv0.z,
                                  uv1.x + uv1.y + uv0.z);
                //fixed4 v = fixed4(uv0.x, uv0.y, uv1.x, uv1.y);

                fixed4 r = frac(sin(v*1e-1)*1e3);
                float r0 = lerp(lerp(r.x, r.y, f.x), lerp(r.z, r.w, f.x), f.y);
                
                r = frac(sin((v + uv1.z - uv0.z)*1e-1)*1e3);
                float r1 = lerp(lerp(r.x, r.y, f.x), lerp(r.z, r.w, f.x), f.y);
                
                return lerp(r0, r1, f.z)*2.-1.;
            }

            fixed4 frag (v2f i) : COLOR
            {
                float2 p = -0.5 + i.texcoord;
                p.x *= _ScreenW/_ScreenH;
                float color = 3.0 - (3.0*length(2.0*p));
                float3 coord = float3(atan2(p.x, p.y)/6.2832+0.5, length(p)*.4, 0);

                for(int i = 1; i <= 7; i++)
	            {
                    //int i = 1;
		            float power = pow(2.0, float(i));
		            //color += (1.5 / power) * snoise(coord + float3(0., -_Time.y/20, _Time.y/100), 16*power);
                    color += (1.5 / power) * snoise(coord + float3(0., -_Time.y/20, 0), 16*power);
	            }

                return fixed4( color, pow(max(color,0.),2.)*0.4, pow(max(color,0.),3.)*0.15 , 1.0);
                //return fixed4(color, color, color, 1);
                //return fixed4(coord.x, coord.x, coord.x, 1);
            }
            ENDCG
        }
    }
}