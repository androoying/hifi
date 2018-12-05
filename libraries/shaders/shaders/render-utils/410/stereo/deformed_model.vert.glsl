#version 410

out float gl_ClipDistance[1];

const vec4 _575[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
} _244;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _276;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 2) out vec4 _positionWS;
layout(location = 7) out vec4 _positionES;
layout(location = 3) out vec3 _normalWS;
layout(location = 4) in vec4 inTangent;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _1080;

void main()
{
    vec4 _1065;
    vec3 _1066;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _721 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _728 = int(_721.y);
        int _737 = int(_721.z);
        _1066 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_737, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_737, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_737, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1065 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_728, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_728, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_728, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_721.x), 0.0);
    }
    else
    {
        _1066 = inNormal.xyz;
        _1065 = inPosition;
    }
    vec4 _1070;
    vec3 _1071;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _664 = inSkinClusterIndex;
        vec4 _665 = inSkinClusterWeight;
        vec4 _1068;
        vec4 _1069;
        _1069 = vec4(0.0);
        _1068 = vec4(0.0);
        for (int _1067 = 0; _1067 < 4; )
        {
            _1069 += ((_276.clusterMatrices[_664[_1067]] * vec4(_1066, 0.0)) * _665[_1067]);
            _1068 += ((_276.clusterMatrices[_664[_1067]] * _1065) * _665[_1067]);
            _1067++;
            continue;
        }
        _1071 = _1069.xyz;
        _1070 = _1068;
    }
    else
    {
        _1071 = _1066;
        _1070 = _1065;
    }
    float _1072;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1072 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1072 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1073;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1073 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1073 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1074;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1074 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1074 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _831 = vec3(_1072, _1073, _1074);
    _color = vec4(_831.x, _831.y, _831.z, _color.w);
    _color.w = inColor.w;
    vec4 _496 = _244._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_496.x, _496.y, _texCoord01.z, _texCoord01.w);
    vec4 _508 = _244._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _508.x, _508.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _912 = 8 * _drawCallInfo.x;
    mat4 _1041 = _1080;
    _1041[0] = texelFetch(transformObjectBuffer, _912);
    mat4 _1043 = _1041;
    _1043[1] = texelFetch(transformObjectBuffer, _912 + 1);
    mat4 _1045 = _1043;
    _1045[2] = texelFetch(transformObjectBuffer, _912 + 2);
    vec4 _934 = texelFetch(transformObjectBuffer, _912 + 3);
    mat4 _1047 = _1045;
    _1047[3] = _934;
    vec3 _525 = _934.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _1060 = _1047;
    _1060[3] = vec4(_525.x, _525.y, _525.z, _934.w);
    vec4 _532 = _1060 * _1070;
    _positionWS = vec4(_532.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _532;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_532.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _583 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _575[_583]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_583] * gl_Position.w);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _912 + 4).xyz, _1071), dot(texelFetch(transformObjectBuffer, _912 + 5).xyz, _1071), dot(texelFetch(transformObjectBuffer, _912 + 6).xyz, _1071));
}

