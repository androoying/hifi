#version 410

struct DeferredFrameTransform
{
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

struct HighlightParameters
{
    vec3 _outlineUnoccludedColor;
    float _outlineUnoccludedAlpha;
    vec3 _outlineOccludedColor;
    float _outlineOccludedAlpha;
    vec3 _fillUnoccludedColor;
    float _fillUnoccludedAlpha;
    vec3 _fillOccludedColor;
    float _fillOccludedAlpha;
    int _blurKernelSize;
    float _threshold;
    vec2 _size;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _27;

layout(std140) uniform highlightParamsBuffer
{
    HighlightParameters params;
} _95;

uniform sampler2D highlightedDepthMap;
uniform sampler2D sceneDepthMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    vec4 _62 = texture(highlightedDepthMap, varTexCoord0);
    float _63 = _62.x;
    if (_63 < 1.0)
    {
        if ((-(_27.frameTransform._depthInfo.x / ((texture(sceneDepthMap, varTexCoord0).x * _27.frameTransform._depthInfo.y) + _27.frameTransform._depthInfo.z))) < (-(_27.frameTransform._depthInfo.x / ((_63 * _27.frameTransform._depthInfo.y) + _27.frameTransform._depthInfo.z))))
        {
            outFragColor = vec4(_95.params._fillOccludedColor, _95.params._fillOccludedAlpha);
        }
        else
        {
            outFragColor = vec4(_95.params._fillUnoccludedColor, _95.params._fillUnoccludedAlpha);
        }
    }
    else
    {
        vec2 _128 = varTexCoord0 + (_27.frameTransform._invPixelInfo.xy * vec2(0.5));
        vec2 _142 = _95.params._size / vec2(float(_95.params._blurKernelSize));
        float _357;
        float _359;
        float _362;
        vec2 _363;
        _363 = _128 - (_95.params._size * vec2(0.5));
        _362 = 0.0;
        _359 = 0.0;
        _357 = 0.0;
        vec2 _347;
        float _383;
        float _384;
        float _385;
        for (int _356 = 0; _356 < _95.params._blurKernelSize; _363 = _347, _362 = _385, _359 = _384, _357 = _383, _356++)
        {
            _347 = _363;
            _347.y = _363.y + _142.y;
            bool _174 = _363.y >= 0.0;
            bool _180;
            if (_174)
            {
                _180 = _363.y <= 1.0;
            }
            else
            {
                _180 = _174;
            }
            if (_180)
            {
                vec2 _368;
                float _372;
                float _375;
                float _378;
                _378 = _359;
                _375 = _357;
                _372 = _362;
                _368 = _363;
                float _194;
                vec2 _355;
                float _393;
                float _394;
                float _395;
                for (int _364 = 0; _364 < _95.params._blurKernelSize; _355 = _368, _355.x = _194 + _142.x, _378 = _395, _375 = _394, _372 = _393, _368 = _355, _364++)
                {
                    _194 = _368.x;
                    bool _195 = _194 >= 0.0;
                    bool _201;
                    if (_195)
                    {
                        _201 = _194 <= 1.0;
                    }
                    else
                    {
                        _201 = _195;
                    }
                    if (_201)
                    {
                        vec4 _206 = texture(highlightedDepthMap, _368);
                        float _207 = _206.x;
                        float _211 = float(_207 < 1.0);
                        _395 = _378 + 1.0;
                        _394 = _375 + _211;
                        _393 = max(_207 * _211, _372);
                        continue;
                    }
                    else
                    {
                        _395 = _378;
                        _394 = _375;
                        _393 = _372;
                        continue;
                    }
                    continue;
                }
                _385 = _372;
                _384 = _378;
                _383 = _375;
                continue;
            }
            else
            {
                _385 = _362;
                _384 = _359;
                _383 = _357;
                continue;
            }
            continue;
        }
        bool _233 = _357 > 0.0;
        float _401 = _233 ? _362 : 1.0;
        float _239 = _357 / _359;
        if (_239 < 0.004999999888241291046142578125)
        {
            discard;
        }
        float _251 = min(1.0, _239 / _95.params._threshold);
        if ((-(_27.frameTransform._depthInfo.x / ((texture(sceneDepthMap, _128).x * _27.frameTransform._depthInfo.y) + _27.frameTransform._depthInfo.z))) < (-(_27.frameTransform._depthInfo.x / ((_401 * _27.frameTransform._depthInfo.y) + _27.frameTransform._depthInfo.z))))
        {
            outFragColor = vec4(_95.params._outlineOccludedColor, _251 * _95.params._outlineOccludedAlpha);
        }
        else
        {
            outFragColor = vec4(_95.params._outlineUnoccludedColor, _251 * _95.params._outlineUnoccludedAlpha);
        }
    }
}

