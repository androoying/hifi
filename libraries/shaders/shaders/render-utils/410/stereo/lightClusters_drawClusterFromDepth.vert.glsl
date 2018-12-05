#version 410

out float gl_ClipDistance[1];

const vec4 _407[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _411[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);
const vec4 _472[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _231;

uniform int SPIRV_Cross_BaseInstance;
layout(location = 8) flat out int _stereoSide;
layout(location = 0) out vec4 varColor;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    int _546 = (gl_InstanceID + SPIRV_Cross_BaseInstance) >> 1;
    int _556 = _231.frustumGrid.dims.x * _231.frustumGrid.dims.y;
    int _567 = _546 % _556;
    vec3 _621 = (vec3(ivec3(_567 % _231.frustumGrid.dims.x, _567 / _231.frustumGrid.dims.x, _546 / _556)) + (vec3(0.0500000007450580596923828125) + (_407[_411[gl_VertexID]].xyz * 0.89999997615814208984375))) * (vec3(1.0) / vec3(_231.frustumGrid.dims));
    float _629 = exp2(_621.z);
    float _667 = (_231.frustumGrid.rangeNear * (2.0 - _629)) + (_231.frustumGrid.rangeFar * (_629 - 1.0));
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * ((_231.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _621.x)) * _667) + (_231.frustumGrid.eyeToGridProj[2].x * _667)) / _231.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _621.y)) * _667) + (_231.frustumGrid.eyeToGridProj[2].y * _667)) / _231.frustumGrid.eyeToGridProj[1].y, -_667, 1.0)) - vec4(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 0.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _482 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _472[_482]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_482] * gl_Position.w);
    float _751 = fract(float(_546) / float(_556 * (_231.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _875;
    if (_751 < 0.0)
    {
        _875 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _876;
        if (_751 < 1.0)
        {
            _876 = vec3(1.0, _751, 0.0);
        }
        else
        {
            vec3 _877;
            if (_751 < 2.0)
            {
                _877 = vec3(2.0 - _751, 1.0, 0.0);
            }
            else
            {
                vec3 _878;
                if (_751 < 3.0)
                {
                    _878 = vec3(0.0, 1.0, _751 - 2.0);
                }
                else
                {
                    vec3 _879;
                    if (_751 < 4.0)
                    {
                        _879 = vec3(0.0, 4.0 - _751, 1.0);
                    }
                    else
                    {
                        vec3 _880;
                        if (_751 < 5.0)
                        {
                            _880 = vec3(_751 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _881;
                            if (_751 < 6.0)
                            {
                                _881 = vec3(1.0, 0.0, 6.0 - _751);
                            }
                            else
                            {
                                _881 = vec3(1.0, 0.0, 0.0);
                            }
                            _880 = _881;
                        }
                        _879 = _880;
                    }
                    _878 = _879;
                }
                _877 = _878;
            }
            _876 = _877;
        }
        _875 = _876;
    }
    varColor = vec4(_875, 0.89999997615814208984375);
}

