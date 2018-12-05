#version 410

out float gl_ClipDistance[1];

const vec4 _312[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
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

mat4 _632;

void main()
{
    float _626;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _626 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _626 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _627;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _627 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _627 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _628;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _628 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _628 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _404 = vec3(_626, _627, _628);
    _color = vec4(_404.x, _404.y, _404.z, _color.w);
    _color.w = inColor.w;
    vec4 _231 = _76._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_231.x, _231.y, _texCoord01.z, _texCoord01.w);
    vec4 _243 = _76._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _243.x, _243.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _485 = 8 * _drawCallInfo.x;
    mat4 _602 = _632;
    _602[0] = texelFetch(transformObjectBuffer, _485);
    mat4 _604 = _602;
    _604[1] = texelFetch(transformObjectBuffer, _485 + 1);
    mat4 _606 = _604;
    _606[2] = texelFetch(transformObjectBuffer, _485 + 2);
    vec4 _507 = texelFetch(transformObjectBuffer, _485 + 3);
    mat4 _608 = _606;
    _608[3] = _507;
    vec3 _260 = _507.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _621 = _608;
    _621[3] = vec4(_260.x, _260.y, _260.z, _507.w);
    vec4 _268 = _621 * inPosition;
    _positionWS = vec4(_268.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _268;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_268.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _321 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _312[_321]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_321] * gl_Position.w);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _485 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _485 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _485 + 6).xyz, inNormal.xyz));
}

