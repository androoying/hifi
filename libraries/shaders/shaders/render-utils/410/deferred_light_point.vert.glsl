#version 410

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
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _107;

layout(std140) uniform lightIndexBuffer
{
    int lightIndex[256];
} _133;

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
    vec3 _168 = (inPosition.xyz * 1.0).xyz + _107.lightArray[_133.lightIndex[(gl_InstanceID + SPIRV_Cross_BaseInstance)]].volume.positionRadius.xyz;
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (vec4(_168.x, _168.y, _168.z, inPosition.w) - vec4(_cameraBlock._camera._viewInverse[3].xyz, 0.0));
    vec4 _195 = gl_Position;
    float _198 = gl_Position.w;
    vec4 _200 = _195 / vec4(_198);
    vec2 _207 = (_200.xy + vec2(1.0)) * 0.5;
    vec4 _209 = vec4(_207.x, _207.y, _200.z, _200.w);
    vec4 _362;
    if (_cameraBlock._camera._stereoInfo.x > 0.0)
    {
        vec4 _361 = _209;
        _361.x = 0.5 * (_207.x + _cameraBlock._camera._stereoInfo.y);
        _362 = _361;
    }
    else
    {
        _362 = _209;
    }
    _texCoord0 = vec4(_362.xy, 0.0, 1.0) * gl_Position.w;
}

