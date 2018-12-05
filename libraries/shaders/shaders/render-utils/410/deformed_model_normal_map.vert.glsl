#version 410

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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _243;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _276;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 4) in vec4 inTangent;
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 2) out vec4 _positionWS;
layout(location = 7) out vec4 _positionES;
layout(location = 3) out vec3 _normalWS;
layout(location = 4) out vec3 _tangentWS;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _1170;

void main()
{
    vec4 _1152;
    vec3 _1153;
    vec3 _1154;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _763 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _771 = int(_763.y);
        int _780 = int(_763.z);
        int _785 = int(_763.w);
        _1154 = normalize(inTangent.xyz + vec3(clamp(float(bitfieldExtract(_785, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_785, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_785, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1153 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_780, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_780, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_780, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1152 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_771, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_771, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_771, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_763.x), 0.0);
    }
    else
    {
        _1154 = inTangent.xyz;
        _1153 = inNormal.xyz;
        _1152 = inPosition;
    }
    vec4 _1159;
    vec3 _1160;
    vec3 _1161;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _693 = inSkinClusterIndex;
        vec4 _694 = inSkinClusterWeight;
        vec4 _1156;
        vec4 _1157;
        vec4 _1158;
        _1158 = vec4(0.0);
        _1157 = vec4(0.0);
        _1156 = vec4(0.0);
        for (int _1155 = 0; _1155 < 4; )
        {
            _1158 += ((_276.clusterMatrices[_693[_1155]] * vec4(_1154, 0.0)) * _694[_1155]);
            _1157 += ((_276.clusterMatrices[_693[_1155]] * vec4(_1153, 0.0)) * _694[_1155]);
            _1156 += ((_276.clusterMatrices[_693[_1155]] * _1152) * _694[_1155]);
            _1155++;
            continue;
        }
        _1161 = _1158.xyz;
        _1160 = _1157.xyz;
        _1159 = _1156;
    }
    else
    {
        _1161 = _1154;
        _1160 = _1153;
        _1159 = _1152;
    }
    float _1162;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1162 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1162 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1163;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1163 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1163 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1164;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1164 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1164 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _910 = vec3(_1162, _1163, _1164);
    _color = vec4(_910.x, _910.y, _910.z, _color.w);
    _color.w = inColor.w;
    vec4 _538 = _243._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_538.x, _538.y, _texCoord01.z, _texCoord01.w);
    vec4 _550 = _243._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _550.x, _550.y);
    int _988 = 8 * _drawCallInfo.x;
    mat4 _1125 = _1170;
    _1125[0] = texelFetch(transformObjectBuffer, _988);
    mat4 _1127 = _1125;
    _1127[1] = texelFetch(transformObjectBuffer, _988 + 1);
    mat4 _1129 = _1127;
    _1129[2] = texelFetch(transformObjectBuffer, _988 + 2);
    vec4 _1010 = texelFetch(transformObjectBuffer, _988 + 3);
    mat4 _1131 = _1129;
    _1131[3] = _1010;
    vec3 _567 = _1010.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _1144 = _1131;
    _1144[3] = vec4(_567.x, _567.y, _567.z, _1010.w);
    vec4 _574 = _1144 * _1159;
    _positionWS = vec4(_574.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _574;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_574.xyz, 0.0)).xyz, 1.0);
    vec3 _615 = texelFetch(transformObjectBuffer, _988 + 4).xyz;
    vec3 _619 = texelFetch(transformObjectBuffer, _988 + 5).xyz;
    vec3 _623 = texelFetch(transformObjectBuffer, _988 + 6).xyz;
    _normalWS = vec3(dot(_615, _1160), dot(_619, _1160), dot(_623, _1160));
    _tangentWS = vec3(dot(_615, _1161), dot(_619, _1161), dot(_623, _1161));
}

