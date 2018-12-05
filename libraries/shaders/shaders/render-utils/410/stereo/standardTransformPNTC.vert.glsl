#version 410

out float gl_ClipDistance[1];

const vec4 _249[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 3) out vec2 varTexCoord0;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 2) out vec4 varColor;
layout(location = 2) in vec4 inColor;
layout(location = 0) in vec4 inPosition;
layout(location = 1) out vec3 varNormal;
layout(location = 1) in vec4 inNormal;
layout(location = 0) out vec3 varPosition;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _547;

void main()
{
    varTexCoord0 = inTexCoord0.xy;
    float _541;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _541 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _541 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _542;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _542 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _542 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _543;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _543 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _543 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    varColor = vec4(_541, _542, _543, inColor.w);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _414 = 8 * _drawCallInfo.x;
    mat4 _518 = _547;
    _518[0] = texelFetch(transformObjectBuffer, _414);
    mat4 _520 = _518;
    _520[1] = texelFetch(transformObjectBuffer, _414 + 1);
    mat4 _522 = _520;
    _522[2] = texelFetch(transformObjectBuffer, _414 + 2);
    vec4 _436 = texelFetch(transformObjectBuffer, _414 + 3);
    mat4 _524 = _522;
    _524[3] = _436;
    vec3 _221 = _436.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _537 = _524;
    _537[3] = vec4(_221.x, _221.y, _221.z, _436.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_537 * inPosition);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _258 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _249[_258]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_258] * gl_Position.w);
    varNormal = vec3(dot(texelFetch(transformObjectBuffer, _414 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _414 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _414 + 6).xyz, inNormal.xyz));
    varPosition = inPosition.xyz;
}

