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
//PC 410 core
// 
//  Generated on Wed Dec  5 03:19:06 2018
//
//  Created by Olivier Prat on 06/05/17.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

vec2 signNotZero(vec2 v) {
    return vec2((v.x >= 0.0) ? +1.0 : -1.0, (v.y >= 0.0) ? +1.0 : -1.0);
}

vec2 float32x3_to_oct(in vec3 v) {
    vec2 p = v.xy * (1.0 / (abs(v.x) + abs(v.y) + abs(v.z)));
    return ((v.z <= 0.0) ? ((1.0 - abs(p.yx)) * signNotZero(p)) : p);
}


vec3 oct_to_float32x3(in vec2 e) {
    vec3 v = vec3(e.xy, 1.0 - abs(e.x) - abs(e.y));
    if (v.z < 0.0) {
        v.xy = (1.0 - abs(v.yx)) * signNotZero(v.xy);
    }
    return normalize(v);
}

vec3 snorm12x2_to_unorm8x3(vec2 f) {
    vec2 u = vec2(round(clamp(f, -1.0, 1.0) * 2047.0 + 2047.0));
    float t = floor(u.y / 256.0);

    return floor(vec3(
        u.x / 16.0,
        fract(u.x / 16.0) * 256.0 + t,
        u.y - t * 256.0
        )) / 255.0;
}

vec2 unorm8x3_to_snorm12x2(vec3 u) {
    u *= 255.0;
    u.y *= (1.0 / 16.0);
    vec2 s = vec2(  u.x * 16.0 + floor(u.y),
                    fract(u.y) * (16.0 * 256.0) + u.z);
    return clamp(s * (1.0 / 2047.0) - 1.0, vec2(-1.0), vec2(1.0));
}


// Recommended function to pack/unpack vec3<float> normals to vec3<uint8> rgb with best efficiency
vec3 packNormal(in vec3 n) {
    return snorm12x2_to_unorm8x3(float32x3_to_oct(n));
}

vec3 unpackNormal(in vec3 p) {
    return oct_to_float32x3(unorm8x3_to_snorm12x2(p));
}

// Unpack the metallic-mode value
const float FRAG_PACK_SHADED_NON_METALLIC = 0.0;
const float FRAG_PACK_SHADED_METALLIC = 0.1;
const float FRAG_PACK_SHADED_RANGE_INV = 1.0 / (FRAG_PACK_SHADED_METALLIC - FRAG_PACK_SHADED_NON_METALLIC);

const float FRAG_PACK_LIGHTMAPPED_NON_METALLIC = 0.2;
const float FRAG_PACK_LIGHTMAPPED_METALLIC = 0.3;
const float FRAG_PACK_LIGHTMAPPED_RANGE_INV = 1.0 / (FRAG_PACK_LIGHTMAPPED_METALLIC - FRAG_PACK_LIGHTMAPPED_NON_METALLIC);

const float FRAG_PACK_SCATTERING_NON_METALLIC = 0.4;
const float FRAG_PACK_SCATTERING_METALLIC = 0.5;
const float FRAG_PACK_SCATTERING_RANGE_INV = 1.0 / (FRAG_PACK_SCATTERING_METALLIC - FRAG_PACK_SCATTERING_NON_METALLIC);

const float FRAG_PACK_UNLIT = 0.6;

const int FRAG_MODE_UNLIT = 0;
const int FRAG_MODE_SHADED = 1;
const int FRAG_MODE_LIGHTMAPPED = 2;
const int FRAG_MODE_SCATTERING = 3;

void unpackModeMetallic(float rawValue, out int mode, out float metallic) {
    if (rawValue <= FRAG_PACK_SHADED_METALLIC) {
        mode = FRAG_MODE_SHADED;
        metallic = clamp((rawValue - FRAG_PACK_SHADED_NON_METALLIC) * FRAG_PACK_SHADED_RANGE_INV, 0.0, 1.0);
    } else if (rawValue <= FRAG_PACK_LIGHTMAPPED_METALLIC) {
        mode = FRAG_MODE_LIGHTMAPPED;
        metallic = clamp((rawValue - FRAG_PACK_LIGHTMAPPED_NON_METALLIC) * FRAG_PACK_LIGHTMAPPED_RANGE_INV, 0.0, 1.0);
    } else if (rawValue <= FRAG_PACK_SCATTERING_METALLIC) {
        mode = FRAG_MODE_SCATTERING;
        metallic = clamp((rawValue - FRAG_PACK_SCATTERING_NON_METALLIC) * FRAG_PACK_SCATTERING_RANGE_INV, 0.0, 1.0);
    } else if (rawValue >= FRAG_PACK_UNLIT) {
        mode = FRAG_MODE_UNLIT;
        metallic = 0.0;
    }
}

