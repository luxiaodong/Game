Shader "Custom/PlaneShadow"
{
    Properties
    {
        _ShadowCol("Color", color) = (0,0,0)
        _Plane("Plane", vector) = (0,1,0,1)
    }

    SubShader
    {
        Tags{ "RenderType" = "Transparent" "Queue" = "Transparent" }

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex : POSITION;
                fixed4 color : COLOR;
            };
    
            struct v2f
            {
                float4 pos : SV_POSITION;
                fixed4 color : COLOR;
            };
    
            v2f o;

            v2f vert (appdata_t v)
            {
                o.pos = UnityObjectToClipPos(v.vertex);
                // float3 lightDir = normalize(float3(0,-1,1));
                // float3 lightDir = -normalize(_WorldSpaceLightPos0.xyz);
                float3 lightDir = -normalize(WorldSpaceLightDir(v.vertex));
                o.color = fixed4(lightDir, 1);
                return o;
            }
   
            fixed4 frag (v2f IN) : COLOR
            {
                return IN.color;
            }
            ENDCG
        }

        Pass 
        {
            // Stencil{
            //     Ref [_StencilID]
            //     Comp NotEqual
            //     Pass replace
            // }
            zwrite off
            blend srcalpha oneminussrcalpha
            offset -1,-1

            // Tags{"LightMode" = "ForwardBase"}

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
            #include "Lighting.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
            };
 
            struct v2f
            {
                float4 vertex : SV_POSITION;
                float4 col : COLOR;
            };

            float3 _ShadowCol;
            half4 _Plane;
            // half4 _LightDir;
            sampler2D _MainTex;

            v2f vert (appdata v)
            {
                v2f o;
                float4 worldPos = mul(unity_ObjectToWorld, v.vertex);
                float3 lightDir = normalize(float3(0,-1,1));
                // float3 lightDir = -normalize(_WorldSpaceLightPos0.xyz);
                // float3 lightDir = -normalize(WorldSpaceLightDir(v.vertex));
                float t = (_Plane.w - dot(worldPos.xyz, _Plane.xyz)) / dot(lightDir.xyz, _Plane.xyz);
                worldPos.xyz = worldPos.xyz + t*lightDir.xyz;
                o.vertex = mul(unity_MatrixVP, worldPos);
                o.col = float4(_ShadowCol, t);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 col = fixed4(i.col.rgb, sign(i.col.a));
                return col;
            }

            ENDCG
        }
    }
}