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

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
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

struct HazeParams
{
    vec3 hazeColor;
    float hazeGlareBlend;
    vec3 hazeGlareColor;
    float hazeBaseReference;
    vec3 colorModulationFactor;
    int hazeMode;
    mat4 transform;
    float backgroundBlend;
    float hazeRangeFactor;
    float hazeHeightFactor;
    float hazeKeyLightRangeFactor;
    float hazeKeyLightAltitudeFactor;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _77;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _86;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _177;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _188;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _219;

uniform sampler2D linearDepthMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    bool _465 = _177.lightingModel._HazeBloomSkinningBlendshape.x == 0.0;
    bool _473;
    if (!_465)
    {
        _473 = (_219.hazeParams.hazeMode & 1) != 1;
    }
    else
    {
        _473 = _465;
    }
    if (_473)
    {
        discard;
    }
    vec4 _532 = texture(linearDepthMap, varTexCoord0);
    float _534 = -_532.x;
    int _890;
    vec2 _892;
    if (_77.frameTransform._stereoInfo.x > 0.0)
    {
        bool _540 = varTexCoord0.x > 0.5;
        vec2 _889;
        if (_540)
        {
            vec2 _877 = varTexCoord0;
            _877.x = varTexCoord0.x - 0.5;
            _889 = _877;
        }
        else
        {
            _889 = varTexCoord0;
        }
        vec2 _880 = _889;
        _880.x = _889.x * 2.0;
        _892 = _880;
        _890 = int(_540);
    }
    else
    {
        _892 = varTexCoord0;
        _890 = 0;
    }
    vec4 _608 = _77.frameTransform._invProjection[_890] * vec4((vec3(_892, (_77.frameTransform._depthInfo.x - (_534 * _77.frameTransform._depthInfo.z)) / (_534 * _77.frameTransform._depthInfo.y)) * 2.0) - vec3(1.0), 1.0);
    vec4 _558 = vec4(_608.xyz / vec3(_608.w), 1.0);
    mat4 _620 = _77.frameTransform._viewInverse * _86.cameraCorrection._correctionInverse;
    vec4 _489 = _620 * _558;
    vec4 _492 = _620[3];
    float _670 = length(_558.xyz);
    float _672 = _492.y;
    vec4 _678 = vec4(_219.hazeParams.hazeColor, 1.0);
    vec4 _896;
    if ((_219.hazeParams.hazeMode & 16) == 16)
    {
        _896 = mix(_678, vec4(_219.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_489.xyz - _492.xyz), -_188.light.volume.directionSpotCos.xyz)), _219.hazeParams.hazeGlareBlend))));
    }
    else
    {
        _896 = _678;
    }
    vec4 _899;
    if ((_219.hazeParams.hazeMode & 8) == 8)
    {
        vec3 _733 = (_219.hazeParams.colorModulationFactor * exp((-_219.hazeParams.hazeHeightFactor) * (_672 - _219.hazeParams.hazeBaseReference))) * _670;
        float _737 = _489.y - _672;
        vec3 _898;
        if (abs(_737) > 0.00999999977648258209228515625)
        {
            float _746 = _219.hazeParams.hazeHeightFactor * _737;
            _898 = _733 * ((1.0 - exp(-_746)) / _746);
        }
        else
        {
            _898 = _733;
        }
        _899 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_898)).x);
    }
    else
    {
        vec4 _900;
        if ((_219.hazeParams.hazeMode & 2) != 2)
        {
            _900 = vec4(_896.xyz, 1.0 - exp((-_670) * _219.hazeParams.hazeRangeFactor));
        }
        else
        {
            float _798 = (_219.hazeParams.hazeRangeFactor * exp((-_219.hazeParams.hazeHeightFactor) * (_672 - _219.hazeParams.hazeBaseReference))) * _670;
            float _802 = _489.y - _672;
            float _893;
            if (abs(_802) > 0.00999999977648258209228515625)
            {
                float _811 = _219.hazeParams.hazeHeightFactor * _802;
                float _894;
                if (abs(_811) > 1.0000000116860974230803549289703e-07)
                {
                    _894 = _798 * ((1.0 - exp(-_811)) / _811);
                }
                else
                {
                    _894 = _798;
                }
                _893 = _894;
            }
            else
            {
                _893 = _798;
            }
            _900 = vec4(_896.xyz, 1.0 - exp(-_893));
        }
        _899 = _900;
    }
    vec4 _901;
    if (_670 > 27000.0)
    {
        vec4 _888 = _899;
        _888.w = _899.w * _219.hazeParams.backgroundBlend;
        _901 = _888;
    }
    else
    {
        _901 = _899;
    }
    outFragColor = _901;
    if (outFragColor.w < 9.9999997473787516355514526367188e-05)
    {
        discard;
    }
}

