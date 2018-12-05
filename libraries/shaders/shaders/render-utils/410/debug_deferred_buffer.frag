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
//  debug_deferred_buffer.frag
//  fragment shader
//
//  Created by Clement on 12/3
//  Copyright 2015 High Fidelity, Inc.
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

vec3 colorWheel(float normalizedHue) {
    float v = normalizedHue * 6.f;
    if (v < 0.f) {
        return vec3(1.f, 0.f, 0.f);
    } else if (v < 1.f) {
        return vec3(1.f, v, 0.f);
    } else if (v < 2.f) {
        return vec3(1.f - (v-1.f), 1.f, 0.f);
    } else if (v < 3.f) {
        return vec3(0.f, 1.f, (v-2.f));
    } else if (v < 4.f) {
        return vec3(0.f, 1.f - (v-3.f), 1.f );
    } else if (v < 5.f) {
        return vec3((v-4.f), 0.f, 1.f );
    } else if (v < 6.f) {
        return vec3(1.f, 0.f, 1.f - (v-5.f));
    } else {
        return vec3(1.f, 0.f, 0.f);
    }
}

vec3 colorRamp(float normalizedHue) {
    float v = normalizedHue * 5.f;
    if (v < 0.f) {
        return vec3(1.f, 0.f, 0.f);
    } else if (v < 1.f) {
        return vec3(1.f, v, 0.f);
    } else if (v < 2.f) {
        return vec3(1.f - (v - 1.f), 1.f, 0.f);
    } else if (v < 3.f) {
        return vec3(0.f, 1.f, (v - 2.f));
    } else if (v < 4.f) {
        return vec3(0.f, 1.f - (v - 3.f), 1.f);
    } else if (v < 5.f) {
        return vec3((v - 4.f), 0.f, 1.f);
    } else {
        return vec3(1.f, 0.f, 1.f);
    }
}


LAYOUT(binding=RENDER_UTILS_DEBUG_TEXTURE0) uniform sampler2D debugTexture0;
LAYOUT(binding=RENDER_UTILS_TEXTURE_SHADOW) uniform sampler2DArrayShadow shadowMaps;

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


// glsl / C++ compatible source as interface for FadeEffect
#ifdef __cplusplus
#   define INT32 glm::int32
#else
#   define INT32 int
#endif

struct DebugParameters
{
    INT32   _shadowCascadeIndex;
};

    // //

LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_DEBUG_DEFERRED_PARAMS) uniform parametersBuffer {
    DebugParameters parameters;
};

float curvatureAO(float k) {
    return 1.0f - (0.0022f * k * k) + (0.0776f * k) + 0.7369f;
}

layout(location=0) in vec2 uv;
layout(location=0) out vec4 outFragColor;

//SOURCE_PLACEHOLDER_BEGIN
vec4 getFragmentColor() {
    DeferredFragment frag = unpackDeferredFragmentNoPosition(uv);
    return vec4(pow(frag.albedo, vec3(1.0 / 2.2)), 1.0);
}
//SOURCE_PLACEHOLDER_END


void main(void) {
    outFragColor = getFragmentColor();
}