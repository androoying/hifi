#version 410

uniform sampler2D originalTexture;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor0;

void main()
{
    vec4 _88 = texture(originalTexture, _texCoord01.xy);
    vec4 _196;
    float _197;
    if (_color.w <= 0.0)
    {
        float _137 = _88.x;
        float _193;
        if (_137 <= 0.040449999272823333740234375)
        {
            _193 = _137 * 0.077399380505084991455078125;
        }
        else
        {
            _193 = pow((_137 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _140 = _88.y;
        float _194;
        if (_140 <= 0.040449999272823333740234375)
        {
            _194 = _140 * 0.077399380505084991455078125;
        }
        else
        {
            _194 = pow((_140 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        float _143 = _88.z;
        float _195;
        if (_143 <= 0.040449999272823333740234375)
        {
            _195 = _143 * 0.077399380505084991455078125;
        }
        else
        {
            _195 = pow((_143 + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
        }
        _197 = -_color.w;
        _196 = vec4(_193, _194, _195, _88.w);
    }
    else
    {
        _197 = _color.w;
        _196 = _88;
    }
    _fragColor0 = vec4(_color.xyz * _196.xyz, _197 * _196.w);
}

