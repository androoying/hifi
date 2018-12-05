#version 410

out float gl_ClipDistance[1];

const vec4 _272[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 5) out vec4 _positionMS;
layout(location = 0) in vec4 inPosition;
layout(location = 6) out vec3 _normalMS;
layout(location = 1) in vec4 inNormal;
layout(location = 7) out vec4 _positionES;
layout(location = 2) out vec4 _positionWS;
layout(location = 3) out vec3 _normalWS;
layout(location = 9) out vec4 _fadeData1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 10) out vec4 _fadeData2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 11) out vec4 _fadeData3;
layout(location = 10) in vec4 inTexCoord4;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;

mat4 _576;

void main()
{
    float _570;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _570 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _570 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _571;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _571 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _571 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _572;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _572 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _572 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_570, _571, _572, inColor.w);
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    _positionMS = inPosition;
    _normalMS = inNormal.xyz;
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _443 = 8 * _drawCallInfo.x;
    mat4 _547 = _576;
    _547[0] = texelFetch(transformObjectBuffer, _443);
    mat4 _549 = _547;
    _549[1] = texelFetch(transformObjectBuffer, _443 + 1);
    mat4 _551 = _549;
    _551[2] = texelFetch(transformObjectBuffer, _443 + 2);
    vec4 _465 = texelFetch(transformObjectBuffer, _443 + 3);
    mat4 _553 = _551;
    _553[3] = _465;
    vec3 _230 = _465.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _566 = _553;
    _566[3] = vec4(_230.x, _230.y, _230.z, _465.w);
    vec4 _237 = _566 * inPosition;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _237;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_237.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _281 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _272[_281]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_281] * gl_Position.w);
    _positionWS = _553 * inPosition;
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _443 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _443 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _443 + 6).xyz, inNormal.xyz));
    _fadeData1 = inTexCoord2;
    _fadeData2 = inTexCoord3;
    _fadeData3 = inTexCoord4;
}

