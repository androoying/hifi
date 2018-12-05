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

struct AmbientOcclusionBlurParams
{
    vec4 _blurInfo;
    vec4 _blurAxis;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _115;

layout(std140) uniform blurParamsBuffer
{
    AmbientOcclusionBlurParams blurParams;
} _229;

uniform sampler2D depthPyramidTex;
uniform sampler2D occlusionMap;

layout(location = 0) out vec4 outFragColor;
layout(location = 0) in vec4 varTexCoord0;

vec2 _1132;

void main()
{
    int _678 = int(float(int(_115.frameTransform._stereoInfo.y) >> 0));
    ivec2 _1109;
    if (ivec2(gl_FragCoord.xy).x < _678)
    {
        _1109 = ivec2(0);
    }
    else
    {
        _1109 = ivec2(1, _678);
    }
    bool _709 = _115.frameTransform._stereoInfo.x > 0.0;
    float _720 = clamp(textureLod(depthPyramidTex, varTexCoord0.zw, 0.0).x * 0.0033333334140479564666748046875, 0.0, 1.0);
    int _724 = int(_229.blurParams._blurInfo.w);
    float _588 = float(_1109.x) * _229.blurParams._blurAxis.z;
    vec2 _1084 = varTexCoord0.xy;
    _1084.x = _709 ? ((varTexCoord0.x * 2.0) - _588) : varTexCoord0.x;
    vec2 _1112;
    vec2 _1116;
    vec2 _1152;
    _1152 = _1132;
    _1116 = vec2(0.0);
    _1112 = _1084 - (_229.blurParams._blurAxis.xy * float(_724));
    vec2 _1149;
    for (int _1111 = -_724; _1111 <= (-1); _1152 = _1149, _1116 += _1149, _1112 += _229.blurParams._blurAxis.xy, _1111++)
    {
        bvec2 _763 = lessThan(_1112, vec2(0.0));
        bool _764 = any(_763);
        bool _772;
        if (!_764)
        {
            _772 = any(greaterThanEqual(_1112, _229.blurParams._blurAxis.zw));
        }
        else
        {
            _772 = _764;
        }
        bvec2 _1172 = bvec2(_772);
        vec2 _1173 = vec2(_1172.x ? vec2(0.0).x : _1152.x, _1172.y ? vec2(0.0).y : _1152.y);
        if (!(_772 ? true : false))
        {
            float _1147;
            if (_709)
            {
                _1147 = (_1112.x + _588) * 0.5;
            }
            else
            {
                _1147 = _1112.x;
            }
            vec2 _1089 = _1112;
            _1089.x = _1147;
            vec4 _830 = textureLod(occlusionMap, _1089, 0.0);
            vec3 _858 = vec3(float(abs(_1111)), (_830.y + (_830.z * 0.00390625)) - _720, 0.0);
            float _864 = exp2(dot(_229.blurParams._blurInfo.xyz, _858 * _858));
            _1149 = vec2(_830.x * _864, _864);
            continue;
        }
        else
        {
            _1149 = _1173;
            continue;
        }
        continue;
    }
    float _1113;
    if (_709)
    {
        _1113 = (_1112.x + _588) * 0.5;
    }
    else
    {
        _1113 = _1112.x;
    }
    vec2 _1097 = _1112;
    _1097.x = _1113;
    vec2 _1119;
    vec2 _1120;
    vec2 _1128;
    _1128 = _1132;
    _1120 = _1112 + _229.blurParams._blurAxis.xy;
    _1119 = _1116 + vec2(textureLod(occlusionMap, _1097, 0.0).x, 1.0);
    vec2 _1125;
    for (int _1118 = 1; _1118 <= _724; _1128 = _1125, _1120 += _229.blurParams._blurAxis.xy, _1119 += _1125, _1118++)
    {
        bvec2 _930 = lessThan(_1120, vec2(0.0));
        bool _931 = any(_930);
        bool _939;
        if (!_931)
        {
            _939 = any(greaterThanEqual(_1120, _229.blurParams._blurAxis.zw));
        }
        else
        {
            _939 = _931;
        }
        bvec2 _1175 = bvec2(_939);
        vec2 _1176 = vec2(_1175.x ? vec2(0.0).x : _1128.x, _1175.y ? vec2(0.0).y : _1128.y);
        if (!(_939 ? true : false))
        {
            float _1123;
            if (_709)
            {
                _1123 = (_1120.x + _588) * 0.5;
            }
            else
            {
                _1123 = _1120.x;
            }
            vec2 _1103 = _1120;
            _1103.x = _1123;
            vec4 _997 = textureLod(occlusionMap, _1103, 0.0);
            vec3 _1025 = vec3(float(abs(_1118)), (_997.y + (_997.z * 0.00390625)) - _720, 0.0);
            float _1031 = exp2(dot(_229.blurParams._blurInfo.xyz, _1025 * _1025));
            _1125 = vec2(_997.x * _1031, _1031);
            continue;
        }
        else
        {
            _1125 = _1176;
            continue;
        }
        continue;
    }
    float _1042 = _720 * 256.0;
    float _1044 = floor(_1042);
    outFragColor = vec4(_1119.x / (_1119.y + 9.9999997473787516355514526367188e-05), _1044 * 0.00390625, _1042 - _1044, 0.0);
}