float packShadedMetallic(float metallic) {
    return mix(FRAG_PACK_SHADED_NON_METALLIC, FRAG_PACK_SHADED_METALLIC, metallic);
}

float packLightmappedMetallic(float metallic) {
    return mix(FRAG_PACK_LIGHTMAPPED_NON_METALLIC, FRAG_PACK_LIGHTMAPPED_METALLIC, metallic);
}

float packScatteringMetallic(float metallic) {
    return mix(FRAG_PACK_SCATTERING_NON_METALLIC, FRAG_PACK_SCATTERING_METALLIC, metallic);
}

float packUnlit() {
    return FRAG_PACK_UNLIT;
}

layout(location=0) out vec4 _fragColor0; // albedo / metallic
layout(location=1) out vec4 _fragColor1; // Normal
layout(location=2) out vec4 _fragColor2; // scattering / emissive / occlusion
layout(location=3) out vec4 _fragColor3; // emissive

// the alpha threshold
const float alphaThreshold = 0.5;
float evalOpaqueFinalAlpha(float alpha, float mapAlpha) {
    return mix(alpha, 1.0 - alpha, step(mapAlpha, alphaThreshold));
}

const float DEFAULT_ROUGHNESS = 0.9;
const float DEFAULT_SHININESS = 10.0;
const float DEFAULT_METALLIC = 0.0;
const vec3 DEFAULT_SPECULAR = vec3(0.1);
const vec3 DEFAULT_EMISSIVE = vec3(0.0);
const float DEFAULT_OCCLUSION = 1.0;
const float DEFAULT_SCATTERING = 0.0;
const vec3 DEFAULT_FRESNEL = DEFAULT_EMISSIVE;

// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef RENDER_UTILS_SHADER_CONSTANTS_H
#define RENDER_UTILS_SHADER_CONSTANTS_H

#define RENDER_UTILS_ATTR_TEXCOORD01 0
#define RENDER_UTILS_ATTR_COLOR 1

// World space
#define RENDER_UTILS_ATTR_POSITION_WS 2
#define RENDER_UTILS_ATTR_NORMAL_WS 3
#define RENDER_UTILS_ATTR_TANGENT_WS 4

// Model space 
#define RENDER_UTILS_ATTR_POSITION_MS 5
#define RENDER_UTILS_ATTR_NORMAL_MS 6

// Eye space
#define RENDER_UTILS_ATTR_POSITION_ES 7

// don't conflict with GPU_ATTR_V2F_STEREO_SIDE in the GPU shader constants
#define RENDER_UTILS_ATTR_DO_NOT_USE 8

// Fade
#define RENDER_UTILS_ATTR_FADE1 9
#define RENDER_UTILS_ATTR_FADE2 10
#define RENDER_UTILS_ATTR_FADE3 11


#define RENDER_UTILS_BUFFER_DEFERRED_FRAME_TRANSFORM 0
#define RENDER_UTILS_BUFFER_LIGHT_MODEL 3
#define RENDER_UTILS_BUFFER_AMBIENT_LIGHT 6
#define RENDER_UTILS_BUFFER_LIGHT_INDEX 7

// Deferred lighting resolution
#define RENDER_UTILS_TEXTURE_DEFERRRED_COLOR 0
#define RENDER_UTILS_TEXTURE_DEFERRRED_NORMAL 1
#define RENDER_UTILS_TEXTURE_DEFERRRED_SPECULAR 2
#define RENDER_UTILS_TEXTURE_DEFERRRED_DEPTH 3
#define RENDER_UTILS_TEXTURE_DEFERRED_OBSCURANCE 4
#define RENDER_UTILS_TEXTURE_DEFERRRED_LINEAR_Z_EYE 5
#define RENDER_UTILS_TEXTURE_DEFERRED_CURVATURE 6
#define RENDER_UTILS_TEXTURE_DEFERRED_DIFFUSED_CURVATURE 7
#define RENDER_UTILS_TEXTURE_DEFERRED_LIGHTING 10
#define RENDER_UTILS_TEXTURE_SKYBOX 11

