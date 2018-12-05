#version 410

struct Material
{
    vec4 _emissiveOpacity;
    vec4 _albedoRoughness;
    vec4 _metallicScatteringSpare2;
    vec4 _keySpare3;
};

struct TexMapArray
{
    mat4 _texcoordTransforms0;
    mat4 _texcoordTransforms1;
    vec4 _lightmapParams;
};

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
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

struct FadeParameters
{
    vec4 _noiseInvSizeAndLevel;
    vec4 _innerEdgeColor;
    vec4 _outerEdgeColor;
    vec2 _edgeWidthInvWidth;
    float _baseLevel;
    int _isInverted;
};

struct FadeObjectParams
{
    vec4 noiseOffset;
    vec4 baseOffset;
    vec4 baseInvSize;
    int category;
    float threshold;
};

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _472;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _768;

layout(std140) uniform frustumGridBuffer
{
    FrustumGrid frustumGrid;
} _1432;

layout(std140) uniform clusterGridBuffer
{
    ivec4 _clusterGridTable[4096];
} _1553;

layout(std140) uniform clusterContentBuffer
{
    ivec4 _clusterGridContent[4096];
} _1589;

layout(std140) uniform lightBuffer
{
    Light lightArray[256];
} _1650;

layout(std140) uniform keyLightBuffer
{
    Light light;
} _2005;

layout(std140) uniform lightAmbientBuffer
{
    LightAmbient lightAmbient;
} _2028;

layout(std140) uniform hazeBuffer
{
    HazeParams hazeParams;
} _2070;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform fadeParametersBuffer
{
    FadeParameters fadeParameters[5];
} _2675;

layout(std140) uniform fadeObjectParametersBuffer
{
    FadeObjectParams fadeObjectParams;
} _2943;

uniform samplerCube skyboxMap;
uniform sampler2D albedoMap;
uniform sampler2D roughnessMap;
uniform sampler2D normalMap;
uniform sampler2D metallicMap;
uniform sampler2D emissiveMap;
uniform sampler2D occlusionMap;
uniform sampler2D fadeMaskMap;

layout(location = 8) flat in int _stereoSide;
layout(location = 2) in vec4 _positionWS;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 7) in vec4 _positionES;
layout(location = 3) in vec3 _normalWS;
layout(location = 4) in vec3 _tangentWS;
layout(location = 0) out vec4 _fragColor;

ivec3 _7583;
float _8353;
vec3 _8354;

