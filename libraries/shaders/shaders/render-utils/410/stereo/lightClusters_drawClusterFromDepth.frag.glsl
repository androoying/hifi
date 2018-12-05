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
} _90;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _99;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _281;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _420;

uniform sampler2D depthMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 _fragColor;

ivec3 _1181;
float _1217;

void main()
{
    vec4 _726 = texture(depthMap, varTexCoord0);
    int _1164;
    vec2 _1166;
    if (_90.frameTransform._stereoInfo.x > 0.0)
    {
        bool _741 = varTexCoord0.x > 0.5;
        vec2 _1163;
        if (_741)
        {
            vec2 _1099 = varTexCoord0;
            _1099.x = varTexCoord0.x - 0.5;
            _1163 = _1099;
        }
        else
        {
            _1163 = varTexCoord0;
        }
        vec2 _1102 = _1163;
        _1102.x = _1163.x * 2.0;
        _1166 = _1102;
        _1164 = int(_741);
    }
    else
    {
        _1166 = varTexCoord0;
        _1164 = 0;
    }
    vec4 _783 = _90.frameTransform._invProjection[_1164] * vec4((vec3(_1166, _726.x) * 2.0) - vec3(1.0), 1.0);
    vec4 _800 = _281.frustumGrid.worldToEyeMat * ((_90.frameTransform._viewInverse * _99.cameraCorrection._correctionInverse) * vec4(_783.xyz / vec3(_783.w), 1.0));
    float _817 = _800.z;
    float _1167;
    if (_817 > 0.0)
    {
        _1167 = -_817;
    }
    else
    {
        _1167 = _817;
    }
    float _914 = _1167 * _281.frustumGrid.eyeToGridProj[2].x;
    float _925 = _1167 * _281.frustumGrid.eyeToGridProj[2].y;
    float _937 = -_1167;
    vec4 _943 = vec4((_800.x * _281.frustumGrid.eyeToGridProj[0].x) + _914, (_800.y * _281.frustumGrid.eyeToGridProj[1].y) + _925, _1217, _937) / vec4(_937);
    vec3 _975 = vec3(0.5 * (_943.x + 1.0), 0.5 * (_943.y + 1.0), log2(((_937 - _281.frustumGrid.rangeNear) / (_281.frustumGrid.rangeFar - _281.frustumGrid.rangeNear)) + 1.0)) * vec3(_281.frustumGrid.dims);
    float _845 = float(_281.frustumGrid.dims.z);
    vec3 _1169;
    if (_975.z >= _845)
    {
        vec3 _1130 = _975;
        _1130.z = _845;
        _1169 = _1130;
    }
    else
    {
        _1169 = _975;
    }
    vec3 _854 = floor(_1169);
    ivec3 _855 = ivec3(_854);
    bool _861 = _817 > (-_281.frustumGrid.frustumNear);
    bool _871;
    if (!_861)
    {
        _871 = _817 < (-_281.frustumGrid.frustumFar);
    }
    else
    {
        _871 = _861;
    }
    ivec3 _1176;
    if (_871)
    {
        _1176 = ivec3(_855.xy, -2);
    }
    else
    {
        _1176 = _1181;
    }
    bool _1219 = _871 ? true : false;
    ivec3 _1175;
    if (!_1219)
    {
        bool _887 = _817 > (-_281.frustumGrid.rangeNear);
        ivec3 _1184;
        if (_887)
        {
            _1184 = ivec3(_855.xy, -1);
        }
        else
        {
            _1184 = _1176;
        }
        bvec3 _1222 = bvec3(_887 ? true : _1219);
        _1175 = ivec3(_1222.x ? _1184.x : _855.x, _1222.y ? _1184.y : _855.y, _1222.z ? _1184.z : _855.z);
    }
    else
    {
        _1175 = _1176;
    }
    int _995 = _1175.x + ((_1175.y + (_1175.z * _281.frustumGrid.dims.y)) * _281.frustumGrid.dims.x);
    int _552 = (255 & (_420._clusterGridTable[_995 / 4][_995 % 4] >> 16)) + (255 & (_420._clusterGridTable[_995 / 4][_995 % 4] >> 24));
    bool _578 = _1175.x < 0;
    bool _587;
    if (!_578)
    {
        _587 = _1175.x >= _281.frustumGrid.dims.x;
    }
    else
    {
        _587 = _578;
    }
    if (_587)
    {
        _fragColor = vec4(0.0);
    }
    bool _1224 = _587 ? true : false;
    if (!_1224)
    {
        bool _596 = _1175.y < 0;
        bool _605;
        if (!_596)
        {
            _605 = _1175.y >= _281.frustumGrid.dims.y;
        }
        else
        {
            _605 = _596;
        }
        if (_605)
        {
            _fragColor = vec4(0.0);
        }
        bool _1225 = _605 ? true : _1224;
        if (!_1225)
        {
            bool _611 = _1175.z < 0;
            bool _620;
            if (!_611)
            {
                _620 = _1175.z > (_281.frustumGrid.dims.z + 1);
            }
            else
            {
                _620 = _611;
            }
            if (_620)
            {
                _fragColor = vec4(0.0);
            }
            if (!(_620 ? true : _1225))
            {
                float _642 = float(((_1175.z * (_281.frustumGrid.dims.x * _281.frustumGrid.dims.y)) + (_1175.y * _281.frustumGrid.dims.x)) + _1175.x) / float((_281.frustumGrid.dims.x * _281.frustumGrid.dims.y) * (_281.frustumGrid.dims.z + 1));
                if (_642 < 0.0)
                {
                    _fragColor = vec4(0.0);
                }
                else
                {
                    if (_642 >= 1.0)
                    {
                        _fragColor = vec4(1.0, 1.0, 1.0, 0.20000000298023223876953125);
                    }
                    else
                    {
                        float _1034 = fract(_642) * 6.0;
                        vec3 _1208;
                        if (_1034 < 0.0)
                        {
                            _1208 = vec3(1.0, 0.0, 0.0);
                        }
                        else
                        {
                            vec3 _1209;
                            if (_1034 < 1.0)
                            {
                                _1209 = vec3(1.0, _1034, 0.0);
                            }
                            else
                            {
                                vec3 _1210;
                                if (_1034 < 2.0)
                                {
                                    _1210 = vec3(2.0 - _1034, 1.0, 0.0);
                                }
                                else
                                {
                                    vec3 _1211;
                                    if (_1034 < 3.0)
                                    {
                                        _1211 = vec3(0.0, 1.0, _1034 - 2.0);
                                    }
                                    else
                                    {
                                        vec3 _1212;
                                        if (_1034 < 4.0)
                                        {
                                            _1212 = vec3(0.0, 4.0 - _1034, 1.0);
                                        }
                                        else
                                        {
                                            vec3 _1213;
                                            if (_1034 < 5.0)
                                            {
                                                _1213 = vec3(_1034 - 4.0, 0.0, 1.0);
                                            }
                                            else
                                            {
                                                vec3 _1214;
                                                if (_1034 < 6.0)
                                                {
                                                    _1214 = vec3(1.0, 0.0, 6.0 - _1034);
                                                }
                                                else
                                                {
                                                    _1214 = vec3(1.0, 0.0, 0.0);
                                                }
                                                _1213 = _1214;
                                            }
                                            _1212 = _1213;
                                        }
                                        _1211 = _1212;
                                    }
                                    _1210 = _1211;
                                }
                                _1209 = _1210;
                            }
                            _1208 = _1209;
                        }
                        float _1215;
                        if (_552 > 0)
                        {
                            _1215 = 0.0500000007450580596923828125 + (0.949999988079071044921875 * clamp(float(_552) * 0.0500000007450580596923828125, 0.00999999977648258209228515625, 1.0));
                        }
                        else
                        {
                            _1215 = 0.0;
                        }
                        _fragColor = vec4(_1208, _1215);
                    }
                }
            }
        }
    }
}

