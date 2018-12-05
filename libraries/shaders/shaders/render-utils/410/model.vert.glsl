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

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _76;

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 0) in vec4 inPosition;
layout(location = 2) out vec4 _positionWS;
layout(location = 7) out vec4 _positionES;
layout(location = 3) out vec3 _normalWS;
layout(location = 1) in vec4 inNormal;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _586;

void main()
{
    float _580;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _580 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _580 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _581;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _581 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _581 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _582;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _582 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _582 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _361 = vec3(_580, _581, _582);
    _color = vec4(_361.x, _361.y, _361.z, _color.w);
    _color.w = inColor.w;
    vec4 _224 = _76._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_224.x, _224.y, _texCoord01.z, _texCoord01.w);
    vec4 _236 = _76._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _236.x, _236.y);
    int _439 = 8 * _drawCallInfo.x;
    mat4 _556 = _586;
    _556[0] = texelFetch(transformObjectBuffer, _439);
    mat4 _558 = _556;
    _558[1] = texelFetch(transformObjectBuffer, _439 + 1);
    mat4 _560 = _558;
    _560[2] = texelFetch(transformObjectBuffer, _439 + 2);
    vec4 _461 = texelFetch(transformObjectBuffer, _439 + 3);
    mat4 _562 = _560;
    _562[3] = _461;
    vec3 _253 = _461.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _575 = _562;
    _575[3] = vec4(_253.x, _253.y, _253.z, _461.w);
    vec4 _261 = _575 * inPosition;
    _positionWS = vec4(_261.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _261;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_261.xyz, 0.0)).xyz, 1.0);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _439 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _439 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _439 + 6).xyz, inNormal.xyz));
}

