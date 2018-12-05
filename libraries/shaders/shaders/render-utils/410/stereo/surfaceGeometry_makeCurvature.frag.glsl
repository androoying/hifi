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

struct SurfaceGeometryParams
{
    vec4 resolutionInfo;
    vec4 curvatureInfo;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _125;

layout(std140) uniform surfaceGeometryParamsBuffer
{
    SurfaceGeometryParams params;
} _386;

uniform sampler2D linearDepthMap;
uniform sampler2D normalMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    ivec2 _818 = ivec2(gl_FragCoord.xy);
    int _820 = _818.x;
    int _843 = int(float(int(_125.frameTransform._stereoInfo.y) >> 0));
    ivec2 _1697;
    if (_820 < _843)
    {
        _1697 = ivec2(0);
    }
    else
    {
        _1697 = ivec2(1, _843);
    }
    ivec2 _1613 = _818;
    _1613.x = _820 - _1697.y;
    float _889 = -texelFetch(linearDepthMap, _818, 0).x;
    bool _505 = _889 <= _125.frameTransform._depthInfo.z;
    if (_505)
    {
        outFragColor = vec4(1.0, 0.0, 0.0, 0.0);
    }
    if (!(_505 ? true : false))
    {
        float _906 = _125.frameTransform._projection[0][3].z / (_125.frameTransform._projection[0][2].w + _125.frameTransform._projection[0][2].z);
        float _514 = 0.5 * _906;
        vec4 _934 = texture(normalMap, varTexCoord0);
        vec3 _935 = _934.xyz;
        bool _939 = _386.params.resolutionInfo.w == 0.0;
        vec3 _1703;
        if (_939)
        {
            vec3 _949 = _935 * 255.0;
            float _952 = _949.y * 0.0625;
            vec2 _973 = clamp((vec2((_949.x * 16.0) + floor(_952), (fract(_952) * 4096.0) + _949.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
            float _979 = _973.x;
            float _983 = _973.y;
            float _985 = (1.0 - abs(_979)) - abs(_983);
            vec3 _988 = vec3(_979, _983, _985);
            vec3 _1700;
            if (_985 < 0.0)
            {
                vec2 _1002 = (vec2(1.0) - abs(_988.yx)) * vec2((_979 >= 0.0) ? 1.0 : (-1.0), (_983 >= 0.0) ? 1.0 : (-1.0));
                _1700 = vec3(_1002.x, _1002.y, _988.z);
            }
            else
            {
                _1700 = _988;
            }
            _1703 = normalize(_1700);
        }
        else
        {
            _1703 = normalize((_935 - vec3(0.5)) * 2.0);
        }
        vec4 _1061 = _125.frameTransform._invProjection[_1697.x] * vec4((vec3((vec2(_1613) + vec2(0.5)) * _125.frameTransform._invPixelInfo.xy, (_125.frameTransform._depthInfo.x - (_889 * _125.frameTransform._depthInfo.z)) / (_889 * _125.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
        vec3 _1067 = _1061.xyz / vec3(_1061.w);
        float _535 = max(0.5, ((-_386.params.curvatureInfo.y) * _906) / _889);
        vec2 _539 = _125.frameTransform._invPixelInfo.xy * _535;
        vec2 _549 = vec2(_539.x * ((float(int(_125.frameTransform._stereoInfo.x > 0.0)) > 0.0) ? 0.5 : 1.0), 0.0);
        vec2 _553 = vec2(0.0, _539.y);
        vec2 _1093 = varTexCoord0 + _549;
        vec4 _1127 = texture(normalMap, _1093);
        vec3 _1128 = _1127.xyz;
        vec3 _1707;
        if (_939)
        {
            vec3 _1142 = _1128 * 255.0;
            float _1145 = _1142.y * 0.0625;
            vec2 _1166 = clamp((vec2((_1142.x * 16.0) + floor(_1145), (fract(_1145) * 4096.0) + _1142.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
            float _1172 = _1166.x;
            float _1176 = _1166.y;
            float _1178 = (1.0 - abs(_1172)) - abs(_1176);
            vec3 _1181 = vec3(_1172, _1176, _1178);
            vec3 _1704;
            if (_1178 < 0.0)
            {
                vec2 _1195 = (vec2(1.0) - abs(_1181.yx)) * vec2((_1172 >= 0.0) ? 1.0 : (-1.0), (_1176 >= 0.0) ? 1.0 : (-1.0));
                _1704 = vec3(_1195.x, _1195.y, _1181.z);
            }
            else
            {
                _1704 = _1181;
            }
            _1707 = normalize(_1704);
        }
        else
        {
            _1707 = normalize((_1128 - vec3(0.5)) * 2.0);
        }
        vec2 _1097 = varTexCoord0 - _549;
        vec4 _1237 = texture(normalMap, _1097);
        vec3 _1238 = _1237.xyz;
        vec3 _1711;
        if (_939)
        {
            vec3 _1252 = _1238 * 255.0;
            float _1255 = _1252.y * 0.0625;
            vec2 _1276 = clamp((vec2((_1252.x * 16.0) + floor(_1255), (fract(_1255) * 4096.0) + _1252.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
            float _1282 = _1276.x;
            float _1286 = _1276.y;
            float _1288 = (1.0 - abs(_1282)) - abs(_1286);
            vec3 _1291 = vec3(_1282, _1286, _1288);
            vec3 _1708;
            if (_1288 < 0.0)
            {
                vec2 _1305 = (vec2(1.0) - abs(_1291.yx)) * vec2((_1282 >= 0.0) ? 1.0 : (-1.0), (_1286 >= 0.0) ? 1.0 : (-1.0));
                _1708 = vec3(_1305.x, _1305.y, _1291.z);
            }
            else
            {
                _1708 = _1291;
            }
            _1711 = normalize(_1708);
        }
        else
        {
            _1711 = normalize((_1238 - vec3(0.5)) * 2.0);
        }
        vec3 _1099 = _1707 - _1711;
        vec4 _1335 = texture(linearDepthMap, _1093);
        vec4 _1341 = texture(linearDepthMap, _1097);
        float _1331 = (-_1335.x) - (-_1341.x);
        vec2 _1349 = varTexCoord0 + _553;
        vec4 _1383 = texture(normalMap, _1349);
        vec3 _1384 = _1383.xyz;
        vec3 _1715;
        if (_939)
        {
            vec3 _1398 = _1384 * 255.0;
            float _1401 = _1398.y * 0.0625;
            vec2 _1422 = clamp((vec2((_1398.x * 16.0) + floor(_1401), (fract(_1401) * 4096.0) + _1398.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
            float _1428 = _1422.x;
            float _1432 = _1422.y;
            float _1434 = (1.0 - abs(_1428)) - abs(_1432);
            vec3 _1437 = vec3(_1428, _1432, _1434);
            vec3 _1712;
            if (_1434 < 0.0)
            {
                vec2 _1451 = (vec2(1.0) - abs(_1437.yx)) * vec2((_1428 >= 0.0) ? 1.0 : (-1.0), (_1432 >= 0.0) ? 1.0 : (-1.0));
                _1712 = vec3(_1451.x, _1451.y, _1437.z);
            }
            else
            {
                _1712 = _1437;
            }
            _1715 = normalize(_1712);
        }
        else
        {
            _1715 = normalize((_1384 - vec3(0.5)) * 2.0);
        }
        vec2 _1353 = varTexCoord0 - _553;
        vec4 _1493 = texture(normalMap, _1353);
        vec3 _1494 = _1493.xyz;
        vec3 _1719;
        if (_939)
        {
            vec3 _1508 = _1494 * 255.0;
            float _1511 = _1508.y * 0.0625;
            vec2 _1532 = clamp((vec2((_1508.x * 16.0) + floor(_1511), (fract(_1511) * 4096.0) + _1508.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
            float _1538 = _1532.x;
            float _1542 = _1532.y;
            float _1544 = (1.0 - abs(_1538)) - abs(_1542);
            vec3 _1547 = vec3(_1538, _1542, _1544);
            vec3 _1716;
            if (_1544 < 0.0)
            {
                vec2 _1561 = (vec2(1.0) - abs(_1547.yx)) * vec2((_1538 >= 0.0) ? 1.0 : (-1.0), (_1542 >= 0.0) ? 1.0 : (-1.0));
                _1716 = vec3(_1561.x, _1561.y, _1547.z);
            }
            else
            {
                _1716 = _1547;
            }
            _1719 = normalize(_1716);
        }
        else
        {
            _1719 = normalize((_1494 - vec3(0.5)) * 2.0);
        }
        float _1587 = (-texture(linearDepthMap, _1349).x) - (-texture(linearDepthMap, _1353).x);
        vec4 _592 = vec4(_1099, _1331) * step(abs(_1331), _386.params.curvatureInfo.x);
        vec4 _599 = vec4(_1715 - _1719, _1587) * step(abs(_1587), _386.params.curvatureInfo.x);
        vec4 _650 = _125.frameTransform._projectionMono * vec4(_1067 + (_125.frameTransform._view[0].xyz * _514), 0.0);
        vec4 _653 = _125.frameTransform._projectionMono * vec4(_1067 + (_125.frameTransform._view[1].xyz * _514), 0.0);
        vec4 _656 = _125.frameTransform._projectionMono * vec4(_1067 + (_125.frameTransform._view[2].xyz * _514), 0.0);
        vec4 _693 = _125.frameTransform._projectionMono * vec4(_1067, 1.0);
        vec2 _699 = _693.xy / vec2(_693.w);
        float _702 = 1.0 / _535;
        vec2 _708 = ((_650.xy / vec2(_650.w)).xy - _699) * _702;
        vec2 _716 = ((_653.xy / vec2(_653.w)).xy - _699) * _702;
        vec2 _724 = ((_656.xy / vec2(_656.w)).xy - _699) * _702;
        outFragColor = vec4((_1703 + vec3(1.0)) * 0.5, (((((((_592 * _708.x) + (_599 * _708.y)).x + ((_592 * _716.x) + (_599 * _716.y)).y) + ((_592 * _724.x) + (_599 * _724.y)).z) * 0.3333333432674407958984375) * _386.params.curvatureInfo.w) + 1.0) * 0.5);
    }
}

