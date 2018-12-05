#version 410

const vec4 _516[4] = vec4[](vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 0.60000002384185791015625, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.300000011920928955078125, 0.0, 0.800000011920928955078125, 1.0));

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

struct DrawMesh
{
    vec4 verts[65];
};

layout(std140) uniform transformCameraBuffer
{
    _TransformCamera _camera;
} _cameraBlock;

layout(std140) uniform DrawMeshBuffer
{
    DrawMesh _drawMeshBuffer;
} _221;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer workloadViewsBuffer;

layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) out vec3 varEyePos;
layout(location = 1) out vec3 varTexcoord;
layout(location = 0) out vec4 varColor;

mat4 _813;

void main()
{
    int _192 = gl_VertexID / 390;
    int _197 = gl_VertexID - (_192 * 390);
    int _201 = _197 / 130;
    int _206 = _197 - (_201 * 130);
    int _209 = _206 / 2;
    int _532 = 8 * _192;
    vec4 _705[3] = vec4[](texelFetch(workloadViewsBuffer, _532 + 5), texelFetch(workloadViewsBuffer, _532 + 6), texelFetch(workloadViewsBuffer, _532 + 7));
    vec3 _276 = -normalize(texelFetch(workloadViewsBuffer, _532).xyz);
    vec3 _283 = normalize(cross(vec3(0.0, 1.0, 0.0), _276));
    vec3 _291 = vec4(_221._drawMeshBuffer.verts[_209].y, 0.0, _221._drawMeshBuffer.verts[_209].x, 1.0).xyz * _705[_201].w;
    vec3 _333 = normalize((_283 * _221._drawMeshBuffer.verts[_209].x) + (_276 * (-_221._drawMeshBuffer.verts[_209].y)));
    int _606 = 8 * _drawCallInfo.x;
    mat4 _774 = _813;
    _774[0] = texelFetch(transformObjectBuffer, _606);
    mat4 _776 = _774;
    _776[1] = texelFetch(transformObjectBuffer, _606 + 1);
    mat4 _778 = _776;
    _778[2] = texelFetch(transformObjectBuffer, _606 + 2);
    vec4 _628 = texelFetch(transformObjectBuffer, _606 + 3);
    mat4 _780 = _778;
    _780[3] = _628;
    vec4 _634 = texelFetch(transformObjectBuffer, _606 + 4);
    vec4 _640 = texelFetch(transformObjectBuffer, _606 + 5);
    vec4 _646 = texelFetch(transformObjectBuffer, _606 + 6);
    vec3 _347 = _628.xyz - _cameraBlock._camera._viewInverse[3].xyz;
    mat4 _793 = _780;
    _793[3] = vec4(_347.x, _347.y, _347.z, _628.w);
    vec4 _366 = _cameraBlock._camera._view * vec4((_793 * vec4(vec4(_705[_201].xyz, 1.0).xyz + (((_283 * _291.x) + (normalize(cross(_276, _283)) * _291.y)) + (_276 * _291.z)), 1.0)).xyz, 0.0);
    vec3 _379 = vec3(_634.x, _640.x, _646.x);
    vec3 _387 = vec3(_634.y, _640.y, _646.y);
    vec3 _395 = vec3(_634.z, _640.z, _646.z);
    vec3 _481 = vec4(_366.xyz, 1.0).xyz + (normalize(cross(vec3(0.0, 0.0, 1.0), normalize(vec3(dot(vec3(dot(_cameraBlock._camera._viewInverse[0].xyz, _379), dot(_cameraBlock._camera._viewInverse[0].xyz, _387), dot(_cameraBlock._camera._viewInverse[0].xyz, _395)), _333), dot(vec3(dot(_cameraBlock._camera._viewInverse[1].xyz, _379), dot(_cameraBlock._camera._viewInverse[1].xyz, _387), dot(_cameraBlock._camera._viewInverse[1].xyz, _395)), _333), dot(vec3(dot(_cameraBlock._camera._viewInverse[2].xyz, _379), dot(_cameraBlock._camera._viewInverse[2].xyz, _387), dot(_cameraBlock._camera._viewInverse[2].xyz, _395)), _333))))) * (((0.004999999888241291046142578125 * abs(_366.z)) * float(_201 + 1)) * ((-1.0) + (2.0 * float(_206 - (_209 * 2))))));
    varEyePos = _481.xyz;
    gl_Position = _cameraBlock._camera._projection * vec4(_481, 1.0);
    varTexcoord = _291.xyz;
    varColor = vec4(_516[_201].xyz, -1.0);
}

