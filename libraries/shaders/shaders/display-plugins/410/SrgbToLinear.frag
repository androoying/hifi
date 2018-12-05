#version 410 core
#define GPU_GL410
#define BITFIELD int
#if defined(VULKAN)
  #extension GL_ARB_shading_language_420pack : require
  #define LAYOUT(X) layout(X)
  #define LAYOUT_STD140(X) layout(std140, X)
#else
  #define LAYOUT(X)
  #define LAYOUT_STD140(X) layout(std140)
#endif
#ifdef VULKAN
#define gl_InstanceID  gl_InstanceIndex
#define gl_VertexID  gl_VertexIndex
#endif
#define GPU_PIXEL_SHADER
// OpenGLDisplayPlugin_present.frag

LAYOUT(binding=0) uniform sampler2D colorMap;

layout(location=0) in vec2 varTexCoord0;

layout(location=0) out vec4 outFragColor;

float sRGBFloatToLinear(float value) {
    const float SRGB_ELBOW = 0.04045;

    return (value <= SRGB_ELBOW) ? value / 12.92 : pow((value + 0.055) / 1.055, 2.4);
}

vec3 colorToLinearRGB(vec3 srgb) {
    return vec3(sRGBFloatToLinear(srgb.r), sRGBFloatToLinear(srgb.g), sRGBFloatToLinear(srgb.b));
}

void main(void) {
    outFragColor.a = 1.0;
    outFragColor.rgb = colorToLinearRGB(texture(colorMap, varTexCoord0).rgb);
}
