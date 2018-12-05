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
//  Generated on Wed Dec  5 03:19:07 2018
//
//  Created by Olivier Prat on 06/05/17.
//  Copyright 2017 High Fidelity, Inc.
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
//  Generated on Wed Dec  5 03:19:07 2018
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

layout(location=0) out vec4 _fragColor;

void main(void) {
    FadeObjectParams fadeParams;
    fadeParams = fadeObjectParams;

    applyFadeClip(fadeParams, _positionWS.xyz);

    // pass-through to set z-buffer
    _fragColor = vec4(1.0, 1.0, 1.0, 0.0);
}
