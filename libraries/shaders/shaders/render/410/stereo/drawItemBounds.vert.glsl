#version 410

out float gl_ClipDistance[1];

const vec4 _258[8] = vec4[](vec4(0.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 2.0), vec4(0.0, 0.0, 1.0, 1.0), vec4(1.0, 0.0, 1.0, 2.0), vec4(0.0, 1.0, 1.0, 2.0), vec4(1.0, 1.0, 1.0, 3.0));
const int _261[24] = int[](0, 1, 1, 3, 3, 2, 2, 0, 4, 5, 5, 7, 7, 6, 6, 4, 2, 6, 3, 7, 0, 4, 1, 5);
const vec4 _334[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

struct DrawItemBoundsParams
{
    vec4 color;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform drawItemBoundsParamsBuffer
{
    DrawItemBoundsParams params;
} _370;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer ssbo0Buffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 0) out vec4 varColor;
layout(location = 1) out vec2 varTexcoord;

mat4 _721;

void main()
{
    int _241 = gl_VertexID / 24;
    vec4 _270 = _258[_261[gl_VertexID - (_241 * 24)]];
    int _420 = 2 * _241;
    vec3 _283 = texelFetch(ssbo0Buffer, _420 + 1).xyz;
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _460 = 8 * _drawCallInfo.x;
    mat4 _700 = _721;
    _700[0] = texelFetch(transformObjectBuffer, _460);
    mat4 _702 = _700;
    _702[1] = texelFetch(transformObjectBuffer, _460 + 1);
    mat4 _704 = _702;
    _704[2] = texelFetch(transformObjectBuffer, _460 + 2);
    vec4 _482 = texelFetch(transformObjectBuffer, _460 + 3);
    mat4 _706 = _704;
    _706[3] = _482;
    vec3 _308 = _482.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _719 = _706;
    _719[3] = vec4(_308.x, _308.y, _308.z, _482.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_719 * vec4(texelFetch(ssbo0Buffer, _420).yzw + (_283 * _270.xyz), 1.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _344 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _334[_344]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_344] * gl_Position.w);
    if (_370.params.color.w < 0.0)
    {
        float _514 = (float(_241) / (-_370.params.color.w)) * 6.0;
        vec3 _745;
        if (_514 < 0.0)
        {
            _745 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _746;
            if (_514 < 1.0)
            {
                _746 = vec3(1.0, _514, 0.0);
            }
            else
            {
                vec3 _747;
                if (_514 < 2.0)
                {
                    _747 = vec3(2.0 - _514, 1.0, 0.0);
                }
                else
                {
                    vec3 _748;
                    if (_514 < 3.0)
                    {
                        _748 = vec3(0.0, 1.0, _514 - 2.0);
                    }
                    else
                    {
                        vec3 _749;
                        if (_514 < 4.0)
                        {
                            _749 = vec3(0.0, 4.0 - _514, 1.0);
                        }
                        else
                        {
                            vec3 _750;
                            if (_514 < 5.0)
                            {
                                _750 = vec3(_514 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _751;
                                if (_514 < 6.0)
                                {
                                    _751 = vec3(1.0, 0.0, 6.0 - _514);
                                }
                                else
                                {
                                    _751 = vec3(1.0, 0.0, 0.0);
                                }
                                _750 = _751;
                            }
                            _749 = _750;
                        }
                        _748 = _749;
                    }
                    _747 = _748;
                }
                _746 = _747;
            }
            _745 = _746;
        }
        varColor = vec4(_745, 1.0);
    }
    else
    {
        float _581 = _370.params.color.w * 6.0;
        vec3 _730;
        if (_581 < 0.0)
        {
            _730 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _731;
            if (_581 < 1.0)
            {
                _731 = vec3(1.0, _581, 0.0);
            }
            else
            {
                vec3 _732;
                if (_581 < 2.0)
                {
                    _732 = vec3(2.0 - _581, 1.0, 0.0);
                }
                else
                {
                    vec3 _733;
                    if (_581 < 3.0)
                    {
                        _733 = vec3(0.0, 1.0, _581 - 2.0);
                    }
                    else
                    {
                        vec3 _734;
                        if (_581 < 4.0)
                        {
                            _734 = vec3(0.0, 4.0 - _581, 1.0);
                        }
                        else
                        {
                            vec3 _735;
                            if (_581 < 5.0)
                            {
                                _735 = vec3(_581 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _736;
                                if (_581 < 6.0)
                                {
                                    _736 = vec3(1.0, 0.0, 6.0 - _581);
                                }
                                else
                                {
                                    _736 = vec3(1.0, 0.0, 0.0);
                                }
                                _735 = _736;
                            }
                            _734 = _735;
                        }
                        _733 = _734;
                    }
                    _732 = _733;
                }
                _731 = _732;
            }
            _730 = _731;
        }
        varColor = vec4(_730, 1.0);
    }
    varTexcoord = vec2(_270.w, length(_283));
}

