#version 410

out float gl_ClipDistance[1];

const vec4 _243[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _507;

void main()
{
    float _501;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _501 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _501 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _502;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _502 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _502 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _503;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _503 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _503 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_501, _502, _503, inColor.w);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _380 = 8 * _drawCallInfo.x;
    mat4 _481 = _507;
    _481[0] = texelFetch(transformObjectBuffer, _380);
    mat4 _483 = _481;
    _483[1] = texelFetch(transformObjectBuffer, _380 + 1);
    mat4 _485 = _483;
    _485[2] = texelFetch(transformObjectBuffer, _380 + 2);
    vec4 _402 = texelFetch(transformObjectBuffer, _380 + 3);
    mat4 _487 = _485;
    _487[3] = _402;
    vec3 _215 = _402.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _500 = _487;
    _500[3] = vec4(_215.x, _215.y, _215.z, _402.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_500 * inPosition);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _253 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _243[_253]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_253] * gl_Position.w);
}

