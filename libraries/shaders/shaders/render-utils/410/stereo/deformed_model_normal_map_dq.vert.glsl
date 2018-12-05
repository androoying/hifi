#version 410

out float gl_ClipDistance[1];

const vec4 _901[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
} _255;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _487;

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

mat4 _1810;

void main()
{
    vec4 _1790;
    vec3 _1791;
    vec3 _1792;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _1081 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _1089 = int(_1081.y);
        int _1098 = int(_1081.z);
        int _1103 = int(_1081.w);
        _1792 = normalize(inTangent.xyz + vec3(clamp(float(bitfieldExtract(_1103, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1103, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1103, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1791 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_1098, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1098, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1098, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1790 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_1089, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1089, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1089, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_1081.x), 0.0);
    }
    else
    {
        _1792 = inTangent.xyz;
        _1791 = inNormal.xyz;
        _1790 = inPosition;
    }
    vec4 _1799;
    vec3 _1800;
    vec3 _1801;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _1011 = inSkinClusterIndex;
        vec4 _1012 = inSkinClusterWeight;
        vec4 _1794;
        vec4 _1795;
        vec4 _1796;
        vec4 _1797;
        _1797 = vec4(0.0);
        _1796 = vec4(0.0);
        _1795 = vec4(0.0);
        _1794 = vec4(0.0);
        float _1193;
        vec4 _1195;
        vec4 _1197;
        vec4 _1199;
        vec4 _1201;
        float _1830;
        for (int _1793 = 0; _1793 < 4; _1797 += (_1201 * _1193), _1796 += (_1195 * _1193), _1795 += (_1199 * _1830), _1794 += (_1197 * _1830), _1793++)
        {
            _1193 = _1012[_1793];
            _1195 = _487.clusterMatrices[_1011[_1793]][0];
            _1197 = _487.clusterMatrices[_1011[_1793]][1];
            _1199 = _487.clusterMatrices[_1011[_1793]][2];
            _1201 = _487.clusterMatrices[_1011[_1793]][3];
            if (dot(_1197, _487.clusterMatrices[_1011.x][1]) < 0.0)
            {
                _1830 = -_1193;
                continue;
            }
            else
            {
                _1830 = _1193;
                continue;
            }
            continue;
        }
        float _1234 = length(_1794);
        vec4 _1237 = vec4(_1234);
        vec4 _1238 = _1794 / _1237;
        vec4 _1242 = _1795 / _1237;
        float _1296 = _1238.x;
        float _1297 = 2.0 * _1296;
        float _1302 = _1238.y;
        float _1303 = 2.0 * _1302;
        float _1306 = _1303 * _1302;
        float _1308 = _1238.z;
        float _1309 = 2.0 * _1308;
        float _1312 = _1309 * _1308;
        float _1318 = _1297 * _1302;
        float _1324 = _1297 * _1308;
        float _1329 = _1238.w;
        float _1330 = _1297 * _1329;
        float _1336 = _1309 * _1329;
        float _1342 = _1303 * _1308;
        float _1348 = _1303 * _1329;
        float _1364 = 1.0 - (_1297 * _1296);
        float _1384 = -_1242.w;
        float _1389 = _1242.x;
        float _1395 = _1242.y;
        float _1401 = _1242.z;
        mat4 _1482 = mat4(vec4((1.0 - _1306) - _1312, _1318 + _1336, _1324 - _1348, 0.0), vec4(_1318 - _1336, _1364 - _1312, _1342 + _1330, 0.0), vec4(_1324 + _1348, _1342 - _1330, _1364 - _1306, 0.0), vec4(2.0 * ((((_1384 * _1296) + (_1389 * _1329)) - (_1395 * _1308)) + (_1401 * _1302)), 2.0 * ((((_1384 * _1302) + (_1389 * _1308)) + (_1395 * _1329)) - (_1401 * _1296)), 2.0 * ((((_1384 * _1308) - (_1389 * _1302)) + (_1395 * _1296)) + (_1401 * _1329)), 1.0));
        vec4 _1798;
        if (_1796.w > 0.100000001490116119384765625)
        {
            _1798 = _1797;
        }
        else
        {
            vec4 _1758 = _1796;
            _1758.w = 1.0;
            _1798 = _1482 * (_1758 * _1790);
        }
        _1801 = vec3((_1482 * vec4(_1792, 0.0)).xyz);
        _1800 = vec3((_1482 * vec4(_1791, 0.0)).xyz);
        _1799 = _1798;
    }
    else
    {
        _1801 = _1792;
        _1800 = _1791;
        _1799 = _1790;
    }
    float _1802;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1802 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1802 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1803;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1803 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1803 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1804;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1804 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1804 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _1496 = vec3(_1802, _1803, _1804);
    _color = vec4(_1496.x, _1496.y, _1496.z, _color.w);
    _color.w = inColor.w;
    vec4 _822 = _255._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_822.x, _822.y, _texCoord01.z, _texCoord01.w);
    vec4 _834 = _255._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _834.x, _834.y);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _1577 = 8 * _drawCallInfo.x;
    mat4 _1763 = _1810;
    _1763[0] = texelFetch(transformObjectBuffer, _1577);
    mat4 _1765 = _1763;
    _1765[1] = texelFetch(transformObjectBuffer, _1577 + 1);
    mat4 _1767 = _1765;
    _1767[2] = texelFetch(transformObjectBuffer, _1577 + 2);
    vec4 _1599 = texelFetch(transformObjectBuffer, _1577 + 3);
    mat4 _1769 = _1767;
    _1769[3] = _1599;
    vec3 _851 = _1599.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _1782 = _1769;
    _1782[3] = vec4(_851.x, _851.y, _851.z, _1599.w);
    vec4 _858 = _1782 * _1799;
    _positionWS = vec4(_858.xyz + _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * _858;
    _positionES = vec4((_cameraBlock._camera[_stereoSide]._view * vec4(_858.xyz, 0.0)).xyz, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _909 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _901[_909]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_909] * gl_Position.w);
    vec3 _933 = texelFetch(transformObjectBuffer, _1577 + 4).xyz;
    vec3 _937 = texelFetch(transformObjectBuffer, _1577 + 5).xyz;
    vec3 _941 = texelFetch(transformObjectBuffer, _1577 + 6).xyz;
    _normalWS = vec3(dot(_933, _1800), dot(_937, _1800), dot(_941, _1800));
    _tangentWS = vec3(dot(_933, _1801), dot(_937, _1801), dot(_941, _1801));
}

