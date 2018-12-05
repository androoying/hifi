#version 410

out float gl_ClipDistance[1];

const vec4 _391[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));

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

layout(std140) uniform skinClusterBuffer
{
    mat4 clusterMatrices[128];
} _200;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer blendshapeOffsetsBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
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

mat4 _710;

void main()
{
    vec4 _704;
    if ((_drawCallInfo.y & 1) != 0)
    {
        uvec4 _493 = floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, gl_VertexID));
        int _499 = int(_493.y);
        _704 = inPosition + vec4(vec3(clamp(float(bitfieldExtract(_499, 0, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_499, 10, 10)) * 0.001956947147846221923828125, -1.0, 1.0), clamp(float(bitfieldExtract(_499, 20, 10)) * 0.001956947147846221923828125, -1.0, 1.0)) * uintBitsToFloat(_493.x), 0.0);
    }
    else
    {
        _704 = inPosition;
    }
    vec4 _707;
    if ((_drawCallInfo.y & 2) != 0)
    {
        ivec4 _449 = inSkinClusterIndex;
        vec4 _450 = inSkinClusterWeight;
        vec4 _706;
        _706 = vec4(0.0);
        for (int _705 = 0; _705 < 4; )
        {
            _706 += ((_200.clusterMatrices[_449[_705]] * _704) * _450[_705]);
            _705++;
            continue;
        }
        _707 = _706;
    }
    else
    {
        _707 = _704;
    }
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _580 = 8 * _drawCallInfo.x;
    mat4 _684 = _710;
    _684[0] = texelFetch(transformObjectBuffer, _580);
    mat4 _686 = _684;
    _686[1] = texelFetch(transformObjectBuffer, _580 + 1);
    mat4 _688 = _686;
    _688[2] = texelFetch(transformObjectBuffer, _580 + 2);
    vec4 _602 = texelFetch(transformObjectBuffer, _580 + 3);
    mat4 _690 = _688;
    _690[3] = _602;
    vec3 _366 = _602.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _703 = _690;
    _703[3] = vec4(_366.x, _366.y, _366.z, _602.w);
    gl_Position = _cameraBlock._camera[_stereoSide]._projectionViewUntranslated * (_703 * _707);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _400 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _391[_400]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_400] * gl_Position.w);
    _positionWS = _690 * _707;
}