void main()
{
    vec3 _3490 = (_positionWS.xyz * _2675.fadeParameters[_2943.fadeObjectParams.category]._noiseInvSizeAndLevel.xyz) + _2943.fadeObjectParams.noiseOffset.xyz;
    vec3 _3492 = floor(_3490);
    vec3 _3494 = fract(_3490);
    vec3 _3502 = (_3494 * _3494) * (vec3(3.0) - (_3494 * 2.0));
    vec3 _3506 = _3492 + vec3(0.0, 1.0, 0.0);
    vec3 _3509 = _3492 + vec3(1.0, 0.0, 0.0);
    vec3 _3512 = _3492 + vec3(1.0, 1.0, 0.0);
    vec3 _3515 = _3492 + vec3(0.0, 0.0, 1.0);
    vec3 _3518 = _3492 + vec3(0.0, 1.0, 1.0);
    vec3 _3521 = _3492 + vec3(1.0, 0.0, 1.0);
    vec3 _3524 = _3492 + vec3(1.0);
    vec4 _3541 = mix(vec4(pow(textureLod(fadeMaskMap, (_3492.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3492.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3506.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3506.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3509.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3509.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3512.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3512.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(pow(textureLod(fadeMaskMap, (_3515.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3515.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3518.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3518.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3521.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3521.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875), pow(textureLod(fadeMaskMap, (_3524.xy * vec2(0.167699992656707763671875, 0.22176499664783477783203125)) + vec2(_3524.z * 0.56099998950958251953125), 0.0).x, 0.4545454680919647216796875)), vec4(_3502.z));
    vec2 _3549 = mix(_3541.xy, _3541.zw, vec2(_3502.x));
    float _3404 = ((((mix(_3549.x, _3549.y, _3502.y) - 0.5) * _2675.fadeParameters[_2943.fadeObjectParams.category]._noiseInvSizeAndLevel.w) + ((length((_positionWS.xyz - _2943.fadeObjectParams.baseOffset.xyz) * _2943.fadeObjectParams.baseInvSize.xyz) - 0.5) * _2675.fadeParameters[_2943.fadeObjectParams.category]._baseLevel)) + 0.5) - _2943.fadeObjectParams.threshold;
    float _7548;
    if (_2675.fadeParameters[_2943.fadeObjectParams.category]._isInverted != 0)
    {
        _7548 = -_3404;
    }
    else
    {
        _7548 = _3404;
    }
    if (_7548 < 0.0)
    {
        discard;
    }
    float _3368 = _7548 * _2675.fadeParameters[_2943.fadeObjectParams.category]._edgeWidthInvWidth.y;
    float _3371 = 1.0 - clamp(_3368, 0.0, 1.0);
    vec4 _3387 = mix(_2675.fadeParameters[_2943.fadeObjectParams.category]._innerEdgeColor, _2675.fadeParameters[_2943.fadeObjectParams.category]._outerEdgeColor, vec4(_3371 * _3371));
    int _3741 = floatBitsToInt(_472._mat._keySpare3.x);
    vec4 _7549;
    if ((_3741 & 1216) != 0)
    {
        _7549 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _7549 = vec4(1.0);
    }
    bool _2994 = (_3741 & 4096) != 0;
    float _7550;
    if (_2994)
    {
        _7550 = texture(roughnessMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7550 = 1.0;
    }
    vec3 _7551;
    if ((_3741 & 8192) != 0)
    {
        vec2 _3759 = (texture(normalMap, _texCoord01.xy, -1.0).xy - vec2(0.5)) * 2.0;
        vec2 _3762 = _3759 * _3759;
        _7551 = vec3(_3759.x, sqrt((1.0 - _3762.x) - _3762.y), _3759.y);
    }
    else
    {
        _7551 = vec3(0.0, 1.0, 0.0);
    }
    bool _3022 = (_3741 & 2048) != 0;
    float _7552;
    if (_3022)
    {
        _7552 = texture(metallicMap, _texCoord01.xy, -1.0).x;
    }
    else
    {
        _7552 = 0.0;
    }
    bool _3036 = (_3741 & 512) != 0;
    vec3 _7553;
    if (_3036)
    {
        _7553 = texture(emissiveMap, _texCoord01.xy, -1.0).xyz;
    }
    else
    {
        _7553 = vec3(0.0);
    }
    float _7554;
    if ((_3741 & 16384) != 0)
    {
        _7554 = texture(occlusionMap, _texCoord01.zw).x;
    }
    else
    {
        _7554 = 1.0;
    }
    float _7556;
    if ((_3741 & 192) != 0)
    {
        float _7555;
        if ((_3741 & 64) != 0)
        {
            _7555 = step(0.5, _7549.w);
        }
        else
        {
            _7555 = _7549.w;
        }
        _7556 = _7555;
    }
    else
    {
        _7556 = 1.0;
    }
    float _3093 = _7556 * (_472._mat._emissiveOpacity.w * _color.w);
    if (_3093 < 9.9999999747524270787835121154785e-07)
    {
        discard;
    }
    bvec3 _3108 = bvec3((_3741 & 4) != 0);
    vec3 _3109 = vec3(_3108.x ? _472._mat._albedoRoughness.xyz.x : vec3(1.0).x, _3108.y ? _472._mat._albedoRoughness.xyz.y : vec3(1.0).y, _3108.z ? _472._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _7559;
    if ((_3741 & 1024) != 0)
    {
        _7559 = _3109 * _7549.xyz;
    }
    else
    {
        _7559 = _3109;
    }
    vec3 _3123 = _7559 * _color.xyz;
    float _3133 = _2994 ? _7550 : _472._mat._albedoRoughness.w;
    float _3143 = _3022 ? _7552 : _472._mat._metallicScatteringSpare2.x;
    vec3 _3807 = mix(vec3(0.02999999932944774627685546875), _3123, vec3(_3143));
    bvec3 _3159 = bvec3(_3036);
    vec3 _3160 = vec3(_3159.x ? _7553.x : _472._mat._emissiveOpacity.xyz.x, _3159.y ? _7553.y : _472._mat._emissiveOpacity.xyz.y, _3159.z ? _7553.z : _472._mat._emissiveOpacity.xyz.z);
    vec3 _3174 = normalize(_normalWS);
    vec3 _3178 = normalize(_tangentWS);
    vec3 _3192 = mix(_7551, vec3(0.0, 1.0, 0.0), vec3(smoothstep(30.0, 100.0, (-_positionES).z)));
    vec3 _3222 = normalize(_cameraBlock._camera[_stereoSide]._viewInverse[3].xyz - _positionWS.xyz);
    vec3 _3225 = normalize(((cross(_3174, _3178) * _3192.x) + (_3174 * _3192.y)) + (_3178 * _3192.z));
    float _3841 = mix(0.00999999977648258209228515625, 1.0, _3133);
    float _3847 = _3841 * _3841;
    float _3853 = _3847 * _3847;
    float _3858 = clamp(dot(_3225, _3222), 0.0, 1.0);
    float _3879 = 1.0 - _3853;
    float _3883 = _3858 + sqrt(_3853 + ((_3858 * _3858) * _3879));
    vec4 _3888 = _1432.frustumGrid.worldToEyeMat * _positionWS;
    float _3905 = _3888.z;
    float _7560;
    if (_3905 > 0.0)
    {
        _7560 = -_3905;
    }
    else
    {
        _7560 = _3905;
    }
    float _4002 = _7560 * _1432.frustumGrid.eyeToGridProj[2].x;
    float _4013 = _7560 * _1432.frustumGrid.eyeToGridProj[2].y;
    float _4025 = -_7560;
    vec4 _4031 = vec4((_3888.x * _1432.frustumGrid.eyeToGridProj[0].x) + _4002, (_3888.y * _1432.frustumGrid.eyeToGridProj[1].y) + _4013, _8353, _4025) / vec4(_4025);
    vec3 _4063 = vec3(0.5 * (_4031.x + 1.0), 0.5 * (_4031.y + 1.0), log2(((_4025 - _1432.frustumGrid.rangeNear) / (_1432.frustumGrid.rangeFar - _1432.frustumGrid.rangeNear)) + 1.0)) * vec3(_1432.frustumGrid.dims);
    float _3933 = float(_1432.frustumGrid.dims.z);
    vec3 _7562;
    if (_4063.z >= _3933)
    {
        vec3 _7401 = _4063;
        _7401.z = _3933;
        _7562 = _7401;
    }
    else
    {
        _7562 = _4063;
    }
    vec3 _3942 = floor(_7562);
    ivec3 _3943 = ivec3(_3942);
    bool _3949 = _3905 > (-_1432.frustumGrid.frustumNear);
    bool _3959;
    if (!_3949)
    {
        _3959 = _3905 < (-_1432.frustumGrid.frustumFar);
    }
    else
    {
        _3959 = _3949;
    }
    ivec3 _7569;
    if (_3959)
    {
        _7569 = ivec3(_3943.xy, -2);
    }
    else
    {
        _7569 = _7583;
    }
    bool _8357 = _3959 ? true : false;
    ivec3 _7568;
    if (!_8357)
    {
        bool _3975 = _3905 > (-_1432.frustumGrid.rangeNear);
        ivec3 _7585;
        if (_3975)
        {
            _7585 = ivec3(_3943.xy, -1);
        }
        else
        {
            _7585 = _7569;
        }
        bvec3 _8359 = bvec3(_3975 ? true : _8357);
        _7568 = ivec3(_8359.x ? _7585.x : _3943.x, _8359.y ? _7585.y : _3943.y, _8359.z ? _7585.z : _3943.z);
    }
    else
    {
        _7568 = _7569;
    }
    int _4083 = _7568.x + ((_7568.y + (_7568.z * _1432.frustumGrid.dims.y)) * _1432.frustumGrid.dims.x);
    int _4097 = 255 & (_1553._clusterGridTable[_4083 / 4][_4083 % 4] >> 16);
    int _4102 = 65535 & _1553._clusterGridTable[_4083 / 4][_4083 % 4];
    int _3253 = _4097 + (255 & (_1553._clusterGridTable[_4083 / 4][_4083 % 4] >> 24));
    bool _4109 = _3253 > 0;
    bool _4115;
    if (_4109)
    {
        _4115 = all(greaterThanEqual(_7568, ivec3(0)));
    }
    else
    {
        _4115 = _4109;
    }
    bool _4124;
    if (_4115)
    {
        _4124 = all(lessThan(_7568.xy, _1432.frustumGrid.dims.xy));
    }
    else
    {
        _4124 = _4115;
    }
    bool _4132;
    if (_4124)
    {
        _4132 = _7568.z <= _1432.frustumGrid.dims.z;
    }
    else
    {
        _4132 = _4124;
    }
    vec4 _7621;
    if (_4132)
    {
        vec3 _7610;
        vec3 _7612;
        _7612 = vec3(0.0);
        _7610 = vec3(0.0);
        vec3 _7992;
        vec3 _7994;
        for (int _7607 = 0; _7607 < _4097; _7612 = _7994, _7610 = _7992, _7607++)
        {
            int _4464 = _4102 + _7607;
            int _4466 = _4464 >> 1;
            int _7855;
            if ((_4464 & 1) == 1)
            {
                _7855 = _1589._clusterGridContent[_4466 / 4][_4466 % 4] >> 16;
            }
            else
            {
                _7855 = _1589._clusterGridContent[_4466 / 4][_4466 % 4];
            }
            vec3 _4512 = (_1650.lightArray[_7855 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_4512, _4512) <= (_1650.lightArray[_7855 & 65535].volume.positionRadius.w * _1650.lightArray[_7855 & 65535].volume.positionRadius.w)))
            {
                _7994 = _7612;
                _7992 = _7610;
                continue;
            }
            float _4253 = length(_4512);
            vec3 _4266 = (_4512 / vec3(_4253)).xyz;
            float _4267 = dot(_3225, _4266);
            if (_4267 < 0.0)
            {
                _7994 = _7612;
                _7992 = _7610;
                continue;
            }
            vec3 _4539 = normalize(_3222 + _4266);
            vec3 _7428 = _8354;
            _7428.x = dot(_3225, _4539);
            vec3 _7430 = _7428;
            _7430.y = _4267;
            vec3 _7432 = _7430;
            _7432.z = dot(_4539, _4266);
            vec3 _4560 = clamp(_7432, vec3(0.0), vec3(1.0));
            float _4562 = _4560.x;
            float _4565 = _4560.y;
            float _4584 = (_4253 / _1650.lightArray[_7855 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4288 = (_1650.lightArray[_7855 & 65535].irradiance.colorIntensity.xyz * _1650.lightArray[_7855 & 65535].irradiance.colorIntensity.w) * ((1.0 / (_4584 * _4584)) * min(1.0, max(0.0, -(_4253 - _1650.lightArray[_7855 & 65535].irradiance.attenuation.y))));
            float _4972 = 1.0 - _4560.z;
            float _4975 = _4972 * _4972;
            float _4980 = (_4972 * _4975) * _4975;
            vec3 _4987 = vec3(_4980) + (_3807 * (1.0 - _4980));
            float _5003 = ((_4562 * _4562) * (_3853 - 1.0)) + 1.0;
            float _4959 = ((1.0 - _3143) * _4565) * (1.0 - _4987.x);
            _7994 = _7612 + (vec4((_4987 * (_3853 / ((_5003 * _5003) * (_3883 * (_4565 + sqrt(_3853 + ((_4565 * _4565) * _3879))))))) * _4565, _4959).xyz * _4288);
            _7992 = _7610 + ((vec3(_4959) * mix(vec3(1.0), _3123, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4288);
            continue;
        }
        vec3 _7609;
        vec3 _7611;
        _7611 = _7612;
        _7609 = _7610;
        vec3 _7993;
        vec3 _7995;
        for (int _7608 = _4097; _7608 < _3253; _7611 = _7995, _7609 = _7993, _7608++)
        {
            int _5044 = _4102 + _7608;
            int _5046 = _5044 >> 1;
            int _7689;
            if ((_5044 & 1) == 1)
            {
                _7689 = _1589._clusterGridContent[_5046 / 4][_5046 % 4] >> 16;
            }
            else
            {
                _7689 = _1589._clusterGridContent[_5046 / 4][_5046 % 4];
            }
            vec3 _5092 = (_1650.lightArray[_7689 & 65535].volume.positionRadius.xyz - _positionWS.xyz).xyz;
            if (!(dot(_5092, _5092) <= (_1650.lightArray[_7689 & 65535].volume.positionRadius.w * _1650.lightArray[_7689 & 65535].volume.positionRadius.w)))
            {
                _7995 = _7611;
                _7993 = _7609;
                continue;
            }
            float _4349 = length(_5092);
            vec3 _4362 = (_5092 / vec3(_4349)).xyz;
            float _4363 = dot(_3225, _4362);
            if (_4363 < 0.0)
            {
                _7995 = _7611;
                _7993 = _7609;
                continue;
            }
            float _5121 = max(-dot(_4362, _1650.lightArray[_7689 & 65535].volume.directionSpotCos.xyz), 0.0);
            if (!(_5121 >= _1650.lightArray[_7689 & 65535].volume.directionSpotCos.w))
            {
                _7995 = _7611;
                _7993 = _7609;
                continue;
            }
            vec3 _5140 = normalize(_3222 + _4362);
            vec3 _7467 = _8354;
            _7467.x = dot(_3225, _5140);
            vec3 _7469 = _7467;
            _7469.y = _4363;
            vec3 _7471 = _7469;
            _7471.z = dot(_5140, _4362);
            vec3 _5161 = clamp(_7471, vec3(0.0), vec3(1.0));
            float _5163 = _5161.x;
            float _5166 = _5161.y;
            float _5185 = (_4349 / _1650.lightArray[_7689 & 65535].irradiance.attenuation.x) + 1.0;
            vec3 _4398 = (_1650.lightArray[_7689 & 65535].irradiance.colorIntensity.xyz * _1650.lightArray[_7689 & 65535].irradiance.colorIntensity.w) * (((1.0 / (_5185 * _5185)) * min(1.0, max(0.0, -(_4349 - _1650.lightArray[_7689 & 65535].irradiance.attenuation.y)))) * pow(_5121, _1650.lightArray[_7689 & 65535].irradiance.attenuation.z));
            float _5582 = 1.0 - _5161.z;
            float _5585 = _5582 * _5582;
            float _5590 = (_5582 * _5585) * _5585;
            vec3 _5597 = vec3(_5590) + (_3807 * (1.0 - _5590));
            float _5613 = ((_5163 * _5163) * (_3853 - 1.0)) + 1.0;
            float _5569 = ((1.0 - _3143) * _5166) * (1.0 - _5597.x);
            _7995 = _7611 + (vec4((_5597 * (_3853 / ((_5613 * _5613) * (_3883 * (_5166 + sqrt(_3853 + ((_5166 * _5166) * _3879))))))) * _5166, _5569).xyz * _4398);
            _7993 = _7609 + ((vec3(_5569) * mix(vec3(1.0), _3123, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w))) * _4398);
            continue;
        }
        vec3 _4451 = (_7609 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y).xyz + ((_7611 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z) / vec3(_3093));
        _7621 = vec4(_4451.x, _4451.y, _4451.z, vec4(0.0).w);
    }
    else
    {
        _7621 = vec4(0.0);
    }
    vec4 _5857 = _2028.lightAmbient.transform * vec4(_3225, 0.0);
    vec3 _5937 = _3807 + ((max(vec3(1.0 - _3841), _3807) - _3807) * pow(1.0 - _3858, 5.0));
    float _5877 = 1.0 - _3143;
    vec4 _5947 = _2028.lightAmbient._ambientSphere.L22 * 0.429042994976043701171875;
    float _5949 = _5857.x;
    float _5954 = _5857.y;
    vec4 _5962 = _2028.lightAmbient._ambientSphere.L20 * 0.743125021457672119140625;
    float _5964 = _5857.z;
    vec4 _5972 = _2028.lightAmbient._ambientSphere.L00 * 0.88622701168060302734375;
    vec4 _5976 = _2028.lightAmbient._ambientSphere.L20 * 0.2477079927921295166015625;
    vec3 _5890 = -reflect((_2028.lightAmbient.transform * vec4(_3222, 0.0)).xyz, _5857.xyz);
    vec3 _7632;
    if (_2028.lightAmbient._ambient.y > 0.0)
    {
        _7632 = textureLod(skyboxMap, _5890, max(max(_2028.lightAmbient._ambient.y - (12.0 / (1.0 + (11.0 * _3841))), 0.0), textureQueryLod(skyboxMap, _5890).x)).xyz;
    }
    else
    {
        float _6096 = _5890.x;
        float _6101 = _5890.y;
        float _6111 = _5890.z;
        _7632 = ((((((_5947 * ((_6096 * _6096) - (_6101 * _6101))) + ((_5962 * _6111) * _6111)) + _5972) - _5976) + (((((_2028.lightAmbient._ambientSphere.L2m2 * _6096) * _6101) + ((_2028.lightAmbient._ambientSphere.L21 * _6096) * _6111)) + ((_2028.lightAmbient._ambientSphere.L2m1 * _6101) * _6111)) * 0.85808598995208740234375)) + ((((_2028.lightAmbient._ambientSphere.L11 * _6096) + (_2028.lightAmbient._ambientSphere.L1m1 * _6101)) + (_2028.lightAmbient._ambientSphere.L10 * _6111)) * 1.02332794666290283203125)).xyz;
    }
    vec3 _5896 = _7632 * _5937;
    float _5899 = mix(1.0, _7554, _768.lightingModel._ShowContourObscuranceWireframe.y);
    vec3 _5907 = mix(vec3(1.0), _3123, vec3(_768.lightingModel._ScatteringDiffuseSpecularAlbedo.w));
    float _5912 = (_5899 * _2028.lightAmbient._ambient.x) * _768.lightingModel._AmbientDirectionalPointSpot.x;
    vec3 _6204 = -_2005.light.volume.directionSpotCos.xyz;
    vec3 _6235 = normalize(_3222 + _6204);
    vec3 _7530 = _8354;
    _7530.x = dot(_3225, _6235);
    vec3 _7532 = _7530;
    _7532.y = dot(_3225, _6204);
    vec3 _7534 = _7532;
    _7534.z = dot(_6235, _6204);
    vec3 _6256 = clamp(_7534, vec3(0.0), vec3(1.0));
    float _6258 = _6256.x;
    float _6261 = _6256.y;
    float _6326 = 1.0 - _6256.z;
    float _6329 = _6326 * _6326;
    float _6334 = (_6326 * _6329) * _6329;
    vec3 _6341 = vec3(_6334) + (_3807 * (1.0 - _6334));
    float _6357 = ((_6258 * _6258) * (_3853 - 1.0)) + 1.0;
    float _6313 = (_5877 * _6261) * (1.0 - _6341.x);
    vec3 _6217 = ((_2005.light.irradiance.colorIntensity.xyz * _2005.light.irradiance.colorIntensity.w) * 1.0) * _768.lightingModel._AmbientDirectionalPointSpot.y;
    vec3 _5737 = ((_7621.xyz + ((_3160 + ((_3387.xyz * step(_3368, 1.0)) * _3387.w)) * _768.lightingModel._UnlitEmissiveLightmapBackground.y)) + ((((((vec3(1.0) - _5937) * _5877) * ((((((_5947 * ((_5949 * _5949) - (_5954 * _5954))) + ((_5962 * _5964) * _5964)) + _5972) - _5976) + (((((_2028.lightAmbient._ambientSphere.L2m2 * _5949) * _5954) + ((_2028.lightAmbient._ambientSphere.L21 * _5949) * _5964)) + ((_2028.lightAmbient._ambientSphere.L2m1 * _5954) * _5964)) * 0.85808598995208740234375)) + ((((_2028.lightAmbient._ambientSphere.L11 * _5949) + (_2028.lightAmbient._ambientSphere.L1m1 * _5954)) + (_2028.lightAmbient._ambientSphere.L10 * _5964)) * 1.02332794666290283203125)).xyz) * _5907) * (_5912 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y)) + ((vec3(_6313) * _5907) * (_6217 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.y)))) + (((_5896 * (_5912 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z)) + (vec4((_6341 * (_3853 / ((_6357 * _6357) * (_3883 * (_6261 + sqrt(_3853 + ((_6261 * _6261) * _3879))))))) * _6261, _6313).xyz * (_6217 * _768.lightingModel._ScatteringDiffuseSpecularAlbedo.z))) / vec3(_3093));
    bool _5739 = _768.lightingModel._HazeBloomSkinningBlendshape.x > 0.0;
    bool _5746;
    if (_5739)
    {
        _5746 = (_2070.hazeParams.hazeMode & 1) == 1;
    }
    else
    {
        _5746 = _5739;
    }
    vec3 _7678;
    if (_5746)
    {
        float _6432 = length(_positionES.xyz);
        vec4 _6440 = vec4(_2070.hazeParams.hazeColor, 1.0);
        vec4 _7664;
        if ((_2070.hazeParams.hazeMode & 16) == 16)
        {
            _7664 = mix(_6440, vec4(_2070.hazeParams.hazeGlareColor, 1.0), vec4(min(1.0, pow(max(0.0, dot(normalize(_positionWS.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz), _6204)), _2070.hazeParams.hazeGlareBlend))));
        }
        else
        {
            _7664 = _6440;
        }
        vec4 _7667;
        if ((_2070.hazeParams.hazeMode & 8) == 8)
        {
            vec3 _6495 = (_2070.hazeParams.colorModulationFactor * exp((-_2070.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2070.hazeParams.hazeBaseReference))) * _6432;
            float _6499 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
            vec3 _7666;
            if (abs(_6499) > 0.00999999977648258209228515625)
            {
                float _6508 = _2070.hazeParams.hazeHeightFactor * _6499;
                _7666 = _6495 * ((1.0 - exp(-_6508)) / _6508);
            }
            else
            {
                _7666 = _6495;
            }
            _7667 = vec4(1.0, 1.0, 1.0, (vec3(1.0) - exp(-_7666)).x);
        }
        else
        {
            vec4 _7668;
            if ((_2070.hazeParams.hazeMode & 2) != 2)
            {
                _7668 = vec4(_7664.xyz, 1.0 - exp((-_6432) * _2070.hazeParams.hazeRangeFactor));
            }
            else
            {
                float _6560 = (_2070.hazeParams.hazeRangeFactor * exp((-_2070.hazeParams.hazeHeightFactor) * (_cameraBlock._camera[_stereoSide]._viewInverse[3].y - _2070.hazeParams.hazeBaseReference))) * _6432;
                float _6564 = _positionWS.y - _cameraBlock._camera[_stereoSide]._viewInverse[3].y;
                float _7661;
                if (abs(_6564) > 0.00999999977648258209228515625)
                {
                    float _6573 = _2070.hazeParams.hazeHeightFactor * _6564;
                    float _7662;
                    if (abs(_6573) > 1.0000000116860974230803549289703e-07)
                    {
                        _7662 = _6560 * ((1.0 - exp(-_6573)) / _6573);
                    }
                    else
                    {
                        _7662 = _6560;
                    }
                    _7661 = _7662;
                }
                else
                {
                    _7661 = _6560;
                }
                _7668 = vec4(_7664.xyz, 1.0 - exp(-_7661));
            }
            _7667 = _7668;
        }
        vec4 _7669;
        if (_6432 > 27000.0)
        {
            vec4 _7546 = _7667;
            _7546.w = _7667.w * _2070.hazeParams.backgroundBlend;
            _7669 = _7546;
        }
        else
        {
            _7669 = _7667;
        }
        _7678 = mix(_5737, _7669.xyz, vec3(_7669.w));
    }
    else
    {
        _7678 = _5737;
    }
    _fragColor = vec4(_7678, _3093);
}

