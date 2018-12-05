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
} _50;

uniform sampler2D sourceMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec2 varTexCoord0;

void main()
{
    float _318;
    vec4 _319;
    _319 = vec4(0.0);
    _318 = 0.0;
    float _325;
    vec4 _326;
    for (int _317 = 0; _317 < int(_50.parameters.filterInfo.y); _319 = _326, _318 = _325, _317++)
    {
        vec2 _245 = ((varTexCoord0 * _50.parameters.texcoordTransform.zw) + _50.parameters.texcoordTransform.xy) + (((vec2(0.0, 1.0) * _50.parameters.filterInfo.x) * _50.parameters.resolutionInfo.zw) * _50.parameters.taps[_317].x);
        bool _248 = all(greaterThanEqual(_245, vec2(0.0)));
        bool _254;
        if (_248)
        {
            _254 = all(lessThanEqual(_245, vec2(1.0)));
        }
        else
        {
            _254 = _248;
        }
        if (_254)
        {
            _326 = _319 + (texture(sourceMap, _245) * _50.parameters.taps[_317].y);
            _325 = _318 + _50.parameters.taps[_317].y;
            continue;
        }
        else
        {
            _326 = _319;
            _325 = _318;
            continue;
        }
        continue;
    }
    vec4 _320;
    if (_318 > 0.0)
    {
        _320 = _319 / vec4(_318);
    }
    else
    {
        _320 = _319;
    }
    vec4 _316 = _320;
    _316.w = _50.parameters.filterInfo.z;
    outFragColor = _316;
}

