Shader "Learn/fishEye"
{
	Properties
	{
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

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
                                o.uv = v.uv;

                                //o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				//o.uv = fixed(o.uv.x + _Time.y, o.uv.y)
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
                            //fixed4 col = tex2D(_MainTex, i.uv);
                            //col.rgb = dot(col.rgb, fixed3(0.3, 0.59, 0.11));
                            //return col;
                            fixed2 uv = i.uv*2 - 1;
                            float d = sqrt(uv.x*uv.x + uv.y*uv.y);
                            if (d > 1.0)
                            {
                                return fixed4(0,0,0,1);
                            }

                            //return tex2D(_MainTex, i.uv);
                            float z = sqrt(1.0 - d*d);
                            float r = atan2(d,z)/3.14159;
                            uv = fixed2(r*uv.x/d+0.5, r*uv.y/d+0.5);
                            fixed4 col = tex2D(_MainTex, fixed2(uv.x - _Time.y, uv.y));
                            return col;
			}
			ENDCG
		}
	}
}
