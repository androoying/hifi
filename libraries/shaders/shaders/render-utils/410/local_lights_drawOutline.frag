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
//  Generated on Wed Dec  5 03:19:03 2018
//
//  local_lights_drawOutline.frag
//  fragment shader
//
//  Created by Sam Gateau on 9/6/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

// Everything about deferred buffer
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


// Everything about light
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

LAYOUT(binding=GRAPHICS_BUFFER_LIGHT) uniform lightBuffer {
    Light lightArray[128];
};
Light getLight(int index) {
    return lightArray[index];
}


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

//  Generated on Wed Dec  5 03:19:03 2018
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

//  Generated on Wed Dec  5 03:19:03 2018
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

bool evalLightPointEdge(out vec3 color, Light light, vec4 fragLightDirLen, vec3 fragEyeDir) {
    // Allright we re valid in the volume
    float fragLightDistance = fragLightDirLen.w;
    vec3 fragLightDir = fragLightDirLen.xyz;

    // Show edges
    float edge = abs(2.0 * ((lightVolume_getRadius(light.volume) - fragLightDistance) / (0.1)) - 1.0);
    if (edge < 1.0) {
        float edgeCoord = exp2(-8.0*edge*edge);
        color = vec3(edgeCoord * edgeCoord * getLightColor(light));
    }

    return (edge < 1.0);
}


//  Generated on Wed Dec  5 03:19:03 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

bool evalLightSpotEdge(out vec3 color, Light light, vec4 fragLightDirLen, float cosSpotAngle, vec3 fragEyeDir) {
    // Allright we re valid in the volume
    float fragLightDistance = fragLightDirLen.w;
    vec3 fragLightDir = fragLightDirLen.xyz;
    
    // Show edges
    float edgeDistR = (lightVolume_getRadius(light.volume) - fragLightDistance);
    float edgeDistS = dot(fragLightDistance * vec2(cosSpotAngle, sqrt(1.0 - cosSpotAngle * cosSpotAngle)), -lightVolume_getSpotOutsideNormal2(light.volume));
    float edgeDist = min(edgeDistR, edgeDistS);
    float edge = abs(2.0 * (edgeDist / (0.1)) - 1.0);
    if (edge < 1.0) {
        float edgeCoord = exp2(-8.0*edge*edge);
        color = vec3(edgeCoord * edgeCoord * getLightColor(light));
    }

    return (edge < 1.0);
}



// // // Hack Comment
struct FrustumGrid {
    float frustumNear;
    float rangeNear;
    float rangeFar;
    float frustumFar;
    ivec3 dims;
    float spare;
    mat4 eyeToGridProj;
    mat4 worldToEyeMat;
    mat4 eyeToWorldMat;
};

LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_LIGHT_CLUSTER_FRUSTUM_GRID) uniform frustumGridBuffer {
    FrustumGrid frustumGrid;
};

float projection_getNear(mat4 projection) {
    float planeC = projection[2][3] + projection[2][2];
    float planeD = projection[3][2];
    return planeD / planeC;
}
float projection_getFar(mat4 projection) {
    //float planeA = projection[0][3] - projection[0][2]; All Zeros
    //float planeB = projection[1][3] - projection[1][2]; All Zeros
    float planeC = projection[2][3] - projection[2][2];
    float planeD = /*projection[3][3]*/ -projection[3][2];
    return planeD / planeC;
}

// glsl / C++ compatible source as interface for FrustrumGrid
// glsl / C++ compatible source as interface for FrustrumGrid
#if defined(Q_OS_LINUX)
#define float_exp2 exp2f
#else
#define float_exp2 exp2
#endif

float frustumGrid_depthRampGridToVolume(float ngrid) {
   //  return ngrid;
   // return sqrt(ngrid);
    return float_exp2(ngrid) - 1.0f;
}
float frustumGrid_depthRampInverseVolumeToGrid(float nvolume) {
   //   return nvolume;
   // return nvolume * nvolume;
    return log2(nvolume + 1.0f);
}

vec3 frustumGrid_gridToVolume(vec3 pos, ivec3 dims) {
    vec3 gridScale = vec3(1.0f) / vec3(dims);
    vec3 volumePos = pos * gridScale;
    volumePos.z = frustumGrid_depthRampGridToVolume(volumePos.z);
    return volumePos;
}