#define RENDER_UTILS_BUFFER_SHADOW_PARAMS 2
#define RENDER_UTILS_TEXTURE_SHADOW 12

#define RENDER_UTILS_BUFFER_LIGHT_CLUSTER_FRUSTUM_GRID 10
#define RENDER_UTILS_BUFFER_LIGHT_CLUSTER_GRID 11
#define RENDER_UTILS_BUFFER_LIGHT_CLUSTER_CONTENT 12

// Haze
#define RENDER_UTILS_BUFFER_HAZE_PARAMS 7
#define RENDER_UTILS_TEXTURE_HAZE_COLOR 0
#define RENDER_UTILS_TEXTURE_HAZE_LINEAR_DEPTH 1

// Fading
#define RENDER_UTILS_BUFFER_FADE_PARAMS 8
#define RENDER_UTILS_BUFFER_FADE_OBJECT_PARAMS 9
#define RENDER_UTILS_TEXTURE_FADE_MASK 10

// Highlighting
#define RENDER_UTILS_BUFFER_HIGHLIGHT_PARAMS 2
#define RENDER_UTILS_TEXTURE_HIGHLIGHT_SCENE_DEPTH 0
#define RENDER_UTILS_TEXTURE_HIGHLIGHT_DEPTH 1

// Subsurface scattering
#define RENDER_UTILS_BUFFER_SSSC_PARAMS 13
#define RENDER_UTILS_TEXTURE_SSSC_PROFILE 12
#define RENDER_UTILS_TEXTURE_SSSC_LUT 8
#define RENDER_UTILS_TEXTURE_SSSC_SPECULAR_BECKMANN 9

// Ambient occlusion
#define RENDER_UTILS_BUFFER_SSAO_PARAMS 2
#define RENDER_UTILS_BUFFER_SSAO_DEBUG_PARAMS 3
#define RENDER_UTILS_BUFFER_SSAO_BLUR_PARAMS 4
#define RENDER_UTILS_BUFFER_SSAO_FRAME_PARAMS 5
#define RENDER_UTILS_TEXTURE_SSAO_DEPTH 1
#define RENDER_UTILS_TEXTURE_SSAO_NORMAL 2
#define RENDER_UTILS_TEXTURE_SSAO_OCCLUSION 0

// Temporal anti-aliasing
#define RENDER_UTILS_BUFFER_TAA_PARAMS 2
#define RENDER_UTILS_TEXTURE_TAA_HISTORY 0
#define RENDER_UTILS_TEXTURE_TAA_SOURCE 1
#define RENDER_UTILS_TEXTURE_TAA_VELOCITY 2
#define RENDER_UTILS_TEXTURE_TAA_DEPTH 3
#define RENDER_UTILS_TEXTURE_TAA_NEXT 4

// Surface Geometry 
#define RENDER_UTILS_BUFFER_SG_PARAMS 1
#define RENDER_UTILS_TEXTURE_SG_DEPTH 0
#define RENDER_UTILS_TEXTURE_SG_NORMAL 1

// Blur
#define RENDER_UTILS_BUFFER_BLUR_PARAMS 0
#define RENDER_UTILS_TEXTURE_BLUR_SOURCE 0
#define RENDER_UTILS_TEXTURE_BLUR_DEPTH 1

// Tone Mapping
#define RENDER_UTILS_BUFFER_TM_PARAMS 0
#define RENDER_UTILS_TEXTURE_TM_COLOR 0

// Bloom
#define RENDER_UTILS_BUFFER_BLOOM_PARAMS 1
#define RENDER_UTILS_TEXTURE_BLOOM_COLOR 0

// SDF Text rendering
#define RENDER_UTILS_TEXTURE_TEXT_FONT 0
#define RENDER_UTILS_UNIFORM_TEXT_COLOR 0
#define RENDER_UTILS_UNIFORM_TEXT_OUTLINE 1

