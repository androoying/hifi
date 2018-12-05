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
layout(location = 0) out vec4 _texCoord01;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _322;

void main()
{
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    int _205 = 8 * _drawCallInfo.x;
    mat4 _302 = _322;
    _302[0] = texelFetch(transformObjectBuffer, _205);
    mat4 _304 = _302;
    _304[1] = texelFetch(transformObjectBuffer, _205 + 1);
    mat4 _306 = _304;
    _306[2] = texelFetch(transformObjectBuffer, _205 + 2);
    vec4 _227 = texelFetch(transformObjectBuffer, _205 + 3);
    mat4 _308 = _306;
    _308[3] = _227;
    vec3 _145 = _227.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _321 = _308;
    _321[3] = vec4(_145.x, _145.y, _145.z, _227.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_321 * inPosition);
}

