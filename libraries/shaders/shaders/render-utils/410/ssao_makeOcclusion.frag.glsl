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

struct AmbientOcclusionParams
{
    vec4 _resolutionInfo;
    vec4 _radiusInfo;
    vec4 _ditheringInfo;
    vec4 _sampleInfo;
    vec4 _falloffInfo;
    vec4 _sideSizes[2];
};

struct AmbientOcclusionFrameParams
{
    vec4 _angleInfo;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _235;

layout(std140) uniform ambientOcclusionParamsBuffer
{
    AmbientOcclusionParams params;
} _364;

layout(std140) uniform ambientOcclusionFrameParamsBuffer
{
    AmbientOcclusionFrameParams frameParams;
} _611;

uniform sampler2D depthPyramidTex;
uniform sampler2D normalTex;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

vec3 _2945;

void main()
{
    ivec2 _1099 = ivec2(gl_FragCoord.xy);
    vec3 _1349 = normalize((textureLod(normalTex, varTexCoord0, 0.0).xyz * 2.0) - vec3(1.0));
    ivec2 _1355 = textureSize(depthPyramidTex, 0);
    bool _1368 = _235.frameTransform._stereoInfo.x > 0.0;
    int _1358 = int(_1368) & 1;
    ivec2 _2806 = _1355;
    _2806.x = _1355.x >> _1358;
    vec2 _1364 = vec2(_2806);
    bool _1372 = _364.params._resolutionInfo.y != 0.0;
    ivec2 _2913;
    if (_1372)
    {
        _2913 = ivec2(_364.params._sideSizes[1].zw);
    }
    else
    {
        _2913 = ivec2(_364.params._sideSizes[1].xy);
    }
    int _1124 = _1099.x;
    ivec2 _2914;
    if (_1124 < _2913.x)
    {
        _2914 = ivec2(0);
    }
    else
    {
        _2914 = ivec2(1, _2913.x);
    }
    float _1410 = float(_2914.x);
    vec2 _1417 = vec2(float(_1368));
    vec2 _1434 = floor((mix(varTexCoord0, vec2((varTexCoord0.x * 2.0) - _1410, varTexCoord0.y), _1417) * _1364) - vec2(0.5)) + vec2(0.5);
    vec2 _1436 = _1434 / _1364;
    vec2 _1142 = vec2(2.0) / _1364;
    float _1468 = _1436.x;
    float _1494 = -textureLod(depthPyramidTex, mix(_1436, vec2((_1468 + _1410) * 0.5, _1436.y), _1417), 0.0).x;
    vec4 _1539 = _235.frameTransform._invProjection[_2914.x] * vec4((vec3(_1468, _1436.y, (_235.frameTransform._depthInfo.x - (_1494 * _235.frameTransform._depthInfo.z)) / (_1494 * _235.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    vec3 _1545 = _1539.xyz / vec3(_1539.w);
    float _1151 = _1545.z;
    float _2983;
    if (_1151 > (_235.frameTransform._depthInfo.z + 1.0))
    {
        float _1564 = _1364.y;
        float _1566 = min((-((((vec2(ivec2(_235.frameTransform._pixelInfo.zw) >> ivec2(int(_364.params._resolutionInfo.x))).y * _235.frameTransform._projection[0][1].y) * 0.5) * _364.params._radiusInfo.x) / _1151)) * _364.params._resolutionInfo.z, _1564 * 0.5);
        float _2922;
        if (_1372)
        {
            _2922 = min(_1566, 300.0);
        }
        else
        {
            _2922 = _1566;
        }
        int _1174 = int(_364.params._sampleInfo.x);
        float _2982;
        if (_1372)
        {
            float _2981;
            _2981 = 0.0;
            float _1868;
            float _2060;
            float _3086;
            for (int _2980 = 0; _2980 < _1174; _2981 += (_1868 + min(_3086 * _2060, 1.0)), _2980++)
            {
                float _1624 = float(_2980);
                float _1626 = _1624 * _364.params._sampleInfo.y;
                float _1633 = (_1626 * 3.141592502593994140625) + (_364.params._ditheringInfo.x * _611.frameParams._angleInfo.x);
                vec2 _1667 = vec3(cos(_1633), sin(_1633), _1626).xy * _2922;
                vec2 _1670 = _1667 * _1142;
                vec2 _1675 = abs(_1667);
                int _1682 = int(ceil(max(_1675.x, _1675.y)));
                bool _1738 = _1682 > 0;
                float _3031;
                if (_1738)
                {
                    float _1743 = float(_1682);
                    float _1749 = _2922 / _1743;
                    ivec2 _1878 = textureSize(depthPyramidTex, 0);
                    ivec2 _2824 = _1878;
                    _2824.x = _1878.x >> _1358;
                    float _1754 = float(int(_364.params._sampleInfo.w));
                    vec2 _2988;
                    vec2 _2989;
                    vec2 _2990;
                    float _3009;
                    _3009 = 0.0;
                    _2990 = vec2(_2824);
                    _2989 = _1436;
                    _2988 = _1670 / vec2(_1743);
                    vec2 _1768;
                    bool _1850;
                    float _1931;
                    float _3027;
                    vec2 _3201;
                    vec2 _3208;
                    float _3229;
                    float _3232;
                    for (float _2987 = _1749, _3005 = _364.params._falloffInfo.x, _3014 = float(clamp(findMSB(int(_1749 * _1754)) - 2, 0, 5)), _3020 = _1749; _2987 <= _2922; _3020 = _3027, _3014 = _1850 ? _1931 : _3014, _3009 = _3232, _3005 = _3229, _2990 = _3208, _2989 = _1768, _2988 = _3201, _2987 += _3027)
                    {
                        _1768 = _2989 + _2988;
                        vec2 _1905 = _1768 * _2990;
                        vec2 _1912 = (floor(_1905 - vec2(0.5)) + vec2(0.5)) / _2990;
                        float _1773 = _1912.x;
                        bool _1774 = _1773 < 0.0;
                        bool _1781;
                        if (!_1774)
                        {
                            _1781 = _1912.y < 0.0;
                        }
                        else
                        {
                            _1781 = _1774;
                        }
                        bool _1788;
                        if (!_1781)
                        {
                            _1788 = _1773 >= 1.0;
                        }
                        else
                        {
                            _1788 = _1781;
                        }
                        bool _1795;
                        if (!_1788)
                        {
                            _1795 = _1912.y >= 1.0;
                        }
                        else
                        {
                            _1795 = _1788;
                        }
                        if (_1795)
                        {
                            break;
                        }
                        vec2 _1926 = clamp(_1912, vec2(0.0), vec2(1.0));
                        _1931 = float(clamp(findMSB(int(_2987 * _1754)) - 2, 0, 5));
                        float _1939 = -textureLod(depthPyramidTex, mix(_1926, vec2((_1926.x + _1410) * 0.5, _1926.y), _1417), _1931).x;
                        vec4 _2020 = _235.frameTransform._invProjection[_2914.x] * vec4((vec3(_1773, _1912.y, (_235.frameTransform._depthInfo.x - (_1939 * _235.frameTransform._depthInfo.z)) / (_1939 * _235.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
                        vec3 _1810 = (_2020.xyz / vec3(_2020.w)) - _1545;
                        float _1813 = dot(_1810, _1810);
                        float _1817 = dot(_1810, _1349);
                        float _1822 = _1817 * inversesqrt(_1813);
                        if ((_1813 < _364.params._radiusInfo.y) && (_1817 > 0.0))
                        {
                            bool _1836 = _1822 > _3005;
                            float _3233;
                            if (_1836)
                            {
                                _3233 = _3009 + (max(0.0, 1.0 - (_1813 * _364.params._radiusInfo.z)) * (_1822 - _3005));
                            }
                            else
                            {
                                _3233 = _3009;
                            }
                            _3232 = _3233;
                            _3229 = _1836 ? _1822 : _3005;
                        }
                        else
                        {
                            _3232 = _3009;
                            _3229 = _3005;
                        }
                        _1850 = _1931 != _3014;
                        if (_1850)
                        {
                            ivec2 _2044 = textureSize(depthPyramidTex, int(_1931));
                            ivec2 _2844 = _2044;
                            _2844.x = _2044.x >> _1358;
                            _3208 = vec2(_2844);
                            _3201 = _2988 * 2.0;
                            _3027 = _3020 * 2.0;
                            continue;
                        }
                        else
                        {
                            _3208 = _2990;
                            _3201 = _2988;
                            _3027 = _3020;
                            continue;
                        }
                        continue;
                    }
                    _3031 = _3009;
                }
                else
                {
                    _3031 = 0.0;
                }
                _2060 = _364.params._falloffInfo.y;
                _1868 = min(_3031 * _2060, 1.0);
                if (_1738)
                {
                    float _2097 = float(_1682);
                    float _2103 = _2922 / _2097;
                    ivec2 _2232 = textureSize(depthPyramidTex, 0);
                    ivec2 _2847 = _2232;
                    _2847.x = _2232.x >> _1358;
                    float _2108 = float(int(_364.params._sampleInfo.w));
                    vec2 _3034;
                    vec2 _3035;
                    vec2 _3036;
                    float _3064;
                    _3064 = 0.0;
                    _3036 = vec2(_2847);
                    _3035 = _1436;
                    _3034 = (-_1670) / vec2(_2097);
                    vec2 _2122;
                    bool _2204;
                    float _2285;
                    float _3082;
                    vec2 _3235;
                    vec2 _3242;
                    float _3254;
                    float _3257;
                    for (float _3033 = _2103, _3060 = _364.params._falloffInfo.x, _3069 = float(clamp(findMSB(int(_2103 * _2108)) - 2, 0, 5)), _3075 = _2103; _3033 <= _2922; _3075 = _3082, _3069 = _2204 ? _2285 : _3069, _3064 = _3257, _3060 = _3254, _3036 = _3242, _3035 = _2122, _3034 = _3235, _3033 += _3082)
                    {
                        _2122 = _3035 + _3034;
                        vec2 _2259 = _2122 * _3036;
                        vec2 _2266 = (floor(_2259 - vec2(0.5)) + vec2(0.5)) / _3036;
                        float _2127 = _2266.x;
                        bool _2128 = _2127 < 0.0;
                        bool _2135;
                        if (!_2128)
                        {
                            _2135 = _2266.y < 0.0;
                        }
                        else
                        {
                            _2135 = _2128;
                        }
                        bool _2142;
                        if (!_2135)
                        {
                            _2142 = _2127 >= 1.0;
                        }
                        else
                        {
                            _2142 = _2135;
                        }
                        bool _2149;
                        if (!_2142)
                        {
                            _2149 = _2266.y >= 1.0;
                        }
                        else
                        {
                            _2149 = _2142;
                        }
                        if (_2149)
                        {
                            break;
                        }
                        vec2 _2280 = clamp(_2266, vec2(0.0), vec2(1.0));
                        _2285 = float(clamp(findMSB(int(_3033 * _2108)) - 2, 0, 5));
                        float _2293 = -textureLod(depthPyramidTex, mix(_2280, vec2((_2280.x + _1410) * 0.5, _2280.y), _1417), _2285).x;
                        vec4 _2374 = _235.frameTransform._invProjection[_2914.x] * vec4((vec3(_2127, _2266.y, (_235.frameTransform._depthInfo.x - (_2293 * _235.frameTransform._depthInfo.z)) / (_2293 * _235.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
                        vec3 _2164 = (_2374.xyz / vec3(_2374.w)) - _1545;
                        float _2167 = dot(_2164, _2164);
                        float _2171 = dot(_2164, _1349);
                        float _2176 = _2171 * inversesqrt(_2167);
                        if ((_2167 < _364.params._radiusInfo.y) && (_2171 > 0.0))
                        {
                            bool _2190 = _2176 > _3060;
                            float _3258;
                            if (_2190)
                            {
                                _3258 = _3064 + (max(0.0, 1.0 - (_2167 * _364.params._radiusInfo.z)) * (_2176 - _3060));
                            }
                            else
                            {
                                _3258 = _3064;
                            }
                            _3257 = _3258;
                            _3254 = _2190 ? _2176 : _3060;
                        }
                        else
                        {
                            _3257 = _3064;
                            _3254 = _3060;
                        }
                        _2204 = _2285 != _3069;
                        if (_2204)
                        {
                            ivec2 _2398 = textureSize(depthPyramidTex, int(_2285));
                            ivec2 _2867 = _2398;
                            _2867.x = _2398.x >> _1358;
                            _3242 = vec2(_2867);
                            _3235 = _3034 * 2.0;
                            _3082 = _3075 * 2.0;
                            continue;
                        }
                        else
                        {
                            _3242 = _3036;
                            _3235 = _3034;
                            _3082 = _3075;
                            continue;
                        }
                        continue;
                    }
                    _3086 = _3064;
                    continue;
                }
                else
                {
                    _3086 = 0.0;
                    continue;
                }
                continue;
            }
            _2982 = 1.0 - ((_2981 * _364.params._sampleInfo.y) * ((_1372 ? 1.0 : _364.params._radiusInfo.z) * _364.params._radiusInfo.w));
        }
        else
        {
            int _2435 = _1099.y;
            float _2919;
            vec3 _2941;
            _2941 = _2945;
            _2919 = 0.0;
            vec2 _1265;
            vec2 _2616;
            float _2629;
            vec4 _2710;
            vec3 _2724;
            float _2727;
            float _2734;
            vec3 _2939;
            for (int _2918 = 0; _2918 < _1174; _1265 = _1436 + (_2939.xy * _1142), _2616 = clamp(_1265, vec2(0.0), vec2(1.0)), _2629 = -textureLod(depthPyramidTex, mix(_2616, vec2((_2616.x + _1410) * 0.5, _2616.y), _1417), float(clamp(findMSB(int(_2939.z * float(int(_364.params._sampleInfo.w)))) - 2, 0, 5))).x, _2710 = _235.frameTransform._invProjection[_2914.x] * vec4((vec3(_1265, (_235.frameTransform._depthInfo.x - (_2629 * _235.frameTransform._depthInfo.z)) / (_2629 * _235.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0), _2724 = (_2710.xyz / vec3(_2710.w)) - _1545, _2727 = dot(_2724, _2724), _2734 = max(_364.params._radiusInfo.y - _2727, 0.0), _2941 = _2939, _2919 += (float(_2939.z > 0.0) * (((_2734 * _2734) * _2734) * max((dot(_2724, _1349) - _364.params._falloffInfo.x) / (0.00999999977648258209228515625 + _2727), 0.0))), _2918++)
            {
                float _2581 = float(_2918);
                float _2583 = _2581 * _364.params._sampleInfo.y;
                float _2590 = (_2583 * (_364.params._sampleInfo.z * 6.28318500518798828125)) + ((_364.params._ditheringInfo.x * float(((3 * _1124) ^ (_2435 + (_1124 * _2435))) * 10)) + (_364.params._ditheringInfo.x * _611.frameParams._angleInfo.x));
                vec3 _2596 = vec3(cos(_2590), sin(_2590), _2583);
                vec2 _2567 = _2596.xy * _2583;
                vec3 _2572 = vec3(_2567.x, _2567.y, _2596.z) * _2922;
                vec2 _2473 = _1434 + _2572.xy;
                bool _2476 = !(_364.params._ditheringInfo.w > 0.0);
                bvec3 _3268 = bvec3(_2476);
                vec3 _3269 = vec3(_3268.x ? _2572.x : _2941.x, _3268.y ? _2572.y : _2941.y, _3268.z ? _2572.z : _2941.z);
                if (!(_2476 ? true : false))
                {
                    float _2484 = _2473.x;
                    vec2 _2925;
                    bool _2929;
                    if (_2484 < 0.5)
                    {
                        vec2 _2876 = _2473;
                        _2876.x = -_2484;
                        _2929 = true;
                        _2925 = _2876;
                    }
                    else
                    {
                        float _2496 = _1364.x;
                        bool _2498 = _2484 > (_2496 - 0.5);
                        vec2 _2926;
                        if (_2498)
                        {
                            vec2 _2883 = _2473;
                            _2883.x = _2484 - (_2496 - _2484);
                            _2926 = _2883;
                        }
                        else
                        {
                            _2926 = _2473;
                        }
                        _2929 = _2498 ? true : false;
                        _2925 = _2926;
                    }
                    bool _2927;
                    vec2 _2931;
                    if (_2925.y < 0.5)
                    {
                        vec2 _2887 = _2925;
                        _2887.y = -_2925.y;
                        _2931 = _2887;
                        _2927 = true;
                    }
                    else
                    {
                        bool _2525 = _2925.y > (_1564 - 0.5);
                        vec2 _2932;
                        if (_2525)
                        {
                            vec2 _2894 = _2925;
                            _2894.y = _2925.y - (_1564 - _2925.y);
                            _2932 = _2894;
                        }
                        else
                        {
                            _2932 = _2925;
                        }
                        _2931 = _2932;
                        _2927 = _2525 ? true : _2929;
                    }
                    vec3 _2938;
                    if (_2927)
                    {
                        vec2 _2542 = _2931 - _1434;
                        vec3 _2898 = vec3(_2542.x, _2542.y, _2572.z);
                        _2898.z = 0.0;
                        _2938 = _2898;
                    }
                    else
                    {
                        _2938 = _2572;
                    }
                    _2939 = _2938;
                    continue;
                }
                else
                {
                    _2939 = _3269;
                    continue;
                }
                continue;
            }
            _2982 = 1.0 - ((_2919 * _364.params._sampleInfo.y) * ((_1372 ? 1.0 : _364.params._radiusInfo.z) * _364.params._radiusInfo.w));
        }
        _2983 = clamp(_2982, 0.0, 1.0);
    }
    else
    {
        _2983 = 1.0;
    }
    float _2774 = clamp(_1151 * (-0.0033333334140479564666748046875), 0.0, 1.0) * 256.0;
    float _2776 = floor(_2774);
    outFragColor = vec4(_2983, _2776 * 0.00390625, _2774 - _2776, 0.0);
}

