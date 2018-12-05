#version 410

struct FxaaBlendParams
{
    vec4 sharpenIntensity;
};

layout(std140) uniform fxaaBlendParamsBuffer
{
    FxaaBlendParams params;
} _164;

uniform sampler2D colorTexture;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    ivec2 _26 = ivec2(gl_FragCoord.xy);
    vec4 _70 = texelFetch(colorTexture, _26, 0);
    outFragColor = clamp(_70 + ((((_70 * 6.80000019073486328125) - (((texelFetch(colorTexture, _26 + ivec2(0, -1), 0) + texelFetch(colorTexture, _26 + ivec2(-1, 0), 0)) + texelFetch(colorTexture, _26 + ivec2(1, 0), 0)) + texelFetch(colorTexture, _26 + ivec2(0, 1), 0))) - ((((texelFetch(colorTexture, _26 + ivec2(-1), 0) + texelFetch(colorTexture, _26 + ivec2(1, -1), 0)) + texelFetch(colorTexture, _26 + ivec2(-1, 1), 0)) + texelFetch(colorTexture, _26 + ivec2(1), 0)) * 0.699999988079071044921875)) * _164.params.sharpenIntensity.x), max(vec4(0.0), _70 - vec4(0.5)), _70 + vec4(0.5));
}

