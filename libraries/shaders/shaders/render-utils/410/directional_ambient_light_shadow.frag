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
//  Generated on Wed Dec  5 03:18:56 2018
//
//  directional_ambient_light_shadow.frag
//  fragment shader
//
//  Created by Zach Pomerantz on 1/18/2016.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

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
// glsl / C++ compatible source as interface for Shadows
#ifdef __cplusplus
#   define MAT4 glm::mat4
#else
#   define MAT4 mat4
#endif

#define SHADOW_CASCADE_MAX_COUNT    4

struct ShadowTransform {
    MAT4 reprojection;
    float fixedBias;
    float slopeBias;
    float _padding1;
    float _padding2;
};

struct ShadowParameters {
    ShadowTransform cascades[SHADOW_CASCADE_MAX_COUNT];
    int cascadeCount;
    float invMapSize;
    float invCascadeBlendWidth;
    float maxDistance;
    float invFalloffDistance;
};

// //
LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_SHADOW_PARAMS) uniform shadowTransformBuffer {
    ShadowParameters shadow;
};

int getShadowCascadeCount() {
    return shadow.cascadeCount;
}

float getShadowCascadeInvBlendWidth() {
    return shadow.invCascadeBlendWidth;
}

float evalShadowFalloff(float depth) {
    return clamp((shadow.maxDistance-depth) * shadow.invFalloffDistance, 0.0, 1.0);
}

mat4 getShadowReprojection(int cascadeIndex) {
    return shadow.cascades[cascadeIndex].reprojection;
}

float getShadowScale() {
    return shadow.invMapSize;
}

float getShadowFixedBias(int cascadeIndex) {
    return shadow.cascades[cascadeIndex].fixedBias;
}

float getShadowSlopeBias(int cascadeIndex) {
    return shadow.cascades[cascadeIndex].slopeBias;
}


// Compute the texture coordinates from world coordinates
vec4 evalShadowTexcoord(int cascadeIndex, vec4 position) {
    vec4 shadowCoord = getShadowReprojection(cascadeIndex) * position;
    return vec4(shadowCoord.xyz, 1.0);
}

bool isShadowCascadeProjectedOnPixel(vec4 cascadeTexCoords) {
    bvec2 greaterThanZero = greaterThan(cascadeTexCoords.xy, vec2(0));
    bvec2 lessThanOne = lessThan(cascadeTexCoords.xy, vec2(1));
    return all(greaterThanZero) && all(lessThanOne);
}

int getFirstShadowCascadeOnPixel(int startCascadeIndex, vec4 worldPosition, out vec4 cascadeShadowCoords) {
    int cascadeIndex;
    startCascadeIndex = min(startCascadeIndex, getShadowCascadeCount()-1);
    for (cascadeIndex=startCascadeIndex ; cascadeIndex<getShadowCascadeCount() ; cascadeIndex++) {
        cascadeShadowCoords = evalShadowTexcoord(cascadeIndex, worldPosition);
        if (isShadowCascadeProjectedOnPixel(cascadeShadowCoords)) {
            return cascadeIndex;
        }
    }
    return cascadeIndex;
}

float evalShadowCascadeWeight(vec4 cascadeTexCoords) {
    // Inspired by DirectX CascadeShadowMaps11 example
    vec2 distanceToOne = vec2(1.0) - cascadeTexCoords.xy;
    float blend1 = min( cascadeTexCoords.x, cascadeTexCoords.y );
    float blend2 = min( distanceToOne.x, distanceToOne.y );
    float blend = min( blend1, blend2 );
    return clamp(blend * getShadowCascadeInvBlendWidth(), 0.0, 1.0);
}

float evalCascadeMix(float firstCascadeWeight, float secondCascadeWeight) {
    return ((1.0-firstCascadeWeight) * secondCascadeWeight) / (firstCascadeWeight + secondCascadeWeight);
}

float determineShadowCascadesOnPixel(vec4 worldPosition, float viewDepth, out vec4 cascadeShadowCoords[2], out ivec2 cascadeIndices) {
    cascadeIndices.x = getFirstShadowCascadeOnPixel(0, worldPosition, cascadeShadowCoords[0]);
    cascadeIndices.y = cascadeIndices.x+1;
    float firstCascadeWeight = evalShadowCascadeWeight(cascadeShadowCoords[0]);
    if (firstCascadeWeight<1.0 && cascadeIndices.x < (getShadowCascadeCount()-1)) {
        cascadeIndices.y = getFirstShadowCascadeOnPixel(cascadeIndices.y, worldPosition, cascadeShadowCoords[1]);

        float secondCascadeWeight = evalShadowCascadeWeight(cascadeShadowCoords[1]);
        // Returns the mix amount between first and second cascade.
        return evalCascadeMix(firstCascadeWeight, secondCascadeWeight);
    } else {
        return 0.0;
    }
}

#define SHADOW_DITHER                   1
#define SHADOW_NOISE_ENABLED            0
#define SHADOW_SCREEN_SPACE_DITHER      1

// the shadow texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_SHADOW) uniform sampler2DArrayShadow shadowMaps;

// Sample the shadowMap with PCF (built-in)
float fetchShadow(int cascadeIndex, vec3 shadowTexcoord) {
    return texture(shadowMaps, vec4(shadowTexcoord.xy, cascadeIndex, shadowTexcoord.z));
}

vec2 PCFkernel[4] = vec2[4](
    vec2(-1.5, 0.5),
    vec2(0.5, 0.5),
    vec2(-1.5, -1.5),
    vec2(0.5, -1.5)
);

#if SHADOW_NOISE_ENABLED
float evalShadowNoise(vec4 seed) {
    float dot_product = dot(seed, vec4(12.9898,78.233,45.164,94.673));
    return fract(sin(dot_product) * 43758.5453);
}
#endif

struct ShadowSampleOffsets {
    vec3 points[4];
};

ShadowSampleOffsets evalShadowFilterOffsets(vec4 position) {
    float shadowScale = getShadowScale();
    ShadowSampleOffsets offsets;

#if SHADOW_SCREEN_SPACE_DITHER
    // Pattern dithering in screen space
    ivec2 coords = ivec2(gl_FragCoord.xy);
#else
    // Pattern dithering in world space (mm resolution)
    ivec2 coords = ivec2(position.x, position.y+position.z);
#endif

#if SHADOW_NOISE_ENABLED
    // Add some noise to break dithering
    int index = int(4.0*evalShadowNoise(gl_FragCoord.xyyx))%4;
    coords.x += index & 1;
    coords.y += (index & 2) >> 1;
#endif

    // Offset for efficient PCF, see http://http.developer.nvidia.com/GPUGems/gpugems_ch11.html
    ivec2 offset = coords & ivec2(1,1);
    offset.y = (offset.x+offset.y) & 1;

    offsets.points[0] = shadowScale * vec3(vec2(offset) + PCFkernel[0], 0.0);
    offsets.points[1] = shadowScale * vec3(vec2(offset) + PCFkernel[1], 0.0);
    offsets.points[2] = shadowScale * vec3(vec2(offset) + PCFkernel[2], 0.0);
    offsets.points[3] = shadowScale * vec3(vec2(offset) + PCFkernel[3], 0.0);

    return offsets;
}

