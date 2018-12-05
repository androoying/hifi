#version 410

struct HUDData
{
    float alpha;
};

layout(std140) uniform hudBuffer
{
    HUDData hud;
} _24;

uniform sampler2D hudTexture;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 fragColor0;

void main()
{
    vec4 _20 = texture(hudTexture, _texCoord01.xy);
    float _35 = _20.w * _24.hud.alpha;
    vec4 _50 = _20;
    _50.w = _35;
    if (_35 <= 0.0)
    {
        discard;
    }
    fragColor0 = _50;
}

