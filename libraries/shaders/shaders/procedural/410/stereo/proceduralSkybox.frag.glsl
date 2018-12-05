#version 410

layout(std140) uniform standardInputsBuffer
{
    vec4 date;
    vec3 worldPosition;
    vec3 worldScale;
    float _spare0;
    float globalTime;
    int frameCount;
    vec2 _spare1;
    vec3 channelResolution[4];
    mat3 worldOrientation;
    vec4 _spare2;
} standardInputs;

layout(location = 0) out vec4 _fragColor;
layout(location = 0) in vec3 _normal;
layout(location = 8) flat in int _stereoSide;

void main()
{
    vec3 _91 = vec3(abs(sin(standardInputs.globalTime * 0.20000000298023223876953125)), 1.0, 0.0);
    bvec3 _42 = isnan(_91);
    _fragColor = vec4(pow(max(vec3(_42.x ? vec3(0.0).x : _91.x, _42.y ? vec3(0.0).y : _91.y, _42.z ? vec3(0.0).z : _91.z), vec3(0.0)), vec3(2.2000000476837158203125)), 0.0);
}

