#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 3) in vec3 _normalWS;
layout(location = 1) in vec4 _color;

void main()
{
    vec3 _250 = normalize(_normalWS);
    _fragColor0 = vec4(_color.xyz * texture(originalTexture, _texCoord01.xy).xyz, 0.0);
    float _356 = _250.z;
    vec2 _360 = _250.xy * (1.0 / ((abs(_250.x) + abs(_250.y)) + abs(_356)));
    vec2 _438;
    if (_356 <= 0.0)
    {
        _438 = (vec2(1.0) - abs(_360.yx)) * vec2((_360.x >= 0.0) ? 1.0 : (-1.0), (_360.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _438 = _360;
    }
    vec2 _397 = round((clamp(_438, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _402 = _397.y;
    float _404 = floor(_402 * 0.00390625);
    float _407 = _397.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_407, (fract(_407) * 256.0) + _404, _402 - (_404 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    _fragColor2 = vec4(0.0, 0.0, 0.0, 1.0);
    _fragColor3 = vec4(0.0, 0.0, 0.0, 1.0);
}

