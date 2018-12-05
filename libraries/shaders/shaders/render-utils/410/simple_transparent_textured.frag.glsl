#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

void main()
{
    vec4 _174 = texture(originalTexture, _texCoord01.xy);
    float _183 = _color.w * _174.w;
    vec3 _187 = normalize(_normalWS);
    if (_183 <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4(_color.xyz * _174.xyz, _183);
    float _260 = _187.z;
    vec2 _264 = _187.xy * (1.0 / ((abs(_187.x) + abs(_187.y)) + abs(_260)));
    vec2 _339;
    if (_260 <= 0.0)
    {
        _339 = (vec2(1.0) - abs(_264.yx)) * vec2((_264.x >= 0.0) ? 1.0 : (-1.0), (_264.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _339 = _264;
    }
    vec2 _301 = round((clamp(_339, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _306 = _301.y;
    float _308 = floor(_306 * 0.00390625);
    float _311 = _301.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_311, (fract(_311) * 256.0) + _308, _306 - (_308 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
}