float evalShadowAttenuationPCF(int cascadeIndex, ShadowSampleOffsets offsets, vec4 shadowTexcoord, float bias) {
    shadowTexcoord.z -= bias;
#if SHADOW_DITHER
    float shadowAttenuation = 0.25 * (
        fetchShadow(cascadeIndex, shadowTexcoord.xyz + offsets.points[0]) +
        fetchShadow(cascadeIndex, shadowTexcoord.xyz + offsets.points[1]) +
        fetchShadow(cascadeIndex, shadowTexcoord.xyz + offsets.points[2]) +
        fetchShadow(cascadeIndex, shadowTexcoord.xyz + offsets.points[3])
    );
#else
    float shadowAttenuation = fetchShadow(cascadeIndex, shadowTexcoord.xyz);
#endif
    return shadowAttenuation;
}

float evalShadowCascadeAttenuation(int cascadeIndex, ShadowSampleOffsets offsets, vec4 shadowTexcoord, float oneMinusNdotL) {
    float bias = getShadowFixedBias(cascadeIndex) + getShadowSlopeBias(cascadeIndex) * oneMinusNdotL;
    return evalShadowAttenuationPCF(cascadeIndex, offsets, shadowTexcoord, bias);
}

float evalShadowAttenuation(vec3 worldLightDir, vec4 worldPosition, float viewDepth, vec3 worldNormal) {
    ShadowSampleOffsets offsets = evalShadowFilterOffsets(worldPosition);

    vec4 cascadeShadowCoords[4];
    vec4 cascadeWeights;
    vec4 cascadeAttenuations = vec4(1.0);
    vec3 cascadeMix;
    bvec4 isPixelOnCascade;
    int cascadeIndex;
    float oneMinusNdotL = 1.0 - clamp(dot(worldLightDir, worldNormal), 0.0, 1.0);

    for (cascadeIndex=0 ; cascadeIndex<getShadowCascadeCount() ; cascadeIndex++) {
        cascadeShadowCoords[cascadeIndex] = evalShadowTexcoord(cascadeIndex, worldPosition);
    }

    isPixelOnCascade.x = isShadowCascadeProjectedOnPixel(cascadeShadowCoords[0]);
    isPixelOnCascade.y = isShadowCascadeProjectedOnPixel(cascadeShadowCoords[1]);
    isPixelOnCascade.z = isShadowCascadeProjectedOnPixel(cascadeShadowCoords[2]);
    isPixelOnCascade.w = isShadowCascadeProjectedOnPixel(cascadeShadowCoords[3]);

    if (isPixelOnCascade.x) {
        cascadeAttenuations.x = evalShadowCascadeAttenuation(0, offsets, cascadeShadowCoords[0], oneMinusNdotL);
    }
    if (isPixelOnCascade.y) {
        cascadeAttenuations.y = evalShadowCascadeAttenuation(1, offsets, cascadeShadowCoords[1], oneMinusNdotL);
    }
    if (isPixelOnCascade.z) {
        cascadeAttenuations.z = evalShadowCascadeAttenuation(2, offsets, cascadeShadowCoords[2], oneMinusNdotL);
    }
    if (isPixelOnCascade.w) {
        cascadeAttenuations.w = evalShadowCascadeAttenuation(3, offsets, cascadeShadowCoords[3], oneMinusNdotL);
    }

    cascadeWeights.x = evalShadowCascadeWeight(cascadeShadowCoords[0]);
    cascadeWeights.y = evalShadowCascadeWeight(cascadeShadowCoords[1]);
    cascadeWeights.z = evalShadowCascadeWeight(cascadeShadowCoords[2]);
    cascadeWeights.w = evalShadowCascadeWeight(cascadeShadowCoords[3]);
    cascadeWeights = mix(vec4(0.0), cascadeWeights, isPixelOnCascade);

    cascadeMix.x = evalCascadeMix(cascadeWeights.x, cascadeWeights.y);
    cascadeMix.y = evalCascadeMix(cascadeWeights.y, cascadeWeights.z);
    cascadeMix.z = evalCascadeMix(cascadeWeights.z, cascadeWeights.w);

    vec3 attenuations = mix(cascadeAttenuations.xyz, cascadeAttenuations.yzw, cascadeMix.xyz);

    attenuations.x = mix(1.0, attenuations.x, isPixelOnCascade.x);
    attenuations.y = mix(1.0, attenuations.y, !isPixelOnCascade.x && isPixelOnCascade.y);
    attenuations.z = mix(1.0, attenuations.z, !any(isPixelOnCascade.xy) && any(isPixelOnCascade.zw));

    float attenuation = min(attenuations.x, min(attenuations.y, attenuations.z));

    // Falloff to max distance
    return mix(1.0, attenuation, evalShadowFalloff(viewDepth));
}

// // // Hack Comment
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

// See DeferredShader_MapSlot in DeferredLightingEffect.cpp for constants

// the albedo texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRRED_COLOR) uniform sampler2D albedoMap;

// the normal texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRRED_NORMAL) uniform sampler2D normalMap;

// the specular texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRRED_SPECULAR) uniform sampler2D specularMap;

// the depth texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRRED_DEPTH) uniform sampler2D depthMap;
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRRED_LINEAR_Z_EYE) uniform sampler2D linearZeyeMap;

// the obscurance texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRED_OBSCURANCE) uniform sampler2D obscuranceMap;

// the lighting texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRED_LIGHTING) uniform sampler2D lightingMap;


struct DeferredFragment {
    vec4 position;
    vec3 normal;
    float metallic;
    vec3 albedo;
    float obscurance;
    vec3 fresnel;
    float roughness;
    int mode;
    float scattering;
    float depthVal;
};

vec3 getFresnelF0(float metallic, vec3 metalF0) {
    // Enable continuous metallness value by lerping between dielectric
    // and metal fresnel F0 value based on the "metallic" parameter
    return mix(vec3(0.03), metalF0, metallic);
}
DeferredFragment unpackDeferredFragmentNoPosition(vec2 texcoord) {
    vec4 normalVal;
    vec4 diffuseVal;
    vec4 specularVal;
    
    DeferredFragment frag;
    frag.depthVal = -1.0;
    normalVal = texture(normalMap, texcoord);
    diffuseVal = texture(albedoMap, texcoord);
    specularVal = texture(specularMap, texcoord);
    frag.obscurance = texture(obscuranceMap, texcoord).x;

    // Unpack the normal from the map
    frag.normal = unpackNormal(normalVal.xyz);
    frag.roughness = normalVal.a;

    // Diffuse color and unpack the mode and the metallicness
    frag.albedo = diffuseVal.xyz;
    frag.scattering = 0.0;
    unpackModeMetallic(diffuseVal.w, frag.mode, frag.metallic);

    frag.obscurance = min(specularVal.w, frag.obscurance);

    if (frag.mode == FRAG_MODE_SCATTERING) {
        frag.scattering = specularVal.x;
    }

    frag.fresnel = getFresnelF0(frag.metallic, diffuseVal.xyz);

    return frag;
}


DeferredFragment unpackDeferredFragmentNoPositionNoAmbient(vec2 texcoord) {
    vec4 normalVal;
    vec4 diffuseVal;

    DeferredFragment frag;
    frag.depthVal = -1.0;
    normalVal = texture(normalMap, texcoord);
    diffuseVal = texture(albedoMap, texcoord);

    // Unpack the normal from the map
    frag.normal = unpackNormal(normalVal.xyz);
    frag.roughness = normalVal.a;

    // Diffuse color and unpack the mode and the metallicness
    frag.albedo = diffuseVal.xyz;
    frag.scattering = 0.0;
    unpackModeMetallic(diffuseVal.w, frag.mode, frag.metallic);

    //frag.emissive = specularVal.xyz;
    frag.obscurance = 1.0;

    frag.fresnel = getFresnelF0(frag.metallic, diffuseVal.xyz);

    return frag;
}


// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef GPU_SHADER_CONSTANTS_H
#define GPU_SHADER_CONSTANTS_H

#define GPU_BUFFER_TRANSFORM_CAMERA 15
#define GPU_BUFFER_TEXTURE_TABLE0 16
#define GPU_BUFFER_TEXTURE_TABLE1 17
#define GPU_BUFFER_CAMERA_CORRECTION 18

#define GPU_TEXTURE_TRANSFORM_OBJECT 31


#define GPU_RESOURCE_BUFFER_SLOT0_TEXTURE 35
#define GPU_RESOURCE_BUFFER_SLOT1_TEXTURE 36
#define GPU_RESOURCE_BUFFER_SLOT0_STORAGE 0
#define GPU_RESOURCE_BUFFER_SLOT1_STORAGE 1

// Mip creation
#define GPU_TEXTURE_MIP_CREATION_INPUT 30

#define GPU_STORAGE_TRANSFORM_OBJECT 7

#define GPU_ATTR_POSITION 0
#define GPU_ATTR_NORMAL 1
#define GPU_ATTR_COLOR 2
#define GPU_ATTR_TEXCOORD0 3
#define GPU_ATTR_TANGENT 4
#define GPU_ATTR_SKIN_CLUSTER_INDEX 5
#define GPU_ATTR_SKIN_CLUSTER_WEIGHT 6
#define GPU_ATTR_TEXCOORD1 7
#define GPU_ATTR_TEXCOORD2 8
#define GPU_ATTR_TEXCOORD3 9
#define GPU_ATTR_TEXCOORD4 10
#define GPU_ATTR_STEREO_SIDE 14
#define GPU_ATTR_DRAW_CALL_INFO 15

// OSX seems to have an issue using 14 as an attribute location for passing from the vertex to the fragment shader
#define GPU_ATTR_V2F_STEREO_SIDE 8

#define GPU_UNIFORM_EXTRA0 110
#define GPU_UNIFORM_EXTRA1 111
#define GPU_UNIFORM_EXTRA2 112
#define GPU_UNIFORM_EXTRA3 113
#define GPU_UNIFORM_EXTRA4 114
#define GPU_UNIFORM_EXTRA5 115
#define GPU_UNIFORM_EXTRA6 116
#define GPU_UNIFORM_EXTRA7 117
#define GPU_UNIFORM_EXTRA8 118
#define GPU_UNIFORM_EXTRA9 119

// // Hack Comment
#endif // GPU_SHADER_CONSTANTS_H

// // // Hack Comment
// // // Hack Comment
struct CameraCorrection {
    mat4 _correction;
    mat4 _correctionInverse;
    
    mat4 _prevView;
    mat4 _prevViewInverse;
};
 
LAYOUT(binding=GPU_BUFFER_CAMERA_CORRECTION) uniform cameraCorrectionBuffer {
    CameraCorrection cameraCorrection;
};

