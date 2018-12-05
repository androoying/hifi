#version 410

uniform sampler2D albedoMap;

layout(location = 0) in vec2 uv;
layout(location = 0) out vec4 outFragColor;

void main()
{
    outFragColor = vec4(pow(texture(albedoMap, uv).xyz, vec3(0.4545454680919647216796875)), 1.0);
}

