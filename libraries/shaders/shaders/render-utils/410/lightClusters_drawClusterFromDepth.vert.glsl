#version 410

const vec4 _400[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _404[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);

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
} _224;

uniform int SPIRV_Cross_BaseInstance;
layout(location = 0) out vec4 varColor;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    int _512 = _224.frustumGrid.dims.x * _224.frustumGrid.dims.y;
    int _523 = (gl_InstanceID + SPIRV_Cross_BaseInstance) % _512;
    vec3 _577 = (vec3(ivec3(_523 % _224.frustumGrid.dims.x, _523 / _224.frustumGrid.dims.x, (gl_InstanceID + SPIRV_Cross_BaseInstance) / _512)) + (vec3(0.0500000007450580596923828125) + (_400[_404[gl_VertexID]].xyz * 0.89999997615814208984375))) * (vec3(1.0) / vec3(_224.frustumGrid.dims));
    float _585 = exp2(_577.z);
    float _623 = (_224.frustumGrid.rangeNear * (2.0 - _585)) + (_224.frustumGrid.rangeFar * (_585 - 1.0));
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * ((_224.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _577.x)) * _623) + (_224.frustumGrid.eyeToGridProj[2].x * _623)) / _224.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _577.y)) * _623) + (_224.frustumGrid.eyeToGridProj[2].y * _623)) / _224.frustumGrid.eyeToGridProj[1].y, -_623, 1.0)) - vec4(_cameraBlock._camera._viewInverse[3].xyz, 0.0));
    float _703 = fract(float((gl_InstanceID + SPIRV_Cross_BaseInstance)) / float(_512 * (_224.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _827;
    if (_703 < 0.0)
    {
        _827 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _828;
        if (_703 < 1.0)
        {
            _828 = vec3(1.0, _703, 0.0);
        }
        else
        {
            vec3 _829;
            if (_703 < 2.0)
            {
                _829 = vec3(2.0 - _703, 1.0, 0.0);
            }
            else
            {
                vec3 _830;
                if (_703 < 3.0)
                {
                    _830 = vec3(0.0, 1.0, _703 - 2.0);
                }
                else
                {
                    vec3 _831;
                    if (_703 < 4.0)
                    {
                        _831 = vec3(0.0, 4.0 - _703, 1.0);
                    }
                    else
                    {
                        vec3 _832;
                        if (_703 < 5.0)
                        {
                            _832 = vec3(_703 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _833;
                            if (_703 < 6.0)
                            {
                                _833 = vec3(1.0, 0.0, 6.0 - _703);
                            }
                            else
                            {
                                _833 = vec3(1.0, 0.0, 0.0);
                            }
                            _832 = _833;
                        }
                        _831 = _832;
                    }
                    _830 = _831;
                }
                _829 = _830;
            }
            _828 = _829;
        }
        _827 = _828;
    }
    varColor = vec4(_827, 0.89999997615814208984375);
}

