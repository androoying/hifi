#version 410

uniform sampler2D colorMap;

layout(location = 3) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;
layout(location = 2) in vec4 varColor;
layout(location = 0) in vec3 varPosition;
layout(location = 1) in vec3 varNormal;

void main()
{
    outFragColor = texture(colorMap, varTexCoord0) * varColor;
}