struct DeferredFrameTransform {
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

LAYOUT(binding=RENDER_UTILS_BUFFER_DEFERRED_FRAME_TRANSFORM) uniform deferredFrameTransformBuffer {
    DeferredFrameTransform frameTransform;
};

vec2 getWidthHeight(int resolutionLevel) {
    return vec2(ivec2(frameTransform._pixelInfo.zw) >> resolutionLevel);
}

vec2 getInvWidthHeight() {
    return frameTransform._invPixelInfo.xy;
}

float getProjScaleEye() {
    return frameTransform._projection[0][1][1];
}

float getProjScale(int resolutionLevel) {
    return getWidthHeight(resolutionLevel).y * frameTransform._projection[0][1][1] * 0.5;
}
mat4 getProjection(int side) {
    return frameTransform._projection[side];
}
mat4 getProjectionMono() {
    return frameTransform._projectionMono;
}
mat4 getUnjitteredProjection(int side) {
    return frameTransform._projectionUnJittered[side];
}
mat4 getUnjitteredInvProjection(int side) {
    return frameTransform._invProjectionUnJittered[side];
}

// positive near distance of the projection
float getProjectionNear() {
    float planeC = frameTransform._projection[0][2][3] + frameTransform._projection[0][2][2];
    float planeD = frameTransform._projection[0][3][2];
    return planeD / planeC;
}

// positive far distance of the projection
float getPosLinearDepthFar() {
    return -frameTransform._depthInfo.z;
}

mat4 getViewInverse() {
    return frameTransform._viewInverse * cameraCorrection._correctionInverse;
}

mat4 getView() {
    return cameraCorrection._correction * frameTransform._view;
}

mat4 getPreviousView() {
    return cameraCorrection._prevView;
}

mat4 getPreviousViewInverse() {
    return cameraCorrection._prevViewInverse;
}

DeferredFrameTransform getDeferredFrameTransform() {
    DeferredFrameTransform result = frameTransform;
    result._view = getView();  
    result._viewInverse = getViewInverse();  
    return result;
}

bool isStereo() {
    return frameTransform._stereoInfo.x > 0.0f;
}

float getStereoSideWidth(int resolutionLevel) {
    return float(int(frameTransform._stereoInfo.y) >> resolutionLevel);
}
float getStereoSideHeight(int resolutionLevel) {
    return float(int(frameTransform._pixelInfo.w) >> resolutionLevel);
}

vec2 getStereoSideSize(int resolutionLevel) {
    return vec2(getStereoSideWidth(resolutionLevel), getStereoSideHeight(resolutionLevel));
}

ivec4 getStereoSideInfoFromWidth(int xPos, int sideWidth) {
    return ivec4(xPos < sideWidth ? ivec2(0, 0) : ivec2(1, sideWidth), sideWidth, isStereo());
}

ivec4 getStereoSideInfo(int xPos, int resolutionLevel) {
    int sideWidth = int(getStereoSideWidth(resolutionLevel));
    return getStereoSideInfoFromWidth(xPos, sideWidth);
}


int getStereoSide(ivec4 sideInfo) {
    return sideInfo.x;
}

float evalZeyeFromZdb(float depth) {
    return frameTransform._depthInfo.x / (depth * frameTransform._depthInfo.y + frameTransform._depthInfo.z);
}

float evalZdbFromZeye(float Zeye) {
    return (frameTransform._depthInfo.x - Zeye * frameTransform._depthInfo.z) / (Zeye * frameTransform._depthInfo.y);
}

vec3 evalEyeNormal(vec3 C) {
    return normalize(cross(dFdx(C), dFdy(C)));
}

vec3 evalEyePositionFromZdb(int side, float Zdb, vec2 texcoord) {
    // compute the view space position using the depth
    vec3 clipPos;
    clipPos.xyz = vec3(texcoord.xy, Zdb) * 2.0 - 1.0;
    vec4 eyePos = frameTransform._invProjection[side] * vec4(clipPos.xyz, 1.0);
    return eyePos.xyz / eyePos.w;
}

vec3 evalUnjitteredEyePositionFromZdb(int side, float Zdb, vec2 texcoord) {
    // compute the view space position using the depth
    vec3 clipPos;
    clipPos.xyz = vec3(texcoord.xy, Zdb) * 2.0 - 1.0;
    vec4 eyePos = frameTransform._invProjectionUnJittered[side] * vec4(clipPos.xyz, 1.0);
    return eyePos.xyz / eyePos.w;
}

vec3 evalEyePositionFromZeye(int side, float Zeye, vec2 texcoord) {
    float Zdb = evalZdbFromZeye(Zeye);
    return evalEyePositionFromZdb(side, Zdb, texcoord);
}

ivec2 getPixelPosTexcoordPosAndSide(in vec2 glFragCoord, out ivec2 pixelPos, out vec2 texcoordPos, out ivec4 stereoSide) {
    ivec2 fragPos = ivec2(glFragCoord.xy);

    stereoSide = getStereoSideInfo(fragPos.x, 0);

    pixelPos = fragPos;
    pixelPos.x -= stereoSide.y;

    texcoordPos = (vec2(pixelPos) + 0.5) * getInvWidthHeight();
    
    return fragPos;
}



vec4 unpackDeferredPosition(float depthValue, vec2 texcoord) {
    int side = 0;
    if (isStereo()) {
        if (texcoord.x > 0.5) {
            texcoord.x -= 0.5;
            side = 1;
        }
        texcoord.x *= 2.0;
    }

    return vec4(evalEyePositionFromZdb(side, depthValue, texcoord), 1.0);
}

// This method to unpack position is fastesst
vec4 unpackDeferredPositionFromZdb(vec2 texcoord) {
    float Zdb = texture(depthMap, texcoord).x;
    return unpackDeferredPosition(Zdb, texcoord);
}

vec4 unpackDeferredPositionFromZeye(vec2 texcoord) {
    float Zeye = -texture(linearZeyeMap, texcoord).x;
    int side = 0;
    if (isStereo()) {
        if (texcoord.x > 0.5) {
            texcoord.x -= 0.5;
            side = 1;
        }
        texcoord.x *= 2.0;
    }
    return vec4(evalEyePositionFromZeye(side, Zeye, texcoord), 1.0);
}

DeferredFragment unpackDeferredFragment(DeferredFrameTransform deferredTransform, vec2 texcoord) {

    float depthValue = texture(depthMap, texcoord).r;

    DeferredFragment frag = unpackDeferredFragmentNoPosition(texcoord);

    frag.depthVal = depthValue;
    frag.position = unpackDeferredPosition(frag.depthVal, texcoord);

    return frag;
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
// glsl / C++ compatible source as interface for Light
#ifndef LightVolume_Shared_slh
#define LightVolume_Shared_slh

//  Light.shared.slh
//  libraries/graphics/src/graphics
//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define LightVolumeConstRef LightVolume

struct LightVolume {
    vec4 positionRadius;
    vec4 directionSpotCos;
};

bool lightVolume_isPoint(LightVolume lv) { return bool(lv.directionSpotCos.w < 0.f); }
bool lightVolume_isSpot(LightVolume lv) { return bool(lv.directionSpotCos.w >= 0.f); }

vec3 lightVolume_getPosition(LightVolume lv) { return lv.positionRadius.xyz; }
float lightVolume_getRadius(LightVolume lv) { return lv.positionRadius.w; }
float lightVolume_getRadiusSquare(LightVolume lv) { return lv.positionRadius.w * lv.positionRadius.w; }
vec3 lightVolume_getDirection(LightVolume lv) { return lv.directionSpotCos.xyz; } // direction is -Z axis

float lightVolume_getSpotAngleCos(LightVolume lv) { return lv.directionSpotCos.w; }
vec2 lightVolume_getSpotOutsideNormal2(LightVolume lv) { return vec2(-sqrt(1.0 - lv.directionSpotCos.w * lv.directionSpotCos.w), lv.directionSpotCos.w); }


bool lightVolume_clipFragToLightVolumePoint(LightVolume lv, vec3 fragPos, out vec4 fragLightVecLen2) {
    fragLightVecLen2.xyz = lightVolume_getPosition(lv) - fragPos.xyz;
    fragLightVecLen2.w = dot(fragLightVecLen2.xyz, fragLightVecLen2.xyz);

    // Kill if too far from the light center
    return (fragLightVecLen2.w <= lightVolume_getRadiusSquare(lv));
}

bool lightVolume_clipFragToLightVolumeSpotSide(LightVolume lv, vec4 fragLightDirLen, out float cosSpotAngle) {
    // Kill if not in the spot light (ah ah !)
    cosSpotAngle = max(-dot(fragLightDirLen.xyz, lightVolume_getDirection(lv)), 0.0);
    return (cosSpotAngle >= lightVolume_getSpotAngleCos(lv));
}

bool lightVolume_clipFragToLightVolumeSpot(LightVolume lv, vec3 fragPos, out vec4 fragLightVecLen2, out vec4 fragLightDirLen, out float cosSpotAngle) {
    if (!lightVolume_clipFragToLightVolumePoint(lv, fragPos, fragLightVecLen2)) {
        return false;
    }

    // Allright we re valid in the volume
    fragLightDirLen.w = length(fragLightVecLen2.xyz);
    fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;

    return lightVolume_clipFragToLightVolumeSpotSide(lv, fragLightDirLen, cosSpotAngle);
}

#endif


// // glsl / C++ compatible source as interface for Light
#ifndef LightIrradiance_Shared_slh
#define LightIrradiance_Shared_slh

//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define LightIrradianceConstRef LightIrradiance

struct LightIrradiance {
    vec4 colorIntensity;
    // falloffRadius, cutoffRadius, falloffSpot, spare
    vec4 attenuation;
};


vec3 lightIrradiance_getColor(LightIrradiance li) { return li.colorIntensity.xyz; }
float lightIrradiance_getIntensity(LightIrradiance li) { return li.colorIntensity.w; }
vec3 lightIrradiance_getIrradiance(LightIrradiance li) { return li.colorIntensity.xyz * li.colorIntensity.w; }
float lightIrradiance_getFalloffRadius(LightIrradiance li) { return li.attenuation.x; }
float lightIrradiance_getCutoffRadius(LightIrradiance li) { return li.attenuation.y; }
float lightIrradiance_getFalloffSpot(LightIrradiance li) { return li.attenuation.z; }


// Light is the light source its self, d is the light's distance calculated as length(unnormalized light vector).
float lightIrradiance_evalLightAttenuation(LightIrradiance li, float d) {
    float radius = lightIrradiance_getFalloffRadius(li);
    float cutoff = lightIrradiance_getCutoffRadius(li);
    float denom = (d / radius) + 1.0;
    float attenuation = 1.0 / (denom * denom);

    // "Fade" the edges of light sources to make things look a bit more attractive.
    // Note: this tends to look a bit odd at lower exponents.
    attenuation *= min(1.0, max(0.0, -(d - cutoff)));

    return attenuation;
}


float lightIrradiance_evalLightSpotAttenuation(LightIrradiance li, float cosA) {
    return pow(cosA, lightIrradiance_getFalloffSpot(li));
}


#endif


// // NOw lets define Light
struct Light {
    LightVolume volume;
    LightIrradiance irradiance;
};

bool light_isSpot(Light l) { return lightVolume_isSpot(l.volume); }

vec3 getLightPosition(Light l) { return lightVolume_getPosition(l.volume); }
vec3 getLightDirection(Light l) { return lightVolume_getDirection(l.volume); }

vec3 getLightColor(Light l) { return lightIrradiance_getColor(l.irradiance); }
float getLightIntensity(Light l) { return lightIrradiance_getIntensity(l.irradiance); }
vec3 getLightIrradiance(Light l) { return lightIrradiance_getIrradiance(l.irradiance); }

// Ambient lighting needs extra info provided from a different Buffer
// glsl / C++ compatible source as interface for Light
#ifndef SphericalHarmonics_Shared_slh
#define SphericalHarmonics_Shared_slh

//  SphericalHarmonics.shared.slh
//  libraries/graphics/src/graphics
//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define SphericalHarmonicsConstRef SphericalHarmonics

struct SphericalHarmonics {
    vec4 L00;
    vec4 L1m1;
    vec4 L10;
    vec4 L11;
    vec4 L2m2;
    vec4 L2m1;
    vec4 L20;
    vec4 L21;
    vec4 L22;
};

vec4 sphericalHarmonics_evalSphericalLight(SphericalHarmonicsConstRef sh, vec3 direction) {

    vec3 dir = direction.xyz;

    const float C1 = 0.429043;
    const float C2 = 0.511664;
    const float C3 = 0.743125;
    const float C4 = 0.886227;
    const float C5 = 0.247708;

    vec4 value = C1 * sh.L22 * (dir.x * dir.x - dir.y * dir.y) +
        C3 * sh.L20 * dir.z * dir.z +
        C4 * sh.L00 - C5 * sh.L20 +
        2.0 * C1 * (sh.L2m2 * dir.x * dir.y +
        sh.L21  * dir.x * dir.z +
        sh.L2m1 * dir.y * dir.z) +
        2.0 * C2 * (sh.L11  * dir.x +
        sh.L1m1 * dir.y +
        sh.L10  * dir.z);
    return value;
}

#endif


// End C++ compatible// Light Ambient

struct LightAmbient {
    vec4 _ambient;
    SphericalHarmonics _ambientSphere;
    mat4 transform;
};

SphericalHarmonics getLightAmbientSphere(LightAmbient l) { return l._ambientSphere; }


float getLightAmbientIntensity(LightAmbient l) { return l._ambient.x; }
bool getLightHasAmbientMap(LightAmbient l) { return l._ambient.y > 0.0; }
float getLightAmbientMapNumMips(LightAmbient l) { return l._ambient.y; }

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

LAYOUT(binding=GRAPHICS_BUFFER_KEY_LIGHT) uniform keyLightBuffer {
    Light light;
};
Light getKeyLight() {
    return light;
}


LAYOUT(binding=GRAPHICS_BUFFER_AMBIENT_LIGHT) uniform lightAmbientBuffer {
    LightAmbient lightAmbient;
};

LightAmbient getLightAmbient() {
    return lightAmbient;
}



//  Generated on Wed Dec  5 03:18:56 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html

// // // Hack Comment
//  Generated on Wed Dec  5 03:18:56 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

float evalSmithInvG1(float roughness4, float ndotd) {
    return ndotd + sqrt(roughness4+ndotd*ndotd*(1.0-roughness4));
}

SurfaceData initSurfaceData(float roughness, vec3 normal, vec3 eyeDir) {
    SurfaceData surface;
    surface.eyeDir = eyeDir;
    surface.normal = normal;
    surface.roughness = mix(0.01, 1.0, roughness);
    surface.roughness2 = surface.roughness * surface.roughness;
    surface.roughness4 = surface.roughness2 * surface.roughness2;
    surface.ndotv = clamp(dot(normal, eyeDir), 0.0, 1.0);
    surface.smithInvG1NdotV = evalSmithInvG1(surface.roughness4, surface.ndotv);

    // These values will be set when we know the light direction, in updateSurfaceDataWithLight
    surface.ndoth = 0.0;
    surface.ndotl = 0.0;
    surface.ldoth = 0.0;
    surface.lightDir = vec3(0,0,1);
    surface.halfDir = vec3(0,0,1);

    return surface;
}

void updateSurfaceDataWithLight(inout SurfaceData surface, vec3 lightDir) {
    surface.lightDir = lightDir;
    surface.halfDir = normalize(surface.eyeDir + lightDir);
    vec3 dots;
    dots.x = dot(surface.normal, surface.halfDir);
    dots.y = dot(surface.normal, surface.lightDir);
    dots.z = dot(surface.halfDir, surface.lightDir);
    dots = clamp(dots, vec3(0), vec3(1));
    surface.ndoth = dots.x;
    surface.ndotl = dots.y;
    surface.ldoth = dots.z;
}

vec3 fresnelSchlickColor(vec3 fresnelColor, SurfaceData surface) {
    float base = 1.0 - surface.ldoth;
    //float exponential = pow(base, 5.0);
    float base2 = base * base;
    float exponential = base * base2 * base2;
    return vec3(exponential) + fresnelColor * (1.0 - exponential);
}

float fresnelSchlickScalar(float fresnelScalar, SurfaceData surface) {
    float base = 1.0 - surface.ldoth;
    //float exponential = pow(base, 5.0);
    float base2 = base * base;
    float exponential = base * base2 * base2;
    return (exponential) + fresnelScalar * (1.0 - exponential);
}

float specularDistribution(SurfaceData surface) {
    // See https://www.khronos.org/assets/uploads/developers/library/2017-web3d/glTF-2.0-Launch_Jun17.pdf
    // for details of equations, especially page 20
    float denom = (surface.ndoth*surface.ndoth * (surface.roughness4 - 1.0) + 1.0);
    denom *= denom;
    // Add geometric factors G1(n,l) and G1(n,v)
    float smithInvG1NdotL = evalSmithInvG1(surface.roughness4, surface.ndotl);
    denom *= surface.smithInvG1NdotV * smithInvG1NdotL;
    // Don't divide by PI as this is part of the light normalization factor
    float power = surface.roughness4 / denom;
    return power;
}

// Frag Shading returns the diffuse amount as W and the specular rgb as xyz
vec4 evalPBRShading(float metallic, vec3 fresnel, SurfaceData surface) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    vec3 fresnelColor = fresnelSchlickColor(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = fresnelColor * power * angleAttenuation;
    float diffuse = (1.0 - metallic) * angleAttenuation * (1.0 - fresnelColor.x);

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, diffuse);
}

// Frag Shading returns the diffuse amount as W and the specular rgb as xyz
vec4 evalPBRShadingDielectric(SurfaceData surface, float fresnel) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    float fresnelScalar = fresnelSchlickScalar(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = vec3(fresnelScalar) * power * angleAttenuation;
    float diffuse = angleAttenuation * (1.0 - fresnelScalar);

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, diffuse);
}

