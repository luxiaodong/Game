Shader "Custom/colorShadow"
{
    Properties
    {
        _ObjCol("Object Color", color) = (1,1,1,1)
        _ShadowCol("Shadow Color", color) = (0,0,0,1)
    }

    SubShader
    {
        // Pass
        // {
        //     CGPROGRAM
        //     #pragma vertex vert
        //     #pragma fragment frag            
        //     #include "UnityCG.cginc"
    
        //     struct a2v
        //     {
        //         float4 vertex : POSITION;
        //     };

        //     struct v2f
        //     {
        //         float4 pos : SV_POSITION;
        //     };

        //     float4 _ObjCol;
        //     float4 _ShadowCol;

        //     v2f vert (a2v v)
        //     {
        //         v2f o;
        //         o.pos = UnityObjectToClipPos(v.vertex);
        //         return o;
        //     }
   
        //     fixed4 frag (v2f i) : COLOR
        //     {
        //         return _ObjCol;
        //     }
        //     ENDCG
        // }

        Pass
        {
            Tags{"LightMode" = "ForwardBase"}

            CGPROGRAM
            #pragma multi_compile_fwdbase
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"
			#include "Lighting.cginc"
			#include "AutoLight.cginc"
    
            struct a2v
            {
                float4 vertex : POSITION;
            };

            struct v2f
		 	{
		 		float4 pos:SV_POSITION;
                float3 worldPos:TEXCOORD1;
				SHADOW_COORDS(2) //记录贴图的索引
		 	};

            float4 _ObjCol;
            float4 _ShadowCol;

            v2f vert (a2v v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld,v.vertex).xyz;
                TRANSFER_SHADOW(o); //计算纹理坐标
                return o;
            }

            fixed4 frag (v2f i) : COLOR
            {
                float atten =  SHADOW_ATTENUATION(i);
                float3 color = lerp(_ShadowCol, _ObjCol, atten);
                return fixed4(color, 1.0);

                // float atten =  SHADOW_ATTENUATION(i);
                // // UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);
                // float3 color;
                // if (atten < 1)
                // {
                //     // color = _ShadowCol.rgb*atten;
                //     return float4(1-atten,1-atten,1-atten,1);
                // }
                // else
                // {
                //     // color = _ObjCol.rgb;
                //     return float4(0,0,0,1);
                // }

                // return fixed4(color, 1.0);
            }
            ENDCG
        }

        // Pass 
        // {
        //     Tags { "LightMode" = "ShadowCaster" }

        //     CGPROGRAM
        //     #pragma vertex vert
        //     #pragma fragment frag
        //     #pragma target 2.0
        //     #pragma multi_compile_shadowcaster
        //     #pragma multi_compile_instancing // allow instanced shadow pass for most of the shaders
        //     #include "UnityCG.cginc"

        //     struct v2f {
        //         V2F_SHADOW_CASTER;
        //         UNITY_VERTEX_OUTPUT_STEREO
        //     };

        //     v2f vert( appdata_base v )
        //     {
        //         v2f o;
        //         UNITY_SETUP_INSTANCE_ID(v);
        //         UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
        //         TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
        //         return o;
        //     }

        //     float4 frag( v2f i ) : SV_Target
        //     {
        //         SHADOW_CASTER_FRAGMENT(i)
        //     }
        //     ENDCG
        // }
    
    }

    FallBack "Specular"
}