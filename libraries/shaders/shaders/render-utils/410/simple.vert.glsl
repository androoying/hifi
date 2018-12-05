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

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 1) out vec4 _color;
layout(location = 2) in vec4 inColor;
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 5) out vec4 _positionMS;
layout(location = 0) in vec4 inPosition;
layout(location = 6) out vec3 _normalMS;
layout(location = 1) in vec4 inNormal;
layout(location = 7) out vec4 _positionES;
layout(location = 3) out vec3 _normalWS;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _518;

void main()
{
    float _512;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _512 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _512 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _513;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _513 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _513 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _514;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _514 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _514 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_512, _513, _514, inColor.w);
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    _positionMS = inPosition;
    _normalMS = inNormal.xyz;
    int _385 = 8 * _drawCallInfo.x;
    mat4 _489 = _518;
    _489[0] = texelFetch(transformObjectBuffer, _385);
    mat4 _491 = _489;
    _491[1] = texelFetch(transformObjectBuffer, _385 + 1);
    mat4 _493 = _491;
    _493[2] = texelFetch(transformObjectBuffer, _385 + 2);
    vec4 _407 = texelFetch(transformObjectBuffer, _385 + 3);
    mat4 _495 = _493;
    _495[3] = _407;
    vec3 _223 = _407.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _508 = _495;
    _508[3] = vec4(_223.x, _223.y, _223.z, _407.w);
    vec4 _230 = _508 * inPosition;
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _230;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_230.xyz, 0.0)).xyz, 1.0);
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _385 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _385 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _385 + 6).xyz, inNormal.xyz));
}

