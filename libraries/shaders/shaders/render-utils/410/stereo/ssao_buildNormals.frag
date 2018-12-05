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
//  Generated on Wed Dec  5 03:19:16 2018
//
//  ssao_buildNormals.frag
//
//  Created by Olivier Prat on 09/19/18.
//  Copyright 2018 High Fidelity, Inc.
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
// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef RENDER_UTILS_SSAO_SHARED_H
#define RENDER_UTILS_SSAO_SHARED_H

#define SSAO_USE_QUAD_SPLIT	1
#define SSAO_BILATERAL_BLUR_USE_NORMAL 0

#define SSAO_DEPTH_KEY_SCALE 300.0

#if SSAO_USE_QUAD_SPLIT
#define SSAO_SPLIT_LOG2_COUNT  2
#else
#define SSAO_SPLIT_LOG2_COUNT  0
#endif
#define SSAO_SPLIT_COUNT  (1 << SSAO_SPLIT_LOG2_COUNT)

// glsl / C++ compatible source as interface for ambient occlusion
#ifdef __cplusplus
#   define SSAO_VEC4 glm::vec4
#   define SSAO_MAT4 glm::mat4
#else
#   define SSAO_VEC4 vec4
#   define SSAO_MAT4 mat4
#endif

struct AmbientOcclusionParams {
    SSAO_VEC4 _resolutionInfo;
    SSAO_VEC4 _radiusInfo;
    SSAO_VEC4 _ditheringInfo;
    SSAO_VEC4 _sampleInfo;
    SSAO_VEC4 _falloffInfo;
    SSAO_VEC4 _sideSizes[2];
};

struct AmbientOcclusionFrameParams {
    SSAO_VEC4 _angleInfo;
};

struct AmbientOcclusionBlurParams {
    SSAO_VEC4 _blurInfo;
    SSAO_VEC4 _blurAxis;
};

#endif // RENDER_UTILS_SHADER_CONSTANTS_H

// // // Hack Comment// // // // Hack comment to absorb the extra '//' scribe prepends

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



LAYOUT(binding=RENDER_UTILS_BUFFER_SSAO_PARAMS) uniform ambientOcclusionParamsBuffer {
    AmbientOcclusionParams params;
};

LAYOUT(binding=RENDER_UTILS_BUFFER_SSAO_FRAME_PARAMS) uniform ambientOcclusionFrameParamsBuffer {
    AmbientOcclusionFrameParams frameParams;
};

float getPerspectiveScale() {
    return (params._resolutionInfo.z);
}
int getResolutionLevel() { 
    return int(params._resolutionInfo.x);
}

bool isHorizonBased() {
    return params._resolutionInfo.y!=0.0;
}

vec2 getNormalsSideSize() {
    return params._sideSizes[0].xy;
}
int getNormalsResolutionLevel() {
    return int(params._sideSizes[0].z);
}
int getDepthResolutionLevel() {
    return int(params._sideSizes[0].w);
}
vec2 getOcclusionSideSize() {
    return params._sideSizes[1].xy;
}
vec2 getOcclusionSplitSideSize() {
    return params._sideSizes[1].zw;
}

ivec2 getWidthHeightRoundUp(int resolutionLevel) {
    ivec2 fullRes = ivec2(getWidthHeight(0));
    int resolutionDivisor = 1 << resolutionLevel;
    return (fullRes + resolutionDivisor - 1) / resolutionDivisor;
}

float getRadius() {
    return params._radiusInfo.x;
}
float getRadius2() {
    return params._radiusInfo.y;
}
float getInvRadius6() {
    return mix(params._radiusInfo.z, 1.0, isHorizonBased());
}
float getInvRadius2() {
    return params._radiusInfo.z;
}

float getObscuranceScaling() {
    return getInvRadius6() * params._radiusInfo.w;
}

float isDitheringEnabled() {
    return params._ditheringInfo.x;
}
float isBorderingEnabled() {
    return params._ditheringInfo.w;
}

float getFalloffCosAngle() {
    return params._falloffInfo.x;
}
float getFalloffCosAngleScale() {
    return params._falloffInfo.y;
}

