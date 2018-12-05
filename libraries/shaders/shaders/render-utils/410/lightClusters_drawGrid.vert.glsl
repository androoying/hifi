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
    int _586 = _227.frustumGrid.dims.x * _227.frustumGrid.dims.y;
    int _597 = (gl_InstanceID + SPIRV_Cross_BaseInstance) % _586;
    vec3 _651 = (vec3(ivec3(_597 % _227.frustumGrid.dims.x, _597 / _227.frustumGrid.dims.x, (gl_InstanceID + SPIRV_Cross_BaseInstance) / _586)) + (_437[_441[gl_VertexID]].xyz * 1.0)) * (vec3(1.0) / vec3(_227.frustumGrid.dims));
    float _659 = exp2(_651.z);
    float _697 = (_227.frustumGrid.rangeNear * (2.0 - _659)) + (_227.frustumGrid.rangeFar * (_659 - 1.0));
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * ((_227.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _651.x)) * _697) + (_227.frustumGrid.eyeToGridProj[2].x * _697)) / _227.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _651.y)) * _697) + (_227.frustumGrid.eyeToGridProj[2].y * _697)) / _227.frustumGrid.eyeToGridProj[1].y, -_697, 1.0)) - vec4(_cameraBlock._camera._viewInverse[3].xyz, 0.0));
    float _777 = fract(float((gl_InstanceID + SPIRV_Cross_BaseInstance)) / float(_586 * (_227.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _903;
    if (_777 < 0.0)
    {
        _903 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _904;
        if (_777 < 1.0)
        {
            _904 = vec3(1.0, _777, 0.0);
        }
        else
        {
            vec3 _905;
            if (_777 < 2.0)
            {
                _905 = vec3(2.0 - _777, 1.0, 0.0);
            }
            else
            {
                vec3 _906;
                if (_777 < 3.0)
                {
                    _906 = vec3(0.0, 1.0, _777 - 2.0);
                }
                else
                {
                    vec3 _907;
                    if (_777 < 4.0)
                    {
                        _907 = vec3(0.0, 4.0 - _777, 1.0);
                    }
                    else
                    {
                        vec3 _908;
                        if (_777 < 5.0)
                        {
                            _908 = vec3(_777 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _909;
                            if (_777 < 6.0)
                            {
                                _909 = vec3(1.0, 0.0, 6.0 - _777);
                            }
                            else
                            {
                                _909 = vec3(1.0, 0.0, 0.0);
                            }
                            _908 = _909;
                        }
                        _907 = _908;
                    }
                    _906 = _907;
                }
                _905 = _906;
            }
            _904 = _905;
        }
        _903 = _904;
    }
    varColor = vec4(_903, (((255 & (_324._clusterGridTable[(gl_InstanceID + SPIRV_Cross_BaseInstance) / 4][(gl_InstanceID + SPIRV_Cross_BaseInstance) % 4] >> 16)) + (255 & (_324._clusterGridTable[(gl_InstanceID + SPIRV_Cross_BaseInstance) / 4][(gl_InstanceID + SPIRV_Cross_BaseInstance) % 4] >> 24))) > 0) ? 0.89999997615814208984375 : 0.0);
}

