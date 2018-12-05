#version 410

struct TextParams
{
    vec4 color;
    vec4 outline;
};

layout(std140) uniform textParamsBuffer
{
    TextParams params;
} _252;

uniform sampler2D Font;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 3) in vec3 _normalWS;

void main()
{
    vec2 _279 = dFdx(_texCoord01.xy);
    vec2 _286 = dFdy(_texCoord01.xy);
    vec2 _288 = (_286 * 0.5) * 0.125;
    vec4 _363 = textureLod(Font, _texCoord01.xy, -3.0);
    float _364 = _363.y;
    bool _367 = _252.params.outline.x > 0.0;
    float _608;
    if (_367)
    {
        float _609;
        if (_364 > 0.800000011920928955078125)
        {
            _609 = 1.0 - _364;
        }
        else
        {
            _609 = _364 + 0.20000000298023223876953125;
        }
        _608 = _609;
    }
    else
    {
        _608 = _364;
    }
    float _380 = step(0.5, _608);
    vec2 _297 = _texCoord01.xy + ((_279 * 0.5) * 0.125);
    vec4 _385 = textureLod(Font, _297, -3.0);
    float _386 = _385.y;
    float _610;
    if (_367)
    {
        float _611;
        if (_386 > 0.800000011920928955078125)
        {
            _611 = 1.0 - _386;
        }
        else
        {
            _611 = _386 + 0.20000000298023223876953125;
        }
        _610 = _611;
    }
    else
    {
        _610 = _386;
    }
    float _402 = step(0.5, _610);
    vec4 _407 = textureLod(Font, _texCoord01.xy + _288, -3.0);
    float _408 = _407.y;
    float _614;
    if (_367)
    {
        float _615;
        if (_408 > 0.800000011920928955078125)
        {
            _615 = 1.0 - _408;
        }
        else
        {
            _615 = _408 + 0.20000000298023223876953125;
        }
        _614 = _615;
    }
    else
    {
        _614 = _408;
    }
    float _424 = step(0.5, _614);
    vec4 _429 = textureLod(Font, _297 + _288, -3.0);
    float _430 = _429.y;
    float _618;
    if (_367)
    {
        float _619;
        if (_430 > 0.800000011920928955078125)
        {
            _619 = 1.0 - _430;
        }
        else
        {
            _619 = _430 + 0.20000000298023223876953125;
        }
        _618 = _619;
    }
    else
    {
        _618 = _430;
    }
    float _446 = step(0.5, _618);
    float _322 = (((_380 + _402) + _424) + _446) * 0.25;
    if (_322 < 0.00999999977648258209228515625)
    {
        discard;
    }
    vec3 _332 = normalize(_normalWS);
    if ((_322 * _252.params.color.w) != 1.0)
    {
        discard;
    }
    _fragColor0 = vec4(_252.params.color.xyz, 0.0);
    float _527 = _332.z;
    vec2 _531 = _332.xy * (1.0 / ((abs(_332.x) + abs(_332.y)) + abs(_527)));
    vec2 _623;
    if (_527 <= 0.0)
    {
        _623 = (vec2(1.0) - abs(_531.yx)) * vec2((_531.x >= 0.0) ? 1.0 : (-1.0), (_531.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _623 = _531;
    }
    vec2 _568 = round((clamp(_623, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _573 = _568.y;
    float _575 = floor(_573 * 0.00390625);
    float _578 = _568.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_578, (fract(_578) * 256.0) + _575, _573 - (_575 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    _fragColor2 = vec4(0.0, 0.0, 0.0, 1.0);
    _fragColor3 = vec4(0.0, 0.0, 0.0, 1.0);
}

