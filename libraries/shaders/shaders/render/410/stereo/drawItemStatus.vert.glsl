#version 410

out float gl_ClipDistance[1];

const vec4 _325[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));
const vec4 _391[6] = vec4[](vec4(-1.0, -1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(-1.0, 1.0, 0.0, 1.0), vec4(1.0, -1.0, 0.0, 1.0), vec4(1.0, 1.0, 0.0, 1.0));
const vec2 _445[8] = vec2[](vec2(-1.5, 0.5), vec2(-0.5, 0.5), vec2(0.5), vec2(1.5, 0.5), vec2(-1.5, -0.5), vec2(-0.5), vec2(0.5, -0.5), vec2(1.5, -0.5));

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
layout(location = 2) in ivec4 inStatus0;
layout(location = 3) in ivec4 inStatus1;
layout(location = 0) in vec3 inBoundPos;
layout(location = 1) in vec3 inBoundDim;
layout(location = 0) out vec4 varColor;
layout(location = 1) out vec3 varTexcoord;

mat4 _777;
int _783;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _536 = 8 * _drawCallInfo.x;
    mat4 _745 = _777;
    _745[0] = texelFetch(transformObjectBuffer, _536);
    mat4 _747 = _745;
    _747[1] = texelFetch(transformObjectBuffer, _536 + 1);
    mat4 _749 = _747;
    _749[2] = texelFetch(transformObjectBuffer, _536 + 2);
    vec4 _558 = texelFetch(transformObjectBuffer, _536 + 3);
    mat4 _751 = _749;
    _751[3] = _558;
    vec3 _306 = _558.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _764 = _751;
    _764[3] = vec4(_306.x, _306.y, _306.z, _558.w);
    vec4 _319 = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_764 * (vec4(inBoundPos, 1.0) + (vec4(inBoundDim, 0.0) * vec4(0.5, 0.5, 0.5, 0.0))));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _334 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(_319, _325[_334]);
    float _356 = _319.w;
    vec4 _768 = _319;
    _768.x = (_319.x * 0.5) + (eyeOffsetScale[_334] * _356);
    int _364 = gl_VertexID / 6;
    bool _778;
    int _781;
    if (_364 < 4)
    {
        _781 = inStatus0[_364];
        _778 = true;
    }
    else
    {
        bool _597 = _364 < 8;
        int _782;
        if (_597)
        {
            _782 = inStatus1[_364 - 4];
        }
        else
        {
            _782 = _783;
        }
        _781 = _782;
        _778 = _597 ? true : false;
    }
    int _806 = _778 ? _781 : (-1);
    bool _370 = _806 == (-1);
    if (_370)
    {
        gl_Position = _768;
        varColor = vec4(1.0);
    }
    if (!(_370 ? true : false))
    {
        vec4 _396 = _391[gl_VertexID - (_364 * 6)];
        float _635 = abs(clamp(float(uint((_806 >> 16) & 255)) * 0.0039215688593685626983642578125, 0.0, 1.0)) * 6.0;
        vec3 _796;
        if (_635 < 0.0)
        {
            _796 = vec3(1.0, 0.0, 0.0);
        }
        else
        {
            vec3 _797;
            if (_635 < 1.0)
            {
                _797 = vec3(1.0, _635, 0.0);
            }
            else
            {
                vec3 _798;
                if (_635 < 2.0)
                {
                    _798 = vec3(2.0 - _635, 1.0, 0.0);
                }
                else
                {
                    vec3 _799;
                    if (_635 < 3.0)
                    {
                        _799 = vec3(0.0, 1.0, _635 - 2.0);
                    }
                    else
                    {
                        vec3 _800;
                        if (_635 < 4.0)
                        {
                            _800 = vec3(0.0, 4.0 - _635, 1.0);
                        }
                        else
                        {
                            vec3 _801;
                            if (_635 < 5.0)
                            {
                                _801 = vec3(_635 - 4.0, 0.0, 1.0);
                            }
                            else
                            {
                                vec3 _802;
                                if (_635 < 6.0)
                                {
                                    _802 = vec3(1.0, 0.0, 6.0 - _635);
                                }
                                else
                                {
                                    _802 = vec3(1.0, 0.0, 0.0);
                                }
                                _801 = _802;
                            }
                            _800 = _801;
                        }
                        _799 = _800;
                    }
                    _798 = _799;
                }
                _797 = _798;
            }
            _796 = _797;
        }
        varColor = vec4(_796, 1.0);
        varTexcoord = vec3((_396.x + 1.0) * 0.5, (_396.y + 1.0) * (-0.5), clamp(float((_806 >> 24) & 255), 0.0, 255.0));
        gl_Position = _768 + (vec4(((_445[_364] * vec2(38.0)) + ((_396.xy * 0.5) * max(vec2(0.0), vec2(36.0) * clamp(float(((_806 >> 0) & 65535) - 32727) * 3.0555809644283726811408996582031e-05, -1.0, 1.0)))) * vec2(2.0 / _cameraBlock._camera[_stereoSide]._viewport.z, 2.0 / _cameraBlock._camera[_stereoSide]._viewport.w), 0.0, 0.0) * _356);
    }
}

