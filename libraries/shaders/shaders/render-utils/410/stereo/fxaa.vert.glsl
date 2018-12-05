#version 410

layout(location = 0) out vec2 varTexcoord;
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
layout(location = 8) flat out int _stereoSide;
layout(location = 15) in ivec2 _drawCallInfo;

void main()
{
    varTexcoord = inTexCoord0.xy;
    gl_Position = inPosition;
}

