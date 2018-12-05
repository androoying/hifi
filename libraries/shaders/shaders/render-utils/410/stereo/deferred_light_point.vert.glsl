#version 410

out float gl_ClipDistance[1];

const vec4 _205[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
} _115;

layout(std140) uniform lightIndexBuffer
{
    int lightIndex[256];
} _141;

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
    vec3 _174 = (inPosition.xyz * 1.0).xyz + _115.lightArray[_141.lightIndex[(gl_InstanceID + SPIRV_Cross_BaseInstance)]].volume.positionRadius.xyz;
    int _318 = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    _stereoSide = _318;
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (vec4(_174.x, _174.y, _174.z, inPosition.w) - vec4(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 0.0));
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _215 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _205[_215]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_215] * gl_Position.w);
    vec4 _239 = gl_Position;
    float _241 = gl_Position.w;
    vec4 _243 = _239 / vec4(_241);
    vec2 _248 = (_243.xy + vec2(1.0)) * 0.5;
    vec4 _250 = vec4(_248.x, _248.y, _243.z, _243.w);
    _stereoSide = _318;
    vec4 _480;
    if (_cameraBlock._camera[_stereoSide]._stereoInfo.x > 0.0)
    {
        _stereoSide = _318;
        vec4 _479 = _250;
        _479.x = 0.5 * (_248.x + _cameraBlock._camera[_stereoSide]._stereoInfo.y);
        _480 = _479;
    }
    else
    {
        _480 = _250;
    }
    _texCoord0 = vec4(_480.xy, 0.0, 1.0) * gl_Position.w;
}

