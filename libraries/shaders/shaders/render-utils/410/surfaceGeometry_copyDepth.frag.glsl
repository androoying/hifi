#version 410

uniform sampler2D depthMap;

layout(location = 0) out vec4 outFragColor;

void main()
{
    outFragColor = vec4(texelFetch(depthMap, ivec2(gl_FragCoord.xy), 0).x, 0.0, 0.0, 1.0);
}

