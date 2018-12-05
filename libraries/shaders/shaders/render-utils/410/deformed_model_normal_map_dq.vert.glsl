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
} _248;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _480;

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

mat4 _1766;

void main()
{
    vec4 _1746;
    vec3 _1747;
    vec3 _1748;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _1040 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _1048 = int(_1040.y);
        int _1057 = int(_1040.z);
        int _1062 = int(_1040.w);
        _1748 = normalize(inTangent.xyz + vec3(clamp(float(bitfieldExtract(_1062, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1062, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1062, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1747 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_1057, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1057, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1057, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1746 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_1048, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1048, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_1048, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_1040.x), 0.0);
    }
    else
    {
        _1748 = inTangent.xyz;
        _1747 = inNormal.xyz;
        _1746 = inPosition;
    }
    vec4 _1755;
    vec3 _1756;
    vec3 _1757;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _970 = inSkinClusterIndex;
        vec4 _971 = inSkinClusterWeight;
        vec4 _1750;
        vec4 _1751;
        vec4 _1752;
        vec4 _1753;
        _1753 = vec4(0.0);
        _1752 = vec4(0.0);
        _1751 = vec4(0.0);
        _1750 = vec4(0.0);
        float _1152;
        vec4 _1154;
        vec4 _1156;
        vec4 _1158;
        vec4 _1160;
        float _1786;
        for (int _1749 = 0; _1749 < 4; _1753 += (_1160 * _1152), _1752 += (_1154 * _1152), _1751 += (_1158 * _1786), _1750 += (_1156 * _1786), _1749++)
        {
            _1152 = _971[_1749];
            _1154 = _480.clusterMatrices[_970[_1749]][0];
            _1156 = _480.clusterMatrices[_970[_1749]][1];
            _1158 = _480.clusterMatrices[_970[_1749]][2];
            _1160 = _480.clusterMatrices[_970[_1749]][3];
            if (dot(_1156, _480.clusterMatrices[_970.x][1]) < 0.0)
            {
                _1786 = -_1152;
                continue;
            }
            else
            {
                _1786 = _1152;
                continue;
            }
            continue;
        }
        float _1193 = length(_1750);
        vec4 _1196 = vec4(_1193);
        vec4 _1197 = _1750 / _1196;
        vec4 _1201 = _1751 / _1196;
        float _1255 = _1197.x;
        float _1256 = 2.0 * _1255;
        float _1261 = _1197.y;
        float _1262 = 2.0 * _1261;
        float _1265 = _1262 * _1261;
        float _1267 = _1197.z;
        float _1268 = 2.0 * _1267;
        float _1271 = _1268 * _1267;
        float _1277 = _1256 * _1261;
        float _1283 = _1256 * _1267;
        float _1288 = _1197.w;
        float _1289 = _1256 * _1288;
        float _1295 = _1268 * _1288;
        float _1301 = _1262 * _1267;
        float _1307 = _1262 * _1288;
        float _1323 = 1.0 - (_1256 * _1255);
        float _1343 = -_1201.w;
        float _1348 = _1201.x;
        float _1354 = _1201.y;
        float _1360 = _1201.z;
        mat4 _1441 = mat4(vec4((1.0 - _1265) - _1271, _1277 + _1295, _1283 - _1307, 0.0), vec4(_1277 - _1295, _1323 - _1271, _1301 + _1289, 0.0), vec4(_1283 + _1307, _1301 - _1289, _1323 - _1265, 0.0), vec4(2.0 * ((((_1343 * _1255) + (_1348 * _1288)) - (_1354 * _1267)) + (_1360 * _1261)), 2.0 * ((((_1343 * _1261) + (_1348 * _1267)) + (_1354 * _1288)) - (_1360 * _1255)), 2.0 * ((((_1343 * _1267) - (_1348 * _1261)) + (_1354 * _1255)) + (_1360 * _1288)), 1.0));
        vec4 _1754;
        if (_1752.w > 0.100000001490116119384765625)
        {
            _1754 = _1753;
        }
        else
        {
            vec4 _1714 = _1752;
            _1714.w = 1.0;
            _1754 = _1441 * (_1714 * _1746);
        }
        _1757 = vec3((_1441 * vec4(_1748, 0.0)).xyz);
        _1756 = vec3((_1441 * vec4(_1747, 0.0)).xyz);
        _1755 = _1754;
    }
    else
    {
        _1757 = _1748;
        _1756 = _1747;
        _1755 = _1746;
    }
    float _1758;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1758 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1758 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1759;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1759 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1759 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1760;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1760 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1760 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _1455 = vec3(_1758, _1759, _1760);
    _color = vec4(_1455.x, _1455.y, _1455.z, _color.w);
    _color.w = inColor.w;
    vec4 _815 = _248._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_815.x, _815.y, _texCoord01.z, _texCoord01.w);
    vec4 _827 = _248._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _827.x, _827.y);
    int _1533 = 8 * _drawCallInfo.x;
    mat4 _1719 = _1766;
    _1719[0] = texelFetch(transformObjectBuffer, _1533);
    mat4 _1721 = _1719;
    _1721[1] = texelFetch(transformObjectBuffer, _1533 + 1);
    mat4 _1723 = _1721;
    _1723[2] = texelFetch(transformObjectBuffer, _1533 + 2);
    vec4 _1555 = texelFetch(transformObjectBuffer, _1533 + 3);
    mat4 _1725 = _1723;
    _1725[3] = _1555;
    vec3 _844 = _1555.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _1738 = _1725;
    _1738[3] = vec4(_844.x, _844.y, _844.z, _1555.w);
    vec4 _851 = _1738 * _1755;
    _positionWS = vec4(_851.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _851;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_851.xyz, 0.0)).xyz, 1.0);
    vec3 _892 = texelFetch(transformObjectBuffer, _1533 + 4).xyz;
    vec3 _896 = texelFetch(transformObjectBuffer, _1533 + 5).xyz;
    vec3 _900 = texelFetch(transformObjectBuffer, _1533 + 6).xyz;
    _normalWS = vec3(dot(_892, _1756), dot(_896, _1756), dot(_900, _1756));
    _tangentWS = vec3(dot(_892, _1757), dot(_896, _1757), dot(_900, _1757));
}

