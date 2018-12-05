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
} _237;

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _269;

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

mat4 _1036;

void main()
{
    vec4 _1021;
    vec3 _1022;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _680 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _687 = int(_680.y);
        int _696 = int(_680.z);
        _1022 = normalize(inNormal.xyz + vec3(clamp(float(bitfieldExtract(_696, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_696, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_696, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)));
        _1021 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_687, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_687, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_687, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_680.x), 0.0);
    }
    else
    {
        _1022 = inNormal.xyz;
        _1021 = inPosition;
    }
    vec4 _1026;
    vec3 _1027;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _623 = inSkinClusterIndex;
        vec4 _624 = inSkinClusterWeight;
        vec4 _1024;
        vec4 _1025;
        _1025 = vec4(0.0);
        _1024 = vec4(0.0);
        for (int _1023 = 0; _1023 < 4; )
        {
            _1025 += ((_269.clusterMatrices[_623[_1023]] * vec4(_1022, 0.0)) * _624[_1023]);
            _1024 += ((_269.clusterMatrices[_623[_1023]] * _1021) * _624[_1023]);
            _1023++;
            continue;
        }
        _1027 = _1025.xyz;
        _1026 = _1024;
    }
    else
    {
        _1027 = _1022;
        _1026 = _1021;
    }
    float _1028;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _1028 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _1028 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1029;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _1029 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _1029 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _1030;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _1030 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _1030 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    vec3 _790 = vec3(_1028, _1029, _1030);
    _color = vec4(_790.x, _790.y, _790.z, _color.w);
    _color.w = inColor.w;
    vec4 _489 = _237._texMapArray._texcoordTransforms0 * vec4(inTexCoord0.xy, 0.0, 1.0);
    _texCoord01 = vec4(_489.x, _489.y, _texCoord01.z, _texCoord01.w);
    vec4 _501 = _237._texMapArray._texcoordTransforms1 * vec4(inTexCoord1.xy, 0.0, 1.0);
    _texCoord01 = vec4(_texCoord01.x, _texCoord01.y, _501.x, _501.y);
    int _868 = 8 * _drawCallInfo.x;
    mat4 _997 = _1036;
    _997[0] = texelFetch(transformObjectBuffer, _868);
    mat4 _999 = _997;
    _999[1] = texelFetch(transformObjectBuffer, _868 + 1);
    mat4 _1001 = _999;
    _1001[2] = texelFetch(transformObjectBuffer, _868 + 2);
    vec4 _890 = texelFetch(transformObjectBuffer, _868 + 3);
    mat4 _1003 = _1001;
    _1003[3] = _890;
    vec3 _518 = _890.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _1016 = _1003;
    _1016[3] = vec4(_518.x, _518.y, _518.z, _890.w);
    vec4 _525 = _1016 * _1026;
    _positionWS = vec4(_525.xyz + _cameraBlock._camera._viewInverse[3].xyz, 1.0);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _525;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_525.xyz, 0.0)).xyz, 1.0);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _868 + 4).xyz, _1027), dot(texelFetch(transformObjectBuffer, _868 + 5).xyz, _1027), dot(texelFetch(transformObjectBuffer, _868 + 6).xyz, _1027));
}

