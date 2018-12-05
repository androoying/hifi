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
//PC 410 core
// 
//  Generated on Wed Dec  5 03:19:11 2018
//
//  Created by Zach Pomerantz on 2/3/2016.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

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
#else

LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_ALBEDO) uniform sampler2D albedoMap;
vec4 fetchAlbedoMap(vec2 uv) {
    return texture(albedoMap, uv, TAA_TEXTURE_LOD_BIAS);
}
#endif



layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=RENDER_UTILS_ATTR_COLOR) in vec4 _color;

layout(location=0) out vec4 _fragColor;

void main(void) {
    Material mat = getMaterial();
    BITFIELD matKey = getMaterialKey(mat);
    vec4 albedoTex = (((matKey & (ALBEDO_MAP_BIT | OPACITY_MASK_MAP_BIT | OPACITY_TRANSLUCENT_MAP_BIT)) != 0) ? fetchAlbedoMap(_texCoord0) : vec4(1.0));


    float opacity = getMaterialOpacity(mat) * _color.a;
    {
    const float OPACITY_MASK_THRESHOLD = 0.5;
    opacity = (((matKey & (OPACITY_TRANSLUCENT_MAP_BIT | OPACITY_MASK_MAP_BIT)) != 0) ?
                     (((matKey & OPACITY_MASK_MAP_BIT) != 0) ? step(OPACITY_MASK_THRESHOLD, albedoTex.a) : albedoTex.a) :
                     1.0) * opacity;
}
;
    {
    if (opacity < 1.e-6) {
        discard;
    }
}
;

    vec3 albedo = getMaterialAlbedo(mat);
    {
    albedo.xyz = (((matKey & ALBEDO_VAL_BIT) != 0) ? albedo : vec3(1.0));

    if (((matKey & ALBEDO_MAP_BIT) != 0)) {
        albedo.xyz *= albedoTex.xyz;
    }
}
;
    albedo *= _color.rgb;

    _fragColor = vec4(albedo * isUnlitEnabled(), opacity);
}
