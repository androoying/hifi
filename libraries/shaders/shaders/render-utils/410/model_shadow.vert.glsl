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
layout(location = 2) out vec4 _positionWS;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _317;

void main()
{
    int _200 = 8 * _drawCallInfo.x;
    mat4 _297 = _317;
    _297[0] = texelFetch(transformObjectBuffer, _200);
    mat4 _299 = _297;
    _299[1] = texelFetch(transformObjectBuffer, _200 + 1);
    mat4 _301 = _299;
    _301[2] = texelFetch(transformObjectBuffer, _200 + 2);
    vec4 _222 = texelFetch(transformObjectBuffer, _200 + 3);
    mat4 _303 = _301;
    _303[3] = _222;
    vec3 _136 = _222.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _316 = _303;
    _316[3] = vec4(_136.x, _136.y, _136.z, _222.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_316 * inPosition);
    _positionWS = _303 * inPosition;
}

