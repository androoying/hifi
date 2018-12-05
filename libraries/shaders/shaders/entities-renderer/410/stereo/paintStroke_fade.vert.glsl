#version 410

out float gl_ClipDistance[1];

const vec4 _249[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

uniform samplerBuffer transformObjectBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
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

mat4 _642;

void main()
{
    varTexcoord = inTexCoord0.xy;
    float _636;
    if (inColor.x <= 0.040449999272823333740234375)
    {
        _636 = inColor.x * 0.077399380505084991455078125;
    }
    else
    {
        _636 = pow((inColor.x + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _637;
    if (inColor.y <= 0.040449999272823333740234375)
    {
        _637 = inColor.y * 0.077399380505084991455078125;
    }
    else
    {
        _637 = pow((inColor.y + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    float _638;
    if (inColor.z <= 0.040449999272823333740234375)
    {
        _638 = inColor.z * 0.077399380505084991455078125;
    }
    else
    {
        _638 = pow((inColor.z + 0.054999999701976776123046875) * 0.947867333889007568359375, 2.400000095367431640625);
    }
    varColor = vec4(_636, _637, _638, inColor.w);
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _479 = 8 * _drawCallInfo.x;
    mat4 _598 = _642;
    _598[0] = texelFetch(transformObjectBuffer, _479);
    mat4 _600 = _598;
    _600[1] = texelFetch(transformObjectBuffer, _479 + 1);
    mat4 _602 = _600;
    _602[2] = texelFetch(transformObjectBuffer, _479 + 2);
    vec4 _501 = texelFetch(transformObjectBuffer, _479 + 3);
    mat4 _604 = _602;
    _604[3] = _501;
    vec4 _507 = texelFetch(transformObjectBuffer, _479 + 4);
    vec4 _513 = texelFetch(transformObjectBuffer, _479 + 5);
    vec4 _519 = texelFetch(transformObjectBuffer, _479 + 6);
    vec3 _221 = _501.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _617 = _604;
    _617[3] = vec4(_221.x, _221.y, _221.z, _501.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_617 * inPosition);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _258 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _249[_258]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_258] * gl_Position.w);
    vec3 _287 = vec3(_507.x, _513.x, _519.x);
    vec3 _295 = vec3(_507.y, _513.y, _519.y);
    vec3 _303 = vec3(_507.z, _513.z, _519.z);
    interpolatedNormal = vec3(dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _287), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _295), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _303)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _287), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _295), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _303)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _287), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _295), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _303)), inNormal.xyz));
    _worldPosition = _604 * inPosition;
}

