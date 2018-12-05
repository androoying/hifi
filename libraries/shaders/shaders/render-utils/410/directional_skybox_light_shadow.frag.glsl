#version 410

struct ShadowTransform
{
    mat4 reprojection;
    float fixedBias;
    float slopeBias;
    float _padding1;
    float _padding2;
};

struct ShadowParameters
{
    ShadowTransform cascades[4];
    int cascadeCount;
    float invMapSize;
    float invCascadeBlendWidth;
    float maxDistance;
    float invFalloffDistance;
};

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

struct SphericalHarmonics
{
    vec4 L00;
    vec4 L1m1;
    vec4 L10;
    vec4 L11;
    vec4 L2m2;
    vec4 L2m1;
    vec4 L20;
    vec4 L21;
    vec4 L22;
};

struct LightAmbient
{
    vec4 _ambient;
    SphericalHarmonics _ambientSphere;
    mat4 transform;
};

struct ScatteringParameters
{
    vec4 normalBendInfo;
    vec4 curvatureInfo;
    vec4 debugFlags;
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

layout(std140) uniform shadowTransformBuffer
{
    ShadowParameters shadow;
} _411;

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _1125;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _1131;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _1412;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _1450;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _1474;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _1819;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2003;

uniform sampler2DArrayShadow shadowMaps;
uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D specularMap;
uniform sampler2D obscuranceMap;
uniform sampler2D depthMap;
uniform sampler2D scatteringSpecularBeckmann;
uniform sampler2D scatteringLUT;
uniform samplerCube skyboxMap;
uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 _fragColor;

int _5892;
float _5898;
vec3 _5958;
bvec4 _6039;
vec4 _6040;
vec3 _6041;
vec2 _6042;

void main()
{
    vec4 _2684 = texture(depthMap, _texCoord01.xy);
    vec4 _2710 = texture(normalMap, _texCoord01.xy);
    vec4 _2713 = texture(albedoMap, _texCoord01.xy);
    vec4 _2716 = texture(specularMap, _texCoord01.xy);
    vec4 _2719 = texture(obscuranceMap, _texCoord01.xy);
    vec3 _2770 = _2710.xyz * 255.0;
    float _2773 = _2770.y * 0.0625;
    vec2 _2794 = clamp((vec2((_2770.x * 16.0) + floor(_2773), (fract(_2773) * 4096.0) + _2770.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _2800 = _2794.x;
    float _2804 = _2794.y;
    float _2806 = (1.0 - abs(_2800)) - abs(_2804);
    vec3 _2809 = vec3(_2800, _2804, _2806);
    vec3 _5886;
    if (_2806 < 0.0)
    {
        vec2 _2823 = (vec2(1.0) - abs(_2809.yx)) * vec2((_2800 >= 0.0) ? 1.0 : (-1.0), (_2804 >= 0.0) ? 1.0 : (-1.0));
        _5886 = vec3(_2823.x, _2823.y, _2809.z);
    }
    else
    {
        _5886 = _2809;
    }
    vec3 _2827 = normalize(_5886);
    vec3 _2730 = _2713.xyz;
    float _2734 = _2713.w;
    int _5887;
    float _5893;
    if (_2734 <= 0.100000001490116119384765625)
    {
        _5893 = clamp(_2734 * 10.0, 0.0, 1.0);
        _5887 = 1;
    }
    else
    {
        int _5888;
        float _5894;
        if (_2734 <= 0.300000011920928955078125)
        {
            _5894 = clamp((_2734 - 0.20000000298023223876953125) * 10.0, 0.0, 1.0);
            _5888 = 2;
        }
        else
        {
            int _5889;
            float _5895;
            if (_2734 <= 0.5)
            {
                _5895 = clamp((_2734 - 0.4000000059604644775390625) * 10.0, 0.0, 1.0);
                _5889 = 3;
            }
            else
            {
                bool _2866 = _2734 >= 0.60000002384185791015625;
                _5895 = _2866 ? 0.0 : _5898;
                _5889 = _2866 ? 0 : _5892;
            }
            _5894 = _5895;
            _5888 = _5889;
        }
        _5893 = _5894;
        _5887 = _5888;
    }
    float _2744 = min(_2716.w, _2719.x);
    bool _2748 = _5887 == 3;
    float _5904;
    if (_2748)
    {
        _5904 = _2716.x;
    }
    else
    {
        _5904 = 0.0;
    }
    vec3 _2872 = vec3(_5893);
    vec3 _2873 = mix(vec3(0.02999999932944774627685546875), _2730, _2872);
    int _5918;
    vec2 _5920;
    if (_1125.frameTransform._stereoInfo.x > 0.0)
    {
        bool _2884 = _texCoord01.x > 0.5;
        vec2 _5917;
        if (_2884)
        {
            vec2 _5708 = _texCoord01.xy;
            _5708.x = _texCoord01.x - 0.5;
            _5917 = _5708;
        }
        else
        {
            _5917 = _texCoord01.xy;
        }
        vec2 _5711 = _5917;
        _5711.x = _5917.x * 2.0;
        _5920 = _5711;
        _5918 = int(_2884);
    }
    else
    {
        _5920 = _texCoord01.xy;
        _5918 = 0;
    }
    vec4 _2926 = _1125.frameTransform._invProjection[_5918] * vec4((vec3(_5920, _2684.x) * 2.0) - vec3(1.0), 1.0);
    vec3 _2932 = _2926.xyz / vec3(_2926.w);
    mat4 _2938 = _1125.frameTransform._viewInverse * _1131.cameraCorrection._correctionInverse;
    vec4 _2511 = _2938 * vec4(_2932, 1.0);
    ivec2 _3183 = ivec2(gl_FragCoord.xy) & ivec2(1);
    ivec2 _5717 = _3183;
    _5717.y = (_3183.x + _3183.y) & 1;
    vec2 _3193 = vec2(_5717);
    vec3 _3200 = vec3(_3193 + vec2(-1.5, 0.5), 0.0) * _411.shadow.invMapSize;
    vec3 _3211 = vec3(_3193 + vec2(0.5), 0.0) * _411.shadow.invMapSize;
    vec3 _3222 = vec3(_3193 + vec2(-1.5), 0.0) * _411.shadow.invMapSize;
    vec3 _3233 = vec3(_3193 + vec2(0.5, -1.5), 0.0) * _411.shadow.invMapSize;
    float _3016 = 1.0 - clamp(dot(_1450.light.volume.directionSpotCos.xyz, _2827), 0.0, 1.0);
    vec4 _2970[4];
    for (int _5921 = 0; _5921 < _411.shadow.cascadeCount; )
    {
        _2970[_5921] = vec4((_411.shadow.cascades[_5921].reprojection * _2511).xyz, 1.0);
        _5921++;
        continue;
    }
    bool _3272 = all(greaterThan(_2970[0].xy, vec2(0.0))) && all(lessThan(_2970[0].xy, vec2(1.0)));
    bvec4 _5719 = _6039;
    _5719.x = _3272;
    bool _3286 = all(greaterThan(_2970[1].xy, vec2(0.0))) && all(lessThan(_2970[1].xy, vec2(1.0)));
    bvec4 _5721 = _5719;
    _5721.y = _3286;
    bool _3300 = all(greaterThan(_2970[2].xy, vec2(0.0))) && all(lessThan(_2970[2].xy, vec2(1.0)));
    bvec4 _5723 = _5721;
    _5723.z = _3300;
    bool _3314 = all(greaterThan(_2970[3].xy, vec2(0.0))) && all(lessThan(_2970[3].xy, vec2(1.0)));
    bvec4 _5725 = _5723;
    _5725.w = _3314;
    vec4 _5933;
    if (_3272)
    {
        vec4 _5729 = _2970[0];
        _5729.z = _2970[0].z - (_411.shadow.cascades[0].fixedBias + (_411.shadow.cascades[0].slopeBias * _3016));
        vec3 _3362 = _5729.xyz + _3200;
        float _3398 = _3362.z;
        vec3 _3369 = _5729.xyz + _3211;
        float _3411 = _3369.z;
        vec3 _3377 = _5729.xyz + _3222;
        float _3424 = _3377.z;
        vec3 _3385 = _5729.xyz + _3233;
        float _3437 = _3385.z;
        vec4 _5735 = vec4(1.0);
        _5735.x = 0.25 * (((texture(shadowMaps, vec4(vec4(_3362.xy, 0.0, _3398).xyz, _3398)) + texture(shadowMaps, vec4(vec4(_3369.xy, 0.0, _3411).xyz, _3411))) + texture(shadowMaps, vec4(vec4(_3377.xy, 0.0, _3424).xyz, _3424))) + texture(shadowMaps, vec4(vec4(_3385.xy, 0.0, _3437).xyz, _3437)));
        _5933 = _5735;
    }
    else
    {
        _5933 = vec4(1.0);
    }
    vec4 _5934;
    if (_3286)
    {
        vec4 _5739 = _2970[1];
        _5739.z = _2970[1].z - (_411.shadow.cascades[1].fixedBias + (_411.shadow.cascades[1].slopeBias * _3016));
        vec3 _3490 = _5739.xyz + _3200;
        float _3526 = _3490.z;
        vec3 _3497 = _5739.xyz + _3211;
        float _3539 = _3497.z;
        vec3 _3505 = _5739.xyz + _3222;
        float _3552 = _3505.z;
        vec3 _3513 = _5739.xyz + _3233;
        float _3565 = _3513.z;
        vec4 _5745 = _5933;
        _5745.y = 0.25 * (((texture(shadowMaps, vec4(vec4(_3490.xy, 1.0, _3526).xyz, _3526)) + texture(shadowMaps, vec4(vec4(_3497.xy, 1.0, _3539).xyz, _3539))) + texture(shadowMaps, vec4(vec4(_3505.xy, 1.0, _3552).xyz, _3552))) + texture(shadowMaps, vec4(vec4(_3513.xy, 1.0, _3565).xyz, _3565)));
        _5934 = _5745;
    }
    else
    {
        _5934 = _5933;
    }
    vec4 _5935;
    if (_3300)
    {
        vec4 _5749 = _2970[2];
        _5749.z = _2970[2].z - (_411.shadow.cascades[2].fixedBias + (_411.shadow.cascades[2].slopeBias * _3016));
        vec3 _3618 = _5749.xyz + _3200;
        float _3654 = _3618.z;
        vec3 _3625 = _5749.xyz + _3211;
        float _3667 = _3625.z;
        vec3 _3633 = _5749.xyz + _3222;
        float _3680 = _3633.z;
        vec3 _3641 = _5749.xyz + _3233;
        float _3693 = _3641.z;
        vec4 _5755 = _5934;
        _5755.z = 0.25 * (((texture(shadowMaps, vec4(vec4(_3618.xy, 2.0, _3654).xyz, _3654)) + texture(shadowMaps, vec4(vec4(_3625.xy, 2.0, _3667).xyz, _3667))) + texture(shadowMaps, vec4(vec4(_3633.xy, 2.0, _3680).xyz, _3680))) + texture(shadowMaps, vec4(vec4(_3641.xy, 2.0, _3693).xyz, _3693)));
        _5935 = _5755;
    }
    else
    {
        _5935 = _5934;
    }
    vec4 _5963;
    if (_3314)
    {
        vec4 _5759 = _2970[3];
        _5759.z = _2970[3].z - (_411.shadow.cascades[3].fixedBias + (_411.shadow.cascades[3].slopeBias * _3016));
        vec3 _3746 = _5759.xyz + _3200;
        float _3782 = _3746.z;
        vec3 _3753 = _5759.xyz + _3211;
        float _3795 = _3753.z;
        vec3 _3761 = _5759.xyz + _3222;
        float _3808 = _3761.z;
        vec3 _3769 = _5759.xyz + _3233;
        float _3821 = _3769.z;
        vec4 _5765 = _5935;
        _5765.w = 0.25 * (((texture(shadowMaps, vec4(vec4(_3746.xy, 3.0, _3782).xyz, _3782)) + texture(shadowMaps, vec4(vec4(_3753.xy, 3.0, _3795).xyz, _3795))) + texture(shadowMaps, vec4(vec4(_3761.xy, 3.0, _3808).xyz, _3808))) + texture(shadowMaps, vec4(vec4(_3769.xy, 3.0, _3821).xyz, _3821)));
        _5963 = _5765;
    }
    else
    {
        _5963 = _5935;
    }
    vec2 _3834 = vec2(1.0) - _2970[0].xy;
    vec4 _5771 = _6040;
    _5771.x = clamp(min(min(_2970[0].x, _2970[0].y), min(_3834.x, _3834.y)) * _411.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3862 = vec2(1.0) - _2970[1].xy;
    vec4 _5777 = _5771;
    _5777.y = clamp(min(min(_2970[1].x, _2970[1].y), min(_3862.x, _3862.y)) * _411.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3890 = vec2(1.0) - _2970[2].xy;
    vec4 _5783 = _5777;
    _5783.z = clamp(min(min(_2970[2].x, _2970[2].y), min(_3890.x, _3890.y)) * _411.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3918 = vec2(1.0) - _2970[3].xy;
    vec4 _5789 = _5783;
    _5789.w = clamp(min(min(_2970[3].x, _2970[3].y), min(_3918.x, _3918.y)) * _411.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec4 _3106 = vec4(_5725.x ? _5789.x : vec4(0.0).x, _5725.y ? _5789.y : vec4(0.0).y, _5725.z ? _5789.z : vec4(0.0).z, _5725.w ? _5789.w : vec4(0.0).w);
    float _3108 = _3106.x;
    float _3110 = _3106.y;
    vec3 _5793 = _6041;
    _5793.x = ((1.0 - _3108) * _3110) / (_3108 + _3110);
    float _3116 = _3106.z;
    vec3 _5797 = _5793;
    _5797.y = ((1.0 - _3110) * _3116) / (_3110 + _3116);
    float _3122 = _3106.w;
    vec3 _5801 = _5797;
    _5801.z = ((1.0 - _3116) * _3122) / (_3116 + _3122);
    vec3 _3130 = mix(_5963.xyz, _5963.yzw, _5801);
    bool _3152 = !any(_5725.xy);
    bool _3158;
    if (_3152)
    {
        _3158 = any(_5725.zw);
    }
    else
    {
        _3158 = _3152;
    }
    float _3159 = _3158 ? _3130.z : 1.0;
    if (_5887 == 0)
    {
        discard;
    }
    else
    {
        if (_5887 == 2)
        {
            discard;
        }
        else
        {
            vec4 _5965;
            vec4 _5966;
            if (_2748)
            {
                vec4 _4010 = texture(curvatureMap, _texCoord01.xy);
                vec4 _4014 = texture(diffusedCurvatureMap, _texCoord01.xy);
                vec3 _3986 = normalize((_4010.xyz - vec3(0.5)) * 2.0);
                vec3 _3994 = normalize((_4014.xyz - vec3(0.5)) * 2.0);
                vec4 _5819 = vec4(_3986.x, _3986.y, _3986.z, _4010.w);
                _5819.w = (_4010.w * 2.0) - 1.0;
                vec4 _5822 = vec4(_3994.x, _3994.y, _3994.z, _4014.w);
                _5822.w = (_4014.w * 2.0) - 1.0;
                _5966 = _5822;
                _5965 = _5819;
            }
            else
            {
                _5966 = vec4(0.0);
                _5965 = vec4(0.0);
            }
            vec3 _4089 = normalize(_2938[3].xyz - vec3(_2511.xyz));
            float _4229 = mix(0.00999999977648258209228515625, 1.0, _2710.w);
            float _4235 = _4229 * _4229;
            float _4241 = _4235 * _4235;
            float _4246 = clamp(dot(_2827, _4089), 0.0, 1.0);
            float _4267 = 1.0 - _4241;
            vec4 _4303 = _1474.lightAmbient.transform * vec4(_2827, 0.0);
            vec4 _4323 = _1474.lightAmbient.transform * vec4(_5966.xyz, 0.0);
            vec3 _4420 = _2873 + ((max(vec3(1.0 - _4229), _2873) - _2873) * pow(1.0 - _4246, 5.0));
            float _4333 = 1.0 - _5893;
            vec4 _4430 = _1474.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
            float _4432 = _4303.x;
            float _4437 = _4303.y;
            vec4 _4445 = _1474.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
            float _4447 = _4303.z;
            vec4 _4455 = _1474.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
            vec4 _4459 = _1474.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
            vec3 _4346 = -reflect((_1474.lightAmbient.transform * vec4(_4089, 0.0)).xyz, _4303.xyz);
            vec2 _4541 = textureQueryLod(skyboxMap, _4346);
            float _4355 = _5904 * _1412.lightingModel._ScatteringDiffuseSpecularAlbedo.x;
            bool _4356 = _4355 > 0.0;
            float _5967;
            vec3 _5968;
            if (_4356)
            {
                float _4584 = _4323.x;
                float _4589 = _4323.y;
                float _4599 = _4323.z;
                _5968 = ((((((_4430 * ((_4584 * _4584) - (_4589 * _4589))) + ((_4445 * _4599) * _4599)) + _4455) - _4459) + (((((_1474.lightAmbient._ambientSphere.L2m2 * _4584) * _4589) + ((_1474.lightAmbient._ambientSphere.L21 * _4584) * _4599)) + ((_1474.lightAmbient._ambientSphere.L2m1 * _4589) * _4599)) * 0.85808598995208740234375)) + ((((_1474.lightAmbient._ambientSphere.L11 * _4584) + (_1474.lightAmbient._ambientSphere.L1m1 * _4589)) + (_1474.lightAmbient._ambientSphere.L10 * _4599)) * 1.02332794666290283203125)).xyz;
                _5967 = min(_2744, min((((1.0 - ((_5966.w * 0.0439999997615814208984375) * (_5966.w * 20.0))) + (_5966.w * 1.5520000457763671875)) + 0.73689997196197509765625) * 0.5, (((1.0 - ((_5965.w * 0.017599999904632568359375) * (_5965.w * 8.0))) + (_5965.w * 0.620800018310546875)) + 0.73689997196197509765625) * 0.5));
            }
            else
            {
                _5968 = ((vec3(1.0) - _4420) * _4333) * ((((((_4430 * ((_4432 * _4432) - (_4437 * _4437))) + ((_4445 * _4447) * _4447)) + _4455) - _4459) + (((((_1474.lightAmbient._ambientSphere.L2m2 * _4432) * _4437) + ((_1474.lightAmbient._ambientSphere.L21 * _4432) * _4447)) + ((_1474.lightAmbient._ambientSphere.L2m1 * _4437) * _4447)) * 0.85808598995208740234375)) + ((((_1474.lightAmbient._ambientSphere.L11 * _4432) + (_1474.lightAmbient._ambientSphere.L1m1 * _4437)) + (_1474.lightAmbient._ambientSphere.L10 * _4447)) * 1.02332794666290283203125)).xyz;
                _5967 = _2744;
            }
            float _4382 = mix(1.0, _5967, _1412.lightingModel._ShowContourObscuranceWireframe.y);
            vec3 _4390 = mix(vec3(1.0), _2730, vec3(_1412.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
            vec3 _4392 = _5968 * _4390;
            float _4395 = (_4382 * _1474.lightAmbient._ambient.x) * _1412.lightingModel._AmbientDirectionalPointSpot.x;
            vec3 _4695 = -_1450.light.volume.directionSpotCos.xyz;
            vec3 _4729 = normalize(_4089 + _4695);
            vec3 _5860 = _6041;
            _5860.x = dot(_2827, _4729);
            vec3 _5862 = _5860;
            _5862.y = dot(_2827, _4695);
            vec3 _5864 = _5862;
            _5864.z = dot(_4729, _4695);
            vec3 _4750 = clamp(_5864, vec3(0.0), vec3(1.0));
            float _4752 = _4750.x;
            float _4755 = _4750.y;
            float _4758 = _4750.z;
            vec3 _6012;
            vec3 _6013;
            if (_4356)
            {
                bool _4881 = _1819.parameters.debugFlags.y > 0.0;
                vec3 _5991;
                if (_4881)
                {
                    _5991 = (_5966.xyz * 0.5) + vec3(0.5);
                }
                else
                {
                    _5991 = _5958;
                }
                bool _6046 = _4881 ? true : false;
                vec3 _5990;
                if (!_6046)
                {
                    bool _4885 = _1819.parameters.debugFlags.x > 0.0;
                    vec3 _6009;
                    if (_4885)
                    {
                        vec3 _5988;
                        if (_5966.w > 0.0)
                        {
                            _5988 = vec3(_5966.w, 0.0, 0.0);
                        }
                        else
                        {
                            _5988 = vec3(0.0, 0.0, -_5966.w);
                        }
                        _6009 = _5988;
                    }
                    else
                    {
                        _6009 = _5991;
                    }
                    vec3 _6008;
                    if (!(_4885 ? true : _6046))
                    {
                        vec3 _4931 = _1819.parameters.normalBendInfo.xyz * _1819.parameters.normalBendInfo.w;
                        float _4972 = clamp(2.0 * ((abs(_5966.w) * _1819.parameters.curvatureInfo.y) + _1819.parameters.curvatureInfo.x), 0.0, 1.0);
                        _6008 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5965.xyz, _5966.xyz, vec3(_4931.x))), _4695) * 0.5) + 0.5, 0.0, 1.0), _4972)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5965.xyz, _5966.xyz, vec3(_4931.y))), _4695) * 0.5) + 0.5, 0.0, 1.0), _4972)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5965.xyz, _5966.xyz, vec3(_4931.z))), _4695) * 0.5) + 0.5, 0.0, 1.0), _4972)).z);
                    }
                    else
                    {
                        _6008 = _6009;
                    }
                    _5990 = _6008;
                }
                else
                {
                    _5990 = _5991;
                }
                vec3 _4796 = vec3(_5904);
                vec3 _4797 = mix(vec3(_4755), _5990, _4796);
                vec2 _6010;
                if (_4755 > 0.0)
                {
                    float _5059 = 1.0 - _4758;
                    float _5062 = _5059 * _5059;
                    float _5067 = (_5059 * _5062) * _5062;
                    float _5073 = _5067 + (0.0280000008642673492431640625 * (1.0 - _5067));
                    vec2 _5876 = _6042;
                    _5876.x = _4755 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_4752, _4229)).x, 10.0) * _5073) / dot(_4729, _4729), 0.0);
                    vec2 _5879 = _5876;
                    _5879.y = 1.0 - _5073;
                    _6010 = _5879;
                }
                else
                {
                    _6010 = vec2(0.0, 1.0);
                }
                _6013 = vec3(_6010.x);
                _6012 = _4797 * _6010.y;
            }
            else
            {
                float _5115 = 1.0 - _4758;
                float _5118 = _5115 * _5115;
                float _5123 = (_5115 * _5118) * _5118;
                vec3 _5130 = vec3(_5123) + (_2873 * (1.0 - _5123));
                float _5146 = ((_4752 * _4752) * (_4241 - 1.0)) + 1.0;
                float _5102 = (_4333 * _4755) * (1.0 - _5130.x);
                _6013 = vec4((_5130 * (_4241 / ((_5146 * _5146) * ((_4246 + sqrt(_4241 + ((_4246 * _4246) * _4267))) * (_4755 + sqrt(_4241 + ((_4755 * _4755) * _4267))))))) * _4755, _5102).xyz;
                _6012 = vec3(_5102);
            }
            vec3 _4821 = _6012 * _4390;
            vec3 _4711 = ((_1450.light.irradiance.colorIntensity.xyz * _1450.light.irradiance.colorIntensity.w) * mix(1.0, min(_3272 ? _3130.x : 1.0, min(((!_3272) && _3286) ? _3130.y : 1.0, _3159)), clamp((_411.shadow.maxDistance - (-_2932.z)) * _411.shadow.invFalloffDistance, 0.0, 1.0))) * _1412.lightingModel._AmbientDirectionalPointSpot.y;
            vec3 _4721 = _6013 * (_4711 * _1412.lightingModel._ScatteringDiffuseSpecularAlbedo.z);
            vec3 _4136 = (((_4392 * (_4395 * _1412.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((textureLod(skyboxMap, _4346, max(max(_1474.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _4229))), 0.0), _4541.x)).xyz * _4420) * (_4395 * _1412.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + (_4821 * (_4711 * _1412.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + _4721;
            bool _4138 = _1412.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
            bool _4145;
            if (_4138)
            {
                _4145 = (_2003.hazeParams.hazeMode & 4) == 4;
            }
            else
            {
                _4145 = _4138;
            }
            vec3 _6031;
            if (_4145)
            {
                float _6029;
                if (_2003.hazeParams.hazeKeyLightAltitudeFactor > 0.0)
                {
                    _6029 = 2.99573230743408203125 / _2003.hazeParams.hazeKeyLightAltitudeFactor;
                }
                else
                {
                    _6029 = 2000.0;
                }
                float _5209 = abs(_1450.light.volume.directionSpotCos.y);
                float _6030;
                if (_5209 < 0.001000000047497451305389404296875)
                {
                    _6030 = _6029 * 999.99993896484375;
                }
                else
                {
                    _6030 = _6029 / _5209;
                }
                _6031 = _4136 * exp(((_2003.hazeParams.hazeKeyLightRangeFactor * exp((-_2003.hazeParams.hazeKeyLightAltitudeFactor) * (_2511.y - _2003.hazeParams.hazeBaseReference))) * _6030) * (-0.31711781024932861328125));
            }
            else
            {
                _6031 = _4136;
            }
            _fragColor = vec4(_6031, 1.0);
        }
    }
}

