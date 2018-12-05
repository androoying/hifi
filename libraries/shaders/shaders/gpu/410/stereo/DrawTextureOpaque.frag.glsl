#version 410

uniform sampler2D colorMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    outFragColor = vec4(texture(colorMap, varTexCoord0).xyz, 1.0);
}

