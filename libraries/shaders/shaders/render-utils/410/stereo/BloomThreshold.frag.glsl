#version 410

struct Parameters
{
    vec2 _deltaUV;
    float _threshold;
    int _sampleCount;
};

layout(std140) uniform parametersBuffer
{
    Parameters parameters;
} _31;

uniform sampler2D colorMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    vec4 _135;
    vec2 _136;
    _136 = varTexCoord0;
    _135 = vec4(0.0);
    vec2 _133;
    vec4 _141;
    for (int _134 = 0; _134 < _31.parameters._sampleCount; _133 = _136, _133.y = _136.y + _31.parameters._deltaUV.y, _136 = _133, _135 = _141, _134++)
    {
        vec2 _140;
        _141 = _135;
        _140 = _136;
        for (int _137 = 0; _137 < _31.parameters._sampleCount; )
        {
            vec4 _57 = texture(colorMap, _140);
            vec2 _130 = _140;
            _130.x = _140.x + _31.parameters._deltaUV.x;
            _141 += (_57 * clamp(((((_57.x + _57.y) + _57.z) * 0.3333333432674407958984375) - _31.parameters._threshold) * 0.25, 0.0, 1.0));
            _140 = _130;
            _137++;
            continue;
        }
    }
    outFragColor = vec4((_135 / vec4(float(_31.parameters._sampleCount * _31.parameters._sampleCount))).xyz, 1.0);
}

