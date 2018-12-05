#version 410

uniform sampler2D originalTexture;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 3) in vec3 _normalWS;
layout(location = 1) in vec4 _color;
layout(location = 2) out vec4 _fragColor2;

float _487;

void main()
{
    vec4 _242 = texture(originalTexture, _texCoord01.xy);
    float _295 = _242.x;
    float _472;
    if (_295 <= 0.040449999272823333740234375)
    {
        _472 = _295 * 0.077399380505084991455078125;
    }
    else
    {
        _472 = pow((_295 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _298 = _242.y;
    float _473;
    if (_298 <= 0.040449999272823333740234375)
    {
        _473 = _298 * 0.077399380505084991455078125;
    }
    else
    {
        _473 = pow((_298 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _301 = _242.z;
    float _474;
    if (_301 <= 0.040449999272823333740234375)
    {
        _474 = _301 * 0.077399380505084991455078125;
    }
    else
    {
        _474 = pow((_301 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec4 _289 = vec4(_472, _473, _474, _487);
    vec3 _249 = normalize(_normalWS);
    vec3 _255 = _color.xyz * _289.xyz;
    float _354 = _255.x;
    _fragColor0 = vec4(_354, _255.yz, 0.60000002384185791015625);
    float _390 = _249.z;
    vec2 _394 = _249.xy * (1.0 / ((abs(_249.x) + abs(_249.y)) + abs(_390)));
    vec2 _475;
    if (_390 <= 0.0)
    {
        _475 = (vec2(1.0) - abs(_394.yx)) * vec2((_394.x >= 0.0) ? 1.0 : (-1.0), (_394.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _475 = _394;
    }
    vec2 _431 = round((clamp(_475, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _436 = _431.y;
    float _438 = floor(_436 * 0.00390625);
    float _441 = _431.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_441, (fract(_441) * 256.0) + _438, _436 - (_438 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
    _fragColor3 = vec4(_354, _255.yz, 1.0);
}

