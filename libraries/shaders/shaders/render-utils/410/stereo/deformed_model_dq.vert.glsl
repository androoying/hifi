#version 410

out float gl_ClipDistance[1];

const vec4 _855[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
} _249;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _481;

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

mat4 _1679;

void main()
{
    vec4 _1661;
    vec3 _1662;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _997 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _1004 = int(_997.y);
        int _1013 = int(_997.z);
        _1662 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_1013, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1013, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1013, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1661 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_1004, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1004, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1004, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_997.x), 0.0);
    }
    else
    {
        _1662 = inNormal.xyz;
        _1661 = inPosition;
    }
    vec4 _1669;
    vec3 _1670;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _940 = inSkinClusterIndex;
        vec4 _941 = inSkinClusterWeight;
        vec4 _1664;
        vec4 _1665;
        vec4 _1666;
        vec4 _1667;
        _1667 = vec4(0.0);
        _1666 = vec4(0.0);
        _1665 = vec4(0.0);
        _1664 = vec4(0.0);
        float _1086;
        vec4 _1088;
        vec4 _1090;
        vec4 _1092;
        vec4 _1094;
        float _1696;
        for (int _1663 = 0; _1663 < 4; _1667 += (_1094 * _1086), _1666 += (_1088 * _1086), _1665 += (_1092 * _1696), _1664 += (_1090 * _1696), _1663++)
        {
            _1086 = _941[_1663];
            _1088 = _481.clusterMatrices[_940[_1663]][0];
            _1090 = _481.clusterMatrices[_940[_1663]][1];
            _1092 = _481.clusterMatrices[_940[_1663]][2];
            _1094 = _481.clusterMatrices[_940[_1663]][3];
            if (dot(_1090, _481.clusterMatrices[_940.x][1]) < 0.0)
            {
                _1696 = -_1086;
                continue;
            }
            else
            {
                _1696 = _1086;
                continue;
            }
            continue;
        }
        float _1127 = length(_1664);
        vec4 _1130 = vec4(_1127);
        vec4 _1131 = _1664 / _1130;
        vec4 _1135 = _1665 / _1130;
        float _1178 = _1131.x;
        float _1179 = 2.0 * _1178;
        float _1184 = _1131.y;
        float _1185 = 2.0 * _1184;
        float _1188 = _1185 * _1184;
        float _1190 = _1131.z;
        float _1191 = 2.0 * _1190;
        float _1194 = _1191 * _1190;
        float _1200 = _1179 * _1184;
        float _1206 = _1179 * _1190;
        float _1211 = _1131.w;
        float _1212 = _1179 * _1211;
        float _1218 = _1191 * _1211;
        float _1224 = _1185 * _1190;
        float _1230 = _1185 * _1211;
        float _1246 = 1.0 - (_1179 * _1178);
        float _1266 = -_1135.w;
        float _1271 = _1135.x;
        float _1277 = _1135.y;
        float _1283 = _1135.z;
        mat4 _1364 = mat4(vec4((1.0 - _1188) - _1194, _1200 + _1218, _1206 - _1230, 0.0), vec4(_1200 - _1218, _1246 - _1194, _1224 + _1212, 0.0), vec4(_1206 + _1230, _1224 - _1212, _1246 - _1188, 0.0), vec4(2.0 * ((((_1266 * _1178) + (_1271 * _1211)) - (_1277 * _1190)) + (_1283 * _1184)), 2.0 * ((((_1266 * _1184) + (_1271 * _1190)) + (_1277 * _1211)) - (_1283 * _1178)), 2.0 * ((((_1266 * _1190) - (_1271 * _1184)) + (_1277 * _1178)) + (_1283 * _1211)), 1.0));
        vec4 _1668;
        if (_1666.w > 0.100000001490116119384765625)
        {
            _1668 = _1667;
        }
        else
        {
            vec4 _1632 = _1666;
            _1632.w = 1.0;
            _1668 = _1364 * (_1632 * _1661);
        }
        _1670 = vec3((_1364 * vec4(_1662, 0.0)).xyz);
        _1669 = _1668;
    }
    else
    {
        _1670 = _1662;
        _1669 = _1661;
    }
    float _1671;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1671 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1671 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1672;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1672 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1672 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1673;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1673 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1673 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _1378 = vec3(_1671, _1672, _1673);
    _color = vec4(_1378.x, _1378.y, _1378.z, _color.w);
    _color.w = inColor.w;
    vec4 _776 = _249._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_776.x, _776.y, _texCoord01.z, _texCoord01.w);
    vec4 _788 = _249._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _788.x, _788.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _1459 = 8 * _drawCallInfo.x;
    mat4 _1637 = _1679;
    _1637[0] = texelFetch(transformObjectBuffer, _1459);
    mat4 _1639 = _1637;
    _1639[1] = texelFetch(transformObjectBuffer, _1459 + 1);
    mat4 _1641 = _1639;
    _1641[2] = texelFetch(transformObjectBuffer, _1459 + 2);
    vec4 _1481 = texelFetch(transformObjectBuffer, _1459 + 3);
    mat4 _1643 = _1641;
    _1643[3] = _1481;
    vec3 _805 = _1481.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _1656 = _1643;
    _1656[3] = vec4(_805.x, _805.y, _805.z, _1481.w);
    vec4 _812 = _1656 * _1669;
    _positionWS = vec4(_812.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _812;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_812.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _863 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _855[_863]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_863] * gl_Position.w);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _1459 + 4).xyz, _1670), dot(texelFetch(transformObjectBuffer, _1459 + 5).xyz, _1670), dot(texelFetch(transformObjectBuffer, _1459 + 6).xyz, _1670));
}

