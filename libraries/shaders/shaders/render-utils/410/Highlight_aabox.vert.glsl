#version 410

const int _160[36] = int[](0, 1, 2, 0, 2, 3, 3, 2, 6, 3, 6, 7, 7, 6, 5, 7, 5, 4, 4, 5, 1, 4, 1, 0, 1, 5, 6, 1, 6, 2, 4, 0, 3, 4, 3, 7);
const vec3 _181[8] = vec3[](vec3(0.0, 1.0, 0.0), vec3(1.0, 1.0, 0.0), vec3(1.0, 0.0, 0.0), vec3(0.0), vec3(0.0, 1.0, 1.0), vec3(1.0), vec3(1.0, 0.0, 1.0), vec3(0.0, 0.0, 1.0));
const vec3 _251[8] = vec3[](vec3(-1.0, 1.0, -1.0), vec3(1.0, 1.0, -1.0), vec3(1.0, -1.0, -1.0), vec3(-1.0), vec3(-1.0, 1.0, 1.0), vec3(1.0), vec3(1.0, -1.0, 1.0), vec3(-1.0, -1.0, 1.0));

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

struct HighlightParameters
{
    vec2 outlineWidth;
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform parametersBuffer
{
    HighlightParameters _parameters;
} _296;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer ssbo0Buffer;

layout(location = 15) in ivec2 _drawCallInfo;

mat4 _486;

void main()
{
    int _151 = gl_VertexID / 36;
    int _317 = 2 * _151;
    vec4 _208 = vec4(texelFetch(ssbo0Buffer, _317).yzw + (texelFetch(ssbo0Buffer, _317 + 1).xyz * _181[_160[gl_VertexID - (_151 * 36)]]), 1.0);
    int _354 = 8 * _drawCallInfo.x;
    mat4 _461 = _486;
    _461[0] = texelFetch(transformObjectBuffer, _354);
    mat4 _463 = _461;
    _463[1] = texelFetch(transformObjectBuffer, _354 + 1);
    mat4 _465 = _463;
    _465[2] = texelFetch(transformObjectBuffer, _354 + 2);
    vec4 _376 = texelFetch(transformObjectBuffer, _354 + 3);
    mat4 _467 = _465;
    _467[3] = _376;
    vec3 _222 = _376.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _480 = _467;
    _480[3] = vec4(_222.x, _222.y, _222.z, _376.w);
    gl_Position = _cameraBlock._camera._projectionViewUntranslated * (_480 * _208);
    vec3 _258 = _208.xyz + _251[_160[gl_VertexID - (_151 * 36)]];
    vec2 _309 = gl_Position.xy + ((normalize((_cameraBlock._camera._projectionViewUntranslated * (_480 * vec4(_258.x, _258.y, _258.z, _208.w))).xy - gl_Position.xy) * _296._parameters.outlineWidth) * gl_Position.w);
    gl_Position = vec4(_309.x, _309.y, gl_Position.z, gl_Position.w);
}

