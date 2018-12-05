#version 410

uniform sampler2DArray occlusionMaps;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec4 varTexCoord0;

void main()
{
    ivec2 _17 = ivec2(gl_FragCoord.xy);
    ivec2 _27 = _17 & ivec2(3);
    outFragColor = texelFetch(occlusionMaps, ivec3(_17 >> ivec2(2), _27.x + (_27.y << 2)), 0);
}

