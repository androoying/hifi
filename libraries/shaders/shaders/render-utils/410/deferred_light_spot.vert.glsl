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
} _87;

layout(std140) uniform lightIndexBuffer
{
    int lightIndex[256];
} _117;

layout(location = 0) in vec4 inPosition;
uniform int SPIRV_Cross_BaseInstance;
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
    vec4 _400;
    if (inPosition.z >= 0.0)
    {
        vec2 _188 = ((vec2(1.0) + (vec2(1.0, -1.0) * float(inPosition.z > 0.0))) * float(inPosition.z < 0.5)) + ((vec2(1.0, 0.0) + (vec2(0.0, 1.0) * float(inPosition.z < 1.0))) * float(inPosition.z > 0.5));
        vec2 _193 = inPosition.xy * _188.y;
        vec4 _395 = vec4(_193.x, _193.y, inPosition.z, inPosition.w);
        _395.z = -_188.x;
        _400 = _395;
    }
    else
    {
        vec4 _397 = inPosition;
        _397.z = 0.0;
        _400 = _397;
    }
    vec3 _213 = (_400.xyz * 1.0).xyz + _87.lightArray[_117.lightIndex[(gl_InstanceID + SPIRV_Cross_BaseInstance)]].volume.positionRadius.xyz;
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (vec4(_213.x, _213.y, _213.z, _400.w) - vec4(_cameraBlock._camera._viewInverse[3].xyz, 0.0));
    _texCoord0 = vec4(((gl_Position / vec4(gl_Position.w)).xy + vec2(1.0)) * 0.5, 0.0, 1.0) * gl_Position.w;
}

