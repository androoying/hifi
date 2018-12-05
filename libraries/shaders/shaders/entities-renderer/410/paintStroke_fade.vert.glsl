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
layout(location = 3) out vec4 _worldPosition;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _593;

void main()
{
    varTexcoord = inTexCoord0.xy;
    float _587;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _587 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _587 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _588;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _588 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _588 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _589;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _589 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _589 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    varColor = vec4(_587, _588, _589, inColor.w);
    int _430 = 8 * _drawCallInfo.x;
    mat4 _549 = _593;
    _549[0] = texelFetch(transformObjectBuffer, _430);
    mat4 _551 = _549;
    _551[1] = texelFetch(transformObjectBuffer, _430 + 1);
    mat4 _553 = _551;
    _553[2] = texelFetch(transformObjectBuffer, _430 + 2);
    vec4 _452 = texelFetch(transformObjectBuffer, _430 + 3);
    mat4 _555 = _553;
    _555[3] = _452;
    vec4 _458 = texelFetch(transformObjectBuffer, _430 + 4);
    vec4 _464 = texelFetch(transformObjectBuffer, _430 + 5);
    vec4 _470 = texelFetch(transformObjectBuffer, _430 + 6);
    vec3 _214 = _452.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _568 = _555;
    _568[3] = vec4(_214.x, _214.y, _214.z, _452.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_568 * inPosition);
    vec3 _241 = vec3(_458.x, _464.x, _470.x);
    vec3 _249 = vec3(_458.y, _464.y, _470.y);
    vec3 _257 = vec3(_458.z, _464.z, _470.z);
    interpolatedNormal = vec3(dot(vec3(dot(_cameraBlock._camera._viewInverse[0].xyz, _241), dot(_cameraBlock._camera._viewInverse[0].xyz, _249), dot(_cameraBlock._camera._viewInverse[0].xyz, _257)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[1].xyz, _241), dot(_cameraBlock._camera._viewInverse[1].xyz, _249), dot(_cameraBlock._camera._viewInverse[1].xyz, _257)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[2].xyz, _241), dot(_cameraBlock._camera._viewInverse[2].xyz, _249), dot(_cameraBlock._camera._viewInverse[2].xyz, _257)), inNormal.xyz));
    _worldPosition = _555 * inPosition;
}

