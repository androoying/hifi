#version 410

struct LightingModel
{
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

layout(std140) uniform lightingModelBuffer
{
    LightingModel lightingModel;
} _14;

uniform sampler2D originalTexture;

layout(location = 0) in vec4 _texCoord01;
layout(location = 1) in vec4 _color;
layout(location = 0) out vec4 _fragColor0;

void main()
{
    vec4 _36 = texture(originalTexture, _texCoord01.xy);
    _fragColor0 = vec4((_color.xyz * _36.xyz) * _14.lightingModel._UnlitEmissiveLightmapBackground.x, _color.w * _36.w);
}