// Debugging 
#define RENDER_UTILS_BUFFER_DEBUG_SKYBOX 5
#define RENDER_UTILS_DEBUG_TEXTURE0 11
#define RENDER_UTILS_BUFFER_DEBUG_DEFERRED_PARAMS 1

// // Hack Comment

#endif // RENDER_UTILS_SHADER_CONSTANTS_H

// // // Hack Comment
struct LightingModel {
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

// See DeferredShader_BufferSlot in DeferredLightingEffect.cpp
LAYOUT(binding=RENDER_UTILS_BUFFER_LIGHT_MODEL) uniform lightingModelBuffer{
    LightingModel lightingModel;
};

float isUnlitEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.x;
}
float isEmissiveEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.y;
}
float isLightmapEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.z;
}
float isBackgroundEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.w;
}
float isObscuranceEnabled() {
    return lightingModel._ShowContourObscuranceWireframe.y;
}

float isScatteringEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.x;
}
float isDiffuseEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.y;
}
float isSpecularEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.z;
}
float isAlbedoEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.w;
}

float isAmbientEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.x;
}
float isDirectionalEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.y;
}
float isPointEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.z;
}
float isSpotEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.w;
}

float isShowLightContour() {
    return lightingModel._ShowContourObscuranceWireframe.x;
}

float isWireframeEnabled() {
    return lightingModel._ShowContourObscuranceWireframe.z;
}

float isHazeEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.x;
}
float isBloomEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.y;
}
float isSkinningEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.z;
}
float isBlendshapeEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.w;
}



struct SurfaceData {
    vec3 normal;
    vec3 eyeDir;
    vec3 lightDir;
    vec3 halfDir;
    float roughness;
    float roughness2;
    float roughness4;
    float ndotv;
    float ndotl;
    float ndoth;
    float ldoth;
    float smithInvG1NdotV;
};

vec3 getFresnelF0(float metallic, vec3 metalF0) {
    // Enable continuous metallness value by lerping between dielectric
    // and metal fresnel F0 value based on the "metallic" parameter
    return mix(vec3(0.03), metalF0, metallic);
}
void packDeferredFragment(vec3 normal, float alpha, vec3 albedo, float roughness, float metallic, vec3 emissive, float occlusion, float scattering) {
    if (alpha != 1.0) {
        discard;
    }
    _fragColor0 = vec4(albedo, ((scattering > 0.0) ? packScatteringMetallic(metallic) : packShadedMetallic(metallic)));
    _fragColor1 = vec4(packNormal(normal), clamp(roughness, 0.0, 1.0));
    _fragColor2 = vec4(((scattering > 0.0) ? vec3(scattering) : emissive), occlusion);
    
    _fragColor3 = vec4(isEmissiveEnabled() * emissive, 1.0);
}

void packDeferredFragmentLightmap(vec3 normal, float alpha, vec3 albedo, float roughness, float metallic, vec3 lightmap) {
    if (alpha != 1.0) {
        discard;
    }

    _fragColor0 = vec4(albedo, packLightmappedMetallic(metallic));
    _fragColor1 = vec4(packNormal(normal), clamp(roughness, 0.0, 1.0));
    _fragColor2 = vec4(isLightmapEnabled() * lightmap, 1.0);

    _fragColor3 = vec4(isLightmapEnabled() * lightmap * albedo, 1.0);
}

void packDeferredFragmentUnlit(vec3 normal, float alpha, vec3 color) {
    if (alpha != 1.0) {
        discard;
    }
    _fragColor0 = vec4(color, packUnlit());
    _fragColor1 = vec4(packNormal(normal), 1.0);
   // _fragColor2 = vec4(vec3(0.0), 1.0);
    _fragColor3 = vec4(color, 1.0);
}

void packDeferredFragmentTranslucent(vec3 normal, float alpha, vec3 albedo, float roughness) {
    if (alpha <= 0.0) {
        discard;
    }
    _fragColor0 = vec4(albedo.rgb, alpha);
    _fragColor1 = vec4(packNormal(normal), clamp(roughness, 0.0, 1.0));

}

// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef GRAPHICS_SHADER_CONSTANTS_H
#define GRAPHICS_SHADER_CONSTANTS_H

