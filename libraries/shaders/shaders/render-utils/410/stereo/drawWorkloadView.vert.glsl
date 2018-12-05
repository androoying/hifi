#version 410

out float gl_ClipDistance[1];

const vec4 _514[2] = vec4[](vec4(-1.0, 0.0, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0));
const vec4 _558[4] = vec4[](vec4(0.0, 1.0, 0.0, 1.0), vec4(1.0, 0.60000002384185791015625, 0.0, 1.0), vec4(1.0, 0.0, 0.0, 1.0), vec4(0.300000011920928955078125, 0.0, 0.800000011920928955078125, 1.0));

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
    _TransformCamera _camera[2];
} _cameraBlock;

layout(std140) uniform DrawMeshBuffer
{
    DrawMesh _drawMeshBuffer;
} _228;

uniform samplerBuffer transformObjectBuffer;
uniform samplerBuffer workloadViewsBuffer;

layout(location = 8) flat out int _stereoSide;
uniform int SPIRV_Cross_BaseInstance;
layout(location = 15) in ivec2 _drawCallInfo;
layout(location = 2) out vec3 varEyePos;
layout(location = 1) out vec3 varTexcoord;
layout(location = 0) out vec4 varColor;

mat4 _857;

void main()
{
    int _199 = gl_VertexID / 390;
    int _204 = gl_VertexID - (_199 * 390);
    int _208 = _204 / 130;
    int _213 = _204 - (_208 * 130);
    int _216 = _213 / 2;
    int _574 = 8 * _199;
    vec4 _749[3] = vec4[](texelFetch(workloadViewsBuffer, _574 + 5), texelFetch(workloadViewsBuffer, _574 + 6), texelFetch(workloadViewsBuffer, _574 + 7));
    vec3 _283 = -normalize(texelFetch(workloadViewsBuffer, _574).xyz);
    vec3 _290 = normalize(cross(vec3(0.0, 1.0, 0.0), _283));
    vec3 _298 = vec4(_228._drawMeshBuffer.verts[_216].y, 0.0, _228._drawMeshBuffer.verts[_216].x, 1.0).xyz * _749[_208].w;
    vec3 _340 = normalize((_290 * _228._drawMeshBuffer.verts[_216].x) + (_283 * (-_228._drawMeshBuffer.verts[_216].y)));
    _stereoSide = (gl_InstanceID + SPIRV_Cross_BaseInstance) % 2;
    int _651 = 8 * _drawCallInfo.x;
    mat4 _818 = _857;
    _818[0] = texelFetch(transformObjectBuffer, _651);
    mat4 _820 = _818;
    _820[1] = texelFetch(transformObjectBuffer, _651 + 1);
    mat4 _822 = _820;
    _822[2] = texelFetch(transformObjectBuffer, _651 + 2);
    vec4 _673 = texelFetch(transformObjectBuffer, _651 + 3);
    mat4 _824 = _822;
    _824[3] = _673;
    vec4 _679 = texelFetch(transformObjectBuffer, _651 + 4);
    vec4 _685 = texelFetch(transformObjectBuffer, _651 + 5);
    vec4 _691 = texelFetch(transformObjectBuffer, _651 + 6);
    vec3 _354 = _673.xyz - _cameraBlock._camera[_stereoSide]._viewInverse[3].xyz;
    mat4 _837 = _824;
    _837[3] = vec4(_354.x, _354.y, _354.z, _673.w);
    vec4 _373 = _cameraBlock._camera[_stereoSide]._view * vec4((_837 * vec4(vec4(_749[_208].xyz, 1.0).xyz + (((_290 * _298.x) + (normalize(cross(_283, _290)) * _298.y)) + (_283 * _298.z)), 1.0)).xyz, 0.0);
    vec3 _386 = vec3(_679.x, _685.x, _691.x);
    vec3 _394 = vec3(_679.y, _685.y, _691.y);
    vec3 _402 = vec3(_679.z, _685.z, _691.z);
    vec3 _488 = vec4(_373.xyz, 1.0).xyz + (normalize(cross(vec3(0.0, 0.0, 1.0), normalize(vec3(dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _386), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _394), dot(_cameraBlock._camera[_stereoSide]._viewInverse[0].xyz, _402)), _340), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _386), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _394), dot(_cameraBlock._camera[_stereoSide]._viewInverse[1].xyz, _402)), _340), dot(vec3(dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _386), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _394), dot(_cameraBlock._camera[_stereoSide]._viewInverse[2].xyz, _402)), _340))))) * (((0.004999999888241291046142578125 * abs(_373.z)) * float(_208 + 1)) * ((-1.0) + (2.0 * float(_213 - (_216 * 2))))));
    varEyePos = _488.xyz;
    gl_Position = _cameraBlock._camera[_stereoSide]._projection * vec4(_488, 1.0);
    vec2 eyeOffsetScale = vec2(-0.5, 0.5);
    uint _524 = uint(_stereoSide);
    gl_ClipDistance[0] = dot(gl_Position, _514[_524]);
    gl_Position.x = (gl_Position.x * 0.5) + (eyeOffsetScale[_524] * gl_Position.w);
    varTexcoord = _298.xyz;
    varColor = vec4(_558[_208].xyz, -1.0);
}

