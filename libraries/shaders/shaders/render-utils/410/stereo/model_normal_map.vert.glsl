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
layout(location = 4) out vec3 _tangentWS;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _664;

void main()
{
    float _658;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _658 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _658 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _659;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _659 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _659 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _660;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _660 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _660 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _430 = vec3(_658, _659, _660);
    _color = vec4(_430.x, _430.y, _430.z, _color.w);
    _color.w = inColor.w;
    vec4 _231 = _76._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_231.x, _231.y, _texCoord01.z, _texCoord01.w);
    vec4 _243 = _76._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _243.x, _243.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _511 = 8 * _drawCallInfo.x;
    mat4 _631 = _664;
    _631[0] = texelFetch(transformObjectBuffer, _511);
    mat4 _633 = _631;
    _633[1] = texelFetch(transformObjectBuffer, _511 + 1);
    mat4 _635 = _633;
    _635[2] = texelFetch(transformObjectBuffer, _511 + 2);
    vec4 _533 = texelFetch(transformObjectBuffer, _511 + 3);
    mat4 _637 = _635;
    _637[3] = _533;
    vec3 _260 = _533.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _650 = _637;
    _650[3] = vec4(_260.x, _260.y, _260.z, _533.w);
    vec4 _268 = _650 * inPosition;
    _positionWS = vec4(_268.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _268;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_268.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _321 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _312[_321]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_321] * gl_Position.w);
    vec3 _345 = texelFetch(transformObjectBuffer, _511 + 4).xyz;
    vec3 _349 = texelFetch(transformObjectBuffer, _511 + 5).xyz;
    vec3 _353 = texelFetch(transformObjectBuffer, _511 + 6).xyz;
    _normalWS = vec3(dot(_345, inNormal.xyz), dot(_349, inNormal.xyz), dot(_353, inNormal.xyz));
    _tangentWS = vec3(dot(_345, inTangent.xyz), dot(_349, inTangent.xyz), dot(_353, inTangent.xyz));
}

