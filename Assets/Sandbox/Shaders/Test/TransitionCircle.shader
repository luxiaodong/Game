Shader "Custom/CurtainCircle"
{
    Properties
    {
        _Duration("Duration", Float) = 0.0
        _MainTex ("Texture", 2D) = "white" {}
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
            // float4 _MainTex_ST;
            float _Duration;
            float _Speed;

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

            fixed4 frag (v2f i) : COLOR
            {
                float2 c = i.texcoord*2 - 1;
                float dd = c.x*c.x + c.y*c.y;
                float rr = _Duration*1.5;
                float a = step(rr, dd);
                return fixed4(1-a,1-a,1-a,a);
            }
            ENDCG
        }
    }
}