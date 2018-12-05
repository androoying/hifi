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
layout(location = 1) out vec2 varTexcoord;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 2) out vec4 varColor;
layout(location = 2) in vec4 inColor;
layout(location = 0) in vec4 inPosition;
layout(location = 0) out vec3 interpolatedNormal;
layout(location = 1) in vec4 inNormal;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _588;

void main()
{
    varTexcoord = inTexCoord0.xy;
    float _582;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _582 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _582 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _583;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _583 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _583 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _584;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _584 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _584 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    varColor = vec4(_582, _583, _584, inColor.w);
    int _425 = 8 * _drawCallInfo.x;
    mat4 _544 = _588;
    _544[0] = texelFetch(transformObjectBuffer, _425);
    mat4 _546 = _544;
    _546[1] = texelFetch(transformObjectBuffer, _425 + 1);
    mat4 _548 = _546;
    _548[2] = texelFetch(transformObjectBuffer, _425 + 2);
    vec4 _447 = texelFetch(transformObjectBuffer, _425 + 3);
    mat4 _550 = _548;
    _550[3] = _447;
    vec4 _453 = texelFetch(transformObjectBuffer, _425 + 4);
    vec4 _459 = texelFetch(transformObjectBuffer, _425 + 5);
    vec4 _465 = texelFetch(transformObjectBuffer, _425 + 6);
    vec3 _214 = _447.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _563 = _550;
    _563[3] = vec4(_214.x, _214.y, _214.z, _447.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_563 * inPosition);
    vec3 _241 = vec3(_453.x, _459.x, _465.x);
    vec3 _249 = vec3(_453.y, _459.y, _465.y);
    vec3 _257 = vec3(_453.z, _459.z, _465.z);
    interpolatedNormal = vec3(dot(vec3(dot(_cameraBlock._camera._viewInverse[0].xyz, _241), dot(_cameraBlock._camera._viewInverse[0].xyz, _249), dot(_cameraBlock._camera._viewInverse[0].xyz, _257)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[1].xyz, _241), dot(_cameraBlock._camera._viewInverse[1].xyz, _249), dot(_cameraBlock._camera._viewInverse[1].xyz, _257)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[2].xyz, _241), dot(_cameraBlock._camera._viewInverse[2].xyz, _249), dot(_cameraBlock._camera._viewInverse[2].xyz, _257)), inNormal.xyz));
}

