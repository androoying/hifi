#version 410

struct TextParams
{
    vec4 color;
    vec4 outline;
};

layout(std140) uniform textParamsBuffer
{
    TextParams params;
} _178;

uniform sampler2D Font;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 0) in vec4 _texCoord01;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

void main()
{
    vec4 _173 = texture(Font, _texCoord01.xy);
    float _174 = _173.y;
    float _376;
    if (_178.params.outline.x > 0.0)
    {
        float _377;
        if (_174 > 0.800000011920928955078125)
        {
            _377 = 1.0 - _174;
        }
        else
        {
            _377 = _174 + 0.20000000298023223876953125;
        }
        _376 = _377;
    }
    else
    {
        _376 = _174;
    }
    vec2 _203 = fwidth(_texCoord01.xy);
    float _209 = clamp(32.0 * length(_203), 0.0, 0.5);
    float _216 = smoothstep(0.5 - _209, 0.5 + _209, _376);
    if (_216 < 0.00999999977648258209228515625)
    {
        discard;
    }
    vec3 _226 = normalize(_normalWS);
    float _231 = _216 * _178.params.color.w;
    if (_231 <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4(_178.params.color.xyz, _231);
    float _298 = _226.z;
    vec2 _302 = _226.xy * (1.0 / ((abs(_226.x) + abs(_226.y)) + abs(_298)));
    vec2 _378;
    if (_298 <= 0.0)
    {
        _378 = (vec2(1.0) - abs(_302.yx)) * vec2((_302.x >= 0.0) ? 1.0 : (-1.0), (_302.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _378 = _302;
    }
    vec2 _339 = round((clamp(_378, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _344 = _339.y;
    float _346 = floor(_344 * 0.00390625);
    float _349 = _339.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_349, (fract(_349) * 256.0) + _346, _344 - (_346 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
}