float getFalloffSinAngle() {
    return params._falloffInfo.z;
}
float getFalloffSinAngleScale() {
    return params._falloffInfo.w;
}

float getNumSamples() {
    return params._sampleInfo.x;
}
float getInvNumSamples() {
    return params._sampleInfo.y;
}
float getNumSpiralTurns() {
    return params._sampleInfo.z;
}

int doFetchMips() {
    return int(params._sampleInfo.w);
}


// the depth pyramid texture
LAYOUT(binding=RENDER_UTILS_TEXTURE_SSAO_DEPTH) uniform sampler2D depthPyramidTex;
LAYOUT(binding=RENDER_UTILS_TEXTURE_SSAO_NORMAL) uniform sampler2D normalTex;

vec2 getFramebufferUVFromSideUV(ivec4 side, vec2 uv) {
    return mix(uv, vec2((uv.x + float(getStereoSide(side))) * 0.5, uv.y), float(isStereo()));
}

vec2 getSideUVFromFramebufferUV(ivec4 side, vec2 uv) {
    return mix(uv, vec2(uv.x * 2.0 - float(getStereoSide(side)), uv.y), float(isStereo()));
}

vec2 getDepthTextureSize(int level) {
    return vec2(textureSize(depthPyramidTex, level));
}

vec2 getDepthTextureSideSize(int level) {
    ivec2 size = textureSize(depthPyramidTex, level);
    size.x >>= int(isStereo()) & 1;
    return vec2(size);
}

vec2 getStereoSideSizeRoundUp(int resolutionLevel) {
    ivec2 fullRes = ivec2(getStereoSideSize(0));
    int resolutionDivisor = 1 << resolutionLevel;
    return vec2((fullRes + resolutionDivisor - 1) / resolutionDivisor);
}

float getZEyeAtUV(vec2 texCoord, float level) {
    return -textureLod(depthPyramidTex, texCoord, level).x;
}

float getZEyeAtUV(ivec4 side, vec2 texCoord, float level) {
    texCoord = getFramebufferUVFromSideUV(side, texCoord);
    return getZEyeAtUV(texCoord, level);
}

vec3 packNormal(vec3 normal) {
    vec3 absNormal = abs(normal);
    return 0.5 + normal * 0.5 / max(absNormal.x, max(absNormal.y, absNormal.z));
}

vec3 unpackNormal(vec3 packedNormal) {
    return normalize(packedNormal*2.0 - 1.0);
}

vec3 getNormalEyeAtUV(vec2 texCoord, float level) {
    return unpackNormal(textureLod(normalTex, texCoord, level).xyz);
}

vec3 getNormalEyeAtUV(ivec4 side, vec2 texCoord, float level) {
    texCoord = getFramebufferUVFromSideUV(side, texCoord);
    return getNormalEyeAtUV(texCoord, level);
}

vec2 snapToTexel(vec2 uv, vec2 pixelSize) {
	return (floor(uv * pixelSize - 0.5) + 0.5) / pixelSize;
}

int evalMipFromRadius(float radius) {
    const int LOG_MAX_OFFSET = 2;
    const int MAX_MIP_LEVEL = 5;
    return clamp(findMSB(int(radius)) - LOG_MAX_OFFSET, 0, MAX_MIP_LEVEL);
}

vec2 fetchTap(ivec4 side, vec2 tapUV, float tapRadius) {
    int mipLevel = evalMipFromRadius(tapRadius * float(doFetchMips()));

    vec2 fetchUV = clamp(tapUV, vec2(0), vec2(1));
    fetchUV = getFramebufferUVFromSideUV(side, fetchUV);

    vec2 P;
    P.x = float(mipLevel);
    P.y = -textureLod(depthPyramidTex, fetchUV, P.x).x;
    return P;
}

vec3 buildPosition(ivec4 side, vec2 fragUVPos) {
    float Zeye = getZEyeAtUV(side, fragUVPos, 0.0);
    return evalEyePositionFromZeye(side.x, Zeye, fragUVPos);
}

vec3 getMinDelta(vec3 centralPoint, vec3 offsetPointPos, vec3 offsetPointNeg) {
    vec3 delta0 = offsetPointPos - centralPoint;
    vec3 delta1 = centralPoint - offsetPointNeg;
    float sqrLength0 = dot(delta0, delta0);
    float sqrLength1 = dot(delta1, delta1);

    return mix(delta1, delta0, float(sqrLength0 < sqrLength1));
}

