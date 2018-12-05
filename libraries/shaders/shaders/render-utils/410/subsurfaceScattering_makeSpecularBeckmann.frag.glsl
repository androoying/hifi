#version 410

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    float _76 = tan(acos(varTexCoord0.x));
    float _79 = varTexCoord0.y * varTexCoord0.y;
    float _62 = 0.5 * pow((1.0 / (_79 * pow(varTexCoord0.x, 4.0))) * exp((-(_76 * _76)) / _79), 0.100000001490116119384765625);
    outFragColor = vec4(_62, _62, _62, 1.0);
}