vec4 evalPBRShadingMetallic(SurfaceData surface, vec3 fresnel) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    vec3 fresnelColor = fresnelSchlickColor(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = fresnelColor * power * angleAttenuation;

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, 0.f);
}



void evalFragShading(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo) {
    vec4 shading = evalPBRShading(metallic, fresnel, surface);
    diffuse = vec3(shading.w);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
    specular = shading.xyz;
}

LAYOUT(binding=RENDER_UTILS_TEXTURE_SSSC_SPECULAR_BECKMANN) uniform sampler2D scatteringSpecularBeckmann;

float fetchSpecularBeckmann(float ndoth, float roughness) {
    return pow(2.0 * texture(scatteringSpecularBeckmann, vec2(ndoth, roughness)).r, 10.0);
}

vec2 skinSpecular(SurfaceData surface, float intensity) {
    vec2 result = vec2(0.0, 1.0);
    if (surface.ndotl > 0.0) {
        float PH = fetchSpecularBeckmann(surface.ndoth, surface.roughness);
        float F = fresnelSchlickScalar(0.028, surface);
        float frSpec = max(PH * F / dot(surface.halfDir, surface.halfDir), 0.0);
        result.x = surface.ndotl * intensity * frSpec;
        result.y -= F;
    }

    return result;
}

