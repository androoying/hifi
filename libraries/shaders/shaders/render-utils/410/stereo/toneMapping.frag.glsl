#version 410

struct ToneMappingParams
{
    vec4 _exp_2powExp_s0_s1;
    ivec4 _toneCurve_s0_s1_s2;
};

layout(std140) uniform toneMappingParamsBuffer
{
    ToneMappingParams params;
} _19;

uniform sampler2D colorMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    vec4 _46 = texture(colorMap, varTexCoord0);
    vec3 _55 = _46.xyz * _19.params._exp_2powExp_s0_s1.y;
    vec3 _131;
    if (_19.params._toneCurve_s0_s1_s2.x == 3)
    {
        vec3 _74 = max(vec3(0.0), _55 - vec3(0.0040000001899898052215576171875));
        vec3 _78 = _74 * 6.19999980926513671875;
        _131 = (_74 * (_78 + vec3(0.5))) / ((_74 * (_78 + vec3(1.7000000476837158203125))) + vec3(0.0599999986588954925537109375));
    }
    else
    {
        vec3 _132;
        if (_19.params._toneCurve_s0_s1_s2.x == 2)
        {
            _132 = pow(_55 / (vec3(1.0) + _55), vec3(0.4545454680919647216796875));
        }
        else
        {
            vec3 _133;
            if (_19.params._toneCurve_s0_s1_s2.x == 1)
            {
                _133 = pow(_55, vec3(0.4545454680919647216796875));
            }
            else
            {
                _133 = _55;
            }
            _132 = _133;
        }
        _131 = _132;
    }
    outFragColor = vec4(_131, 1.0);
}

