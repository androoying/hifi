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

struct ScatteringParameters
{
    vec4 normalBendInfo;
    vec4 curvatureInfo;
    vec4 debugFlags;
};

struct FrustumGrid
{
    float frustumNear;
    float rangeNear;
    float rangeFar;
    float frustumFar;
    ivec3 dims;
    float spare;
    mat4 eyeToGridProj;
    mat4 worldToEyeMat;
    mat4 eyeToWorldMat;
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
} _565;

layout(std140) uniform cameraCorrectionBuffer
{
    CameraCorrection cameraCorrection;
} _572;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _888;

layout(std140) uniform subsurfaceScatteringParametersBuffer
{
    ScatteringParameters parameters;
} _1218;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1496;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1616;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1652;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1713;

uniform sampler2D normalMap;
uniform sampler2D albedoMap;
uniform sampler2D specularMap;
uniform sampler2D depthMap;
uniform sampler2D curvatureMap;
uniform sampler2D diffusedCurvatureMap;
uniform sampler2D scatteringSpecularBeckmann;
uniform sampler2D scatteringLUT;

layout(location = 0) out vec4 _fragColor;
layout(location = 0) in vec4 _texCoord01;

int _5030;
float _5036;
ivec3 _5076;
vec3 _5190;
float _5692;
vec3 _5693;
vec2 _5695;

