#version 410

const vec4 _437[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _441[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);

struct _TransformCamera
{
    mat4 _view;
    mat4 _viewInverse;
    mat4 _projectionViewUntranslated;
    mat4 _projection;
    mat4 _projectionInverse;
    vec4 _viewport;
    vec4 _stereoInfo;
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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _227;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _324;

uniform int SPIRV_Cross_BaseInstance;
layout(location = 0) out vec4 varColor;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    int _461 = (255 & (_324._clusterGridTable[(gl_InstanceID + SPIRV_Cross_BaseInstance) / 4][(gl_InstanceID + SPIRV_Cross_BaseInstance) % 4] >> 16)) + (255 & (_324._clusterGridTable[(gl_InstanceID + SPIRV_Cross_BaseInstance) / 4][(gl_InstanceID + SPIRV_Cross_BaseInstance) % 4] >> 24));
    float _467 = clamp(float(_461) * 0.100000001490116119384765625, 0.0, 1.0);
    int _601 = _227.frustumGrid.dims.x * _227.frustumGrid.dims.y;
    int _612 = (gl_InstanceID + SPIRV_Cross_BaseInstance) % _601;
    vec3 _666 = (vec3(ivec3(_612 % _227.frustumGrid.dims.x, _612 / _227.frustumGrid.dims.x, (gl_InstanceID + SPIRV_Cross_BaseInstance) / _601)) + (vec3(0.00499999523162841796875 + ((1.0 - _467) * 0.49500000476837158203125)) + (_437[_441[gl_VertexID]].xyz * (_467 * 0.9900000095367431640625)))) * (vec3(1.0) / vec3(_227.frustumGrid.dims));
    float _674 = exp2(_666.z);
    float _712 = (_227.frustumGrid.rangeNear * (2.0 - _674)) + (_227.frustumGrid.rangeFar * (_674 - 1.0));
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * ((_227.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _666.x)) * _712) + (_227.frustumGrid.eyeToGridProj[2].x * _712)) / _227.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _666.y)) * _712) + (_227.frustumGrid.eyeToGridProj[2].y * _712)) / _227.frustumGrid.eyeToGridProj[1].y, -_712, 1.0)) - vec4(_cameraBlock._camera._viewInverse[3].xyz, 0.0));
    float _792 = fract(float((gl_InstanceID + SPIRV_Cross_BaseInstance)) / float(_601 * (_227.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _918;
    if (_792 < 0.0)
    {
        _918 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _919;
        if (_792 < 1.0)
        {
            _919 = vec3(1.0, _792, 0.0);
        }
        else
        {
            vec3 _920;
            if (_792 < 2.0)
            {
                _920 = vec3(2.0 - _792, 1.0, 0.0);
            }
            else
            {
                vec3 _921;
                if (_792 < 3.0)
                {
                    _921 = vec3(0.0, 1.0, _792 - 2.0);
                }
                else
                {
                    vec3 _922;
                    if (_792 < 4.0)
                    {
                        _922 = vec3(0.0, 4.0 - _792, 1.0);
                    }
                    else
                    {
                        vec3 _923;
                        if (_792 < 5.0)
                        {
                            _923 = vec3(_792 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _924;
                            if (_792 < 6.0)
                            {
                                _924 = vec3(1.0, 0.0, 6.0 - _792);
                            }
                            else
                            {
                                _924 = vec3(1.0, 0.0, 0.0);
                            }
                            _923 = _924;
                        }
                        _922 = _923;
                    }
                    _921 = _922;
                }
                _920 = _921;
            }
            _919 = _920;
        }
        _918 = _919;
    }
    varColor = vec4(_918, (_461 > 0) ? 0.89999997615814208984375 : 0.100000001490116119384765625);
}

