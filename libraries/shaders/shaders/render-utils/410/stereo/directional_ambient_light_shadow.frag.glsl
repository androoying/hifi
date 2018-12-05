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

layout(std140) uniform shadowTransformBuffer
{
    ShadowParameters shadow;
} _395;

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _1109;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _1115;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _1392;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _1426;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _1450;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _1795;

uniform sampler2DArrayShadow shadowMaps;
uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D specularMap;
uniform sampler2D obscuranceMap;
uniform sampler2D depthMap;
uniform sampler2D scatteringSpecularBeckmann;
uniform sampler2D scatteringLUT;
uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;

layout(location = 0) in vec4 _texCoord01;
layout(location = 0) out vec4 _fragColor;

int _5803;
float _5809;
vec3 _5869;
bvec4 _5944;
vec4 _5945;
vec3 _5946;
vec2 _5947;

void main()
{
    vec4 _2553 = texture(depthMap, _texCoord01.xy);
    vec4 _2579 = texture(normalMap, _texCoord01.xy);
    vec4 _2582 = texture(albedoMap, _texCoord01.xy);
    vec4 _2585 = texture(specularMap, _texCoord01.xy);
    vec4 _2588 = texture(obscuranceMap, _texCoord01.xy);
    vec3 _2639 = _2579.xyz * 255.0;
    float _2642 = _2639.y * 0.0625;
    vec2 _2663 = clamp((vec2((_2639.x * 16.0) + floor(_2642), (fract(_2642) * 4096.0) + _2639.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _2669 = _2663.x;
    float _2673 = _2663.y;
    float _2675 = (1.0 - abs(_2669)) - abs(_2673);
    vec3 _2678 = vec3(_2669, _2673, _2675);
    vec3 _5797;
    if (_2675 < 0.0)
    {
        vec2 _2692 = (vec2(1.0) - abs(_2678.yx)) * vec2((_2669 >= 0.0) ? 1.0 : (-1.0), (_2673 >= 0.0) ? 1.0 : (-1.0));
        _5797 = vec3(_2692.x, _2692.y, _2678.z);
    }
    else
    {
        _5797 = _2678;
    }
    vec3 _2696 = normalize(_5797);
    vec3 _2599 = _2582.xyz;
    float _2603 = _2582.w;
    int _5798;
    float _5804;
    if (_2603 <= 0.100000001490116119384765625)
    {
        _5804 = clamp(_2603 * 10.0, 0.0, 1.0);
        _5798 = 1;
    }
    else
    {
        int _5799;
        float _5805;
        if (_2603 <= 0.300000011920928955078125)
        {
            _5805 = clamp((_2603 - 0.20000000298023223876953125) * 10.0, 0.0, 1.0);
            _5799 = 2;
        }
        else
        {
            int _5800;
            float _5806;
            if (_2603 <= 0.5)
            {
                _5806 = clamp((_2603 - 0.4000000059604644775390625) * 10.0, 0.0, 1.0);
                _5800 = 3;
            }
            else
            {
                bool _2735 = _2603 >= 0.60000002384185791015625;
                _5806 = _2735 ? 0.0 : _5809;
                _5800 = _2735 ? 0 : _5803;
            }
            _5805 = _5806;
            _5799 = _5800;
        }
        _5804 = _5805;
        _5798 = _5799;
    }
    float _2613 = min(_2585.w, _2588.x);
    bool _2617 = _5798 == 3;
    float _5815;
    if (_2617)
    {
        _5815 = _2585.x;
    }
    else
    {
        _5815 = 0.0;
    }
    vec3 _2741 = vec3(_5804);
    vec3 _2742 = mix(vec3(0.02999999932944774627685546875), _2599, _2741);
    int _5829;
    vec2 _5831;
    if (_1109.frameTransform._stereoInfo.x > 0.0)
    {
        bool _2753 = _texCoord01.x > 0.5;
        vec2 _5828;
        if (_2753)
        {
            vec2 _5607 = _texCoord01.xy;
            _5607.x = _texCoord01.x - 0.5;
            _5828 = _5607;
        }
        else
        {
            _5828 = _texCoord01.xy;
        }
        vec2 _5610 = _5828;
        _5610.x = _5828.x * 2.0;
        _5831 = _5610;
        _5829 = int(_2753);
    }
    else
    {
        _5831 = _texCoord01.xy;
        _5829 = 0;
    }
    vec4 _2795 = _1109.frameTransform._invProjection[_5829] * vec4((vec3(_5831, _2553.x) * 2.0) - vec3(1.0), 1.0);
    vec3 _2801 = _2795.xyz / vec3(_2795.w);
    mat4 _2807 = _1109.frameTransform._viewInverse * _1115.cameraCorrection._correctionInverse;
    ivec2 _3052 = ivec2(gl_FragCoord.xy) & ivec2(1);
    ivec2 _5616 = _3052;
    _5616.y = (_3052.x + _3052.y) & 1;
    vec2 _3062 = vec2(_5616);
    vec3 _3069 = vec3(_3062 + vec2(-1.5, 0.5), 0.0) * _395.shadow.invMapSize;
    vec3 _3080 = vec3(_3062 + vec2(0.5), 0.0) * _395.shadow.invMapSize;
    vec3 _3091 = vec3(_3062 + vec2(-1.5), 0.0) * _395.shadow.invMapSize;
    vec3 _3102 = vec3(_3062 + vec2(0.5, -1.5), 0.0) * _395.shadow.invMapSize;
    float _2885 = 1.0 - clamp(dot(_1426.light.volume.directionSpotCos.xyz, _2696), 0.0, 1.0);
    vec4 _2839[4];
    for (int _5832 = 0; _5832 < _395.shadow.cascadeCount; )
    {
        _2839[_5832] = vec4((_395.shadow.cascades[_5832].reprojection * (_2807 * vec4(_2801, 1.0))).xyz, 1.0);
        _5832++;
        continue;
    }
    bool _3141 = all(greaterThan(_2839[0].xy, vec2(0.0))) && all(lessThan(_2839[0].xy, vec2(1.0)));
    bvec4 _5618 = _5944;
    _5618.x = _3141;
    bool _3155 = all(greaterThan(_2839[1].xy, vec2(0.0))) && all(lessThan(_2839[1].xy, vec2(1.0)));
    bvec4 _5620 = _5618;
    _5620.y = _3155;
    bool _3169 = all(greaterThan(_2839[2].xy, vec2(0.0))) && all(lessThan(_2839[2].xy, vec2(1.0)));
    bvec4 _5622 = _5620;
    _5622.z = _3169;
    bool _3183 = all(greaterThan(_2839[3].xy, vec2(0.0))) && all(lessThan(_2839[3].xy, vec2(1.0)));
    bvec4 _5624 = _5622;
    _5624.w = _3183;
    vec4 _5844;
    if (_3141)
    {
        vec4 _5628 = _2839[0];
        _5628.z = _2839[0].z - (_395.shadow.cascades[0].fixedBias + (_395.shadow.cascades[0].slopeBias * _2885));
        vec3 _3231 = _5628.xyz + _3069;
        float _3267 = _3231.z;
        vec3 _3238 = _5628.xyz + _3080;
        float _3280 = _3238.z;
        vec3 _3246 = _5628.xyz + _3091;
        float _3293 = _3246.z;
        vec3 _3254 = _5628.xyz + _3102;
        float _3306 = _3254.z;
        vec4 _5634 = vec4(1.0);
        _5634.x = 0.25 * (((texture(shadowMaps, vec4(vec4(_3231.xy, 0.0, _3267).xyz, _3267)) + texture(shadowMaps, vec4(vec4(_3238.xy, 0.0, _3280).xyz, _3280))) + texture(shadowMaps, vec4(vec4(_3246.xy, 0.0, _3293).xyz, _3293))) + texture(shadowMaps, vec4(vec4(_3254.xy, 0.0, _3306).xyz, _3306)));
        _5844 = _5634;
    }
    else
    {
        _5844 = vec4(1.0);
    }
    vec4 _5845;
    if (_3155)
    {
        vec4 _5638 = _2839[1];
        _5638.z = _2839[1].z - (_395.shadow.cascades[1].fixedBias + (_395.shadow.cascades[1].slopeBias * _2885));
        vec3 _3359 = _5638.xyz + _3069;
        float _3395 = _3359.z;
        vec3 _3366 = _5638.xyz + _3080;
        float _3408 = _3366.z;
        vec3 _3374 = _5638.xyz + _3091;
        float _3421 = _3374.z;
        vec3 _3382 = _5638.xyz + _3102;
        float _3434 = _3382.z;
        vec4 _5644 = _5844;
        _5644.y = 0.25 * (((texture(shadowMaps, vec4(vec4(_3359.xy, 1.0, _3395).xyz, _3395)) + texture(shadowMaps, vec4(vec4(_3366.xy, 1.0, _3408).xyz, _3408))) + texture(shadowMaps, vec4(vec4(_3374.xy, 1.0, _3421).xyz, _3421))) + texture(shadowMaps, vec4(vec4(_3382.xy, 1.0, _3434).xyz, _3434)));
        _5845 = _5644;
    }
    else
    {
        _5845 = _5844;
    }
    vec4 _5846;
    if (_3169)
    {
        vec4 _5648 = _2839[2];
        _5648.z = _2839[2].z - (_395.shadow.cascades[2].fixedBias + (_395.shadow.cascades[2].slopeBias * _2885));
        vec3 _3487 = _5648.xyz + _3069;
        float _3523 = _3487.z;
        vec3 _3494 = _5648.xyz + _3080;
        float _3536 = _3494.z;
        vec3 _3502 = _5648.xyz + _3091;
        float _3549 = _3502.z;
        vec3 _3510 = _5648.xyz + _3102;
        float _3562 = _3510.z;
        vec4 _5654 = _5845;
        _5654.z = 0.25 * (((texture(shadowMaps, vec4(vec4(_3487.xy, 2.0, _3523).xyz, _3523)) + texture(shadowMaps, vec4(vec4(_3494.xy, 2.0, _3536).xyz, _3536))) + texture(shadowMaps, vec4(vec4(_3502.xy, 2.0, _3549).xyz, _3549))) + texture(shadowMaps, vec4(vec4(_3510.xy, 2.0, _3562).xyz, _3562)));
        _5846 = _5654;
    }
    else
    {
        _5846 = _5845;
    }
    vec4 _5874;
    if (_3183)
    {
        vec4 _5658 = _2839[3];
        _5658.z = _2839[3].z - (_395.shadow.cascades[3].fixedBias + (_395.shadow.cascades[3].slopeBias * _2885));
        vec3 _3615 = _5658.xyz + _3069;
        float _3651 = _3615.z;
        vec3 _3622 = _5658.xyz + _3080;
        float _3664 = _3622.z;
        vec3 _3630 = _5658.xyz + _3091;
        float _3677 = _3630.z;
        vec3 _3638 = _5658.xyz + _3102;
        float _3690 = _3638.z;
        vec4 _5664 = _5846;
        _5664.w = 0.25 * (((texture(shadowMaps, vec4(vec4(_3615.xy, 3.0, _3651).xyz, _3651)) + texture(shadowMaps, vec4(vec4(_3622.xy, 3.0, _3664).xyz, _3664))) + texture(shadowMaps, vec4(vec4(_3630.xy, 3.0, _3677).xyz, _3677))) + texture(shadowMaps, vec4(vec4(_3638.xy, 3.0, _3690).xyz, _3690)));
        _5874 = _5664;
    }
    else
    {
        _5874 = _5846;
    }
    vec2 _3703 = vec2(1.0) - _2839[0].xy;
    vec4 _5670 = _5945;
    _5670.x = clamp(min(min(_2839[0].x, _2839[0].y), min(_3703.x, _3703.y)) * _395.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3731 = vec2(1.0) - _2839[1].xy;
    vec4 _5676 = _5670;
    _5676.y = clamp(min(min(_2839[1].x, _2839[1].y), min(_3731.x, _3731.y)) * _395.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3759 = vec2(1.0) - _2839[2].xy;
    vec4 _5682 = _5676;
    _5682.z = clamp(min(min(_2839[2].x, _2839[2].y), min(_3759.x, _3759.y)) * _395.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec2 _3787 = vec2(1.0) - _2839[3].xy;
    vec4 _5688 = _5682;
    _5688.w = clamp(min(min(_2839[3].x, _2839[3].y), min(_3787.x, _3787.y)) * _395.shadow.invCascadeBlendWidth, 0.0, 1.0);
    vec4 _2975 = vec4(_5624.x ? _5688.x : vec4(0.0).x, _5624.y ? _5688.y : vec4(0.0).y, _5624.z ? _5688.z : vec4(0.0).z, _5624.w ? _5688.w : vec4(0.0).w);
    float _2977 = _2975.x;
    float _2979 = _2975.y;
    vec3 _5692 = _5946;
    _5692.x = ((1.0 - _2977) * _2979) / (_2977 + _2979);
    float _2985 = _2975.z;
    vec3 _5696 = _5692;
    _5696.y = ((1.0 - _2979) * _2985) / (_2979 + _2985);
    float _2991 = _2975.w;
    vec3 _5700 = _5696;
    _5700.z = ((1.0 - _2985) * _2991) / (_2985 + _2991);
    vec3 _2999 = mix(_5874.xyz, _5874.yzw, _5700);
    bool _3021 = !any(_5624.xy);
    bool _3027;
    if (_3021)
    {
        _3027 = any(_5624.zw);
    }
    else
    {
        _3027 = _3021;
    }
    float _3028 = _3027 ? _2999.z : 1.0;
    if (_5798 == 0)
    {
        discard;
    }
    else
    {
        if (_5798 == 2)
        {
            discard;
        }
        else
        {
            vec4 _5876;
            vec4 _5877;
            if (_2617)
            {
                vec4 _3879 = texture(curvatureMap, _texCoord01.xy);
                vec4 _3883 = texture(diffusedCurvatureMap, _texCoord01.xy);
                vec3 _3855 = normalize((_3879.xyz - vec3(0.5)) * 2.0);
                vec3 _3863 = normalize((_3883.xyz - vec3(0.5)) * 2.0);
                vec4 _5718 = vec4(_3855.x, _3855.y, _3855.z, _3879.w);
                _5718.w = (_3879.w * 2.0) - 1.0;
                vec4 _5721 = vec4(_3863.x, _3863.y, _3863.z, _3883.w);
                _5721.w = (_3883.w * 2.0) - 1.0;
                _5877 = _5721;
                _5876 = _5718;
            }
            else
            {
                _5877 = vec4(0.0);
                _5876 = vec4(0.0);
            }
            vec3 _3955 = normalize(_2807[3].xyz - vec3((_2807 * vec4(_2801, 1.0)).xyz));
            float _4080 = mix(0.00999999977648258209228515625, 1.0, _2579.w);
            float _4086 = _4080 * _4080;
            float _4092 = _4086 * _4086;
            float _4097 = clamp(dot(_2696, _3955), 0.0, 1.0);
            float _4118 = 1.0 - _4092;
            vec4 _4154 = _1450.lightAmbient.transform * vec4(_2696, 0.0);
            vec4 _4174 = _1450.lightAmbient.transform * vec4(_5877.xyz, 0.0);
            vec3 _4271 = _2742 + ((max(vec3(1.0 - _4080), _2742) - _2742) * pow(1.0 - _4097, 5.0));
            float _4184 = 1.0 - _5804;
            vec4 _4281 = _1450.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
            float _4283 = _4154.x;
            float _4288 = _4154.y;
            vec4 _4296 = _1450.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
            float _4298 = _4154.z;
            vec4 _4306 = _1450.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
            vec4 _4310 = _1450.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
            vec3 _4197 = -reflect((_1450.lightAmbient.transform * vec4(_3955, 0.0)).xyz, _4154.xyz);
            float _4382 = _4197.x;
            float _4387 = _4197.y;
            float _4397 = _4197.z;
            float _4206 = _5815 * _1392.lightingModel._ScatteringDiffuseSpecularAlbedo.x;
            bool _4207 = _4206 > 0.0;
            float _5878;
            vec3 _5879;
            if (_4207)
            {
                float _4493 = _4174.x;
                float _4498 = _4174.y;
                float _4508 = _4174.z;
                _5879 = ((((((_4281 * ((_4493 * _4493) - (_4498 * _4498))) + ((_4296 * _4508) * _4508)) + _4306) - _4310) + (((((_1450.lightAmbient._ambientSphere.L2m2 * _4493) * _4498) + ((_1450.lightAmbient._ambientSphere.L21 * _4493) * _4508)) + ((_1450.lightAmbient._ambientSphere.L2m1 * _4498) * _4508)) * 0.85808598995208740234375)) + ((((_1450.lightAmbient._ambientSphere.L11 * _4493) + (_1450.lightAmbient._ambientSphere.L1m1 * _4498)) + (_1450.lightAmbient._ambientSphere.L10 * _4508)) * 1.02332794666290283203125)).xyz;
                _5878 = min(_2613, min((((1.0 - ((_5877.w * 0.0439999997615814208984375) * (_5877.w * 20.0))) + (_5877.w * 1.5520000457763671875)) + 0.73689997196197509765625) * 0.5, (((1.0 - ((_5876.w * 0.017599999904632568359375) * (_5876.w * 8.0))) + (_5876.w * 0.620800018310546875)) + 0.73689997196197509765625) * 0.5));
            }
            else
            {
                _5879 = ((vec3(1.0) - _4271) * _4184) * ((((((_4281 * ((_4283 * _4283) - (_4288 * _4288))) + ((_4296 * _4298) * _4298)) + _4306) - _4310) + (((((_1450.lightAmbient._ambientSphere.L2m2 * _4283) * _4288) + ((_1450.lightAmbient._ambientSphere.L21 * _4283) * _4298)) + ((_1450.lightAmbient._ambientSphere.L2m1 * _4288) * _4298)) * 0.85808598995208740234375)) + ((((_1450.lightAmbient._ambientSphere.L11 * _4283) + (_1450.lightAmbient._ambientSphere.L1m1 * _4288)) + (_1450.lightAmbient._ambientSphere.L10 * _4298)) * 1.02332794666290283203125)).xyz;
                _5878 = _2613;
            }
            float _4233 = mix(1.0, _5878, _1392.lightingModel._ShowContourObscuranceWireframe.y);
            vec3 _4241 = mix(vec3(1.0), _2599, vec3(_1392.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
            vec3 _4243 = _5879 * _4241;
            float _4246 = (_4233 * _1450.lightAmbient._ambient.x) * _1392.lightingModel._AmbientDirectionalPointSpot.x;
            vec3 _4604 = -_1426.light.volume.directionSpotCos.xyz;
            vec3 _4638 = normalize(_3955 + _4604);
            vec3 _5773 = _5946;
            _5773.x = dot(_2696, _4638);
            vec3 _5775 = _5773;
            _5775.y = dot(_2696, _4604);
            vec3 _5777 = _5775;
            _5777.z = dot(_4638, _4604);
            vec3 _4659 = clamp(_5777, vec3(0.0), vec3(1.0));
            float _4661 = _4659.x;
            float _4664 = _4659.y;
            float _4667 = _4659.z;
            vec3 _5923;
            vec3 _5924;
            if (_4207)
            {
                bool _4790 = _1795.parameters.debugFlags.y > 0.0;
                vec3 _5902;
                if (_4790)
                {
                    _5902 = (_5877.xyz * 0.5) + vec3(0.5);
                }
                else
                {
                    _5902 = _5869;
                }
                bool _5951 = _4790 ? true : false;
                vec3 _5901;
                if (!_5951)
                {
                    bool _4794 = _1795.parameters.debugFlags.x > 0.0;
                    vec3 _5920;
                    if (_4794)
                    {
                        vec3 _5899;
                        if (_5877.w > 0.0)
                        {
                            _5899 = vec3(_5877.w, 0.0, 0.0);
                        }
                        else
                        {
                            _5899 = vec3(0.0, 0.0, -_5877.w);
                        }
                        _5920 = _5899;
                    }
                    else
                    {
                        _5920 = _5902;
                    }
                    vec3 _5919;
                    if (!(_4794 ? true : _5951))
                    {
                        vec3 _4840 = _1795.parameters.normalBendInfo.xyz * _1795.parameters.normalBendInfo.w;
                        float _4881 = clamp(2.0 * ((abs(_5877.w) * _1795.parameters.curvatureInfo.y) + _1795.parameters.curvatureInfo.x), 0.0, 1.0);
                        _5919 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5876.xyz, _5877.xyz, vec3(_4840.x))), _4604) * 0.5) + 0.5, 0.0, 1.0), _4881)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5876.xyz, _5877.xyz, vec3(_4840.y))), _4604) * 0.5) + 0.5, 0.0, 1.0), _4881)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5876.xyz, _5877.xyz, vec3(_4840.z))), _4604) * 0.5) + 0.5, 0.0, 1.0), _4881)).z);
                    }
                    else
                    {
                        _5919 = _5920;
                    }
                    _5901 = _5919;
                }
                else
                {
                    _5901 = _5902;
                }
                vec3 _4705 = vec3(_5815);
                vec3 _4706 = mix(vec3(_4664), _5901, _4705);
                vec2 _5921;
                if (_4664 > 0.0)
                {
                    float _4968 = 1.0 - _4667;
                    float _4971 = _4968 * _4968;
                    float _4976 = (_4968 * _4971) * _4971;
                    float _4982 = _4976 + (0.0280000008642673492431640625 * (1.0 - _4976));
                    vec2 _5789 = _5947;
                    _5789.x = _4664 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_4661, _4080)).x, 10.0) * _4982) / dot(_4638, _4638), 0.0);
                    vec2 _5792 = _5789;
                    _5792.y = 1.0 - _4982;
                    _5921 = _5792;
                }
                else
                {
                    _5921 = vec2(0.0, 1.0);
                }
                _5924 = vec3(_5921.x);
                _5923 = _4706 * _5921.y;
            }
            else
            {
                float _5024 = 1.0 - _4667;
                float _5027 = _5024 * _5024;
                float _5032 = (_5024 * _5027) * _5027;
                vec3 _5039 = vec3(_5032) + (_2742 * (1.0 - _5032));
                float _5055 = ((_4661 * _4661) * (_4092 - 1.0)) + 1.0;
                float _5011 = (_4184 * _4664) * (1.0 - _5039.x);
                _5924 = vec4((_5039 * (_4092 / ((_5055 * _5055) * ((_4097 + sqrt(_4092 + ((_4097 * _4097) * _4118))) * (_4664 + sqrt(_4092 + ((_4664 * _4664) * _4118))))))) * _4664, _5011).xyz;
                _5923 = vec3(_5011);
            }
            vec3 _4620 = ((_1426.light.irradiance.colorIntensity.xyz * _1426.light.irradiance.colorIntensity.w) * mix(1.0, min(_3141 ? _2999.x : 1.0, min(((!_3141) && _3155) ? _2999.y : 1.0, _3028)), clamp((_395.shadow.maxDistance - (-_2801.z)) * _395.shadow.invFalloffDistance, 0.0, 1.0))) * _1392.lightingModel._AmbientDirectionalPointSpot.y;
            _fragColor = vec4((((_4243 * (_4246 * _1392.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((((((((_4281 * ((_4382 * _4382) - (_4387 * _4387))) + ((_4296 * _4397) * _4397)) + _4306) - _4310) + (((((_1450.lightAmbient._ambientSphere.L2m2 * _4382) * _4387) + ((_1450.lightAmbient._ambientSphere.L21 * _4382) * _4397)) + ((_1450.lightAmbient._ambientSphere.L2m1 * _4387) * _4397)) * 0.85808598995208740234375)) + ((((_1450.lightAmbient._ambientSphere.L11 * _4382) + (_1450.lightAmbient._ambientSphere.L1m1 * _4387)) + (_1450.lightAmbient._ambientSphere.L10 * _4397)) * 1.02332794666290283203125)).xyz * _4271) * (_4246 * _1392.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) + ((_5923 * _4241) * (_4620 * _1392.lightingModel._ScatteringDiffuseSpecularAlbedo.y))) + (_5924 * (_4620 * _1392.lightingModel._ScatteringDiffuseSpecularAlbedo.z)), 1.0);
        }
    }
}

