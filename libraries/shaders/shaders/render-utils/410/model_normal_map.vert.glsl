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
layout(location = 4) out vec3 _tangentWS;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _618;

void main()
{
    float _612;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _612 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _612 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _613;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _613 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _613 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _614;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _614 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _614 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _387 = vec3(_612, _613, _614);
    _color = vec4(_387.x, _387.y, _387.z, _color.w);
    _color.w = inColor.w;
    vec4 _224 = _76._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_224.x, _224.y, _texCoord01.z, _texCoord01.w);
    vec4 _236 = _76._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _236.x, _236.y);
    int _465 = 8 * _drawCallInfo.x;
    mat4 _585 = _618;
    _585[0] = texelFetch(transformObjectBuffer, _465);
    mat4 _587 = _585;
    _587[1] = texelFetch(transformObjectBuffer, _465 + 1);
    mat4 _589 = _587;
    _589[2] = texelFetch(transformObjectBuffer, _465 + 2);
    vec4 _487 = texelFetch(transformObjectBuffer, _465 + 3);
    mat4 _591 = _589;
    _591[3] = _487;
    vec3 _253 = _487.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _604 = _591;
    _604[3] = vec4(_253.x, _253.y, _253.z, _487.w);
    vec4 _261 = _604 * inPosition;
    _positionWS = vec4(_261.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _261;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_261.xyz, 0.0)).xyz, 1.0);
    vec3 _302 = texelFetch(transformObjectBuffer, _465 + 4).xyz;
    vec3 _306 = texelFetch(transformObjectBuffer, _465 + 5).xyz;
    vec3 _310 = texelFetch(transformObjectBuffer, _465 + 6).xyz;
    _normalWS = vec3(dot(_302, inNormal.xyz), dot(_306, inNormal.xyz), dot(_310, inNormal.xyz));
    _tangentWS = vec3(dot(_302, inTangent.xyz), dot(_306, inTangent.xyz), dot(_310, inTangent.xyz));
}

