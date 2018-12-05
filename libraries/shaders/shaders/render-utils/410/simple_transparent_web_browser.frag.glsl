#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 0) in vec4 _texCoord01;
layout(location = 3) in vec3 _normalWS;
layout(location = 1) in vec4 _color;
layout(location = 2) out vec4 _fragColor2;
layout(location = 3) out vec4 _fragColor3;

float _479;

void main()
{
    vec4 _233 = texture(originalTexture, _texCoord01.xy);
    float _292 = _233.x;
    float _465;
    if (_292 <= 0.040449999272823333740234375)
    {
        _465 = _292 * 0.077399380505084991455078125;
    }
    else
    {
        _465 = pow((_292 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _295 = _233.y;
    float _466;
    if (_295 <= 0.040449999272823333740234375)
    {
        _466 = _295 * 0.077399380505084991455078125;
    }
    else
    {
        _466 = pow((_295 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _298 = _233.z;
    float _467;
    if (_298 <= 0.040449999272823333740234375)
    {
        _467 = _298 * 0.077399380505084991455078125;
    }
    else
    {
        _467 = pow((_298 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec4 _286 = vec4(_465, _466, _467, _479);
    vec3 _240 = normalize(_normalWS);
    if (_color.w <= 0.0)
    {
        discard;
    }
    _fragColor0 = vec4(_color.xyz * _286.xyz, _color.w);
    float _383 = _240.z;
    vec2 _387 = _240.xy * (1.0 / ((abs(_240.x) + abs(_240.y)) + abs(_383)));
    vec2 _468;
    if (_383 <= 0.0)
    {
        _468 = (vec2(1.0) - abs(_387.yx)) * vec2((_387.x >= 0.0) ? 1.0 : (-1.0), (_387.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _468 = _387;
    }
    vec2 _424 = round((clamp(_468, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _429 = _424.y;
    float _431 = floor(_429 * 0.00390625);
    float _434 = _424.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_434, (fract(_434) * 256.0) + _431, _429 - (_431 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
}