float frustumGrid_volumeToGridDepth(float vposZ, ivec3 dims) {
    return frustumGrid_depthRampInverseVolumeToGrid(vposZ) * float(dims.z);
}

vec3 frustumGrid_volumeToGrid(vec3 vpos, ivec3 dims) {
    vec3 gridPos = vec3(vpos.x, vpos.y, frustumGrid_depthRampInverseVolumeToGrid(vpos.z)) * vec3(dims);
    return gridPos;
}


vec4 frustumGrid_volumeToClip(vec3 vpos, float rangeNear, float rangeFar) {
    vec3 ndcPos = vec3(-1.0f + 2.0f * vpos.x, -1.0f + 2.0f * vpos.y, vpos.z);
    float depth = rangeNear * (1.0f - ndcPos.z) + rangeFar * (ndcPos.z);
    vec4 clipPos = vec4(ndcPos.x * depth, ndcPos.y * depth, 1.0f, depth);
    return clipPos;
}

vec3 frustumGrid_clipToEye(vec4 clipPos, mat4 projection) {
    return vec3(
        (clipPos.x + projection[2][0] * clipPos.w) / projection[0][0],
        (clipPos.y + projection[2][1] * clipPos.w) / projection[1][1],
        -clipPos.w
        //, (clipPos.z - projection[3][3] * clipPos.w) / projection[3][2]
        );
}

vec3 frustumGrid_volumeToEye(vec3 vpos, mat4 projection, float rangeNear, float rangeFar) {
    return frustumGrid_clipToEye(frustumGrid_volumeToClip(vpos, rangeNear, rangeFar), projection);
}

float frustumGrid_eyeToVolumeDepth(float eposZ, float rangeNear, float rangeFar) {
    return (-eposZ - rangeNear) / (rangeFar - rangeNear);
}

vec3 frustumGrid_eyeToVolume(vec3 epos, mat4 projection, float rangeNear, float rangeFar) {
    vec4 clipPos = vec4(epos.x * projection[0][0] + epos.z * projection[2][0],
        epos.y * projection[1][1] + epos.z * projection[2][1],
        epos.z * projection[2][2] + projection[2][3],
        -epos.z);
    vec4 ndcPos = clipPos / clipPos.w;

    vec3 volumePos = vec3(0.5f * (ndcPos.x + 1.0f), 0.5f * (ndcPos.y + 1.0f), (clipPos.w - rangeNear) / (rangeFar - rangeNear));
    return volumePos;
}



int frustumGrid_numClusters() {
    return frustumGrid.dims.x * frustumGrid.dims.y * (frustumGrid.dims.z + 1);
}

int frustumGrid_clusterToIndex(ivec3 pos) {
    return pos.x + (pos.y + pos.z * frustumGrid.dims.y) * frustumGrid.dims.x;
}
ivec3 frustumGrid_indexToCluster(int index) {
    ivec3 summedDims = ivec3(frustumGrid.dims.x * frustumGrid.dims.y, frustumGrid.dims.x, 1);
    int layer = index / summedDims.x;
    int offsetInLayer = index % summedDims.x;
    ivec3 clusterPos = ivec3(offsetInLayer % summedDims.y, offsetInLayer / summedDims.y, layer);
    return clusterPos;
}

vec3 frustumGrid_clusterPosToEye(vec3 clusterPos) {

    vec3 cvpos = clusterPos;


    vec3 volumePos = frustumGrid_gridToVolume(cvpos, frustumGrid.dims);

    vec3 eyePos = frustumGrid_volumeToEye(volumePos, frustumGrid.eyeToGridProj, frustumGrid.rangeNear, frustumGrid.rangeFar);

    return eyePos;
}

vec3 frustumGrid_clusterPosToEye(ivec3 clusterPos, vec3 offset) {
    vec3 cvpos = vec3(clusterPos) + offset;
    return frustumGrid_clusterPosToEye(cvpos);
}

int frustumGrid_eyeDepthToClusterLayer(float eyeZ) {
    if ((eyeZ > -frustumGrid.frustumNear) || (eyeZ < -frustumGrid.frustumFar)) {
        return -2;
    }

    if (eyeZ > -frustumGrid.rangeNear) {
        return -1;
    }

    float volumeZ = frustumGrid_eyeToVolumeDepth(eyeZ, frustumGrid.rangeNear, frustumGrid.rangeFar);

    int gridZ = int(frustumGrid_volumeToGridDepth(volumeZ, frustumGrid.dims));

    if (gridZ >= frustumGrid.dims.z) {
        gridZ = frustumGrid.dims.z;
    }


    return gridZ;
}