#define GRAPHICS_BUFFER_SKINNING 0
#define GRAPHICS_BUFFER_MATERIAL 1
#define GRAPHICS_BUFFER_KEY_LIGHT 4
#define GRAPHICS_BUFFER_LIGHT 5
#define GRAPHICS_BUFFER_AMBIENT_LIGHT 6

#define GRAPHICS_TEXTURE_MATERIAL_ALBEDO 0
#define GRAPHICS_TEXTURE_MATERIAL_NORMAL 1
#define GRAPHICS_TEXTURE_MATERIAL_METALLIC 2
#define GRAPHICS_TEXTURE_MATERIAL_EMISSIVE_LIGHTMAP 3
#define GRAPHICS_TEXTURE_MATERIAL_ROUGHNESS 4
#define GRAPHICS_TEXTURE_MATERIAL_OCCLUSION 5
#define GRAPHICS_TEXTURE_MATERIAL_SCATTERING 6

// Make sure these match the ones in render-utils/ShaderConstants.h
#define GRAPHICS_TEXTURE_SKYBOX 11
#define GRAPHICS_BUFFER_SKYBOX_PARAMS 5

// // Hack Comment

#endif // GRAPHICS_SHADER_CONSTANTS_H

// // // Hack Comment
const int MAX_TEXCOORDS = 2;

struct TexMapArray { 
    mat4 _texcoordTransforms0;
    mat4 _texcoordTransforms1;
    vec4 _lightmapParams;
};

// The material values (at least the material key) must be precisely bitwise accurate
// to what is provided by the uniform buffer, or the material key has the wrong bits

struct Material {
    vec4 _emissiveOpacity;
    vec4 _albedoRoughness;
    vec4 _metallicScatteringSpare2;
    vec4 _keySpare3;
};

LAYOUT_STD140(binding=GRAPHICS_BUFFER_MATERIAL) uniform materialBuffer {
    Material _mat;
    TexMapArray _texMapArray;
};

Material getMaterial() {
    return _mat;
}
TexMapArray getTexMapArray() {
    return _texMapArray;
}

vec3 getMaterialEmissive(Material m) { return m._emissiveOpacity.rgb; }
float getMaterialOpacity(Material m) { return m._emissiveOpacity.a; }

vec3 getMaterialAlbedo(Material m) { return m._albedoRoughness.rgb; }
float getMaterialRoughness(Material m) { return m._albedoRoughness.a; }
float getMaterialShininess(Material m) { return 1.0 - getMaterialRoughness(m); }

float getMaterialMetallic(Material m) { return m._metallicScatteringSpare2.x; }
float getMaterialScattering(Material m) { return m._metallicScatteringSpare2.y; }

BITFIELD getMaterialKey(Material m) { return floatBitsToInt(m._keySpare3.x); }

const BITFIELD EMISSIVE_VAL_BIT              = 0x00000001;
const BITFIELD UNLIT_VAL_BIT                 = 0x00000002;
const BITFIELD ALBEDO_VAL_BIT                = 0x00000004;
const BITFIELD METALLIC_VAL_BIT              = 0x00000008;
const BITFIELD GLOSSY_VAL_BIT                = 0x00000010;
const BITFIELD OPACITY_VAL_BIT               = 0x00000020;
const BITFIELD OPACITY_MASK_MAP_BIT          = 0x00000040;
const BITFIELD OPACITY_TRANSLUCENT_MAP_BIT   = 0x00000080;
const BITFIELD SCATTERING_VAL_BIT            = 0x00000100;


const BITFIELD EMISSIVE_MAP_BIT              = 0x00000200;
const BITFIELD ALBEDO_MAP_BIT                = 0x00000400;
const BITFIELD METALLIC_MAP_BIT              = 0x00000800;
const BITFIELD ROUGHNESS_MAP_BIT             = 0x00001000;
const BITFIELD NORMAL_MAP_BIT                = 0x00002000;
const BITFIELD OCCLUSION_MAP_BIT             = 0x00004000;
const BITFIELD LIGHTMAP_MAP_BIT              = 0x00008000;
const BITFIELD SCATTERING_MAP_BIT            = 0x00010000;

// // // Hack Comment
// // // Hack Comment
#define TAA_TEXTURE_LOD_BIAS    -1.0

