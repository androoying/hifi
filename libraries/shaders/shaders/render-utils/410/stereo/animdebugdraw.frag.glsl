#version 410

layout(location = 0) out vec4 _fragColor;
layout(location = 1) in vec4 _color;

void main()
{
    _fragColor = _color;
}

