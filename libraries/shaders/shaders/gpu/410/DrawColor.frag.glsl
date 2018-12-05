#version 410

struct DrawColorParams
{
    vec4 color;
};

layout(std140) uniform drawColorParamsBuffer
{
    DrawColorParams params;
} _13;

layout(location = 0) out vec4 outFragColor;

void main()
{
    outFragColor = _13.params.color;
}

