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
#define GPU_TRANSFORM_IS_STEREO
#define GPU_TRANSFORM_STEREO_CAMERA
#define GPU_TRANSFORM_STEREO_CAMERA_INSTANCED
#define GPU_TRANSFORM_STEREO_SPLIT_SCREEN
#define GPU_PIXEL_SHADER
struct TextureData {
    ivec2 textureSize;
};

LAYOUT_STD140(binding=0) uniform textureDataBuffer {
    TextureData textureData;
};

LAYOUT(binding=0) uniform sampler2D colorMap;
layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {
    ivec2 texCoord = ivec2(floor(varTexCoord0 * vec2(textureData.textureSize)));
    texCoord.x /= 2;
    int row = int(floor(gl_FragCoord.y));
    if (row % 2 > 0) {
        texCoord.x += (textureData.textureSize.x / 2);
    }
    outFragColor = vec4(pow(texelFetch(colorMap, texCoord, 0).rgb, vec3(2.2)), 1.0);
}