ivec3 frustumGrid_eyeToClusterPos(vec3 eyePos) {

    // make sure the frontEyePos is always in the front to eval the grid pos correctly
    vec3 frontEyePos = eyePos;
    frontEyePos.z = (eyePos.z > 0.0f ? -eyePos.z : eyePos.z);
    vec3 volumePos = frustumGrid_eyeToVolume(frontEyePos, frustumGrid.eyeToGridProj, frustumGrid.rangeNear, frustumGrid.rangeFar);


    vec3 gridPos = frustumGrid_volumeToGrid(volumePos, frustumGrid.dims);
    
    if (gridPos.z >= float(frustumGrid.dims.z)) {
        gridPos.z = float(frustumGrid.dims.z);
    }

    ivec3 igridPos = ivec3(floor(gridPos));

    if ((eyePos.z > -frustumGrid.frustumNear) || (eyePos.z < -frustumGrid.frustumFar)) {
        return ivec3(igridPos.x, igridPos.y, - 2);
    }

    if (eyePos.z > -frustumGrid.rangeNear) {
        return ivec3(igridPos.x, igridPos.y, -1);
    }

    return igridPos;
}


int frustumGrid_eyeToClusterDirH(vec3 eyeDir) {
    if (eyeDir.z >= 0.0f) {
        return (eyeDir.x > 0.0f ? frustumGrid.dims.x : -1);
    }

    float eyeDepth = -eyeDir.z;
    float nclipDir = eyeDir.x / eyeDepth;
    float ndcDir = nclipDir * frustumGrid.eyeToGridProj[0][0] - frustumGrid.eyeToGridProj[2][0];
    float volumeDir = 0.5f * (ndcDir + 1.0f);
    float gridPos = volumeDir * float(frustumGrid.dims.x);

    return int(gridPos);
}

int frustumGrid_eyeToClusterDirV(vec3 eyeDir) {
    if (eyeDir.z >= 0.0f) {
        return (eyeDir.y > 0.0f ? frustumGrid.dims.y : -1);
    }

    float eyeDepth = -eyeDir.z;
    float nclipDir = eyeDir.y / eyeDepth;
    float ndcDir = nclipDir * frustumGrid.eyeToGridProj[1][1] - frustumGrid.eyeToGridProj[2][1];
    float volumeDir = 0.5f * (ndcDir + 1.0f);
    float gridPos = volumeDir * float(frustumGrid.dims.y);

    return int(gridPos);
}

ivec2 frustumGrid_eyeToClusterDir(vec3 eyeDir) {
    return ivec2(frustumGrid_eyeToClusterDirH(eyeDir), frustumGrid_eyeToClusterDirV(eyeDir));
}

vec4 frustumGrid_eyeToWorld(vec4 eyePos) {
    return frustumGrid.eyeToWorldMat * eyePos;
}

vec4 frustumGrid_worldToEye(vec4 worldPos) {
    return frustumGrid.worldToEyeMat * worldPos;
}



    // End C++ compatible// end of hybrid include

#define GRID_NUM_ELEMENTS 4096
#define GRID_INDEX_TYPE ivec4
#define GRID_FETCH_BUFFER(i) i / 4][i % 4

LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_LIGHT_CLUSTER_GRID) uniform clusterGridBuffer {
    GRID_INDEX_TYPE _clusterGridTable[GRID_NUM_ELEMENTS];
};

LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_LIGHT_CLUSTER_CONTENT) uniform clusterContentBuffer {
    GRID_INDEX_TYPE _clusterGridContent[GRID_NUM_ELEMENTS];
};

ivec3 clusterGrid_getCluster(int index) {
    int clusterDesc = _clusterGridTable[GRID_FETCH_BUFFER(index)];
    int numPointLights = 0xFF & (clusterDesc >> 16);
    int numSpotLights = 0xFF & (clusterDesc >> 24);
    int contentOffset = 0xFFFF & (clusterDesc);
    return ivec3(numPointLights, numSpotLights, contentOffset);
}

