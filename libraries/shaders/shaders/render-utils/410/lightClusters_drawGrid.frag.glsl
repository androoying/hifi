#version 410

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec4 varColor;

void main()
{
    outFragColor = varColor;
}

