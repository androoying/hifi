#version 410

layout(location = 0) out vec4 outFragColor;

void main()
{
    float _187 = clamp(-0.0, 0.0, 1.0) * 256.0;
    float _189 = floor(_187);
    outFragColor = vec4(0.0, _189 * 0.00390625, _187 - _189, 0.0);
}

