#version 410

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    float _22 = length(((varTexCoord0 * 2.0) - vec2(1.0)) * 2.0);
    float _28 = step(abs(1.0 - _22), 0.0500000007450580596923828125);
    float _33 = step(abs(2.0 - _22), 0.0500000007450580596923828125);
    outFragColor = vec4((vec3(1.0, 1.0, 0.0) * _28) + (vec3(0.0, 1.0, 1.0) * _33), _28 + (0.5 * _33));
}

