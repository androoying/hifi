#version 410

struct DeferredFrameTransform
{
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

struct CameraCorrection
{
    mat4 _correction;
    mat4 _correctionInverse;
    mat4 _prevView;
    mat4 _prevViewInverse;
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

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _46;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _56;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _96;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 _fragColor;

void main()
{
    vec2 _128 = ((varTexCoord0 * 2.0) - vec2(1.0)) * 1.02499997615814208984375;
    float _132 = dot(_128, _128);
    if (_132 > 1.05062496662139892578125)
    {
        discard;
    }
    float _147 = (1.0 - sqrt(_132)) * 40.0;
    float _156 = 1.0 - min(1.0, _147 * _147);
    vec4 _157 = vec4(0.0, 0.0, 0.0, _156);
    bool _159 = _132 > 1.0;
    if (_159)
    {
        _fragColor = _157;
    }
    if (!(_159 ? true : false))
    {
        vec3 _338 = _96.light.irradiance.colorIntensity.xyz * _96.light.irradiance.colorIntensity.w;
        mat4 _345 = _46.frameTransform._viewInverse * _56.cameraCorrection._correctionInverse;
        vec3 _205 = -normalize(_96.light.volume.directionSpotCos.xyz);
        vec3 _212 = _338 * vec3(step(0.9900000095367431640625, dot(_205, vec3((_345 * vec4(normalize(vec3(_128, -sqrt(1.0 - _132))), 0.0)).xyz))));
        vec3 _393;
        if (_132 < 0.1599999964237213134765625)
        {
            vec2 _222 = _128 * vec2(2.5);
            _393 = _212 + max(_338 * vec3(dot(_205, vec3((_345 * vec4(normalize(vec3(_222, sqrt(1.0 - dot(_222, _222)))), 0.0)).xyz))), vec3(0.00999999977648258209228515625));
        }
        else
        {
            _393 = _212;
        }
        _fragColor = vec4(pow(((_393 * 1.0) - vec3(_156)) + (_157.xyz * _156), vec3(0.4545454680919647216796875)), 1.0);
    }
}

