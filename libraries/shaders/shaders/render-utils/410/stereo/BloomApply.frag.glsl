#version 410

struct Parameters
{
    vec3 _intensities;
};

layout(std140) uniform parametersBuffer
{
    Parameters parameters;
} _38;

uniform sampler2D blurMap0;
uniform sampler2D blurMap1;
uniform sampler2D blurMap2;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

void main()
{
    outFragColor = vec4(((texture(blurMap0, varTexCoord0).xyz * _38.parameters._intensities.x) + (texture(blurMap1, varTexCoord0).xyz * _38.parameters._intensities.y)) + (texture(blurMap2, varTexCoord0).xyz * _38.parameters._intensities.z), 1.0);
}

