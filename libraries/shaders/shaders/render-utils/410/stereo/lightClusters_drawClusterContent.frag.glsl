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
} _126;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _135;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _293;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _410;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _532;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _568;

uniform sampler2D depthMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 _fragColor;

ivec3 _1482;
int _1514;
float _1619;

void main()
{
    vec4 _907 = texture(depthMap, varTexCoord0);
    int _1465;
    vec2 _1467;
    if (_126.frameTransform._stereoInfo.x > 0.0)
    {
        bool _922 = varTexCoord0.x > 0.5;
        vec2 _1464;
        if (_922)
        {
            vec2 _1397 = varTexCoord0;
            _1397.x = varTexCoord0.x - 0.5;
            _1464 = _1397;
        }
        else
        {
            _1464 = varTexCoord0;
        }
        vec2 _1400 = _1464;
        _1400.x = _1464.x * 2.0;
        _1467 = _1400;
        _1465 = int(_922);
    }
    else
    {
        _1467 = varTexCoord0;
        _1465 = 0;
    }
    vec4 _964 = _126.frameTransform._invProjection[_1465] * vec4((vec3(_1467, _907.x) * 2.0) - vec3(1.0), 1.0);
    vec4 _664 = (_126.frameTransform._viewInverse * _135.cameraCorrection._correctionInverse) * vec4(_964.xyz / vec3(_964.w), 1.0);
    vec4 _981 = _410.frustumGrid.worldToEyeMat * _664;
    float _998 = _981.z;
    float _1468;
    if (_998 > 0.0)
    {
        _1468 = -_998;
    }
    else
    {
        _1468 = _998;
    }
    float _1095 = _1468 * _410.frustumGrid.eyeToGridProj[2].x;
    float _1106 = _1468 * _410.frustumGrid.eyeToGridProj[2].y;
    float _1118 = -_1468;
    vec4 _1124 = vec4((_981.x * _410.frustumGrid.eyeToGridProj[0].x) + _1095, (_981.y * _410.frustumGrid.eyeToGridProj[1].y) + _1106, _1619, _1118) / vec4(_1118);
    vec3 _1156 = vec3(0.5 * (_1124.x + 1.0), 0.5 * (_1124.y + 1.0), log2(((_1118 - _410.frustumGrid.rangeNear) / (_410.frustumGrid.rangeFar - _410.frustumGrid.rangeNear)) + 1.0)) * vec3(_410.frustumGrid.dims);
    float _1026 = float(_410.frustumGrid.dims.z);
    vec3 _1470;
    if (_1156.z >= _1026)
    {
        vec3 _1428 = _1156;
        _1428.z = _1026;
        _1470 = _1428;
    }
    else
    {
        _1470 = _1156;
    }
    vec3 _1035 = floor(_1470);
    ivec3 _1036 = ivec3(_1035);
    bool _1042 = _998 > (-_410.frustumGrid.frustumNear);
    bool _1052;
    if (!_1042)
    {
        _1052 = _998 < (-_410.frustumGrid.frustumFar);
    }
    else
    {
        _1052 = _1042;
    }
    ivec3 _1477;
    if (_1052)
    {
        _1477 = ivec3(_1036.xy, -2);
    }
    else
    {
        _1477 = _1482;
    }
    bool _1622 = _1052 ? true : false;
    ivec3 _1476;
    if (!_1622)
    {
        bool _1068 = _998 > (-_410.frustumGrid.rangeNear);
        ivec3 _1485;
        if (_1068)
        {
            _1485 = ivec3(_1036.xy, -1);
        }
        else
        {
            _1485 = _1477;
        }
        bvec3 _1625 = bvec3(_1068 ? true : _1622);
        _1476 = ivec3(_1625.x ? _1485.x : _1036.x, _1625.y ? _1485.y : _1036.y, _1625.z ? _1485.z : _1036.z);
    }
    else
    {
        _1476 = _1477;
    }
    int _1176 = _1476.x + ((_1476.y + (_1476.z * _410.frustumGrid.dims.y)) * _410.frustumGrid.dims.x);
    int _1190 = 255 & (_532._clusterGridTable[_1176 / 4][_1176 % 4] >> 16);
    int _687 = _1190 + (255 & (_532._clusterGridTable[_1176 / 4][_1176 % 4] >> 24));
    bool _716 = _1476.x < 0;
    bool _725;
    if (!_716)
    {
        _725 = _1476.x >= _410.frustumGrid.dims.x;
    }
    else
    {
        _725 = _716;
    }
    if (_725)
    {
        _fragColor = vec4(0.0);
    }
    bool _1627 = _725 ? true : false;
    bool _1501;
    int _1525;
    if (!_1627)
    {
        bool _734 = _1476.y < 0;
        bool _743;
        if (!_734)
        {
            _743 = _1476.y >= _410.frustumGrid.dims.y;
        }
        else
        {
            _743 = _734;
        }
        if (_743)
        {
            _fragColor = vec4(0.0);
        }
        bool _1628 = _743 ? true : _1627;
        bool _1502;
        int _1537;
        if (!_1628)
        {
            bool _749 = _1476.z < 0;
            bool _758;
            if (!_749)
            {
                _758 = _1476.z > (_410.frustumGrid.dims.z + 1);
            }
            else
            {
                _758 = _749;
            }
            if (_758)
            {
                _fragColor = vec4(0.0);
            }
            bool _1629 = _758 ? true : _1628;
            _1537 = _1629 ? _1514 : 0;
            _1502 = _1629;
        }
        else
        {
            _1537 = _1514;
            _1502 = _1628;
        }
        _1525 = _1537;
        _1501 = _1502;
    }
    else
    {
        _1525 = _1514;
        _1501 = _1627;
    }
    if (!_1501)
    {
        int _1524;
        _1524 = _1525;
        int _1611;
        for (int _1504 = _1525; _1504 < _687; _1524 = _1611, _1504++)
        {
            int _1206 = (65535 & _532._clusterGridTable[_1176 / 4][_1176 % 4]) + _1504;
            int _1208 = _1206 >> 1;
            int _1564;
            if ((_1206 & 1) == 1)
            {
                _1564 = _568._clusterGridContent[_1208 / 4][_1208 % 4] >> 16;
            }
            else
            {
                _1564 = _568._clusterGridContent[_1208 / 4][_1208 % 4];
            }
            vec3 _1254 = (_293.lightArray[_1564 & 65535].volume.positionRadius.xyz - _664.xyz).xyz;
            if (!(dot(_1254, _1254) <= (_293.lightArray[_1564 & 65535].volume.positionRadius.w * _293.lightArray[_1564 & 65535].volume.positionRadius.w)))
            {
                _1611 = _1524;
                continue;
            }
            bool _812 = _1504 >= _1190;
            bool _825;
            if (_812)
            {
                _825 = !(max(-dot((_1254 / vec3(length(_1254))).xyz, _293.lightArray[_1564 & 65535].volume.directionSpotCos.xyz), 0.0) >= _293.lightArray[_1564 & 65535].volume.directionSpotCos.w);
            }
            else
            {
                _825 = _812;
            }
            if (_825)
            {
                _1611 = _1524;
                continue;
            }
            _1611 = _1524 + 1;
            continue;
        }
        float _834 = float(_1524);
        float _1300 = (1.0 - (_834 * 0.083333335816860198974609375)) * 5.0;
        vec3 _1550;
        if (_1300 < 0.0)
        {
            _1550 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _1551;
            if (_1300 < 1.0)
            {
                _1551 = vec3(1.0, _1300, 0.0);
            }
            else
            {
                vec3 _1552;
                if (_1300 < 2.0)
                {
                    _1552 = vec3(2.0 - _1300, 1.0, 0.0);
                }
                else
                {
                    vec3 _1553;
                    if (_1300 < 3.0)
                    {
                        _1553 = vec3(0.0, 1.0, _1300 - 2.0);
                    }
                    else
                    {
                        vec3 _1554;
                        if (_1300 < 4.0)
                        {
                            _1554 = vec3(0.0, 4.0 - _1300, 1.0);
                        }
                        else
                        {
                            vec3 _1555;
                            if (_1300 < 5.0)
                            {
                                _1555 = vec3(_1300 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                _1555 = vec3(1.0, 0.0, 1.0);
                            }
                            _1554 = _1555;
                        }
                        _1553 = _1554;
                    }
                    _1552 = _1553;
                }
                _1551 = _1552;
            }
            _1550 = _1551;
        }
        float _1563;
        if (_1524 > 0)
        {
            _1563 = 0.5 + (0.5 * clamp(float(_687) * 0.0500000007450580596923828125, 0.00999999977648258209228515625, 1.0));
        }
        else
        {
            _1563 = 0.0;
        }
        _fragColor = vec4(_1550, _1563);
    }
}

