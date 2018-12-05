#version 410

out float gl_ClipDistance[1];

const float _256[16] = float[](1.0, 0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625, 0.0078125, 0.00390625, 0.001953125, 0.0009765625, 0.00048828125, 0.000244140625, 0.0001220703125, 6.103515625e-05, 3.0517578125e-05);
const vec4 _309[8] = vec4[](vec4(0.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 1.0), vec4(0.0, 1.0, 1.0, 1.0), vec4(1.0));
const int _312[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);
const vec4 _403[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) in ivec4 inCellLocation;
layout(location = 0) out vec4 varColor;

mat4 _728;

void main()
{
    vec4 _322 = _309[_312[gl_VertexID]];
    int _725;
    if (inCellLocation.w < 0)
    {
        _725 = -inCellLocation.w;
    }
    else
    {
        _725 = inCellLocation.w;
    }
    float _498 = 32768.0 * _256[_725];
    vec3 _361 = vec4(vec3(-16384.0) + (vec3(ivec4(inCellLocation.xyz, _725).xyz) * _498), _498).xyz + (vec3(_498) * _322.xyz);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _539 = 8 * _drawCallInfo.x;
    mat4 _705 = _728;
    _705[0] = texelFetch(transformObjectBuffer, _539);
    mat4 _707 = _705;
    _707[1] = texelFetch(transformObjectBuffer, _539 + 1);
    mat4 _709 = _707;
    _709[2] = texelFetch(transformObjectBuffer, _539 + 2);
    vec4 _561 = texelFetch(transformObjectBuffer, _539 + 3);
    mat4 _711 = _709;
    _711[3] = _561;
    vec3 _377 = _561.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _724 = _711;
    _724[3] = vec4(_377.x, _377.y, _377.z, _561.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_724 * vec4(_361.x, _361.y, _361.z, _322.w));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _412 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _403[_412]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_412] * gl_Position.w);
    float _593 = fract(float(inCellLocation.w) * 0.20000000298023223876953125) * 6.0;
    vec3 _738;
    if (_593 < 0.0)
    {
        _738 = vec3(1.0, 0.0, 0.0);
    }
    else
    {
        vec3 _739;
        if (_593 < 1.0)
        {
            _739 = vec3(1.0, _593, 0.0);
        }
        else
        {
            vec3 _740;
            if (_593 < 2.0)
            {
                _740 = vec3(2.0 - _593, 1.0, 0.0);
            }
            else
            {
                vec3 _741;
                if (_593 < 3.0)
                {
                    _741 = vec3(0.0, 1.0, _593 - 2.0);
                }
                else
                {
                    vec3 _742;
                    if (_593 < 4.0)
                    {
                        _742 = vec3(0.0, 4.0 - _593, 1.0);
                    }
                    else
                    {
                        vec3 _743;
                        if (_593 < 5.0)
                        {
                            _743 = vec3(_593 - 4.0, 0.0, 1.0);
                        }
                        else
                        {
                            vec3 _744;
                            if (_593 < 6.0)
                            {
                                _744 = vec3(1.0, 0.0, 6.0 - _593);
                            }
                            else
                            {
                                _744 = vec3(1.0, 0.0, 0.0);
                            }
                            _743 = _744;
                        }
                        _742 = _743;
                    }
                    _741 = _742;
                }
                _740 = _741;
            }
            _739 = _740;
        }
        _738 = _739;
    }
    varColor = vec4(_738, 0.800000011920928955078125 + (0.20000000298023223876953125 * float(sign(inCellLocation.w))));
}

