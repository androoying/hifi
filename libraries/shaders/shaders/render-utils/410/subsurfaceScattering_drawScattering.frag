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
//  Generated on Wed Dec  5 03:19:18 2018
//
//  subsurfaceScattering_drawScattering.frag
//
//  Created by Sam Gateau on 6/8/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


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

LAYOUT(binding=GRAPHICS_BUFFER_KEY_LIGHT) uniform keyLightBuffer {
    Light light;
};
Light getKeyLight() {
    return light;
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


//  Generated on Wed Dec  5 03:19:18 2018
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



layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 _fragColor;

struct SSSDebugParams {
    vec4 cursorTexCoordSpare2;
};

// Deferred frame transform uses slot 0
LAYOUT_STD140(binding=1) uniform sssDebugParamsBuffer {
    SSSDebugParams sssDebugParams;
};

vec3 evalScatteringBRDF(vec2 texcoord) {
    DeferredFragment fragment = unpackDeferredFragmentNoPosition(texcoord);

    vec3 normal = fragment.normal; // .getWorldNormal(varTexCoord0);
    vec4 blurredCurvature = fetchCurvature(texcoord);
    vec4 diffusedCurvature = fetchDiffusedCurvature(texcoord);
    vec3 midNormal = normalize((blurredCurvature.xyz - 0.5f) * 2.0f);
    vec3 lowNormal = normalize((diffusedCurvature.xyz - 0.5f) * 2.0f);
    float curvature = unpackCurvature(diffusedCurvature.w);


    // Transform directions to worldspace
    vec3 fragNormal = vec3((normal));

    // Get light
    Light light = getKeyLight();
    vec3 fresnel = vec3(0.028); // Default Di-electric fresnel value for skin
    float metallic = 0.0;

    vec3 fragLightDir = -normalize(getLightDirection(light));


    vec3 brdf = evalSkinBRDF(fragLightDir, fragNormal, midNormal, lowNormal, curvature);

    return brdf;
}

vec3 drawScatteringTableUV(vec2 cursor, vec2 texcoord) {
    DeferredFragment fragment = unpackDeferredFragmentNoPosition(cursor);

    vec3 normal = fragment.normal; // .getWorldNormal(varTexCoord0);
    vec4 blurredCurvature = fetchCurvature(cursor);
    vec4 diffusedCurvature = fetchDiffusedCurvature(cursor);
    vec3 midNormal = normalize((blurredCurvature.xyz - 0.5f) * 2.0f);
    vec3 lowNormal = normalize((diffusedCurvature.xyz - 0.5f) * 2.0f);
    float curvature = unpackCurvature(diffusedCurvature.w);

    // Get light
    Light light = getKeyLight();
    vec3 fresnel = vec3(0.028); // Default Di-electric fresnel value for skin

    vec3 fragLightDir = -normalize(getLightDirection(light));

    vec3 bentNdotL = evalScatteringBentNdotL(normal, midNormal, lowNormal, fragLightDir);

    vec3 distance = vec3(0.0);
    for (int c = 0; c < 3; c++) {
        vec2 BRDFuv = vec2(clamp(bentNdotL[c] * 0.5 + 0.5, 0.0, 1.0), clamp(2.0 * curvature, 0.0, 1.0));
        vec2 delta = BRDFuv - texcoord;
        distance[c] = 1.0 - dot(delta, delta);
    }

    distance *= distance;

    float threshold = 0.999;
    vec3 color = vec3(0.0);
    bool keep = false;
    for (int c = 0; c < 3; c++) {
        if (distance[c] > threshold) {
            keep = true;
            color[c] += 1.0;
        }
    }

    if (!keep)
            discard;

    return color;
}

void main(void) {
    vec2 cursorTexcoord = sssDebugParams.cursorTexCoordSpare2.xy;
    _fragColor = vec4(drawScatteringTableUV(cursorTexcoord, varTexCoord0), 1.0);
}


