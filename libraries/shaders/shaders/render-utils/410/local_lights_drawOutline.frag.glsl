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

struct CameraCorrection
{
    mat4 _correction;
    mat4 _correctionInverse;
    mat4 _prevView;
    mat4 _prevViewInverse;
};

struct LightVolume
{
    vec4 positionRadius;
    vec4 directionSpotCos;
};

struct LightIrradiance
{
    vec4 colorIntensity;
    vec4 attenuation;
};

struct Light
{
    LightVolume volume;
    LightIrradiance irradiance;
};

struct FrustumGrid
{
    float frustumNear;
    float rangeNear;
    float rangeFar;
    float frustumFar;
    ivec3 dims;
    float spare;
    mat4 eyeToGridProj;
    mat4 worldToEyeMat;
    mat4 eyeToWorldMat;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _419;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _426;

layout(std140) uniform lightBuffer
{
    Light lightArray[128];
} _622;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _842;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _962;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _998;

uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D linearZeyeMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 _fragColor;

int _2438;
ivec3 _2485;
vec3 _2553;
float _2660;

void main()
{
    vec4 _1350 = texture(linearZeyeMap, _texCoord01.xy);
    float _1352 = -_1350.x;
    int _2428;
    vec2 _2430;
    if (_419.frameTransform._stereoInfo.x > 0.0)
    {
        bool _1358 = _texCoord01.x > 0.5;
        vec2 _2427;
        if (_1358)
        {
            vec2 _2338 = _texCoord01.xy;
            _2338.x = _texCoord01.x - 0.5;
            _2427 = _2338;
        }
        else
        {
            _2427 = _texCoord01.xy;
        }
        vec2 _2341 = _2427;
        _2341.x = _2427.x * 2.0;
        _2430 = _2341;
        _2428 = int(_1358);
    }
    else
    {
        _2430 = _texCoord01.xy;
        _2428 = 0;
    }
    vec4 _1425 = _419.frameTransform._invProjection[_2428] * vec4((vec3(_2430, (_419.frameTransform._depthInfo.x - (_1352 * _419.frameTransform._depthInfo.z)) / (_1352 * _419.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    vec4 _1446 = texture(normalMap, _texCoord01.xy);
    vec4 _1449 = texture(albedoMap, _texCoord01.xy);
    vec3 _1506 = _1446.xyz * 255.0;
    float _1509 = _1506.y * 0.0625;
    vec2 _1530 = clamp((vec2((_1506.x * 16.0) + floor(_1509), (fract(_1509) * 4096.0) + _1506.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _1536 = _1530.x;
    float _1540 = _1530.y;
    float _1542 = (1.0 - abs(_1536)) - abs(_1540);
    vec3 _1545 = vec3(_1536, _1540, _1542);
    vec3 _2431;
    if (_1542 < 0.0)
    {
        vec2 _1559 = (vec2(1.0) - abs(_1545.yx)) * vec2((_1536 >= 0.0) ? 1.0 : (-1.0), (_1540 >= 0.0) ? 1.0 : (-1.0));
        _2431 = vec3(_1559.x, _1559.y, _1545.z);
    }
    else
    {
        _2431 = _1545;
    }
    vec3 _1563 = normalize(_2431);
    float _1470 = _1449.w;
    int _2432;
    if (_1470 <= 0.100000001490116119384765625)
    {
        _2432 = 1;
    }
    else
    {
        int _2433;
        if (_1470 <= 0.300000011920928955078125)
        {
            _2433 = 2;
        }
        else
        {
            int _2434;
            if (_1470 <= 0.5)
            {
                _2434 = 3;
            }
            else
            {
                _2434 = (_1470 >= 0.60000002384185791015625) ? 0 : _2438;
            }
            _2433 = _2434;
        }
        _2432 = _2433;
    }
    if (_2432 == 0)
    {
        discard;
    }
    vec4 _1078 = (_419.frameTransform._viewInverse * _426.cameraCorrection._correctionInverse) * vec4(_1425.xyz / vec3(_1425.w), 1.0);
    vec4 _1620 = _842.frustumGrid.worldToEyeMat * _1078;
    float _1637 = _1620.z;
    float _2468;
    if (_1637 > 0.0)
    {
        _2468 = -_1637;
    }
    else
    {
        _2468 = _1637;
    }
    float _1734 = _2468 * _842.frustumGrid.eyeToGridProj[2].x;
    float _1745 = _2468 * _842.frustumGrid.eyeToGridProj[2].y;
    float _1757 = -_2468;
    vec4 _1763 = vec4((_1620.x * _842.frustumGrid.eyeToGridProj[0].x) + _1734, (_1620.y * _842.frustumGrid.eyeToGridProj[1].y) + _1745, _2660, _1757) / vec4(_1757);
    vec3 _1795 = vec3(0.5 * (_1763.x + 1.0), 0.5 * (_1763.y + 1.0), log2(((_1757 - _842.frustumGrid.rangeNear) / (_842.frustumGrid.rangeFar - _842.frustumGrid.rangeNear)) + 1.0)) * vec3(_842.frustumGrid.dims);
    float _1665 = float(_842.frustumGrid.dims.z);
    vec3 _2470;
    if (_1795.z >= _1665)
    {
        vec3 _2385 = _1795;
        _2385.z = _1665;
        _2470 = _2385;
    }
    else
    {
        _2470 = _1795;
    }
    vec3 _1674 = floor(_2470);
    ivec3 _1675 = ivec3(_1674);
    bool _1681 = _1637 > (-_842.frustumGrid.frustumNear);
    bool _1691;
    if (!_1681)
    {
        _1691 = _1637 < (-_842.frustumGrid.frustumFar);
    }
    else
    {
        _1691 = _1681;
    }
    ivec3 _2477;
    if (_1691)
    {
        _2477 = ivec3(_1675.xy, -2);
    }
    else
    {
        _2477 = _2485;
    }
    bool _2665 = _1691 ? true : false;
    ivec3 _2476;
    if (!_2665)
    {
        bool _1707 = _1637 > (-_842.frustumGrid.rangeNear);
        ivec3 _2491;
        if (_1707)
        {
            _2491 = ivec3(_1675.xy, -1);
        }
        else
        {
            _2491 = _2477;
        }
        bvec3 _2667 = bvec3(_1707 ? true : _2665);
        _2476 = ivec3(_2667.x ? _2491.x : _1675.x, _2667.y ? _2491.y : _1675.y, _2667.z ? _2491.z : _1675.z);
    }
    else
    {
        _2476 = _2477;
    }
    int _1815 = _2476.x + ((_2476.y + (_2476.z * _842.frustumGrid.dims.y)) * _842.frustumGrid.dims.x);
    int _1829 = 255 & (_962._clusterGridTable[_1815 / 4][_1815 % 4] >> 16);
    int _1834 = 65535 & _962._clusterGridTable[_1815 / 4][_1815 % 4];
    int _1099 = _1829 + (255 & (_962._clusterGridTable[_1815 / 4][_1815 % 4] >> 24));
    bool _1841 = _1099 > 0;
    bool _1847;
    if (_1841)
    {
        _1847 = all(greaterThanEqual(_2476, ivec3(0)));
    }
    else
    {
        _1847 = _1841;
    }
    bool _1856;
    if (_1847)
    {
        _1856 = all(lessThan(_2476.xy, _842.frustumGrid.dims.xy));
    }
    else
    {
        _1856 = _1847;
    }
    bool _1864;
    if (_1856)
    {
        _1864 = _2476.z <= _842.frustumGrid.dims.z;
    }
    else
    {
        _1864 = _1856;
    }
    if (!_1864)
    {
        discard;
    }
    _fragColor = vec4(0.0, 0.0, 0.0, 1.0);
    vec3 _2607;
    _2607 = _2553;
    vec3 _2656;
    for (int _2492 = 0; _2492 < _1829; _2607 = _2656, _2492++)
    {
        int _1871 = _1834 + _2492;
        int _1873 = _1871 >> 1;
        int _2564;
        if ((_1871 & 1) == 1)
        {
            _2564 = _998._clusterGridContent[_1873 / 4][_1873 % 4] >> 16;
        }
        else
        {
            _2564 = _998._clusterGridContent[_1873 / 4][_1873 % 4];
        }
        vec3 _1919 = (_622.lightArray[_2564 & 65535].volume.positionRadius.xyz - _1078.xyz).xyz;
        if (!(dot(_1919, _1919) <= (_622.lightArray[_2564 & 65535].volume.positionRadius.w * _622.lightArray[_2564 & 65535].volume.positionRadius.w)))
        {
            _2656 = _2607;
            continue;
        }
        float _1173 = length(_1919);
        if (dot(_1563, (_1919 / vec3(_1173)).xyz) < 0.0)
        {
            _2656 = _2607;
            continue;
        }
        float _1958 = abs(((_622.lightArray[_2564 & 65535].volume.positionRadius.w - _1173) * 20.0) - 1.0);
        bool _1960 = _1958 < 1.0;
        vec3 _2605;
        if (_1960)
        {
            float _1967 = exp2(((-8.0) * _1958) * _1958);
            _2605 = _622.lightArray[_2564 & 65535].irradiance.colorIntensity.xyz * (_1967 * _1967);
        }
        else
        {
            _2605 = _2607;
        }
        if (_1960)
        {
            vec3 _1216 = _fragColor.xyz + _2605;
            _fragColor = vec4(_1216.x, _1216.y, _1216.z, _fragColor.w);
        }
        _2656 = _2605;
        continue;
    }
    vec3 _2539;
    _2539 = _2553;
    vec3 _2648;
    for (int _2493 = _1829; _2493 < _1099; _2539 = _2648, _2493++)
    {
        int _1998 = _1834 + _2493;
        int _2000 = _1998 >> 1;
        int _2494;
        if ((_1998 & 1) == 1)
        {
            _2494 = _998._clusterGridContent[_2000 / 4][_2000 % 4] >> 16;
        }
        else
        {
            _2494 = _998._clusterGridContent[_2000 / 4][_2000 % 4];
        }
        vec3 _2046 = (_622.lightArray[_2494 & 65535].volume.positionRadius.xyz - _1078.xyz).xyz;
        if (!(dot(_2046, _2046) <= (_622.lightArray[_2494 & 65535].volume.positionRadius.w * _622.lightArray[_2494 & 65535].volume.positionRadius.w)))
        {
            _2648 = _2539;
            continue;
        }
        float _1259 = length(_2046);
        vec3 _1272 = (_2046 / vec3(_1259)).xyz;
        if (dot(_1563, _1272) < 0.0)
        {
            _2648 = _2539;
            continue;
        }
        float _2075 = max(-dot(_1272, _622.lightArray[_2494 & 65535].volume.directionSpotCos.xyz), 0.0);
        if (!(_2075 >= _622.lightArray[_2494 & 65535].volume.directionSpotCos.w))
        {
            _2648 = _2539;
            continue;
        }
        float _2128 = abs((min(_622.lightArray[_2494 & 65535].volume.positionRadius.w - _1259, dot(vec2(_2075, sqrt(1.0 - (_2075 * _2075))) * _1259, -vec2(-sqrt(1.0 - (_622.lightArray[_2494 & 65535].volume.directionSpotCos.w * _622.lightArray[_2494 & 65535].volume.directionSpotCos.w)), _622.lightArray[_2494 & 65535].volume.directionSpotCos.w))) * 20.0) - 1.0);
        bool _2130 = _2128 < 1.0;
        vec3 _2537;
        if (_2130)
        {
            float _2137 = exp2(((-8.0) * _2128) * _2128);
            _2537 = _622.lightArray[_2494 & 65535].irradiance.colorIntensity.xyz * (_2137 * _2137);
        }
        else
        {
            _2537 = _2539;
        }
        if (_2130)
        {
            vec3 _1310 = _fragColor.xyz + _2537;
            _fragColor = vec4(_1310.x, _1310.y, _1310.z, _fragColor.w);
        }
        _2648 = _2537;
        continue;
    }
}

