Shader "Custom/mosaic"
{
    Properties
    {
        _MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}
        _Width("Screen Width", Int) = 1000
        _Height("Screen Height", Int) = 1000
        _Offset("Degree Offset", Float) = 0.0
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
            //Blend SrcAlpha OneMinusSrcAlpha

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag            
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            int _Width;
            int _Height;
            int _Init;
            float _Offset;

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

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag (v2f i) : COLOR
            {
                const float minTileSize = 1.0;
                const float maxTileSize = 32.0;
                const float textureSamplesCount = 3.0;
                const float textureEdgeOffset = 0.005;
                const float borderSize = 1.0;
                const float speed = 0.5;
                fixed2 screen = fixed2(_Width, _Height);
                float time = abs(sin( (_Time.y-_Offset) * speed));
                float tileSize = minTileSize + floor(time * (maxTileSize - minTileSize));
                fixed2 tileUnit = screen.xy/tileSize;
                fixed2 uv = floor(i.uv*tileUnit)/tileUnit;
                fixed4 col = tex2D(_MainTex, uv);

                if (tileSize > 3)
                {
                    fixed2 pixelNumber = fmod(i.uv*screen.xy, tileSize);
                    float pixel = min(pixelNumber.x, pixelNumber.y);
                    if(pixel < borderSize)
                    {
                        return fixed4(0,0,0,1);
                    }

                    pixel = max(pixelNumber.x, pixelNumber.y);
                    if(tileSize - pixel < borderSize)
                    {
                        return fixed4(0,0,0,1);
                    }
                }

                return col;
            }
            ENDCG
        }
    }
}

	

// #if defined(USE_TILE_BORDER) || defined(USE_ROUNDED_CORNERS)
// 	vec2 pixelNumber = floor(fragCoord - (tileNumber * tileSize));
// 	pixelNumber = mod(pixelNumber + borderSize, tileSize);
	
// #if defined(USE_TILE_BORDER)
// 	float pixelBorder = step(min(pixelNumber.x, pixelNumber.y), borderSize) * step(borderSize * 2.0 + 1.0, tileSize);
// #else
// 	float pixelBorder = step(pixelNumber.x, borderSize) * step(pixelNumber.y, borderSize) * step(borderSize * 2.0 + 1.0, tileSize);
// #endif
// 	fragColor *= pow(fragColor, vec4(pixelBorder));
// #endif

