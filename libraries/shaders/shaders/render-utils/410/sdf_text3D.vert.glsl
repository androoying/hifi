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
layout(location = 3) out vec3 _normalWS;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 4) in vec4 inTangent;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _349;

void main()
{
    _texCoord01 = vec4(inTexCoord0.x, inTexCoord0.y, _texCoord01.z, _texCoord01.w);
    int _226 = 8 * _drawCallInfo.x;
    mat4 _326 = _349;
    _326[0] = texelFetch(transformObjectBuffer, _226);
    mat4 _328 = _326;
    _328[1] = texelFetch(transformObjectBuffer, _226 + 1);
    mat4 _330 = _328;
    _330[2] = texelFetch(transformObjectBuffer, _226 + 2);
    vec4 _248 = texelFetch(transformObjectBuffer, _226 + 3);
    mat4 _332 = _330;
    _332[3] = _248;
    vec3 _145 = _248.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _345 = _332;
    _345[3] = vec4(_145.x, _145.y, _145.z, _248.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_345 * inPosition);
    _normalWS = vec3(texelFetch(transformObjectBuffer, _226 + 4).z, texelFetch(transformObjectBuffer, _226 + 5).z, texelFetch(transformObjectBuffer, _226 + 6).z);
}