const ivec2 UV_RIGHT = ivec2(1,0);
const ivec2 UV_LEFT = ivec2(-1,0);
const ivec2 UV_TOP = ivec2(0,1);
const ivec2 UV_BOTTOM = ivec2(0,-1);

vec3 buildNormal(ivec4 side, vec2 fragUVPos, vec3 fragPosition, vec2 deltaDepthUV) {
    vec2 fullUVPos = getFramebufferUVFromSideUV(side, fragUVPos);

    vec3 fragPositionDxPos;
    vec3 fragPositionDxNeg;
    vec3 fragPositionDyPos;
    vec3 fragPositionDyNeg;

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_RIGHT).x;

    fragPositionDxPos = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_RIGHT)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_LEFT).x;

    fragPositionDxNeg = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_LEFT)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_TOP).x;

    fragPositionDyPos = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_TOP)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_BOTTOM).x;

    fragPositionDyNeg = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_BOTTOM)*deltaDepthUV);
}


    vec3 fragDeltaDx = getMinDelta(fragPosition, fragPositionDxPos, fragPositionDxNeg);
    vec3 fragDeltaDy = getMinDelta(fragPosition, fragPositionDyPos, fragPositionDyNeg);

    return normalize( cross(fragDeltaDx, fragDeltaDy) );
}

void buildTangentBinormal(ivec4 side, vec2 fragUVPos, vec3 fragPosition, vec3 fragNormal, vec2 deltaDepthUV,
                          out vec3 fragTangent, out vec3 fragBinormal) {
    vec2 fullUVPos = getFramebufferUVFromSideUV(side, fragUVPos);

    vec3 fragPositionDxPos;
    vec3 fragPositionDxNeg;
    vec3 fragPositionDyPos;
    vec3 fragPositionDyNeg;

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_RIGHT).x;

    fragPositionDxPos = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_RIGHT)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_LEFT).x;

    fragPositionDxNeg = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_LEFT)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_TOP).x;

    fragPositionDyPos = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_TOP)*deltaDepthUV);
}

    {
    float Zeye = -textureLodOffset(depthPyramidTex, fullUVPos, 0.0, UV_BOTTOM).x;

    fragPositionDyNeg = evalEyePositionFromZeye(side.x, Zeye, fragUVPos + vec2(UV_BOTTOM)*deltaDepthUV);
}


    vec3 fragDeltaDx = getMinDelta(fragPosition, fragPositionDxPos, fragPositionDxNeg);
    vec3 fragDeltaDy = getMinDelta(fragPosition, fragPositionDyPos, fragPositionDyNeg);

    //fragTangent = normalize( cross(fragDeltaDy, fragNormal) );
    //fragBinormal = normalize( cross(fragNormal, fragDeltaDx) );

    fragTangent = fragDeltaDx;
    fragBinormal = fragDeltaDy;
}



layout(location=0) in vec2 varTexCoord0;

layout(location=0) out vec4 outFragColor;

void main(void) {
    // Pixel being shaded
    vec2 fragCoord = gl_FragCoord.xy; 
    ivec2 fragPixelPos = ivec2(fragCoord.xy);
    vec2 fragUVPos = varTexCoord0;

    // Stereo side info based on the real viewport size of this pass
    ivec2 sideNormalsSize = ivec2( getNormalsSideSize() );
    ivec4 side = getStereoSideInfoFromWidth(fragPixelPos.x, sideNormalsSize.x);

    vec2 deltaDepthUV = vec2(1.0) / getDepthTextureSideSize(0);

    // From now on, fragUVPos is the UV pos in the side
    fragUVPos = getSideUVFromFramebufferUV(side, fragUVPos);

    // The position and normal of the pixel fragment in Eye space
    vec3 fragPositionES = buildPosition(side, fragUVPos);
    vec3 fragNormalES = buildNormal(side, fragUVPos, fragPositionES, deltaDepthUV);

    outFragColor = vec4(packNormal(fragNormalES), 1.0);
}
