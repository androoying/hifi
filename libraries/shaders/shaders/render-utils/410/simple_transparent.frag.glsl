#version 410

layout(location = 3) in vec3 _normalWS;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 0) out vec4 _fragColor0;
layout(location = 6) in vec3 _normalMS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 5) in vec4 _positionMS;

void main()
{
    _fragColor0 = vec4(_color.xyz, _color.w);
}

