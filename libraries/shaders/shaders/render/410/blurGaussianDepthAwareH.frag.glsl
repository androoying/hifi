#version 410

struct BlurParameters
{
    vec4 resolutionInfo;
    vec4 texcoordTransform;
    vec4 filterInfo;
    vec4 depthInfo;
    vec4 stereoInfo;
    vec4 linearDepthInfo;
    vec2 taps[33];
};

layout(std140) uniform blurParamsBuffer
{
    BlurParameters parameters;
} _54;

uniform sampler2D depthMap;
uniform sampler2D sourceMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    vec2 _415 = (varTexCoord0 * _54.parameters.texcoordTransform.zw) + _54.parameters.texcoordTransform.xy;
    vec4 _304 = texture(depthMap, _415);
    float _305 = _304.x;
    if (_305 >= _54.parameters.linearDepthInfo.x)
    {
        discard;
    }
    vec4 _314 = texture(sourceMap, _415);
    float _453;
    vec4 _454;
    _454 = _314 * _54.parameters.taps[0].y;
    _453 = _54.parameters.taps[0].y;
    float _461;
    vec4 _462;
    for (int _452 = 1; _452 < int(_54.parameters.filterInfo.y); _454 = _462, _453 = _461, _452++)
    {
        vec2 _350 = _415 + (((vec2(1.0, 0.0) * (_54.parameters.filterInfo.x * (_54.parameters.depthInfo.w / _305))) * _54.parameters.resolutionInfo.zw) * _54.parameters.taps[_452].x);
        bool _353 = all(greaterThanEqual(_350, vec2(0.0)));
        bool _359;
        if (_353)
        {
            _359 = all(lessThanEqual(_350, vec2(1.0)));
        }
        else
        {
            _359 = _353;
        }
        if (_359)
        {
            _462 = _454 + (mix(texture(sourceMap, _350), _314, vec4(clamp(((_54.parameters.depthInfo.x * _54.parameters.depthInfo.w) * _54.parameters.filterInfo.x) * abs(texture(depthMap, _350).x - _305), 0.0, 1.0))) * _54.parameters.taps[_452].y);
            _461 = _453 + _54.parameters.taps[_452].y;
            continue;
        }
        else
        {
            _462 = _454;
            _461 = _453;
            continue;
        }
        continue;
    }
    vec4 _455;
    if (_453 > 0.0)
    {
        _455 = _454 / vec4(_453);
    }
    else
    {
        _455 = _454;
    }
    outFragColor = _455;
}