#ifdef GPU_TEXTURE_TABLE_BINDLESS
#define GPU_TEXTURE_TABLE_MAX_NUM_TEXTURES 8

struct GPUTextureTable {
    uvec4 _textures[GPU_TEXTURE_TABLE_MAX_NUM_TEXTURES];
};

#define TextureTable(index, name) layout (std140) uniform gpu_resourceTextureTable##index { GPUTextureTable name; }

#define tableTex(name, slot) sampler2D(name._textures[slot].xy)
#define tableTexMinLod(name, slot) float(name._textures[slot].z)

#define tableTexValue(name, slot, uv) tableTexValueLod(tableTex(matTex, slot), tableTexMinLod(matTex, slot), uv)
    
vec4 tableTexValueLod(sampler2D sampler, float minLod, vec2 uv) {
    float queryLod = textureQueryLod(sampler, uv).x;
    queryLod = max(minLod, queryLod);
    return textureLod(sampler, uv, queryLod);
}
 
#else

#endif

#ifdef GPU_TEXTURE_TABLE_BINDLESS

TextureTable(0, matTex);
#define albedoMap 0
vec4 fetchAlbedoMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, albedoMap, uv);
}
#define roughnessMap 4
float fetchRoughnessMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, roughnessMap, uv).r;
}
#define normalMap 1
vec3 fetchNormalMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, normalMap, uv).xyz;
}
#define metallicMap 2
float fetchMetallicMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, metallicMap, uv).r;
}
#else

LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_ALBEDO) uniform sampler2D albedoMap;
vec4 fetchAlbedoMap(vec2 uv) {
    return texture(albedoMap, uv, TAA_TEXTURE_LOD_BIAS);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_ROUGHNESS) uniform sampler2D roughnessMap;
float fetchRoughnessMap(vec2 uv) {
    return (texture(roughnessMap, uv, TAA_TEXTURE_LOD_BIAS).r);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_NORMAL) uniform sampler2D normalMap;
vec3 fetchNormalMap(vec2 uv) {
    // unpack normal, swizzle to get into hifi tangent space with Y axis pointing out
    vec2 t = 2.0 * (texture(normalMap, uv, TAA_TEXTURE_LOD_BIAS).rg - vec2(0.5, 0.5));
    vec2 t2 = t*t;
    return vec3(t.x, sqrt(1.0 - t2.x - t2.y), t.y);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_METALLIC) uniform sampler2D metallicMap;
float fetchMetallicMap(vec2 uv) {
    return (texture(metallicMap, uv, TAA_TEXTURE_LOD_BIAS).r);
}
#endif




LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_EMISSIVE_LIGHTMAP) uniform sampler2D emissiveMap;
vec3 fetchLightmapMap(vec2 uv) {
    vec2 lightmapParams = getTexMapArray()._lightmapParams.xy;
    return (vec3(lightmapParams.x) + lightmapParams.y * texture(emissiveMap, uv).rgb);
}


//  Generated on Wed Dec  5 03:19:06 2018
//
//  Created by Olivier Prat on 04/12/17.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
// // // Hack Comment
#define CATEGORY_COUNT    5

// glsl / C++ compatible source as interface for FadeEffect
#ifdef __cplusplus
#   define VEC4 glm::vec4
#   define VEC2 glm::vec2
#   define FLOAT32 glm::float32
#   define INT32 glm::int32
#else
#   define VEC4 vec4
#   define VEC2 vec2
#   define FLOAT32 float
#   define INT32 int
#endif

struct FadeParameters
{
    VEC4    _noiseInvSizeAndLevel;
    VEC4    _innerEdgeColor;
    VEC4    _outerEdgeColor;
    VEC2    _edgeWidthInvWidth;
    FLOAT32   _baseLevel;
    INT32     _isInverted;
};

    // //
// glsl / C++ compatible source as interface for FadeObjectParams
#ifdef __cplusplus
#   define FOP_VEC4 glm::vec4
#   define FOP_VEC2 glm::vec2
#   define FOP_FLOAT32 glm::float32
#   define FOP_INT32 glm::int32
#else
#   define FOP_VEC4 vec4
#   define FOP_VEC2 vec2
#   define FOP_FLOAT32 float
#   define FOP_INT32 int
#endif

