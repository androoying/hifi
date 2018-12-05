#version 410

uniform sampler2D colorMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    outFragColor = texture(colorMap, vec2(1.0 - varTexCoord0.x, varTexCoord0.y));
}

