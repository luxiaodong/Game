Shader "Custom/yuvFlash"
{
    Properties
    {
        _MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}
        _StaticBrightness("Static Brightness", Range(0, 1)) = 0
        _DynamicBrightness("Dynamic Brightness", Range(0, 20)) = 0
        _Gloss("Gloss",Range(0,20)) = 1
    }
    
    SubShader
    {
        Tags
        {
            "IgnoreProjector" = "True"
            "RenderType" = "Transparent"
        }

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float _StaticBrightness;
            float _DynamicBrightness;
            float _Gloss;

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
                float3 normal : NORMAL;
            };
    
            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 texcoord : TEXCOORD0;
                float3 worldNormal : TEXCOORD1;
                float3 worldPos:TEXCOORD2;
            };

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;
                o.texcoord = v.texcoord;
                return o;
            }

            fixed3 rgb2yuv(fixed3 rgb)
            {
                fixed3 yuv;
                yuv.r = 0.298*rgb.r + 0.612*rgb.g + 0.117*rgb.b;
                yuv.g = -0.168*rgb.r - 0.330*rgb.g + 0.498*rgb.b + 0.5;
                yuv.b = 0.449*rgb.r - 0.435*rgb.g - 0.083*rgb.b + 0.5;
                return yuv;
            }

            fixed3 yuv2rgb(fixed3 yuv)
            {
                fixed3 rgb;
                rgb.r = yuv.r + 1.4075*(yuv.b - 0.5);
                rgb.g = yuv.r - 0.3455*(yuv.g - 0.5) - 0.7169*(yuv.b - 0.5);
                rgb.b = yuv.r + 1.779*(yuv.g - 0.5);
                return rgb;
            }

            fixed4 frag (v2f i) : COLOR
            {
                float3 viewDir = normalize(UnityWorldSpaceViewDir(i.worldPos));
                float3 worldNormal = normalize(i.worldNormal);
                float nldot = pow(saturate( 1 - dot(worldNormal, viewDir) ),_Gloss);
                fixed4 col = tex2D(_MainTex, i.texcoord);
                fixed3 yuv = rgb2yuv(col.rgb);
                yuv.r = yuv.r + _StaticBrightness + _DynamicBrightness*nldot;
                fixed3 rgb = yuv2rgb(yuv);
                return fixed4(rgb,1);
            }
            ENDCG
        }
    }
}