#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    vec4 _269 = texture(originalTexture, _texCoord01.xy);
    float _659;
    vec4 _660;
    if (_color.w <= 0.0)
    {
        float _359 = _269.x;
        float _656;
        if (_359 <= 0.040449999272823333740234375)
        {
            _656 = _359 * 0.077399380505084991455078125;
        }
        else
        {
            _656 = pow((_359 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _362 = _269.y;
        float _657;
        if (_362 <= 0.040449999272823333740234375)
        {
            _657 = _362 * 0.077399380505084991455078125;
        }
        else
        {
            _657 = pow((_362 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _365 = _269.z;
        float _658;
        if (_365 <= 0.040449999272823333740234375)
        {
            _658 = _365 * 0.077399380505084991455078125;
        }
        else
        {
            _658 = pow((_365 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _660 = vec4(_656, _657, _658, _269.w);
        _659 = -_color.w;
    }
    else
    {
        _660 = _269;
        _659 = _color.w;
    }
    float _289 = _659 * _660.w;
    if (_289 < 0.999000012874603271484375)
    {
        vec3 _297 = normalize(_normalWS);
        if (_289 <= 0.0)
        {
            discard;
        }
        _fragColor0 = vec4(_color.xyz * _660.xyz, _289);
        float _450 = _297.z;
        vec2 _454 = _297.xy * (1.0 / ((abs(_297.x) + abs(_297.y)) + abs(_450)));
        vec2 _662;
        if (_450 <= 0.0)
        {
            _662 = (vec2(1.0) - abs(_454.yx)) * vec2((_454.x >= 0.0) ? 1.0 : (-1.0), (_454.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _662 = _454;
        }
        vec2 _491 = round((clamp(_662, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _496 = _491.y;
        float _498 = floor(_496 * 0.00390625);
        float _501 = _491.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_501, (fract(_501) * 256.0) + _498, _496 - (_498 * 256.0))) * vec3(0.0039215688593685626983642578125), clamp(0.89999997615814208984375, 0.0, 1.0));
    }
    else
    {
        vec3 _315 = normalize(_normalWS);
        vec3 _320 = _color.xyz * _660.xyz;
        float _526 = _320.x;
        _fragColor0 = vec4(_526, _320.yz, 0.60000002384185791015625);
        float _562 = _315.z;
        vec2 _566 = _315.xy * (1.0 / ((abs(_315.x) + abs(_315.y)) + abs(_562)));
        vec2 _661;
        if (_562 <= 0.0)
        {
            _661 = (vec2(1.0) - abs(_566.yx)) * vec2((_566.x >= 0.0) ? 1.0 : (-1.0), (_566.y >= 0.0) ? 1.0 : (-1.0));
        }
        else
        {
            _661 = _566;
        }
        vec2 _603 = round((clamp(_661, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
        float _608 = _603.y;
        float _610 = floor(_608 * 0.00390625);
        float _613 = _603.x * 0.0625;
        _fragColor1 = vec4(floor(vec3(_613, (fract(_613) * 256.0) + _610, _608 - (_610 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
        _fragColor3 = vec4(_526, _320.yz, 1.0);
    }
}

