Shader "Unlit/BackgroundPattern1"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Repetition("Repetition",float) = 10
    }
    SubShader
    {
        Tags
        {
            "RenderType"="Opaque"
        }
        LOD 100

        Pass
        {
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
            float _Repetition;

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            float box(float2 st, float size)
            {
                size = 0.5 + size * 0.5;
                st = step(st, size) * step(1.0 - st, size);
                return st.x * st.y;
            }

            float wave(float2 st, float n)
            {
                st = (floor(st * n) + 0.5) / n;
                float d = distance(0.5, st);
                return (1 + sin(d * 3 - _Time.y * 3)) * 0.5;
            }

            float boxWave(float2 uv, float n)
            {
                float2 st = frac(uv * n);
                float size = wave(uv, n);
                return box(st, size);
            }

            fixed4 frag(v2f i) : SV_Target
            {
                fixed4 col = float4(boxWave(i.uv, _Repetition),
                                    boxWave(i.uv, _Repetition),
                                    boxWave(i.uv, _Repetition),
                                    1);
                return col;
            }
            ENDCG
        }
    }
}