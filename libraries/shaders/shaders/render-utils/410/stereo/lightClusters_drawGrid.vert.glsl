#version 410

out float gl_ClipDistance[1];

const vec4 _444[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _448[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);
const vec4 _523[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    int _594 = (gl_InstanceID + SPIRV_Cross_BaseInstance) >> 1;
    int _630 = _234.frustumGrid.dims.x * _234.frustumGrid.dims.y;
    int _641 = _594 % _630;
    vec3 _695 = (vec3(ivec3(_641 % _234.frustumGrid.dims.x, _641 / _234.frustumGrid.dims.x, _594 / _630)) + (_444[_448[gl_VertexID]].xyz * 1.0)) * (vec3(1.0) / vec3(_234.frustumGrid.dims));
    float _703 = exp2(_695.z);
    float _741 = (_234.frustumGrid.rangeNear * (2.0 - _703)) + (_234.frustumGrid.rangeFar * (_703 - 1.0));
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * ((_234.frustumGrid.eyeToWorldMat * vec4(((((-1.0) + (2.0 * _695.x)) * _741) + (_234.frustumGrid.eyeToGridProj[2].x * _741)) / _234.frustumGrid.eyeToGridProj[0].x, ((((-1.0) + (2.0 * _695.y)) * _741) + (_234.frustumGrid.eyeToGridProj[2].y * _741)) / _234.frustumGrid.eyeToGridProj[1].y, -_741, 1.0)) - vec4(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 0.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _532 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _523[_532]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_532] * gl_Position.w);
    float _825 = fract(float(_594) / float(_630 * (_234.frustumGrid.dims.z + 1))) * 6.0;
    vec3 _951;
    if (_825 < 0.0)
    {
        _951 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _952;
        if (_825 < 1.0)
        {
            _952 = vec3(1.0, _825, 0.0);
        }
        else
        {
            vec3 _953;
            if (_825 < 2.0)
            {
                _953 = vec3(2.0 - _825, 1.0, 0.0);
            }
            else
            {
                vec3 _954;
                if (_825 < 3.0)
                {
                    _954 = vec3(0.0, 1.0, _825 - 2.0);
                }
                else
                {
                    vec3 _955;
                    if (_825 < 4.0)
                    {
                        _955 = vec3(0.0, 4.0 - _825, 1.0);
                    }
                    else
                    {
                        vec3 _956;
                        if (_825 < 5.0)
                        {
                            _956 = vec3(_825 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _957;
                            if (_825 < 6.0)
                            {
                                _957 = vec3(1.0, 0.0, 6.0 - _825);
                            }
                            else
                            {
                                _957 = vec3(1.0, 0.0, 0.0);
                            }
                            _956 = _957;
                        }
                        _955 = _956;
                    }
                    _954 = _955;
                }
                _953 = _954;
            }
            _952 = _953;
        }
        _951 = _952;
    }
    varColor = vec4(_951, (((255 & (_331._clusterGridTable[_594 / 4][_594 % 4] >> 16)) + (255 & (_331._clusterGridTable[_594 / 4][_594 % 4] >> 24))) > 0) ? 0.89999997615814208984375 : 0.0);
}

