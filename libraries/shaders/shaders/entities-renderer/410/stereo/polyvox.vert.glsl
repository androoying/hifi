#version 410

out float gl_ClipDistance[1];

const vec4 _190[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 0) in vec4 inPosition;
layout(location = 5) out vec4 _position;
layout(location = 6) out vec3 _normal;
layout(location = 1) in vec4 inNormal;
layout(location = 2) out vec4 _worldPosition;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _509;

void main()
{
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _356 = 8 * _drawCallInfo.x;
    mat4 _471 = _509;
    _471[0] = texelFetch(transformObjectBuffer, _356);
    mat4 _473 = _471;
    _473[1] = texelFetch(transformObjectBuffer, _356 + 1);
    mat4 _475 = _473;
    _475[2] = texelFetch(transformObjectBuffer, _356 + 2);
    vec4 _378 = texelFetch(transformObjectBuffer, _356 + 3);
    mat4 _477 = _475;
    _477[3] = _378;
    vec4 _384 = texelFetch(transformObjectBuffer, _356 + 4);
    vec4 _390 = texelFetch(transformObjectBuffer, _356 + 5);
    vec4 _396 = texelFetch(transformObjectBuffer, _356 + 6);
    vec3 _144 = _378.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _490 = _477;
    _490[3] = vec4(_144.x, _144.y, _144.z, _378.w);
    vec4 _153 = _490 * inPosition;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _153;
    _position = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_153.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _200 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _190[_200]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_200] * gl_Position.w);
    vec3 _232 = vec3(_384.x, _390.x, _396.x);
    vec3 _240 = vec3(_384.y, _390.y, _396.y);
    vec3 _248 = vec3(_384.z, _390.z, _396.z);
    _normal = vec3(dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _232), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _240), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _248)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _232), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _240), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _248)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _232), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _240), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _248)), inNormal.xyz));
    _worldPosition = inPosition;
}