int clusterGrid_getClusterLightId(int index, int offset) {
    int elementIndex = offset + index;
    /*
    int element = _clusterGridContent[GRID_FETCH_BUFFER(elementIndex)];
    return element;
    */
    int element = _clusterGridContent[GRID_FETCH_BUFFER((elementIndex >> 1))];
    return (((elementIndex & 0x00000001) == 1) ? (element >> 16) : element) & 0x0000FFFF;
}


bool hasLocalLights(int numLights, ivec3 clusterPos, ivec3 dims) {
    return numLights>0 
        && all(greaterThanEqual(clusterPos, ivec3(0))) 
        && all(lessThan(clusterPos.xy, dims.xy))
        && clusterPos.z <= dims.z;
}

// // // Hack Comment
layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=0) out vec4 _fragColor;

void main(void) {

    // Grab the fragment data from the uv
    vec2 texCoord = _texCoord0.st;

    vec4 fragPosition = unpackDeferredPositionFromZeye(texCoord);
    DeferredFragment frag = unpackDeferredFragmentNoPosition(texCoord);

    if (frag.mode == FRAG_MODE_UNLIT) {
        discard;
    }

    frag.position = fragPosition;


    // Frag pos in world
    mat4 invViewMat = getViewInverse();
    vec4 fragPos = invViewMat * fragPosition;
    
    // From frag world pos find the cluster
    vec4 clusterEyePos = frustumGrid_worldToEye(fragPos);
    ivec3 clusterPos = frustumGrid_eyeToClusterPos(clusterEyePos.xyz);

    ivec3 cluster = clusterGrid_getCluster(frustumGrid_clusterToIndex(clusterPos));
    int numLights = cluster.x + cluster.y;
    ivec3 dims = frustumGrid.dims.xyz;

;
    if (!hasLocalLights(numLights, clusterPos, dims)) {
        discard;
    }

    // Frag to eye vec
    vec4 fragEyeVector = invViewMat * vec4(-frag.position.xyz, 0.0);
    vec3 fragEyeDir = normalize(fragEyeVector.xyz);
    _fragColor = vec4(0, 0, 0, 1);
    
    int numLightTouching = 0;
    int lightClusterOffset = cluster.z;
    for (int i = 0; i < cluster.x; i++) {
        // Need the light now
        int theLightIndex = clusterGrid_getClusterLightId(i, lightClusterOffset);
        Light light = getLight(theLightIndex);

        // Clip againgst the light volume and Make the Light vector going from fragment to light center in world space
        vec4 fragLightVecLen2;
        vec4 fragLightDirLen;

        if (!lightVolume_clipFragToLightVolumePoint(light.volume, fragPos.xyz, fragLightVecLen2)) {
            continue;
        }

        // Allright we re in the light sphere volume
        fragLightDirLen.w = length(fragLightVecLen2.xyz);
        fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;
        if (dot(frag.normal, fragLightDirLen.xyz) < 0.0) {
            continue;
        }

        numLightTouching++;

        // Allright we re valid in the volume
        float fragLightDistance = fragLightDirLen.w;
        vec3 fragLightDir = fragLightDirLen.xyz;

        vec3 color = vec3(0.0);
        if (evalLightPointEdge(color, light, fragLightDirLen, fragEyeDir)) {
            _fragColor.rgb += color;
        }
    }

    for (int i = cluster.x; i < numLights; i++) {
        // Need the light now
        int theLightIndex = clusterGrid_getClusterLightId(i, lightClusterOffset);
        Light light = getLight(theLightIndex);

        // Clip againgst the light volume and Make the Light vector going from fragment to light center in world space
        vec4 fragLightVecLen2;
        vec4 fragLightDirLen;
        float cosSpotAngle;

        if (!lightVolume_clipFragToLightVolumePoint(light.volume, fragPos.xyz, fragLightVecLen2)) {
            continue;
        }

        // Allright we re in the light sphere volume
        fragLightDirLen.w = length(fragLightVecLen2.xyz);
        fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;
        if (dot(frag.normal, fragLightDirLen.xyz) < 0.0) {
            continue;
        }

        // Check spot
        if (!lightVolume_clipFragToLightVolumeSpotSide(light.volume, fragLightDirLen, cosSpotAngle)) {
            continue;
        }

        numLightTouching++;

        vec3 color = vec3(0.0);

        if (evalLightSpotEdge(color, light, fragLightDirLen, cosSpotAngle, fragEyeDir)) {
            _fragColor.rgb += color;
        }
    }

}