//  Generated on Wed Dec  5 03:18:56 2018
//
//  Created by Sam Gateau on 6/8/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
// // // Hack Comment
LAYOUT(binding=RENDER_UTILS_TEXTURE_SSSC_LUT) uniform sampler2D scatteringLUT;

vec3 fetchBRDF(float LdotN, float curvature) {
    return texture(scatteringLUT, vec2( clamp(LdotN * 0.5 + 0.5, 0.0, 1.0), clamp(2.0 * curvature, 0.0, 1.0))).xyz;
}

vec3 fetchBRDFSpectrum(vec3 LdotNSpectrum, float curvature) {
    return vec3(
        fetchBRDF(LdotNSpectrum.r, curvature).r,
        fetchBRDF(LdotNSpectrum.g, curvature).g,
        fetchBRDF(LdotNSpectrum.b, curvature).b);
}

// Subsurface Scattering parameters
struct ScatteringParameters {
    vec4 normalBendInfo; // R, G, B, factor
    vec4 curvatureInfo;// Offset, Scale, level
    vec4 debugFlags;
};

LAYOUT(binding=RENDER_UTILS_BUFFER_SSSC_PARAMS) uniform subsurfaceScatteringParametersBuffer {
    ScatteringParameters parameters;
};

vec3 getBendFactor() {
    return parameters.normalBendInfo.xyz * parameters.normalBendInfo.w;
}

float getScatteringLevel() {
    return parameters.curvatureInfo.z;
}

bool showBRDF() {
    return parameters.curvatureInfo.w > 0.0;
}

bool showCurvature() {
    return parameters.debugFlags.x > 0.0;
}
bool showDiffusedNormal() {
    return parameters.debugFlags.y > 0.0;
}


float tuneCurvatureUnsigned(float curvature) {
    return abs(curvature) * parameters.curvatureInfo.y + parameters.curvatureInfo.x;
}

float unpackCurvature(float packedCurvature) {
    return (packedCurvature * 2.0 - 1.0);
}

vec3 evalScatteringBentNdotL(vec3 normal, vec3 midNormal, vec3 lowNormal, vec3 lightDir) {
    vec3 bendFactorSpectrum = getBendFactor();
    // vec3 rN = normalize(mix(normal, lowNormal, bendFactorSpectrum.x));
    vec3 rN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.x));
    vec3 gN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.y));
    vec3 bN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.z));

    vec3 NdotLSpectrum = vec3(dot(rN, lightDir), dot(gN, lightDir), dot(bN, lightDir));

    return NdotLSpectrum;
}





vec3 evalSkinBRDF(vec3 lightDir, vec3 normal, vec3 midNormal, vec3 lowNormal, float curvature) {
    if (showDiffusedNormal()) {
        return lowNormal * 0.5 + vec3(0.5);
    }
    if (showCurvature()) {
        return (curvature > 0.0 ? vec3(curvature, 0.0, 0.0) : vec3(0.0, 0.0, -curvature));
    }

    vec3 bentNdotL = evalScatteringBentNdotL(normal, midNormal, lowNormal, lightDir);

    float tunedCurvature = tuneCurvatureUnsigned(curvature);

    vec3 brdf = fetchBRDFSpectrum(bentNdotL, tunedCurvature);
    return brdf;
}




void evalFragShading(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo,
    float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature) {
    if (scattering * isScatteringEnabled() > 0.0) {
        vec3 brdf = evalSkinBRDF(surface.lightDir, surface.normal, midNormalCurvature.xyz, lowNormalCurvature.xyz, lowNormalCurvature.w);
        diffuse = mix(vec3(surface.ndotl), brdf, scattering);

        // Specular Lighting
        vec2 specularBrdf = skinSpecular(surface, 1.0);
        
        diffuse *= specularBrdf.y;
        specular = vec3(specularBrdf.x);
    } else {
        vec4 shading = evalPBRShading(metallic, fresnel, surface);
        diffuse = vec3(shading.w);
        specular = shading.xyz;
    }
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
}


void evalFragShadingScattering(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo,
    float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature) {
    vec3 brdf = evalSkinBRDF(surface.lightDir, surface.normal, midNormalCurvature.xyz, lowNormalCurvature.xyz, lowNormalCurvature.w);
    float NdotL = surface.ndotl;
    diffuse = mix(vec3(NdotL), brdf, scattering);

    // Specular Lighting
    vec2 specularBrdf = skinSpecular(surface, 1.0);
        
    diffuse *= specularBrdf.y;
    specular = vec3(specularBrdf.x);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
}

void evalFragShadingGloss(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo) {
    vec4 shading = evalPBRShading(metallic, fresnel, surface);
    diffuse = vec3(shading.w);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
    specular = shading.xyz;
}

vec3 evalSpecularWithOpacity(vec3 specular, float opacity) {
    return specular / opacity;
}

// // // Hack Comment
const int HAZE_MODE_IS_ACTIVE = 1 << 0;
const int HAZE_MODE_IS_ALTITUDE_BASED = 1 << 1;
const int HAZE_MODE_IS_KEYLIGHT_ATTENUATED = 1 << 2;
const int HAZE_MODE_IS_MODULATE_COLOR = 1 << 3;
const int HAZE_MODE_IS_ENABLE_LIGHT_BLEND = 1 << 4;

struct HazeParams {
    vec3 hazeColor;
    float hazeGlareBlend;

    vec3 hazeGlareColor;
    float hazeBaseReference;

    vec3 colorModulationFactor;
    int hazeMode;

    mat4 transform;
    float backgroundBlend;

    float hazeRangeFactor;
    float hazeHeightFactor;

    float hazeKeyLightRangeFactor;
    float hazeKeyLightAltitudeFactor;
};

// See ShapePipeline::Slot::BUFFER in ShapePipeline.h
LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_HAZE_PARAMS) uniform hazeBuffer {
    HazeParams hazeParams;
};


// Input:
//      color               - fragment original color
//      lightDirectionWS    - parameters of the keylight
//      fragPositionWS      - fragment position in world coordinates
// Output:
//      fragment colour after haze effect
//
// General algorithm taken from http://www.iquilezles.org/www/articles/fog/fog.htm, with permission
//
vec3 computeHazeColorKeyLightAttenuation(vec3 color, vec3 lightDirectionWS, vec3 fragPositionWS) {
    // Directional light attenuation is simulated by assuming the light source is at a fixed height above the
    // fragment. This height is where the haze density is reduced by 95% from the haze at the fragment's height
    //
    // The distance is computed from the height and the directional light orientation
    // The distance is limited to height * 1,000, which gives an angle of ~0.057 degrees

    // Height at which haze density is reduced by 95% (default set to 2000.0 for safety ,this should never happen)
    float height_95p = 2000.0;
    const float log_p_005 = log(0.05);
    if (hazeParams.hazeKeyLightAltitudeFactor > 0.0f) {
        height_95p = -log_p_005 / hazeParams.hazeKeyLightAltitudeFactor;
    }

    // Note that we need the sine to be positive
    float sin_pitch = abs(lightDirectionWS.y);
            
    float distance;
    const float minimumSinPitch = 0.001;
    if (sin_pitch < minimumSinPitch) {
        distance = height_95p / minimumSinPitch;
    } else {
        distance = height_95p / sin_pitch;
    }

    // Integration is from the fragment towards the light source
    // Note that the haze base reference affects only the haze density as function of altitude
    float hazeDensityDistribution =  
        hazeParams.hazeKeyLightRangeFactor * 
        exp(-hazeParams.hazeKeyLightAltitudeFactor * (fragPositionWS.y - hazeParams.hazeBaseReference));

    float hazeIntegral =  hazeDensityDistribution * distance;

    // Note that t is constant and equal to -log(0.05)
    //      float t = hazeParams.hazeAltitudeFactor * height_95p;
    //      hazeIntegral *= (1.0 - exp (-t)) / t;
    hazeIntegral *= 0.3171178;

    return color * exp(-hazeIntegral);
}

