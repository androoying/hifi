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
//  Generated on Wed Dec  5 03:19:02 2018
//
//  forward_simple_textured_unlit.frag
//  fragment shader
//
//  Created by Clément Brisset on 5/29/15.
//  Copyright 2014 High Fidelity, Inc.
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
// Linear ====> linear RGB
// sRGB ======> standard RGB with gamma of 2.2
// YCoCg =====> Luma (Y) chrominance green (Cg) and chrominance orange (Co)
// https://software.intel.com/en-us/node/503873

float color_scalar_sRGBToLinear(float value) {
    const float SRGB_ELBOW = 0.04045;
    
    return (value <= SRGB_ELBOW) ? value / 12.92 : pow((value + 0.055) / 1.055, 2.4);
}

vec3 color_sRGBToLinear(vec3 srgb) {
    return vec3(color_scalar_sRGBToLinear(srgb.r), color_scalar_sRGBToLinear(srgb.g), color_scalar_sRGBToLinear(srgb.b));
}

vec4 color_sRGBAToLinear(vec4 srgba) {
    return vec4(color_sRGBToLinear(srgba.xyz), srgba.w);
}

vec3 color_LinearToYCoCg(vec3 rgb) {
    // Y = R/4 + G/2 + B/4
    // Co = R/2 - B/2
    // Cg = -R/4 + G/2 - B/4
    return vec3(
            rgb.x/4.0 + rgb.y/2.0 + rgb.z/4.0,
            rgb.x/2.0 - rgb.z/2.0,
        -rgb.x/4.0 + rgb.y/2.0 - rgb.z/4.0
    );
}

vec3 color_YCoCgToUnclampedLinear(vec3 ycocg) {
    // R = Y + Co - Cg
    // G = Y + Cg
    // B = Y - Co - Cg
    return vec3(
        ycocg.x + ycocg.y - ycocg.z,
        ycocg.x + ycocg.z,
        ycocg.x - ycocg.y - ycocg.z
    );
}

vec3 color_YCoCgToLinear(vec3 ycocg) {
    return clamp(color_YCoCgToUnclampedLinear(ycocg), vec3(0.0), vec3(1.0));
}

// // // Hack Comment
layout(location=0) out vec4 _fragColor0;

// the albedo texture
LAYOUT(binding=0) uniform sampler2D originalTexture;

layout(location=RENDER_UTILS_ATTR_COLOR) in vec4 _color;
layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw

void main(void) {
    vec4 texel = texture(originalTexture, _texCoord0.st);
    float colorAlpha = _color.a * texel.a;

    _fragColor0 = vec4(_color.rgb * texel.rgb * isUnlitEnabled(), colorAlpha);
}