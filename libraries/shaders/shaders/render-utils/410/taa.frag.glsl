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

struct TAAParams
{
    float none;
    float blend;
    float covarianceGamma;
    float debugShowVelocityThreshold;
    ivec4 flags;
    vec4 pixelInfo_orbZoom;
    vec4 regionInfo;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _125;

layout(std140) uniform taaParamsBuffer
{
    TAAParams params;
} _207;

uniform sampler2D sourceMap;
uniform sampler2D historyMap;
uniform sampler2D velocityMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

vec2 _2935;
float _2970;

void main()
{
    bool _1122 = (varTexCoord0.x - _207.params.regionInfo.z) > 0.0;
    if (_1122)
    {
        vec2 _2933;
        if (_125.frameTransform._stereoInfo.x > 0.0)
        {
            vec2 _2790 = _125.frameTransform._invPixelInfo.xy;
            _2790.x = _125.frameTransform._invPixelInfo.x * 0.5;
            _2933 = _2790;
        }
        else
        {
            _2933 = _125.frameTransform._invPixelInfo.xy;
        }
        float _1283 = dot(texture(sourceMap, varTexCoord0 + (vec2(-1.0) * _2933)).xyz, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        float _1286 = dot(texture(sourceMap, varTexCoord0 + (vec2(1.0, -1.0) * _2933)).xyz, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        float _1289 = dot(texture(sourceMap, varTexCoord0 + (vec2(-1.0, 1.0) * _2933)).xyz, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        float _1292 = dot(texture(sourceMap, varTexCoord0 + _2933).xyz, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        float _1295 = dot(texture(sourceMap, varTexCoord0).xyz, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        float _1316 = _1283 + _1286;
        float _1321 = -(_1316 - (_1289 + _1292));
        vec2 _2792 = _2935;
        _2792.x = _1321;
        float _1329 = (_1283 + _1289) - (_1286 + _1292);
        vec2 _2794 = _2792;
        _2794.y = _1329;
        vec2 _1367 = min(vec2(8.0), max(vec2(-8.0), _2794 * (1.0 / (min(abs(_1321), abs(_1329)) + max(((_1316 + _1289) + _1292) * 0.03125, 0.0078125))))) * _2933;
        vec3 _1383 = (texture(sourceMap, varTexCoord0 + (_1367 * (-0.16666667163372039794921875))).xyz + texture(sourceMap, varTexCoord0 + (_1367 * 0.16666667163372039794921875)).xyz) * 0.5;
        vec3 _1402 = (_1383 * 0.5) + ((texture(sourceMap, varTexCoord0 + (_1367 * (-0.5))).xyz + texture(sourceMap, varTexCoord0 + (_1367 * 0.5)).xyz) * 0.25);
        float _1405 = dot(_1402, vec3(0.2989999949932098388671875, 0.58700001239776611328125, 0.114000000059604644775390625));
        bvec3 _2972 = bvec3((_1405 < min(_1295, min(min(_1283, _1286), min(_1289, _1292)))) || (_1405 > max(_1295, max(max(_1283, _1286), max(_1289, _1292)))));
        outFragColor = vec4(vec3(_2972.x ? _1383.x : _1402.x, _2972.y ? _1383.y : _1402.y, _2972.z ? _1383.z : _1402.z), 1.0);
    }
    if (!(_1122 ? true : false))
    {
        bool _1656 = _125.frameTransform._stereoInfo.x > 0.0;
        vec2 _2940;
        if (_1656)
        {
            vec2 _2799 = _125.frameTransform._invPixelInfo.xy;
            _2799.x = _125.frameTransform._invPixelInfo.x * 0.5;
            _2940 = _2799;
        }
        else
        {
            _2940 = _125.frameTransform._invPixelInfo.xy;
        }
        vec2 _1468 = abs(_2940);
        vec2 _1471 = vec2(_1468.x, 0.0);
        vec2 _1474 = vec2(0.0, _1468.y);
        vec2 _1477 = varTexCoord0 - _1474;
        vec4 _1660 = texture(velocityMap, _1477 - _1471);
        vec2 _1661 = _1660.xy;
        vec4 _1665 = texture(velocityMap, _1477);
        vec2 _1666 = _1665.xy;
        vec4 _1670 = texture(velocityMap, _1477 + _1471);
        vec2 _1671 = _1670.xy;
        vec4 _1675 = texture(velocityMap, varTexCoord0 - _1471);
        vec2 _1676 = _1675.xy;
        vec4 _1680 = texture(velocityMap, varTexCoord0);
        vec2 _1681 = _1680.xy;
        vec4 _1685 = texture(velocityMap, varTexCoord0 + _1471);
        vec2 _1686 = _1685.xy;
        vec2 _1503 = varTexCoord0 + _1474;
        vec4 _1690 = texture(velocityMap, _1503 - _1471);
        vec2 _1691 = _1690.xy;
        vec4 _1695 = texture(velocityMap, _1503);
        vec2 _1696 = _1695.xy;
        vec4 _1700 = texture(velocityMap, _1503 + _1471);
        vec2 _1701 = _1700.xy;
        float _1520 = dot(_1661, _1661);
        float _1526 = dot(_1666, _1666);
        vec3 _2941;
        if (_1526 > _1520)
        {
            _2941 = vec3(_1665.xy, _1526);
        }
        else
        {
            _2941 = vec3(_1660.xy, _1520);
        }
        float _1540 = dot(_1671, _1671);
        vec3 _2942;
        if (_1540 > _2941.z)
        {
            _2942 = vec3(_1670.xy, _1540);
        }
        else
        {
            _2942 = _2941;
        }
        float _1554 = dot(_1676, _1676);
        vec3 _2943;
        if (_1554 > _2942.z)
        {
            _2943 = vec3(_1675.xy, _1554);
        }
        else
        {
            _2943 = _2942;
        }
        float _1568 = dot(_1681, _1681);
        vec3 _2944;
        if (_1568 > _2943.z)
        {
            _2944 = vec3(_1680.xy, _1568);
        }
        else
        {
            _2944 = _2943;
        }
        float _1582 = dot(_1686, _1686);
        vec3 _2945;
        if (_1582 > _2944.z)
        {
            _2945 = vec3(_1685.xy, _1582);
        }
        else
        {
            _2945 = _2944;
        }
        float _1596 = dot(_1691, _1691);
        vec3 _2946;
        if (_1596 > _2945.z)
        {
            _2946 = vec3(_1690.xy, _1596);
        }
        else
        {
            _2946 = _2945;
        }
        float _1610 = dot(_1696, _1696);
        vec3 _2947;
        if (_1610 > _2946.z)
        {
            _2947 = vec3(_1695.xy, _1610);
        }
        else
        {
            _2947 = _2946;
        }
        float _1624 = dot(_1701, _1701);
        vec3 _2948;
        if (_1624 > _2947.z)
        {
            _2948 = vec3(_1700.xy, _1624);
        }
        else
        {
            _2948 = _2947;
        }
        vec2 _2950;
        int _2951;
        if (_1656)
        {
            bool _1759 = varTexCoord0.x > 0.5;
            vec2 _2949;
            if (_1759)
            {
                vec2 _2813 = varTexCoord0;
                _2813.x = varTexCoord0.x - 0.5;
                _2949 = _2813;
            }
            else
            {
                _2949 = varTexCoord0;
            }
            vec2 _2816 = _2949;
            _2816.x = _2949.x * 2.0;
            _2951 = int(_1759);
            _2950 = _2816;
        }
        else
        {
            _2951 = 0;
            _2950 = varTexCoord0;
        }
        vec2 _1747 = _2950 - _2948.xy;
        vec2 _2953;
        if (_1656)
        {
            vec2 _2822 = _1747;
            _2822.x = (_1747.x * 0.5) + (float(_2951) * 0.5);
            _2953 = _2822;
        }
        else
        {
            _2953 = _1747;
        }
        vec4 _1807 = texture(sourceMap, varTexCoord0);
        vec3 _1809 = _1807.xyz;
        vec3 _1816 = _1809 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _1809));
        float _1830 = _1816.x;
        float _1834 = _1816.y * 0.5;
        float _1837 = _1816.z;
        float _1838 = _1837 * 0.25;
        float _1839 = ((_1830 * 0.25) + _1834) + _1838;
        vec3 _1716 = vec4(_1839, (_1830 * 0.5) - (_1837 * 0.5), ((_1830 * (-0.25)) + _1834) - _1838, _2970).xyz;
        bool _1720 = any(lessThan(_1747, vec2(0.0)));
        bool _1727;
        if (!_1720)
        {
            _1727 = any(greaterThan(_1747, vec2(1.0)));
        }
        else
        {
            _1727 = _1720;
        }
        vec3 _2954;
        if (!_1727)
        {
            vec3 _1872 = texture(historyMap, _2953).xyz;
            vec3 _1879 = _1872 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _1872));
            float _1893 = _1879.x;
            float _1897 = _1879.y * 0.5;
            float _1900 = _1879.z;
            float _1901 = _1900 * 0.25;
            _2954 = vec4(((_1893 * 0.25) + _1897) + _1901, (_1893 * 0.5) - (_1900 * 0.5), ((_1893 * (-0.25)) + _1897) - _1901, _2970).xyz;
        }
        else
        {
            _2954 = _1716;
        }
        vec3 _2960;
        if ((_207.params.flags.y & 2) != int(0u))
        {
            vec2 _2956;
            if (_1656)
            {
                vec2 _2843 = _125.frameTransform._invPixelInfo.xy;
                _2843.x = _125.frameTransform._invPixelInfo.x * 0.5;
                _2956 = _2843;
            }
            else
            {
                _2956 = _125.frameTransform._invPixelInfo.xy;
            }
            vec2 _1971 = vec2(_2956.x, 0.0);
            vec2 _1974 = vec2(0.0, _2956.y);
            vec2 _1977 = varTexCoord0 - _1974;
            vec4 _2159 = texture(sourceMap, _1977 - _1971);
            vec3 _2161 = _2159.xyz;
            vec3 _2168 = _2161 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2161));
            float _2182 = _2168.x;
            float _2186 = _2168.y * 0.5;
            float _2189 = _2168.z;
            float _2190 = _2189 * 0.25;
            vec3 _1981 = vec4(((_2182 * 0.25) + _2186) + _2190, (_2182 * 0.5) - (_2189 * 0.5), ((_2182 * (-0.25)) + _2186) - _2190, _2970).xyz;
            vec4 _2222 = texture(sourceMap, _1977);
            vec3 _2224 = _2222.xyz;
            vec3 _2231 = _2224 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2224));
            float _2245 = _2231.x;
            float _2249 = _2231.y * 0.5;
            float _2252 = _2231.z;
            float _2253 = _2252 * 0.25;
            vec3 _1990 = vec4(((_2245 * 0.25) + _2249) + _2253, (_2245 * 0.5) - (_2252 * 0.5), ((_2245 * (-0.25)) + _2249) - _2253, _2970).xyz;
            vec4 _2285 = texture(sourceMap, _1977 + _1971);
            vec3 _2287 = _2285.xyz;
            vec3 _2294 = _2287 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2287));
            float _2308 = _2294.x;
            float _2312 = _2294.y * 0.5;
            float _2315 = _2294.z;
            float _2316 = _2315 * 0.25;
            vec3 _2005 = vec4(((_2308 * 0.25) + _2312) + _2316, (_2308 * 0.5) - (_2315 * 0.5), ((_2308 * (-0.25)) + _2312) - _2316, _2970).xyz;
            vec4 _2348 = texture(sourceMap, varTexCoord0 - _1971);
            vec3 _2350 = _2348.xyz;
            vec3 _2357 = _2350 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2350));
            float _2371 = _2357.x;
            float _2375 = _2357.y * 0.5;
            float _2378 = _2357.z;
            float _2379 = _2378 * 0.25;
            vec3 _2018 = vec4(((_2371 * 0.25) + _2375) + _2379, (_2371 * 0.5) - (_2378 * 0.5), ((_2371 * (-0.25)) + _2375) - _2379, _2970).xyz;
            vec4 _2411 = texture(sourceMap, varTexCoord0 + _1971);
            vec3 _2413 = _2411.xyz;
            vec3 _2420 = _2413 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2413));
            float _2434 = _2420.x;
            float _2438 = _2420.y * 0.5;
            float _2441 = _2420.z;
            float _2442 = _2441 * 0.25;
            vec3 _2040 = vec4(((_2434 * 0.25) + _2438) + _2442, (_2434 * 0.5) - (_2441 * 0.5), ((_2434 * (-0.25)) + _2438) - _2442, _2970).xyz;
            vec2 _2051 = varTexCoord0 + _1974;
            vec4 _2474 = texture(sourceMap, _2051 - _1971);
            vec3 _2476 = _2474.xyz;
            vec3 _2483 = _2476 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2476));
            float _2497 = _2483.x;
            float _2501 = _2483.y * 0.5;
            float _2504 = _2483.z;
            float _2505 = _2504 * 0.25;
            vec3 _2055 = vec4(((_2497 * 0.25) + _2501) + _2505, (_2497 * 0.5) - (_2504 * 0.5), ((_2497 * (-0.25)) + _2501) - _2505, _2970).xyz;
            vec4 _2537 = texture(sourceMap, _2051);
            vec3 _2539 = _2537.xyz;
            vec3 _2546 = _2539 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2539));
            float _2560 = _2546.x;
            float _2564 = _2546.y * 0.5;
            float _2567 = _2546.z;
            float _2568 = _2567 * 0.25;
            vec3 _2068 = vec4(((_2560 * 0.25) + _2564) + _2568, (_2560 * 0.5) - (_2567 * 0.5), ((_2560 * (-0.25)) + _2564) - _2568, _2970).xyz;
            vec4 _2600 = texture(sourceMap, _2051 + _1971);
            vec3 _2602 = _2600.xyz;
            vec3 _2609 = _2602 / vec3(1.0 + dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2602));
            float _2623 = _2609.x;
            float _2627 = _2609.y * 0.5;
            float _2630 = _2609.z;
            float _2631 = _2630 * 0.25;
            vec3 _2083 = vec4(((_2623 * 0.25) + _2627) + _2631, (_2623 * 0.5) - (_2630 * 0.5), ((_2623 * (-0.25)) + _2627) - _2631, _2970).xyz;
            vec3 _2093 = ((((((((_1981 + _1990) + _2005) + _2018) + _1716) + _2040) + _2055) + _2068) + _2083) * vec3(0.111111111938953399658203125);
            vec3 _2107 = sqrt(max(((((((((((_1981 * _1981) + (_1990 * _1990)) + (_2005 * _2005)) + (_2018 * _2018)) + (_1716 * _1716)) + (_2040 * _2040)) + (_2055 * _2055)) + (_2068 * _2068)) + (_2083 * _2083)) * vec3(0.111111111938953399658203125)) - (_2093 * _2093), vec3(0.0))) * _207.params.covarianceGamma;
            vec3 _2108 = _2093 - _2107;
            vec3 _2113 = _2093 + _2107;
            vec3 _2669 = (_2113 + _2108) * 0.5;
            vec3 _2677 = _2954 - _2669;
            vec3 _2682 = abs(_2677 / (((_2113 - _2108) * 0.5) + vec3(9.9999997473787516355514526367188e-06)));
            float _2690 = max(_2682.x, max(_2682.y, _2682.z));
            vec3 _2959;
            if (_2690 > 1.0)
            {
                _2959 = _2669 + (_2677 / vec3(_2690));
            }
            else
            {
                _2959 = _2954;
            }
            _2960 = _2959;
        }
        else
        {
            _2960 = _2954;
        }
        vec3 _2961;
        if ((_207.params.flags.y & 16) != int(0u))
        {
            float _2736 = 1.0 - (abs(_1839 - _2960.x) / max(_1839, max(_2960.x, 0.20000000298023223876953125)));
            _2961 = mix(_2960, _1716, vec3(mix(0.100000001490116119384765625, 0.89999997615814208984375, _2736 * _2736) * _207.params.blend));
        }
        else
        {
            _2961 = mix(_2960, _1716, vec3(_207.params.blend));
        }
        vec3 _2755 = max(vec3(0.0), vec3((_2961.x + _2961.y) - _2961.z, _2961.x + _2961.z, (_2961.x - _2961.y) - _2961.z));
        outFragColor = vec4(_2755 / vec3(1.0 - dot(vec3(0.300000011920928955078125, 0.5, 0.20000000298023223876953125), _2755)), 1.0);
    }
}

