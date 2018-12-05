#version 410

uniform sampler2D colorMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 1) in vec2 varTexcoord;
layout(location = 0) in vec4 varColor;

void main()
{
    outFragColor = texture(colorMap, varTexcoord) * varColor;
}

