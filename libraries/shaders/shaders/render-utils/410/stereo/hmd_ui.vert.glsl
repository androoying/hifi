#version 410

out float gl_ClipDistance[1];

const vec4 _182[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _374;

void main()
{
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _257 = 8 * _drawCallInfo.x;
    mat4 _354 = _374;
    _354[0] = texelFetch(transformObjectBuffer, _257);
    mat4 _356 = _354;
    _356[1] = texelFetch(transformObjectBuffer, _257 + 1);
    mat4 _358 = _356;
    _358[2] = texelFetch(transformObjectBuffer, _257 + 2);
    vec4 _279 = texelFetch(transformObjectBuffer, _257 + 3);
    mat4 _360 = _358;
    _360[3] = _279;
    vec3 _153 = _279.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _373 = _360;
    _373[3] = vec4(_153.x, _153.y, _153.z, _279.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_373 * inPosition);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _191 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _182[_191]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_191] * gl_Position.w);
}