struct FadeObjectParams {
    FOP_VEC4 noiseOffset;
    FOP_VEC4 baseOffset;
    FOP_VEC4 baseInvSize;
    FOP_INT32 category;
    FOP_FLOAT32 threshold;
};

    // //
// See ShapePipeline::Slot::BUFFER in ShapePipeline.h
LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_FADE_PARAMS) uniform fadeParametersBuffer {
    FadeParameters fadeParameters[CATEGORY_COUNT];
};

// See ShapePipeline::Slot::MAP in ShapePipeline.h
LAYOUT(binding=RENDER_UTILS_TEXTURE_FADE_MASK) uniform sampler2D fadeMaskMap;

vec3 getNoiseInverseSize(int category) {
    return fadeParameters[category]._noiseInvSizeAndLevel.xyz;
}

float getNoiseLevel(int category) {
    return fadeParameters[category]._noiseInvSizeAndLevel.w;
}

vec2 hash2D(vec3 position) {
    return position.xy* vec2(0.1677,  0.221765) + position.z*0.561;
}

float noise3D(vec3 position) {
    float n = textureLod(fadeMaskMap, hash2D(position), 0.0).r;
    return pow(n, 1.0/2.2); // Remove sRGB. Need to fix this later directly in the texture
}

float evalFadeNoiseGradient(FadeObjectParams params, vec3 position) {
    // Do tri-linear interpolation
    vec3    noisePosition = position * getNoiseInverseSize(params.category) + params.noiseOffset.xyz;
    vec3    noisePositionFloored = floor(noisePosition);
    vec3    noisePositionFraction = fract(noisePosition);

    noisePositionFraction = noisePositionFraction*noisePositionFraction*(3.0 - 2.0*noisePositionFraction);

    float   noiseLowXLowYLowZ = noise3D(noisePositionFloored);
    float   noiseLowXHighYLowZ = noise3D(noisePositionFloored+vec3(0,1,0));
    float   noiseHighXLowYLowZ = noise3D(noisePositionFloored+vec3(1,0,0));
    float   noiseHighXHighYLowZ = noise3D(noisePositionFloored+vec3(1,1,0));
    float   noiseLowXLowYHighZ = noise3D(noisePositionFloored+vec3(0,0,1));
    float   noiseLowXHighYHighZ = noise3D(noisePositionFloored+vec3(0,1,1));
    float   noiseHighXLowYHighZ = noise3D(noisePositionFloored+vec3(1,0,1));
    float   noiseHighXHighYHighZ = noise3D(noisePositionFloored+vec3(1,1,1));
    vec4    maskLowZ = vec4(noiseLowXLowYLowZ, noiseLowXHighYLowZ, noiseHighXLowYLowZ, noiseHighXHighYLowZ);
    vec4    maskHighZ = vec4(noiseLowXLowYHighZ, noiseLowXHighYHighZ, noiseHighXLowYHighZ, noiseHighXHighYHighZ);
    vec4    maskXY = mix(maskLowZ, maskHighZ, noisePositionFraction.z);
    vec2    maskY = mix(maskXY.xy, maskXY.zw, noisePositionFraction.x);

    float noise = mix(maskY.x, maskY.y, noisePositionFraction.y);
    noise -= 0.5;   // Center on value 0
    return noise * getNoiseLevel(params.category);
}

float evalFadeBaseGradient(FadeObjectParams params, vec3 position) {
    float gradient = length((position - params.baseOffset.xyz) * params.baseInvSize.xyz);
    gradient = gradient-0.5;  // Center on value 0.5
    gradient *= fadeParameters[params.category]._baseLevel;
    return gradient;
}

float evalFadeGradient(FadeObjectParams params, vec3 position) {
    float baseGradient = evalFadeBaseGradient(params, position);
    float noiseGradient = evalFadeNoiseGradient(params, position);
    float gradient = noiseGradient+baseGradient+0.5;

    return gradient;
}

float evalFadeAlpha(FadeObjectParams params, vec3 position) {
    float alpha = evalFadeGradient(params, position)-params.threshold;
    if (fadeParameters[params.category]._isInverted != 0) {
        alpha = -alpha;
    }
    return alpha;
}

void applyFadeClip(FadeObjectParams params, vec3 position) {
    if (evalFadeAlpha(params, position) < 0.0) {
        discard;
    }
}

