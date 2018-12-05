#version 410

out float gl_ClipDistance[1];

const vec4 _250[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

struct LightVolume
{
    vec4 positionRadius;
    vec4 directionSpotCos;
};

struct LightIrradiance
{
    vec4 colorIntensity;
    vec4 attenuation;
};

struct Light
{
    LightVolume volume;
    LightIrradiance irradiance;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _96;

layout(std140) uniform lightIndexBuffer
{
    int lightIndex[256];
} _126;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 0) in vec4 inPosition;
layout(location = 0) out vec4 _texCoord0;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    vec4 _443;
    if (inPosition.z >= 0.0)
    {
        vec2 _194 = ((vec2(1.0) + (vec2(1.0, -1.0) * float(inPosition.z > 0.0))) * float(inPosition.z < 0.5)) + ((vec2(1.0, 0.0) + (vec2(0.0, 1.0) * float(inPosition.z < 1.0))) * float(inPosition.z > 0.5));
        vec2 _199 = inPosition.xy * _194.y;
        vec4 _438 = vec4(_199.x, _199.y, inPosition.z, inPosition.w);
        _438.z = -_194.x;
        _443 = _438;
    }
    else
    {
        vec4 _440 = inPosition;
        _440.z = 0.0;
        _443 = _440;
    }
    vec3 _219 = (_443.xyz * 1.0).xyz + _96.lightArray[_126.lightIndex[(gl_InstanceID + SPIRV_Cross_BaseInstance)]].volume.positionRadius.xyz;
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (vec4(_219.x, _219.y, _219.z, _443.w) - vec4(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 0.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _257 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _250[_257]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_257] * gl_Position.w);
    _texCoord0 = vec4(((gl_Position / vec4(gl_Position.w)).xy + vec2(1.0)) * 0.5, 0.0, 1.0) * gl_Position.w;
}

