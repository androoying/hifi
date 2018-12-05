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

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _192;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 5) in ivec4 inSkinClusterIndex;
layout(location = 6) in vec4 inSkinClusterWeight;
layout(location = 0) in vec4 inPosition;
layout(location = 2) out vec4 _positionWS;
layout(location = 1) in vec4 inNormal;
layout(location = 2) in vec4 inColor;
layout(location = 3) in vec4 inTexCoord0;
layout(location = 4) in vec4 inTangent;
layout(location = 7) in vec4 inTexCoord1;
layout(location = 8) in vec4 inTexCoord2;
layout(location = 9) in vec4 inTexCoord3;
layout(location = 10) in vec4 inTexCoord4;

mat4 _662;

void main()
{
    vec4 _656;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _448 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _454 = int(_448.y);
        _656 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_454, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_454, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_454, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_448.x), 0.0);
    }
    else
    {
        _656 = inPosition;
    }
    vec4 _659;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _404 = inSkinClusterIndex;
        vec4 _405 = inSkinClusterWeight;
        vec4 _658;
        _658 = vec4(0.0);
        for (int _657 = 0; _657 < 4; )
        {
            _658 += ((_192.clusterMatrices[_404[_657]] * _656) * _405[_657]);
            _657++;
            continue;
        }
        _659 = _658;
    }
    else
    {
        _659 = _656;
    }
    int _532 = 8 * _drawCallInfo.x;
    mat4 _636 = _662;
    _636[0] = texelFetch(transformObjectBuffer, _532);
    mat4 _638 = _636;
    _638[1] = texelFetch(transformObjectBuffer, _532 + 1);
    mat4 _640 = _638;
    _640[2] = texelFetch(transformObjectBuffer, _532 + 2);
    vec4 _554 = texelFetch(transformObjectBuffer, _532 + 3);
    mat4 _642 = _640;
    _642[3] = _554;
    vec3 _358 = _554.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _655 = _642;
    _655[3] = vec4(_358.x, _358.y, _358.z, _554.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_655 * _659);
    _positionWS = _642 * _659;
}

