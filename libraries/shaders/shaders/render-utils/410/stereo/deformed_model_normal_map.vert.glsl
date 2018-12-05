#version 410

out float gl_ClipDistance[1];

const vec4 _624[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform materialBuffer
{
    Material _mat;
    TexMapArray _texMapArray;
} _250;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _283;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
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

mat4 _1214;

void main()
{
    vec4 _1196;
    vec3 _1197;
    vec3 _1198;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _804 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _812 = int(_804.y);
        int _821 = int(_804.z);
        int _826 = int(_804.w);
        _1198 = normalize(inTangent.xyz + vec3(clamp(float(bitfieldExtract(_826, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_826, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_826, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1197 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_821, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_821, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_821, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1196 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_812, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_812, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_812, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_804.x), 0.0);
    }
    else
    {
        _1198 = inTangent.xyz;
        _1197 = inNormal.xyz;
        _1196 = inPosition;
    }
    vec4 _1203;
    vec3 _1204;
    vec3 _1205;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _734 = inSkinClusterIndex;
        vec4 _735 = inSkinClusterWeight;
        vec4 _1200;
        vec4 _1201;
        vec4 _1202;
        _1202 = vec4(0.0);
        _1201 = vec4(0.0);
        _1200 = vec4(0.0);
        for (int _1199 = 0; _1199 < 4; )
        {
            _1202 += ((_283.clusterMatrices[_734[_1199]] * vec4(_1198, 0.0)) * _735[_1199]);
            _1201 += ((_283.clusterMatrices[_734[_1199]] * vec4(_1197, 0.0)) * _735[_1199]);
            _1200 += ((_283.clusterMatrices[_734[_1199]] * _1196) * _735[_1199]);
            _1199++;
            continue;
        }
        _1205 = _1202.xyz;
        _1204 = _1201.xyz;
        _1203 = _1200;
    }
    else
    {
        _1205 = _1198;
        _1204 = _1197;
        _1203 = _1196;
    }
    float _1206;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1206 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1206 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1207;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1207 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1207 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1208;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1208 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1208 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _951 = vec3(_1206, _1207, _1208);
    _color = vec4(_951.x, _951.y, _951.z, _color.w);
    _color.w = inColor.w;
    vec4 _545 = _250._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_545.x, _545.y, _texCoord01.z, _texCoord01.w);
    vec4 _557 = _250._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _557.x, _557.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _1032 = 8 * _drawCallInfo.x;
    mat4 _1169 = _1214;
    _1169[0] = texelFetch(transformObjectBuffer, _1032);
    mat4 _1171 = _1169;
    _1171[1] = texelFetch(transformObjectBuffer, _1032 + 1);
    mat4 _1173 = _1171;
    _1173[2] = texelFetch(transformObjectBuffer, _1032 + 2);
    vec4 _1054 = texelFetch(transformObjectBuffer, _1032 + 3);
    mat4 _1175 = _1173;
    _1175[3] = _1054;
    vec3 _574 = _1054.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _1188 = _1175;
    _1188[3] = vec4(_574.x, _574.y, _574.z, _1054.w);
    vec4 _581 = _1188 * _1203;
    _positionWS = vec4(_581.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _581;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_581.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _632 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _624[_632]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_632] * gl_Position.w);
    vec3 _656 = texelFetch(transformObjectBuffer, _1032 + 4).xyz;
    vec3 _660 = texelFetch(transformObjectBuffer, _1032 + 5).xyz;
    vec3 _664 = texelFetch(transformObjectBuffer, _1032 + 6).xyz;
    _normalWS = vec3(dot(_656, _1204), dot(_660, _1204), dot(_664, _1204));
    _tangentWS = vec3(dot(_656, _1205), dot(_660, _1205), dot(_664, _1205));
}

