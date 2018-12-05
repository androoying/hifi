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
layout(location = 0) in vec4 inPosition;
layout(location = 5) out vec4 _position;
layout(location = 6) out vec3 _normal;
layout(location = 1) in vec4 inNormal;
layout(location = 2) out vec4 _worldPosition;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _460;

void main()
{
    int _307 = 8 * _drawCallInfo.x;
    mat4 _422 = _460;
    _422[0] = texelFetch(transformObjectBuffer, _307);
    mat4 _424 = _422;
    _424[1] = texelFetch(transformObjectBuffer, _307 + 1);
    mat4 _426 = _424;
    _426[2] = texelFetch(transformObjectBuffer, _307 + 2);
    vec4 _329 = texelFetch(transformObjectBuffer, _307 + 3);
    mat4 _428 = _426;
    _428[3] = _329;
    vec4 _335 = texelFetch(transformObjectBuffer, _307 + 4);
    vec4 _341 = texelFetch(transformObjectBuffer, _307 + 5);
    vec4 _347 = texelFetch(transformObjectBuffer, _307 + 6);
    vec3 _136 = _329.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _441 = _428;
    _441[3] = vec4(_136.x, _136.y, _136.z, _329.w);
    vec4 _145 = _441 * inPosition;
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * _145;
    _position = vec4((_cameraBlock._camera._view * vec4(_145.xyz, 0.0)).xyz, 1.0);
    vec3 _185 = vec3(_335.x, _341.x, _347.x);
    vec3 _193 = vec3(_335.y, _341.y, _347.y);
    vec3 _202 = vec3(_335.z, _341.z, _347.z);
    _normal = vec3(dot(vec3(dot(_cameraBlock._camera._viewInverse[0].xyz, _185), dot(_cameraBlock._camera._viewInverse[0].xyz, _193), dot(_cameraBlock._camera._viewInverse[0].xyz, _202)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[1].xyz, _185), dot(_cameraBlock._camera._viewInverse[1].xyz, _193), dot(_cameraBlock._camera._viewInverse[1].xyz, _202)), inNormal.xyz), dot(vec3(dot(_cameraBlock._camera._viewInverse[2].xyz, _185), dot(_cameraBlock._camera._viewInverse[2].xyz, _193), dot(_cameraBlock._camera._viewInverse[2].xyz, _202)), inNormal.xyz));
    _worldPosition = inPosition;
}

