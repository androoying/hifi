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
layout(location = 3) out vec2 varTexCoord0;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 2) out vec4 varColor;
layout(location = 2) in vec4 inColor;
layout(location = 0) in vec4 inPosition;
layout(location = 1) out vec3 varNormal;
layout(location = 1) in vec4 inNormal;
layout(location = 0) out vec3 varPosition;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _498;

void main()
{
    varTexCoord0 = inTexCoord0.xy;
    float _492;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _492 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _492 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _493;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _493 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _493 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _494;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _494 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _494 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    varColor = vec4(_492, _493, _494, inColor.w);
    int _365 = 8 * _drawCallInfo.x;
    mat4 _469 = _498;
    _469[0] = texelFetch(transformObjectBuffer, _365);
    mat4 _471 = _469;
    _471[1] = texelFetch(transformObjectBuffer, _365 + 1);
    mat4 _473 = _471;
    _473[2] = texelFetch(transformObjectBuffer, _365 + 2);
    vec4 _387 = texelFetch(transformObjectBuffer, _365 + 3);
    mat4 _475 = _473;
    _475[3] = _387;
    vec3 _214 = _387.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _488 = _475;
    _488[3] = vec4(_214.x, _214.y, _214.z, _387.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_488 * inPosition);
    varNormal = vec3(dot(texelFetch(transformObjectBuffer, _365 + 4).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _365 + 5).xyz, inNormal.xyz), dot(texelFetch(transformObjectBuffer, _365 + 6).xyz, inNormal.xyz));
    varPosition = inPosition.xyz;
}

