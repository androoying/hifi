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

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _63;

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _204;

uniform sampler2D albedoMap;

layout(location = 0) out vec4 _fragColor0;
layout(location = 1) out vec4 _fragColor1;
layout(location = 3) out vec4 _fragColor3;
layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 3) in vec3 _normalWS;
layout(location = 2) out vec4 _fragColor2;

void main()
{
    int _380 = floatBitsToInt(_63._mat._keySpare3.x);
    vec4 _543;
    if ((_380 & 1216) != 0)
    {
        _543 = texture(albedoMap, _texCoord01.xy, -1.0);
    }
    else
    {
        _543 = vec4(1.0);
    }
    float _545;
    if ((_380 & 192) != 0)
    {
        float _544;
        if ((_380 & 64) != 0)
        {
            _544 = step(0.5, _543.w);
        }
        else
        {
            _544 = _543.w;
        }
        _545 = _544;
    }
    else
    {
        _545 = 1.0;
    }
    if (_545 < 1.0)
    {
        discard;
    }
    bvec3 _314 = bvec3((_380 & 4) != 0);
    vec3 _315 = vec3(_314.x ? _63._mat._albedoRoughness.xyz.x : vec3(1.0).x, _314.y ? _63._mat._albedoRoughness.xyz.y : vec3(1.0).y, _314.z ? _63._mat._albedoRoughness.xyz.z : vec3(1.0).z);
    vec3 _548;
    if ((_380 & 1024) != 0)
    {
        _548 = _315 * _543.xyz;
    }
    else
    {
        _548 = _315;
    }
    vec3 _330 = _548 * _color.xyz;
    vec3 _334 = normalize(_normalWS);
    vec3 _337 = _330 * _204.lightingModel._UnlitEmissiveLightmapBackground.x;
    if (_545 != 1.0)
    {
        discard;
    }
    float _400 = _337.x;
    _fragColor0 = vec4(_400, _337.yz, 0.60000002384185791015625);
    float _436 = _334.z;
    vec2 _440 = _334.xy * (1.0 / ((abs(_334.x) + abs(_334.y)) + abs(_436)));
    vec2 _550;
    if (_436 <= 0.0)
    {
        _550 = (vec2(1.0) - abs(_440.yx)) * vec2((_440.x >= 0.0) ? 1.0 : (-1.0), (_440.y >= 0.0) ? 1.0 : (-1.0));
    }
    else
    {
        _550 = _440;
    }
    vec2 _477 = round((clamp(_550, vec2(-1.0), vec2(1.0)) * 2047.0) + vec2(2047.0));
    float _482 = _477.y;
    float _484 = floor(_482 * 0.00390625);
    float _487 = _477.x * 0.0625;
    _fragColor1 = vec4(floor(vec3(_487, (fract(_487) * 256.0) + _484, _482 - (_484 * 256.0))) * vec3(0.0039215688593685626983642578125), 1.0);
    _fragColor3 = vec4(_400, _337.yz, 1.0);
}