// Input:
//      fragPositionES   - fragment position in eye   coordinates
//      fragPositionWS   - fragment position in world coordinates
//      eyePositionWS    - eye      position in world coordinates
// Output:
//      haze colour and alpha contains haze blend factor
//
// General algorithm taken from http://www.iquilezles.org/www/articles/fog/fog.htm, with permission
//
vec4 computeHazeColor(vec3 fragPositionES, vec3 fragPositionWS, vec3 eyePositionWS, vec3 lightDirectionWS) {
    // Distance to fragment 
    float distance = length(fragPositionES);
    float eyeWorldHeight = eyePositionWS.y;

    // Convert haze colour from uniform into a vec4
    vec4 hazeColor = vec4(hazeParams.hazeColor, 1.0);

    // Use the haze colour for the glare colour, if blend is not enabled
    vec4 blendedHazeColor;
    if ((hazeParams.hazeMode & HAZE_MODE_IS_ENABLE_LIGHT_BLEND) == HAZE_MODE_IS_ENABLE_LIGHT_BLEND) {
        // Directional light component is a function of the angle from the eye, between the fragment and the sun
        vec3 fragToEyeDirWS = normalize(fragPositionWS - eyePositionWS);

        float glareComponent = max(0.0, dot(fragToEyeDirWS, -lightDirectionWS));
        float power = min(1.0, pow(glareComponent, hazeParams.hazeGlareBlend));

        vec4 glareColor = vec4(hazeParams.hazeGlareColor, 1.0);

        blendedHazeColor = mix(hazeColor, glareColor, power);
    } else {
        blendedHazeColor = hazeColor;
    }

    vec4 potentialFragColor;

    if ((hazeParams.hazeMode & HAZE_MODE_IS_MODULATE_COLOR) == HAZE_MODE_IS_MODULATE_COLOR) {
        // Compute separately for each colour
        // Haze is based on both range and altitude
        // Taken from www.crytek.com/download/GDC2007_RealtimeAtmoFxInGamesRev.ppt

        // Note that the haze base reference affects only the haze density as function of altitude
        vec3 hazeDensityDistribution =  
            hazeParams.colorModulationFactor * 
            exp(-hazeParams.hazeHeightFactor * (eyeWorldHeight - hazeParams.hazeBaseReference));

        vec3 hazeIntegral = hazeDensityDistribution * distance;

        const float slopeThreshold = 0.01;
        float deltaHeight = fragPositionWS.y - eyeWorldHeight;
        if (abs(deltaHeight) > slopeThreshold) {
            float t = hazeParams.hazeHeightFactor * deltaHeight;
            hazeIntegral *= (1.0 - exp (-t)) / t;
        }

        vec3 hazeAmount = 1.0 - exp(-hazeIntegral);

        // Compute color after haze effect
        potentialFragColor = vec4(1.0, 1.0, 1.0, hazeAmount);
    } else if ((hazeParams.hazeMode & HAZE_MODE_IS_ALTITUDE_BASED) != HAZE_MODE_IS_ALTITUDE_BASED) {
        // Haze is based only on range
        float hazeAmount = 1.0 - exp(-distance * hazeParams.hazeRangeFactor);

        // Compute color after haze effect
        potentialFragColor = vec4(blendedHazeColor.rgb, hazeAmount);
    } else {
        // Haze is based on both range and altitude
        // Taken from www.crytek.com/download/GDC2007_RealtimeAtmoFxInGamesRev.ppt

        // Note that the haze base reference affects only the haze density as function of altitude
        float hazeDensityDistribution =  
            hazeParams.hazeRangeFactor * 
            exp(-hazeParams.hazeHeightFactor * (eyeWorldHeight - hazeParams.hazeBaseReference));

        float hazeIntegral =  hazeDensityDistribution * distance;

        const float slopeThreshold = 0.01;
        float deltaHeight = fragPositionWS.y - eyeWorldHeight;
        if (abs(deltaHeight) > slopeThreshold) {
            float t = hazeParams.hazeHeightFactor * deltaHeight;
            // Protect from wild values
            const float EPSILON = 0.0000001f;
            if (abs(t) > EPSILON) {
                hazeIntegral *= (1.0 - exp (-t)) / t;
            }
        }

        float hazeAmount = 1.0 - exp(-hazeIntegral);

        // Compute color after haze effect
        potentialFragColor = vec4(blendedHazeColor.rgb, hazeAmount);
    }

    // Mix with background at far range
    const float BLEND_DISTANCE = 27000.0f;
    vec4 outFragColor = potentialFragColor;
    if (distance > BLEND_DISTANCE) {
        outFragColor.a *= hazeParams.backgroundBlend;
    }

    return outFragColor;
}

// // // Hack Comment
vec3 evalLightmappedColor(mat4 invViewMat, float shadowAttenuation, float obscurance, vec3 normal, vec3 albedo, vec3 lightmap) {
    Light light = getKeyLight();
    LightAmbient ambient = getLightAmbient();

    // Catch normals perpendicular to the projection plane, hence the magic number for the threshold
    // It should be just 0, but we have inaccuracy so we overshoot
    const float PERPENDICULAR_THRESHOLD = -0.005;
    vec3 fragNormal = vec3(invViewMat * vec4(normal, 0.0)); // transform to worldspace
    float diffuseDot = dot(fragNormal, -getLightDirection(light));
    float facingLight = step(PERPENDICULAR_THRESHOLD, diffuseDot); 

    // Reevaluate the shadow attenuation for light facing fragments
    float lightAttenuation = (1.0 - facingLight) + facingLight * shadowAttenuation;

    // Diffuse light is the lightmap dimmed by shadow
    vec3 diffuseLight = lightAttenuation * lightmap;

    // Ambient light is the lightmap when in shadow
    vec3 ambientLight = (1.0 - lightAttenuation) * lightmap * getLightAmbientIntensity(ambient);

    return  isLightmapEnabled() * obscurance * albedo * (diffuseLight + ambientLight);
}

vec3 fresnelSchlickAmbient(vec3 fresnelColor, float ndotd, float gloss) {
    float f = pow(1.0 - ndotd, 5.0);
    return fresnelColor + (max(vec3(gloss), fresnelColor) - fresnelColor) * f;
}

vec3 evalAmbientSpecularIrradiance(LightAmbient ambient, SurfaceData surface, vec3 lightDir) {
    vec3 specularLight;
    {
        specularLight = sphericalHarmonics_evalSphericalLight(getLightAmbientSphere(ambient), lightDir).xyz;
    }
    return specularLight;
}


