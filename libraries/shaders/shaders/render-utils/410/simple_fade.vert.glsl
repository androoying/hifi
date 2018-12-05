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
layout(location = 2) out vec4 _positionWS;
layout(location = 3) out vec3 _normalWS;
layout(location = 9) out vec4 _fadeData1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 10) out vec4 _fadeData2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 11) out vec4 _fadeData3;
layout(location = 10) in vec4 inTexCoord4;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;

mat4 _529;

void main()
{
    float _523;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _523 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _523 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _524;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _524 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _524 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _525;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _525 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _525 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    _color = vec4(_523, _524, _525, inColor.w);
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    _positionMS = inPosition;
    _normalMS = inNormal.xyz;
    int _396 = 8 * _drawCallInfo.x;
    mat4 _500 = _529;
    _500[0] = texelFetch(transformObjectBuffer, _396);
    mat4 _502 = _500;
    _502[1] = texelFetch(transformObjectBuffer, _396 + 1);
    mat4 _504 = _502;
    _504[2] = texelFetch(transformObjectBuffer, _396 + 2);
    vec4 _418 = texelFetch(transformObjectBuffer, _396 + 3);
    mat4 _506 = _504;
    _506[3] = _418;
    vec3 _223 = _418.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _519 = _506;
    _519[3] = vec4(_223.x, _223.y, _223.z, _418.w);
    vec4 _230 = _519 * inPosition;
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _230;
    _positionES = vec4((_cameraBlock._camera._view * vec4(_230.xyz, 0.0)).xyz, 1.0);
    _positionWS = _506 * inPosition;
    _normalWS = vec3(dot(texelFetch(transformObjectBuffer, _396 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _396 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _396 + 6).xyz, inNormal.xyz));
    _fadeData1 = inTexCoord2;
    _fadeData2 = inTexCoord3;
    _fadeData3 = inTexCoord4;
}

