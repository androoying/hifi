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
} _242;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _474;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

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

mat4 _1635;

void main()
{
    vec4 _1617;
    vec3 _1618;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _956 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _963 = int(_956.y);
        int _972 = int(_956.z);
        _1618 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_972, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_972, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_972, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1617 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_963, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_963, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_963, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_956.x), 0.0);
    }
    else
    {
        _1618 = inNormal.xyz;
        _1617 = inPosition;
    }
    vec4 _1625;
    vec3 _1626;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _899 = inSkinClusterIndex;
        vec4 _900 = inSkinClusterWeight;
        vec4 _1620;
        vec4 _1621;
        vec4 _1622;
        vec4 _1623;
        _1623 = vec4(0.0);
        _1622 = vec4(0.0);
        _1621 = vec4(0.0);
        _1620 = vec4(0.0);
        float _1045;
        vec4 _1047;
        vec4 _1049;
        vec4 _1051;
        vec4 _1053;
        float _1652;
        for (int _1619 = 0; _1619 < 4; _1623 += (_1053 * _1045), _1622 += (_1047 * _1045), _1621 += (_1051 * _1652), _1620 += (_1049 * _1652), _1619++)
        {
            _1045 = _900[_1619];
            _1047 = _474.clusterMatrices[_899[_1619]][0];
            _1049 = _474.clusterMatrices[_899[_1619]][1];
            _1051 = _474.clusterMatrices[_899[_1619]][2];
            _1053 = _474.clusterMatrices[_899[_1619]][3];
            if (dot(_1049, _474.clusterMatrices[_899.x][1]) < 0.0)
            {
                _1652 = -_1045;
                continue;
            }
            else
            {
                _1652 = _1045;
                continue;
            }
            continue;
        }
        float _1086 = length(_1620);
        vec4 _1089 = vec4(_1086);
        vec4 _1090 = _1620 / _1089;
        vec4 _1094 = _1621 / _1089;
        float _1137 = _1090.x;
        float _1138 = 2.0 * _1137;
        float _1143 = _1090.y;
        float _1144 = 2.0 * _1143;
        float _1147 = _1144 * _1143;
        float _1149 = _1090.z;
        float _1150 = 2.0 * _1149;
        float _1153 = _1150 * _1149;
        float _1159 = _1138 * _1143;
        float _1165 = _1138 * _1149;
        float _1170 = _1090.w;
        float _1171 = _1138 * _1170;
        float _1177 = _1150 * _1170;
        float _1183 = _1144 * _1149;
        float _1189 = _1144 * _1170;
        float _1205 = 1.0 - (_1138 * _1137);
        float _1225 = -_1094.w;
        float _1230 = _1094.x;
        float _1236 = _1094.y;
        float _1242 = _1094.z;
        mat4 _1323 = mat4(vec4((1.0 - _1147) - _1153, _1159 + _1177, _1165 - _1189, 0.0), vec4(_1159 - _1177, _1205 - _1153, _1183 + _1171, 0.0), vec4(_1165 + _1189, _1183 - _1171, _1205 - _1147, 0.0), vec4(2.0 * ((((_1225 * _1137) + (_1230 * _1170)) - (_1236 * _1149)) + (_1242 * _1143)), 2.0 * ((((_1225 * _1143) + (_1230 * _1149)) + (_1236 * _1170)) - (_1242 * _1137)), 2.0 * ((((_1225 * _1149) - (_1230 * _1143)) + (_1236 * _1137)) + (_1242 * _1170)), 1.0));
        vec4 _1624;
        if (_1622.w > 0.100000001490116119384765625)
        {
            _1624 = _1623;
        }
        else
        {
            vec4 _1588 = _1622;
            _1588.w = 1.0;
            _1624 = _1323 * (_1588 * _1617);
        }
        _1626 = vec3((_1323 * vec4(_1618, 0.0)).xyz);
        _1625 = _1624;
    }
    else
    {
        _1626 = _1618;
        _1625 = _1617;
    }
    float _1627;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1627 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1627 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1628;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1628 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1628 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1629;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1629 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1629 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _1337 = vec3(_1627, _1628, _1629);
    _color = vec4(_1337.x, _1337.y, _1337.z, _color.w);
    _color.w = inColor.w;
    vec4 _769 = _242._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_769.x, _769.y, _texCoord01.z, _texCoord01.w);
    vec4 _781 = _242._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _781.x, _781.y);
    int _1415 = 8 * _drawCallInfo.x;
    mat4 _1593 = _1635;
    _1593[0] = texelFetch(transformObjectBuffer, _1415);
    mat4 _1595 = _1593;
    _1595[1] = texelFetch(transformObjectBuffer, _1415 + 1);
    mat4 _1597 = _1595;
    _1597[2] = texelFetch(transformObjectBuffer, _1415 + 2);
    vec4 _1437 = texelFetch(transformObjectBuffer, _1415 + 3);
    mat4 _1599 = _1597;
    _1599[3] = _1437;
    vec3 _798 = _1437.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _1612 = _1599;
    _1612[3] = vec4(_798.x, _798.y, _798.z, _1437.w);
    vec4 _805 = _1612 * _1625;
    _positionWS = vec4(_805.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _805;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_805.xyz, 0.0)).xyz, 1.0);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _1415 + 4).xyz, _1626), dot(texelFetch(transformObjectBuffer, _1415 + 5).xyz, _1626), dot(texelFetch(transformObjectBuffer, _1415 + 6).xyz, _1626));
}