void main()
{
    _fragColor = vec4(0.0);
    vec4 _2287 = texture(depthMap, _texCoord01.xy);
    vec4 _2313 = texture(normalMap, _texCoord01.xy);
    vec4 _2316 = texture(albedoMap, _texCoord01.xy);
    vec4 _2319 = texture(specularMap, _texCoord01.xy);
    vec3 _2373 = _2313.xyz * 255.0;
    float _2376 = _2373.y * 0.0625;
    vec2 _2397 = clamp((vec2((_2373.x * 16.0) + floor(_2376), (fract(_2376) * 4096.0) + _2373.z) * 0.000488519784994423389434814453125) - vec2(1.0), vec2(-1.0), vec2(1.0));
    float _2403 = _2397.x;
    float _2407 = _2397.y;
    float _2409 = (1.0 - abs(_2403)) - abs(_2407);
    vec3 _2412 = vec3(_2403, _2407, _2409);
    vec3 _5024;
    if (_2409 < 0.0)
    {
        vec2 _2426 = (vec2(1.0) - abs(_2412.yx)) * vec2((_2403 >= 0.0) ? 1.0 : (-1.0), (_2407 >= 0.0) ? 1.0 : (-1.0));
        _5024 = vec3(_2426.x, _2426.y, _2412.z);
    }
    else
    {
        _5024 = _2412;
    }
    vec3 _2430 = normalize(_5024);
    vec3 _2333 = _2316.xyz;
    float _2337 = _2316.w;
    int _5025;
    float _5031;
    if (_2337 <= 0.100000001490116119384765625)
    {
        _5031 = clamp(_2337 * 10.0, 0.0, 1.0);
        _5025 = 1;
    }
    else
    {
        int _5026;
        float _5032;
        if (_2337 <= 0.300000011920928955078125)
        {
            _5032 = clamp((_2337 - 0.20000000298023223876953125) * 10.0, 0.0, 1.0);
            _5026 = 2;
        }
        else
        {
            int _5027;
            float _5033;
            if (_2337 <= 0.5)
            {
                _5033 = clamp((_2337 - 0.4000000059604644775390625) * 10.0, 0.0, 1.0);
                _5027 = 3;
            }
            else
            {
                bool _2469 = _2337 >= 0.60000002384185791015625;
                _5033 = _2469 ? 0.0 : _5036;
                _5027 = _2469 ? 0 : _5030;
            }
            _5032 = _5033;
            _5026 = _5027;
        }
        _5031 = _5032;
        _5025 = _5026;
    }
    bool _2351 = _5025 == 3;
    float _5042;
    if (_2351)
    {
        _5042 = _2319.x;
    }
    else
    {
        _5042 = 0.0;
    }
    vec3 _2475 = vec3(_5031);
    vec3 _2476 = mix(vec3(0.02999999932944774627685546875), _2333, _2475);
    int _5056;
    vec2 _5058;
    if (_565.frameTransform._stereoInfo.x > 0.0)
    {
        bool _2487 = _texCoord01.x > 0.5;
        vec2 _5055;
        if (_2487)
        {
            vec2 _4893 = _texCoord01.xy;
            _4893.x = _texCoord01.x - 0.5;
            _5055 = _4893;
        }
        else
        {
            _5055 = _texCoord01.xy;
        }
        vec2 _4896 = _5055;
        _4896.x = _5055.x * 2.0;
        _5058 = _4896;
        _5056 = int(_2487);
    }
    else
    {
        _5058 = _texCoord01.xy;
        _5056 = 0;
    }
    vec4 _2529 = _565.frameTransform._invProjection[_5056] * vec4((vec3(_5058, _2287.x) * 2.0) - vec3(1.0), 1.0);
    vec4 _2505 = vec4(_2529.xyz / vec3(_2529.w), 1.0);
    if (_5025 == 0)
    {
        discard;
    }
    mat4 _2541 = _565.frameTransform._viewInverse * _572.cameraCorrection._correctionInverse;
    vec4 _2094 = _2541 * _2505;
    vec4 _2546 = _1496.frustumGrid.worldToEyeMat * _2094;
    float _2563 = _2546.z;
    float _5059;
    if (_2563 > 0.0)
    {
        _5059 = -_2563;
    }
    else
    {
        _5059 = _2563;
    }
    float _2660 = _5059 * _1496.frustumGrid.eyeToGridProj[2].x;
    float _2671 = _5059 * _1496.frustumGrid.eyeToGridProj[2].y;
    float _2683 = -_5059;
    vec4 _2689 = vec4((_2546.x * _1496.frustumGrid.eyeToGridProj[0].x) + _2660, (_2546.y * _1496.frustumGrid.eyeToGridProj[1].y) + _2671, _5692, _2683) / vec4(_2683);
    vec3 _2721 = vec3(0.5 * (_2689.x + 1.0), 0.5 * (_2689.y + 1.0), log2(((_2683 - _1496.frustumGrid.rangeNear) / (_1496.frustumGrid.rangeFar - _1496.frustumGrid.rangeNear)) + 1.0)) * vec3(_1496.frustumGrid.dims);
    float _2591 = float(_1496.frustumGrid.dims.z);
    vec3 _5061;
    if (_2721.z >= _2591)
    {
        vec3 _4924 = _2721;
        _4924.z = _2591;
        _5061 = _4924;
    }
    else
    {
        _5061 = _2721;
    }
    vec3 _2600 = floor(_5061);
    ivec3 _2601 = ivec3(_2600);
    bool _2607 = _2563 > (-_1496.frustumGrid.frustumNear);
    bool _2617;
    if (!_2607)
    {
        _2617 = _2563 < (-_1496.frustumGrid.frustumFar);
    }
    else
    {
        _2617 = _2607;
    }
    ivec3 _5068;
    if (_2617)
    {
        _5068 = ivec3(_2601.xy, -2);
    }
    else
    {
        _5068 = _5076;
    }
    bool _5699 = _2617 ? true : false;
    ivec3 _5067;
    if (!_5699)
    {
        bool _2633 = _2563 > (-_1496.frustumGrid.rangeNear);
        ivec3 _5082;
        if (_2633)
        {
            _5082 = ivec3(_2601.xy, -1);
        }
        else
        {
            _5082 = _5068;
        }
        bvec3 _5701 = bvec3(_2633 ? true : _5699);
        _5067 = ivec3(_5701.x ? _5082.x : _2601.x, _5701.y ? _5082.y : _2601.y, _5701.z ? _5082.z : _2601.z);
    }
    else
    {
        _5067 = _5068;
    }
    int _2741 = _5067.x + ((_5067.y + (_5067.z * _1496.frustumGrid.dims.y)) * _1496.frustumGrid.dims.x);
    int _2755 = 255 & (_1616._clusterGridTable[_2741 / 4][_2741 % 4] >> 16);
    int _2760 = 65535 & _1616._clusterGridTable[_2741 / 4][_2741 % 4];
    int _2115 = _2755 + (255 & (_1616._clusterGridTable[_2741 / 4][_2741 % 4] >> 24));
    bool _2767 = _2115 > 0;
    bool _2773;
    if (_2767)
    {
        _2773 = all(greaterThanEqual(_5067, ivec3(0)));
    }
    else
    {
        _2773 = _2767;
    }
    bool _2782;
    if (_2773)
    {
        _2782 = all(lessThan(_5067.xy, _1496.frustumGrid.dims.xy));
    }
    else
    {
        _2782 = _2773;
    }
    bool _2790;
    if (_2782)
    {
        _2790 = _5067.z <= _1496.frustumGrid.dims.z;
    }
    else
    {
        _2790 = _2782;
    }
    if (!_2790)
    {
        discard;
    }
    vec4 _5083;
    vec4 _5084;
    if (_2351)
    {
        vec4 _2826 = texture(curvatureMap, _texCoord01.xy);
        vec4 _2830 = texture(diffusedCurvatureMap, _texCoord01.xy);
        vec3 _2802 = normalize((_2826.xyz - vec3(0.5)) * 2.0);
        vec3 _2810 = normalize((_2830.xyz - vec3(0.5)) * 2.0);
        vec4 _4944 = vec4(_2810.x, _2810.y, _2810.z, _2830.w);
        _4944.w = (_2830.w * 2.0) - 1.0;
        _5084 = _4944;
        _5083 = vec4(_2802.x, _2802.y, _2802.z, _2826.w);
    }
    else
    {
        _5084 = vec4(0.0);
        _5083 = vec4(0.0);
    }
    vec3 _2158 = normalize((_2541 * vec4(-_2505.xyz, 0.0)).xyz);
    float _2840 = mix(0.00999999977648258209228515625, 1.0, _2313.w);
    float _2846 = _2840 * _2840;
    float _2852 = _2846 * _2846;
    float _2857 = clamp(dot(_2430, _2158), 0.0, 1.0);
    float _2878 = 1.0 - _2852;
    float _2882 = _2857 + sqrt(_2852 + ((_2857 * _2857) * _2878));
    vec3 _2175 = _2094.xyz;
    float _2977 = _5042 * _888.lightingModel._ScatteringDiffuseSpecularAlbedo.x;
    bool _2978 = _2977 > 0.0;
    vec3 _5088;
    vec3 _5090;
    vec3 _5337;
    _5337 = _5190;
    _5090 = vec3(0.0);
    _5088 = vec3(0.0);
    vec3 _5388;
    vec3 _5390;
    vec3 _5689;
    for (int _5085 = 0; _5085 < _2755; _5337 = _5689, _5090 = _5390, _5088 = _5388, _5085++)
    {
        int _3214 = _2760 + _5085;
        int _3216 = _3214 >> 1;
        int _5255;
        if ((_3214 & 1) == 1)
        {
            _5255 = _1652._clusterGridContent[_3216 / 4][_3216 % 4] >> 16;
        }
        else
        {
            _5255 = _1652._clusterGridContent[_3216 / 4][_3216 % 4];
        }
        vec3 _3262 = (_1713.lightArray[_5255 & 65535].volume.positionRadius.xyz - _2175).xyz;
        if (!(dot(_3262, _3262) <= (_1713.lightArray[_5255 & 65535].volume.positionRadius.w * _1713.lightArray[_5255 & 65535].volume.positionRadius.w)))
        {
            _5689 = _5337;
            _5390 = _5090;
            _5388 = _5088;
            continue;
        }
        float _3003 = length(_3262);
        vec3 _3016 = (_3262 / vec3(_3003)).xyz;
        float _3017 = dot(_2430, _3016);
        if (_3017 < 0.0)
        {
            _5689 = _5337;
            _5390 = _5090;
            _5388 = _5088;
            continue;
        }
        vec3 _3289 = normalize(_2158 + _3016);
        vec3 _4957 = _5693;
        _4957.x = dot(_2430, _3289);
        vec3 _4959 = _4957;
        _4959.y = _3017;
        vec3 _4961 = _4959;
        _4961.z = dot(_3289, _3016);
        vec3 _3310 = clamp(_4961, vec3(0.0), vec3(1.0));
        float _3312 = _3310.x;
        float _3315 = _3310.y;
        float _3318 = _3310.z;
        float _3334 = (_3003 / _1713.lightArray[_5255 & 65535].irradiance.attenuation.x) + 1.0;
        vec3 _3038 = (_1713.lightArray[_5255 & 65535].irradiance.colorIntensity.xyz * _1713.lightArray[_5255 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_3334 * _3334)) * min(1.0, max(0.0, -(_3003 - _1713.lightArray[_5255 & 65535].irradiance.attenuation.y))));
        vec3 _5361;
        vec3 _5362;
        vec3 _5690;
        if (_2978)
        {
            bool _3466 = _1218.parameters.debugFlags.y > 0.0;
            vec3 _5335;
            if (_3466)
            {
                _5335 = (_5084.xyz * 0.5) + vec3(0.5);
            }
            else
            {
                _5335 = _5337;
            }
            bool _5703 = _3466 ? true : false;
            vec3 _5334;
            if (!_5703)
            {
                bool _3470 = _1218.parameters.debugFlags.x > 0.0;
                vec3 _5358;
                if (_3470)
                {
                    vec3 _5332;
                    if (_5084.w > 0.0)
                    {
                        _5332 = vec3(_5084.w, 0.0, 0.0);
                    }
                    else
                    {
                        _5332 = vec3(0.0, 0.0, -_5084.w);
                    }
                    _5358 = _5332;
                }
                else
                {
                    _5358 = _5335;
                }
                vec3 _5357;
                if (!(_3470 ? true : _5703))
                {
                    vec3 _3516 = _1218.parameters.normalBendInfo.xyz * _1218.parameters.normalBendInfo.w;
                    float _3557 = clamp(2.0 * ((abs(_5084.w) * _1218.parameters.curvatureInfo.y) + _1218.parameters.curvatureInfo.x), 0.0, 1.0);
                    _5357 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_3516.x))), _3016) * 0.5) + 0.5, 0.0, 1.0), _3557)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_3516.y))), _3016) * 0.5) + 0.5, 0.0, 1.0), _3557)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_3516.z))), _3016) * 0.5) + 0.5, 0.0, 1.0), _3557)).z);
                }
                else
                {
                    _5357 = _5358;
                }
                _5334 = _5357;
            }
            else
            {
                _5334 = _5335;
            }
            vec3 _3393 = vec3(_5042);
            vec3 _3394 = mix(vec3(_3315), _5334, _3393);
            vec2 _5359;
            if (_3315 > 0.0)
            {
                float _3644 = 1.0 - _3318;
                float _3647 = _3644 * _3644;
                float _3652 = (_3644 * _3647) * _3647;
                float _3658 = _3652 + (0.0280000008642673492431640625 * (1.0 - _3652));
                vec2 _4976 = _5695;
                _4976.x = _3315 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_3312, _2840)).x, 10.0) * _3658) / dot(_3289, _3289), 0.0);
                vec2 _4979 = _4976;
                _4979.y = 1.0 - _3658;
                _5359 = _4979;
            }
            else
            {
                _5359 = vec2(0.0, 1.0);
            }
            _5690 = _5334;
            _5362 = vec3(_5359.x);
            _5361 = (_3394 * _5359.y) * mix(vec3(1.0), _2333, vec3(_888.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
        }
        else
        {
            float _3722 = 1.0 - _3318;
            float _3725 = _3722 * _3722;
            float _3730 = (_3722 * _3725) * _3725;
            vec3 _3737 = vec3(_3730) + (_2476 * (1.0 - _3730));
            float _3753 = ((_3312 * _3312) * (_2852 - 1.0)) + 1.0;
            float _3709 = ((1.0 - _5031) * _3315) * (1.0 - _3737.x);
            _5690 = _5337;
            _5362 = vec4((_3737 * (_2852 / ((_3753 * _3753) * (_2882 * (_3315 + sqrt(_2852 + ((_3315 * _3315) * _2878))))))) * _3315, _3709).xyz;
            _5361 = vec3(_3709) * mix(vec3(1.0), _2333, vec3(_888.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
        }
        _5689 = _5690;
        _5390 = _5090 + (_5362 * _3038);
        _5388 = _5088 + (_5361 * _3038);
        continue;
    }
    vec3 _5087;
    vec3 _5089;
    vec3 _5203;
    _5203 = _5190;
    _5089 = _5090;
    _5087 = _5088;
    vec3 _5389;
    vec3 _5391;
    vec3 _5662;
    for (int _5086 = _2755; _5086 < _2115; _5203 = _5662, _5089 = _5391, _5087 = _5389, _5086++)
    {
        int _3794 = _2760 + _5086;
        int _3796 = _3794 >> 1;
        int _5093;
        if ((_3794 & 1) == 1)
        {
            _5093 = _1652._clusterGridContent[_3796 / 4][_3796 % 4] >> 16;
        }
        else
        {
            _5093 = _1652._clusterGridContent[_3796 / 4][_3796 % 4];
        }
        vec3 _3842 = (_1713.lightArray[_5093 & 65535].volume.positionRadius.xyz - _2175).xyz;
        if (!(dot(_3842, _3842) <= (_1713.lightArray[_5093 & 65535].volume.positionRadius.w * _1713.lightArray[_5093 & 65535].volume.positionRadius.w)))
        {
            _5662 = _5203;
            _5391 = _5089;
            _5389 = _5087;
            continue;
        }
        float _3099 = length(_3842);
        vec3 _3112 = (_3842 / vec3(_3099)).xyz;
        float _3113 = dot(_2430, _3112);
        if (_3113 < 0.0)
        {
            _5662 = _5203;
            _5391 = _5089;
            _5389 = _5087;
            continue;
        }
        float _3871 = max(-dot(_3112, _1713.lightArray[_5093 & 65535].volume.directionSpotCos.xyz), 0.0);
        if (!(_3871 >= _1713.lightArray[_5093 & 65535].volume.directionSpotCos.w))
        {
            _5662 = _5203;
            _5391 = _5089;
            _5389 = _5087;
            continue;
        }
        vec3 _3890 = normalize(_2158 + _3112);
        vec3 _4996 = _5693;
        _4996.x = dot(_2430, _3890);
        vec3 _4998 = _4996;
        _4998.y = _3113;
        vec3 _5000 = _4998;
        _5000.z = dot(_3890, _3112);
        vec3 _3911 = clamp(_5000, vec3(0.0), vec3(1.0));
        float _3913 = _3911.x;
        float _3916 = _3911.y;
        float _3919 = _3911.z;
        float _3935 = (_3099 / _1713.lightArray[_5093 & 65535].irradiance.attenuation.x) + 1.0;
        vec3 _3148 = (_1713.lightArray[_5093 & 65535].irradiance.colorIntensity.xyz * _1713.lightArray[_5093 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_3935 * _3935)) * min(1.0, max(0.0, -(_3099 - _1713.lightArray[_5093 & 65535].irradiance.attenuation.y)))) * pow(_3871, _1713.lightArray[_5093 & 65535].irradiance.attenuation.z));
        vec3 _5228;
        vec3 _5229;
        vec3 _5663;
        if (_2978)
        {
            bool _4076 = _1218.parameters.debugFlags.y > 0.0;
            vec3 _5201;
            if (_4076)
            {
                _5201 = (_5084.xyz * 0.5) + vec3(0.5);
            }
            else
            {
                _5201 = _5203;
            }
            bool _5705 = _4076 ? true : false;
            vec3 _5200;
            if (!_5705)
            {
                bool _4080 = _1218.parameters.debugFlags.x > 0.0;
                vec3 _5225;
                if (_4080)
                {
                    vec3 _5198;
                    if (_5084.w > 0.0)
                    {
                        _5198 = vec3(_5084.w, 0.0, 0.0);
                    }
                    else
                    {
                        _5198 = vec3(0.0, 0.0, -_5084.w);
                    }
                    _5225 = _5198;
                }
                else
                {
                    _5225 = _5201;
                }
                vec3 _5224;
                if (!(_4080 ? true : _5705))
                {
                    vec3 _4126 = _1218.parameters.normalBendInfo.xyz * _1218.parameters.normalBendInfo.w;
                    float _4167 = clamp(2.0 * ((abs(_5084.w) * _1218.parameters.curvatureInfo.y) + _1218.parameters.curvatureInfo.x), 0.0, 1.0);
                    _5224 = vec3(texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_4126.x))), _3112) * 0.5) + 0.5, 0.0, 1.0), _4167)).x, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_4126.y))), _3112) * 0.5) + 0.5, 0.0, 1.0), _4167)).y, texture(scatteringLUT, vec2(clamp((dot(normalize(mix(_5083.xyz, _5084.xyz, vec3(_4126.z))), _3112) * 0.5) + 0.5, 0.0, 1.0), _4167)).z);
                }
                else
                {
                    _5224 = _5225;
                }
                _5200 = _5224;
            }
            else
            {
                _5200 = _5201;
            }
            vec3 _4003 = vec3(_5042);
            vec3 _4004 = mix(vec3(_3916), _5200, _4003);
            vec2 _5226;
            if (_3916 > 0.0)
            {
                float _4254 = 1.0 - _3919;
                float _4257 = _4254 * _4254;
                float _4262 = (_4254 * _4257) * _4257;
                float _4268 = _4262 + (0.0280000008642673492431640625 * (1.0 - _4262));
                vec2 _5016 = _5695;
                _5016.x = _3916 * max((pow(2.0 * texture(scatteringSpecularBeckmann, vec2(_3913, _2840)).x, 10.0) * _4268) / dot(_3890, _3890), 0.0);
                vec2 _5019 = _5016;
                _5019.y = 1.0 - _4268;
                _5226 = _5019;
            }
            else
            {
                _5226 = vec2(0.0, 1.0);
            }
            _5663 = _5200;
            _5229 = vec3(_5226.x);
            _5228 = (_4004 * _5226.y) * mix(vec3(1.0), _2333, vec3(_888.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
        }
        else
        {
            float _4332 = 1.0 - _3919;
            float _4335 = _4332 * _4332;
            float _4340 = (_4332 * _4335) * _4335;
            vec3 _4347 = vec3(_4340) + (_2476 * (1.0 - _4340));
            float _4363 = ((_3913 * _3913) * (_2852 - 1.0)) + 1.0;
            float _4319 = ((1.0 - _5031) * _3916) * (1.0 - _4347.x);
            _5663 = _5203;
            _5229 = vec4((_4347 * (_2852 / ((_4363 * _4363) * (_2882 * (_3916 + sqrt(_2852 + ((_3916 * _3916) * _2878))))))) * _3916, _4319).xyz;
            _5228 = vec3(_4319) * mix(vec3(1.0), _2333, vec3(_888.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
        }
        _5662 = _5663;
        _5391 = _5089 + (_5229 * _3148);
        _5389 = _5087 + (_5228 * _3148);
        continue;
    }
    vec3 _3201 = (_5087 * _888.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + (_5089 * _888.lightingModel._ScatteringDiffuseSpecularAlbedo.z);
    _fragColor = vec4(_3201.x, _3201.y, _3201.z, vec4(0.0).w);
}