float curvatureAO(in float k) {
    return 1.0f - (0.0022f * k * k) + (0.0776f * k) + 0.7369f;
}
void evalLightingAmbient(out vec3 diffuse, out vec3 specular, LightAmbient ambient, SurfaceData surface, 
                         float metallic, vec3 fresnelF0, vec3 albedo, float obscurance
, float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature
) {

    // Rotate surface normal and eye direction
    vec3 ambientSpaceSurfaceNormal = (ambient.transform * vec4(surface.normal, 0.0)).xyz;
    vec3 ambientSpaceSurfaceEyeDir = (ambient.transform * vec4(surface.eyeDir, 0.0)).xyz;
vec3 ambientSpaceLowNormal = (ambient.transform * vec4(lowNormalCurvature.xyz, 0.0)).xyz;
vec3 ambientFresnel = fresnelSchlickAmbient(fresnelF0, surface.ndotv, 1.0-surface.roughness);

    diffuse = (1.0 - metallic) * (vec3(1.0) - ambientFresnel) * 
              sphericalHarmonics_evalSphericalLight(getLightAmbientSphere(ambient), ambientSpaceSurfaceNormal).xyz;

    // Specular highlight from ambient
    vec3 ambientSpaceLightDir = -reflect(ambientSpaceSurfaceEyeDir, ambientSpaceSurfaceNormal);
    specular = evalAmbientSpecularIrradiance(ambient, surface, ambientSpaceLightDir)  * ambientFresnel;

if (scattering * isScatteringEnabled() > 0.0) {
        float ambientOcclusion = curvatureAO(lowNormalCurvature.w * 20.0f) * 0.5f;
        float ambientOcclusionHF = curvatureAO(midNormalCurvature.w * 8.0f) * 0.5f;
        ambientOcclusion = min(ambientOcclusion, ambientOcclusionHF);

        obscurance = min(obscurance, ambientOcclusion);

        // Diffuse from ambient
        diffuse = sphericalHarmonics_evalSphericalLight(getLightAmbientSphere(ambient), ambientSpaceLowNormal).xyz;

        // Scattering ambient specular is the same as non scattering for now
        // TODO: we should use the same specular answer as for direct lighting
    }
obscurance = mix(1.0, obscurance, isObscuranceEnabled());

    float lightEnergy = obscurance * getLightAmbientIntensity(ambient);

    diffuse *= mix(vec3(1), albedo, isAlbedoEnabled());

    lightEnergy *= isAmbientEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();
}


void evalLightingDirectional(out vec3 diffuse, out vec3 specular, vec3 lightDir, vec3 lightIrradiance,
    SurfaceData surface,
    float metallic, vec3 fresnel, vec3 albedo, float shadow
, float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature
) {

    // Attenuation
    vec3 lightEnergy = shadow * lightIrradiance;

    updateSurfaceDataWithLight(surface, -lightDir);

    evalFragShading(diffuse, specular, metallic, fresnel, surface, albedo
,scattering, midNormalCurvature, lowNormalCurvature
);

    lightEnergy *= isDirectionalEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();
}



// the curvature texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRED_CURVATURE) uniform sampler2D curvatureMap;

vec4 fetchCurvature(vec2 texcoord) {
    return texture(curvatureMap, texcoord);
}

// the curvature texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_DEFERRED_DIFFUSED_CURVATURE) uniform sampler2D diffusedCurvatureMap;

vec4 fetchDiffusedCurvature(vec2 texcoord) {
    return texture(diffusedCurvatureMap, texcoord);
}

void unpackMidLowNormalCurvature(vec2 texcoord, out vec4 midNormalCurvature, out vec4 lowNormalCurvature) {
    midNormalCurvature = fetchCurvature(texcoord);
    lowNormalCurvature = fetchDiffusedCurvature(texcoord);
    midNormalCurvature.xyz = normalize((midNormalCurvature.xyz - 0.5f) * 2.0f);
    lowNormalCurvature.xyz = normalize((lowNormalCurvature.xyz - 0.5f) * 2.0f);
    midNormalCurvature.w = (midNormalCurvature.w * 2.0 - 1.0);
    lowNormalCurvature.w = (lowNormalCurvature.w * 2.0 - 1.0);
}

vec3 evalAmbientSphereGlobalColor(mat4 invViewMat, float shadowAttenuation, float obscurance, vec3 position, vec3 normal,
vec3 albedo, vec3 fresnel, float metallic, float roughness
, float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature
) {

    // prepareGlobalLight
    // Transform directions to worldspace
    vec3 fragNormalWS = vec3(normal);
    vec3 fragPositionWS = vec3(invViewMat * vec4(position, 1.0));
    vec3 fragEyeVectorWS = invViewMat[3].xyz - fragPositionWS;
    vec3 fragEyeDirWS = normalize(fragEyeVectorWS);

    // Get light
    Light light = getKeyLight();
    LightAmbient lightAmbient = getLightAmbient();
    
    vec3 lightDirection = getLightDirection(light);
    vec3 lightIrradiance = getLightIrradiance(light);

    vec3 color = vec3(0.0);




    SurfaceData surfaceWS = initSurfaceData(roughness, fragNormalWS, fragEyeDirWS);

    // Ambient
    vec3 ambientDiffuse;
    vec3 ambientSpecular;
    evalLightingAmbient(ambientDiffuse, ambientSpecular, lightAmbient, surfaceWS, metallic, fresnel, albedo, obscurance
,scattering, midNormalCurvature, lowNormalCurvature
);
    color += ambientDiffuse;
    color += ambientSpecular;


    // Directional
    vec3 directionalDiffuse;
    vec3 directionalSpecular;
    evalLightingDirectional(directionalDiffuse, directionalSpecular, lightDirection, lightIrradiance, surfaceWS, metallic, fresnel, albedo, shadowAttenuation
,scattering, midNormalCurvature, lowNormalCurvature
);
    color += directionalDiffuse;
    color += directionalSpecular;

    return color;
}



layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=0) out vec4 _fragColor;

void main(void) {
    DeferredFrameTransform deferredTransform = getDeferredFrameTransform();
    DeferredFragment frag = unpackDeferredFragment(deferredTransform, _texCoord0);

    vec4 viewPos = vec4(frag.position.xyz, 1.0);
    vec4 worldPos = getViewInverse() * viewPos;
    Light shadowLight = getKeyLight();
    vec3 worldLightDirection = getLightDirection(shadowLight);
    float shadowAttenuation = evalShadowAttenuation(worldLightDirection, worldPos, -viewPos.z, frag.normal);

    if (frag.mode == FRAG_MODE_UNLIT) {
        discard;
    } else if (frag.mode == FRAG_MODE_LIGHTMAPPED) {
        discard;
    } else {
        vec4 midNormalCurvature = vec4(0);
        vec4 lowNormalCurvature = vec4(0);
        if (frag.mode == FRAG_MODE_SCATTERING) {
            unpackMidLowNormalCurvature(_texCoord0, midNormalCurvature, lowNormalCurvature);
        }
        vec3 color =  evalAmbientSphereGlobalColor(
                        getViewInverse(),
                        shadowAttenuation,
                        frag.obscurance,
                        frag.position.xyz,
                        frag.normal,
                        frag.albedo,
                        frag.fresnel,
                        frag.metallic,
                        frag.roughness,
                        frag.scattering,
                        midNormalCurvature,
                        lowNormalCurvature);
                        
        _fragColor = vec4(color, 1.0);
    }
}
