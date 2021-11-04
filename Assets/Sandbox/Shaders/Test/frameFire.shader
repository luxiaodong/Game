Shader "Custom/frameFire"
{
    Properties
    {
        _ScreenW("Screen Width", Range(1, 1000)) = 600
        _ScreenH("Screen Height", Range(1, 1000)) = 640
        _Octaves("Octaves", Range(1, 10)) = 5
        _Amplitude("Amplitude", Range(0, 20)) = 1
        _Frequency("Frequency", Range(1, 20)) = 7
        _Attenuation("Attenuation", Range(1, 10)) = 2
        _Yoffset("Yoffset", Range(0, 100)) = 40
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

            int _Octaves;
            float _Amplitude;
            float _Frequency;
            float _Attenuation;
            float _Yoffset;

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

            // =================================================================
            half2 hash22(half2 p)
            {
                p = half2( dot(p,half2(127.1,311.7)),
                            dot(p,half2(269.5,183.3)));
                
                return -1.0 + 2.0 * frac(sin(p)*43758.5453123);
            }

            half3 hash33(half3 p3)
            {
                p3 = frac(p3 * half3(443.8975,397.2973, 491.1871));
                p3 += dot(p3, p3.yxz+19.19);
                return -1.0 + 2.0 * frac(half3((p3.x + p3.y)*p3.z, (p3.x+p3.z)*p3.y, (p3.y+p3.z)*p3.x));
            }

            float gradient(half3 p)
            {
                return 1;
            }

            float simplex(half3 p)
            {
                const float K1 = 0.333333333;
                const float K2 = 0.166666667;
                
                half3 i = floor(p + (p.x + p.y + p.z) * K1);
                half3 d0 = p - (i - (i.x + i.y + i.z) * K2);
                
                half3 e = step(half3(.0,.0,.0), d0 - d0.yzx);
                half3 i1 = e * (1.0 - e.zxy);
                half3 i2 = 1.0 - e.zxy * (1.0 - e);
                
                half3 d1 = d0 - (i1 - 1.0 * K2);
                half3 d2 = d0 - (i2 - 2.0 * K2);
                half3 d3 = d0 - (1.0 - 3.0 * K2);
                
                half4 h = max(0.6 - half4(dot(d0, d0), dot(d1, d1), dot(d2, d2), dot(d3, d3)), 0.0);
                half4 n = h * h * h * h * half4(dot(d0, hash33(i)), dot(d1, hash33(i + i1)), dot(d2, hash33(i + i2)), dot(d3, hash33(i + 1.0)));
                return dot(half4(31.316,31.316,31.316,31.316), n);
            }

            float noise(half3 p)
            {
                return abs(simplex(p));
            }

            float fractal_noise(half3 p)
            {
                float f = 0.0;
                float a = _Amplitude;
                p = p * _Frequency;
                for(int i = 0; i < _Octaves; i++)
                {
                    f += a * noise(p);
                    p *= _Attenuation;
                    a /= _Attenuation;
                }
                
                f = sin(f + p.y/_Yoffset);
                return f;
            }

            fixed4 frag (v2f i) : COLOR
            {
                half3 p = half3(i.texcoord.x, i.texcoord.y, -_Time.y/10);
                float color = fractal_noise(p);
                color = color*0.5 + 0.5;
                //return fixed4(color,0,0,color);
                return fixed4( color, pow(max(color,0.),2.)*0.4, pow(max(color,0.),3.)*0.15, color);

                // float2 p = (i.texcoord - 0.5);
                // p.x *= _ScreenW/_ScreenH;
                // fixed l = length(p);
                // if (l > 0.5)
                // {
                //     return fixed4(l,l,l,0);
                // }
                // return fixed4(l,l,l,1);
                
                // float f = pow(p.x, 6) + pow(p.y, 6);
                // if( f > 0.5)
                // {
                //     float color = (2 - f)/2;
                //     float3 coord = float3(atan2(p.x, p.y)/6.2832+0.5, length(p)*.4, 0);

                //     //for(int i = 1; i <= 7; i++)
                //     {
                //         int i = 1;
                //         float power = pow(2.0, float(i));
                //         color += (1.5 / power) * snoise(float3(coord.x, coord.y+_Time.y/20, 0), 16*power);
                //     }

                //     return fixed4( color, pow(max(color,0.),2.)*0.4, pow(max(color,0.),3.)*0.15 , 1.0);
                // }
                // else
                // {
                //     return fixed4(0,0,0,0);
                // }

                // if (pi.x < _Radius || pi.x + _Radius > _ScreenW || pi.y < _Radius || pi.y + _Radius > _ScreenH)
                // {
                //     float l1 = pi.x-0;
                //     float l2 = _ScreenW-pi.x;
                //     float l3 = pi.y-0;
                //     float l4 = _ScreenH-pi.y;
                //     float len = min( min(l1,l2), min(l3,l4) );
                //     int i = 1;
                //     //return fixed4( color, color, color , 1.0);
                //     return fixed4( color, pow(max(color,0.),2.)*0.4, pow(max(color,0.),3.)*0.15 , 1.0);
                // }
                
                // float3 coord = float3(atan2(p.x, p.y)/6.2832+0.5, length(p)*.4, 0);

                // for(int i = 1; i <= 7; i++)
	            // {
                //     //int i = 1;
		        //     float power = pow(2.0, float(i));
		        //     //color += (1.5 / power) * snoise(coord + float3(0., -_Time.y/20, _Time.y/100), 16*power);
                //     color += (1.5 / power) * snoise(coord + float3(0., -_Time.y/20, 0), 16*power);
	            // }

                // 
                //return fixed4(color, color, color, 1);
                //return fixed4(coord.x, coord.x, coord.x, 1);
            }
            ENDCG
        }
    }
}