void applyFade(FadeObjectParams params, vec3 position, out vec3 emissive) {
    float alpha = evalFadeAlpha(params, position);

    if (alpha < 0.0) {
        discard;
    }
    
    float edgeMask = alpha * fadeParameters[params.category]._edgeWidthInvWidth.y;
    float edgeAlpha = 1.0-clamp(edgeMask, 0.0, 1.0);

    edgeMask = step(edgeMask, 1.0);
    edgeAlpha *= edgeAlpha; // Square to have a nice ease out
    vec4 color = mix(fadeParameters[params.category]._innerEdgeColor, fadeParameters[params.category]._outerEdgeColor, edgeAlpha);
    emissive = color.rgb * edgeMask * color.a;
}


LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_FADE_OBJECT_PARAMS) uniform fadeObjectParametersBuffer {
    FadeObjectParams fadeObjectParams;
};




layout(location=RENDER_UTILS_ATTR_POSITION_WS) in vec4 _positionWS;
layout(location=RENDER_UTILS_ATTR_POSITION_ES) in vec4 _positionES;
layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=RENDER_UTILS_ATTR_NORMAL_WS) in vec3 _normalWS;
layout(location=RENDER_UTILS_ATTR_TANGENT_WS) in vec3 _tangentWS;
layout(location=RENDER_UTILS_ATTR_COLOR) in vec4 _color;

void main(void) {
    vec3 fadeEmissive;
    FadeObjectParams fadeParams;
    fadeParams = fadeObjectParams;

    applyFade(fadeParams, _positionWS.xyz, fadeEmissive);

    Material mat = getMaterial();
    BITFIELD matKey = getMaterialKey(mat);
    vec4 albedoTex = (((matKey & (ALBEDO_MAP_BIT | OPACITY_MASK_MAP_BIT | OPACITY_TRANSLUCENT_MAP_BIT)) != 0) ? fetchAlbedoMap(_texCoord0) : vec4(1.0));
float roughnessTex = (((matKey & ROUGHNESS_MAP_BIT) != 0) ? fetchRoughnessMap(_texCoord0) : 1.0);
vec3 normalTex = (((matKey & NORMAL_MAP_BIT) != 0) ? fetchNormalMap(_texCoord0) : vec3(0.0, 1.0, 0.0));
float metallicTex = (((matKey & METALLIC_MAP_BIT) != 0) ? fetchMetallicMap(_texCoord0) : 0.0);

    vec3 lightmap = fetchLightmapMap(_texCoord1);


    vec3 albedo = getMaterialAlbedo(mat);
    {
    albedo.xyz = (((matKey & ALBEDO_VAL_BIT) != 0) ? albedo : vec3(1.0));

    if (((matKey & ALBEDO_MAP_BIT) != 0)) {
        albedo.xyz *= albedoTex.xyz;
    }
}
;
    albedo *= _color.rgb;

    float roughness = getMaterialRoughness(mat);
    {
    roughness = (((matKey & ROUGHNESS_MAP_BIT) != 0) ? roughnessTex : roughness);
}
;

    float metallic = getMaterialMetallic(mat);
    {
    metallic = (((matKey & METALLIC_MAP_BIT) != 0) ? metallicTex : metallic);
}
;
    
    vec3 fragNormal;
    {
    vec3 normalizedNormal = normalize(_normalWS.xyz);
    vec3 normalizedTangent = normalize(_tangentWS.xyz);
    vec3 normalizedBitangent = cross(normalizedNormal, normalizedTangent);
    // attenuate the normal map divergence from the mesh normal based on distance
    // The attenuation range [30,100] meters from the eye is arbitrary for now
    vec3 localNormal = mix(normalTex, vec3(0.0, 1.0, 0.0), smoothstep(30.0, 100.0, (-_positionES).z));
    fragNormal = vec3(normalizedBitangent * localNormal.x + normalizedNormal * localNormal.y + normalizedTangent * localNormal.z);
}


    packDeferredFragmentLightmap(
        normalize(fragNormal),
        evalOpaqueFinalAlpha(getMaterialOpacity(mat), albedoTex.a),
        albedo,
        roughness,
        metallic,
        lightmap + fadeEmissive);
}
