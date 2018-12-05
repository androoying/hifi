#version 410

layout(location = 0) in float distanceFromCenter;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor;

void main()
{
    float _25 = _color.w * pow(1.0 - abs(distanceFromCenter), 10.0);
    if (_25 <= 0.0500000007450580596923828125)
    {
        discard;
    }
    _fragColor = vec4(_color.xyz, _25);
}

