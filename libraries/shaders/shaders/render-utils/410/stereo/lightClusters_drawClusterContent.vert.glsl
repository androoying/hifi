#version 410

out float gl_ClipDistance[1];

const vec4 _444[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _448[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);
const vec4 _538[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
} _234;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _331;

uniform int SPIRV_Cross_BaseInstance;
layout(location = 8) flat out int _stereoSide;
layout(location = 0) out vec4 varColor;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    int _609 = (gl_InstanceID + SPIRV_Cross_BaseInstance) >> 1;
    int _468 = (255 & (_331._clusterGridTable[_609 / 4][_609 % 4] >> 16)) + (255 & (_331._clusterGridTable[_609 / 4][_609 % 4] >> 24));
    float _474 = clamp(float(_468) * 0.100000001490116119384765625, 0.0, 1.0);
    int _645 = _234.frustumGrid.dims.x * _234.frustumGrid.dims.y;
    int _656 = _609 % _645;
    vec3 _710 = (vec3(ivec3(_656 % _234.frustumGrid.dims.x, _656 / _234.frustumGrid.dims.x, _609 / _645)) + (vec3(0.00499999523162841796875 + ((1.0 - _474) * 0.49500000476837158203125)) + (_444[_448[gl_VertexID]].xyz * (_474 * 0.9900000095367431640625)))) * (vec3(1.0) / vec3(_234.frustumGrid.dims));
    float _718 = exp2(_710.z);
    float _756 = (_234.frustumGrid.rangeNear * (2.0 - _718)) + (_234.frustumGrid.rangeFar * (_718 - 1.0));
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * ((_234.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _710.x)) * _756) + (_234.frustumGrid.eyeToGridProj[2].x * _756)) / _234.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _710.y)) * _756) + (_234.frustumGrid.eyeToGridProj[2].y * _756)) / _234.frustumGrid.eyeToGridProj[1].y, -_756, 1.0)) - vec4(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 0.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _547 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _538[_547]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_547] * gl_Position.w);
    float _840 = fract(float(_609) / float(_645 * (_234.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _966;
    if (_840 < 0.0)
    {
        _966 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _967;
        if (_840 < 1.0)
        {
            _967 = vec3(1.0, _840, 0.0);
        }
        else
        {
            vec3 _968;
            if (_840 < 2.0)
            {
                _968 = vec3(2.0 - _840, 1.0, 0.0);
            }
            else
            {
                vec3 _969;
                if (_840 < 3.0)
                {
                    _969 = vec3(0.0, 1.0, _840 - 2.0);
                }
                else
                {
                    vec3 _970;
                    if (_840 < 4.0)
                    {
                        _970 = vec3(0.0, 4.0 - _840, 1.0);
                    }
                    else
                    {
                        vec3 _971;
                        if (_840 < 5.0)
                        {
                            _971 = vec3(_840 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _972;
                            if (_840 < 6.0)
                            {
                                _972 = vec3(1.0, 0.0, 6.0 - _840);
                            }
                            else
                            {
                                _972 = vec3(1.0, 0.0, 0.0);
                            }
                            _971 = _972;
                        }
                        _970 = _971;
                    }
                    _969 = _970;
                }
                _968 = _969;
            }
            _967 = _968;
        }
        _966 = _967;
    }
    varColor = vec4(_966, (_468 > 0) ? 0.89999997615814208984375 : 0.100000001490116119384765625);
}

