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
//  ssao_debugOcclusion.frag
//
//  Created by Sam Gateau on 1/1/16.
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


float getAngleDitheringWorldPos(in vec3 pixelWorldPos) {
    vec3 worldPosFract = fract(pixelWorldPos * 1.0);

    ivec3 pixelPos = ivec3(worldPosFract * 256.0);

    return isDitheringEnabled() * float(((3 * pixelPos.x ^ pixelPos.y + pixelPos.x * pixelPos.y) + (3 * pixelPos.y ^ pixelPos.z + pixelPos.x * pixelPos.z)) * 10);
}

float getAngleDitheringSplit() {
    return isDitheringEnabled() * frameParams._angleInfo.x;
}

float getAngleDithering(in ivec2 pixelPos) {
#if SSAO_USE_QUAD_SPLIT
    return getAngleDitheringSplit();
#else
    // Hash function used in the AlchemyAO paper
    return getAngleDitheringPixelPos(pixelPos);
#endif
}

float getAngleDitheringPixelPos(in ivec2 pixelPos) {
    // Hash function used in the AlchemyAO paper
    return isDitheringEnabled() *  float((3 * pixelPos.x ^ pixelPos.y + pixelPos.x * pixelPos.y) * 10);
}

float evalDiskRadius(float Zeye, vec2 sideImageSize) {
    // Choose the screen-space sample radius
    // proportional to the projected area of the sphere
    float diskPixelRadius = -( getProjScale(getResolutionLevel()) * getRadius() / Zeye ) * getPerspectiveScale();

    // clamp the disk to fit in the image otherwise too many unknown
    diskPixelRadius = min(diskPixelRadius, sideImageSize.y * 0.5);

    return diskPixelRadius;
}

const float PI = 3.1415926;
const float TWO_PI = 6.2831852;

vec3 getUnitTapLocation(int sampleNumber, float spiralTurns, float spinAngle, float angleRange){
    // Radius relative to ssR
    float alpha = float(sampleNumber) * getInvNumSamples();
    float angle = alpha * (spiralTurns * angleRange) + spinAngle;
    return vec3(cos(angle), sin(angle), alpha);
}

vec3 getTapLocationSSAO(int sampleNumber, float spinAngle, float outerRadius) {
    vec3 tap = getUnitTapLocation(sampleNumber, getNumSpiralTurns(), spinAngle, TWO_PI);
    tap.xy *= tap.z;
    tap *= outerRadius;
    return tap;
}

vec3 getTapLocationClampedSSAO(int sampleNumber, float spinAngle, float outerRadius, vec2 pixelPos, vec2 sideImageSize) {
    vec3 tap = getTapLocationSSAO(sampleNumber, spinAngle, outerRadius);
    vec2 tapPos = pixelPos + tap.xy;

    if (!(isBorderingEnabled() > 0.0)) {
        return tap;
    }
    bool redoTap = false;

    if ((tapPos.x < 0.5)) {
        tapPos.x = -tapPos.x;
        redoTap = true;
    } else if ((tapPos.x > sideImageSize.x - 0.5)) {
        tapPos.x -= (sideImageSize.x - tapPos.x);
        redoTap = true;
    }

    if ((tapPos.y < 0.5)) {
        tapPos.y = -tapPos.y;
        redoTap = true;
    } else if ((tapPos.y > sideImageSize.y - 0.5)) {
        tapPos.y -= (sideImageSize.y - tapPos.y);
        redoTap = true;
    }

    if (redoTap) {
        tap.xy = tapPos - pixelPos;
        tap.z = length(tap.xy);
        tap.z = 0.0;  
    }
    
    return tap;
}


struct TBNFrame {
    vec3 tangent;
    vec3 binormal;
    vec3 normal;
};

vec3 fastAcos(vec3 x) {
	// [Eberly2014] GPGPU Programming for Games and Science
	vec3 absX = abs(x);
	vec3 res = absX * (-0.156583) + vec3(PI / 2.0);
	res *= sqrt(vec3(1.0) - absX);
	return mix(res, vec3(PI) - res, greaterThanEqual(x, vec3(0)));
}

float evalVisibilitySSAO(in vec3 centerPosition, in vec3 centerNormal, in vec3 tapPosition) {
    vec3 v = tapPosition - centerPosition;
    float vv = dot(v, v);
    float vn = dot(v, centerNormal);

    // Falloff function as recommended in SSAO paper
    const float epsilon = 0.01;
    float f = max(getRadius2() - vv, 0.0);
    return f * f * f * max((vn - getFalloffCosAngle()) / (epsilon + vv), 0.0);
}

#define HBAO_USE_COS_ANGLE 1
#define HBAO_USE_OVERHANG_HACK 0

float computeWeightForHorizon(float horizonLimit, float distanceSquared) {
    return max(0.0, 1.0 - distanceSquared * getInvRadius2());
}

float computeWeightedHorizon(float horizonLimit, float distanceSquared) {
    float radiusFalloff = computeWeightForHorizon(horizonLimit, distanceSquared);

#if !HBAO_USE_COS_ANGLE
    horizonLimit = getFalloffSinAngle() - horizonLimit;
#endif
    horizonLimit *= radiusFalloff;
#if !HBAO_USE_COS_ANGLE
    horizonLimit = getFalloffSinAngle() - horizonLimit;
#endif

    return horizonLimit;
}

#define HBAO_HORIZON_SEARCH_CONSTANT_STEP 0

float computeOcclusion(ivec4 side, vec2 fragUVPos, vec3 fragPositionES, TBNFrame fragFrameES, vec2 searchDir, float searchRadius, int stepCount) {
    float occlusion = 0.0;
#if HBAO_USE_COS_ANGLE
    float horizonLimit = getFalloffCosAngle();
#else
    float horizonLimit = getFalloffSinAngle();
#endif

    if (stepCount>0) {
        vec2 deltaTapUV = searchDir / float(stepCount);
        vec2 tapUVPos;
        float deltaRadius = searchRadius / float(stepCount);
        vec2 sideDepthSize = getDepthTextureSideSize(0);

#if HBAO_HORIZON_SEARCH_CONSTANT_STEP
        float radius = 0.0;
        int stepIndex;

        for (stepIndex=0 ; stepIndex<stepCount ; stepIndex++) {
            fragUVPos += deltaTapUV;
            radius += deltaRadius;
            tapUVPos = snapToTexel(fragUVPos, sideDepthSize);

            if (tapUVPos.x<0.0 || tapUVPos.y<0.0 || tapUVPos.x>=1.0 || tapUVPos.y>=1.0) {
            // Early exit because we've hit the borders of the frame
            break;
        }
        vec2 tapMipZ = fetchTap(side, tapUVPos, radius);
        vec3 tapPositionES = evalEyePositionFromZeye(side.x, tapMipZ.y, tapUVPos);
        vec3 deltaVec = tapPositionES - fragPositionES;
        float distanceSquared = dot(deltaVec, deltaVec);
        float deltaDotNormal = dot(deltaVec, fragFrameES.normal);
#if HBAO_USE_COS_ANGLE
        float tapHorizonLimit = deltaDotNormal;
#else
        float tapHorizonLimit = dot(deltaVec, fragFrameES.tangent);
#endif
        tapHorizonLimit *= inversesqrt(distanceSquared);

        if (distanceSquared < getRadius2() && deltaDotNormal>0.0) {
#if HBAO_USE_COS_ANGLE
            float weight = computeWeightForHorizon(tapHorizonLimit, distanceSquared);
            if (tapHorizonLimit > horizonLimit) {
                occlusion += weight * (tapHorizonLimit - horizonLimit);
                horizonLimit = tapHorizonLimit;
            }
#if HBAO_USE_OVERHANG_HACK 
            else if (dot(deltaVec, fragFrameES.tangent) < 0.0) {
                // This is a hack to try to handle the case where the occlusion angle is
                // greater than 90°
                occlusion = mix(occlusion, (occlusion+1.0) * 0.5, weight);
            }
#endif
#else   
            if (tapHorizonLimit < horizonLimit) {
                tapHorizonLimit = computeWeightedHorizon(tapHorizonLimit, distanceSquared);
                horizonLimit = min(horizonLimit, tapHorizonLimit);
            }
#endif
        }

        }
#else
        // Step is adapted to Mip level
        float radius = deltaRadius;
        float mipLevel = float(evalMipFromRadius(radius * float(doFetchMips())));

        while (radius<=searchRadius) {
            fragUVPos += deltaTapUV;
            tapUVPos = snapToTexel(fragUVPos, sideDepthSize);

            if (tapUVPos.x<0.0 || tapUVPos.y<0.0 || tapUVPos.x>=1.0 || tapUVPos.y>=1.0) {
            // Early exit because we've hit the borders of the frame
            break;
        }
        vec2 tapMipZ = fetchTap(side, tapUVPos, radius);
        vec3 tapPositionES = evalEyePositionFromZeye(side.x, tapMipZ.y, tapUVPos);
        vec3 deltaVec = tapPositionES - fragPositionES;
        float distanceSquared = dot(deltaVec, deltaVec);
        float deltaDotNormal = dot(deltaVec, fragFrameES.normal);
#if HBAO_USE_COS_ANGLE
        float tapHorizonLimit = deltaDotNormal;
#else
        float tapHorizonLimit = dot(deltaVec, fragFrameES.tangent);
#endif
        tapHorizonLimit *= inversesqrt(distanceSquared);

        if (distanceSquared < getRadius2() && deltaDotNormal>0.0) {
#if HBAO_USE_COS_ANGLE
            float weight = computeWeightForHorizon(tapHorizonLimit, distanceSquared);
            if (tapHorizonLimit > horizonLimit) {
                occlusion += weight * (tapHorizonLimit - horizonLimit);
                horizonLimit = tapHorizonLimit;
            }
#if HBAO_USE_OVERHANG_HACK 
            else if (dot(deltaVec, fragFrameES.tangent) < 0.0) {
                // This is a hack to try to handle the case where the occlusion angle is
                // greater than 90°
                occlusion = mix(occlusion, (occlusion+1.0) * 0.5, weight);
            }
#endif
#else   
            if (tapHorizonLimit < horizonLimit) {
                tapHorizonLimit = computeWeightedHorizon(tapHorizonLimit, distanceSquared);
                horizonLimit = min(horizonLimit, tapHorizonLimit);
            }
#endif
        }


            if (tapMipZ.x != mipLevel) {
                mipLevel = tapMipZ.x;
                deltaRadius *= 2.0;
                deltaTapUV *= 2.0;
                sideDepthSize = getDepthTextureSideSize(int(mipLevel));
            }
            radius += deltaRadius;
        }
#endif
    }

#if HBAO_USE_COS_ANGLE
    occlusion = min(occlusion * getFalloffCosAngleScale(), 1.0);
#else
    occlusion = horizonLimit * mix(1.0, getFalloffSinAngleScale(), horizonLimit > 0.0);
#endif

    return occlusion;
}

float evalVisibilityHBAO(ivec4 side, vec2 fragUVPos, vec2 invSideImageSize, vec2 deltaTap, float diskPixelRadius, 
                         vec3 fragPositionES, vec3 fragNormalES) {
    vec2 pixelSearchVec = deltaTap * diskPixelRadius;
	vec2 searchDir = pixelSearchVec * invSideImageSize;
    vec2 deltaTapUV = deltaTap * invSideImageSize;
	float obscuranceH1 = 0.0;
	float obscuranceH2 = 0.0;
    pixelSearchVec = abs(pixelSearchVec);
    int stepCount = int(ceil(max(pixelSearchVec.x, pixelSearchVec.y)));
    TBNFrame fragFrameES;

    fragFrameES.tangent = vec3(0.0);
    fragFrameES.binormal = vec3(0.0);
    fragFrameES.normal = fragNormalES;

#if HBAO_USE_OVERHANG_HACK || !HBAO_USE_COS_ANGLE
    vec3 positionPos = buildPosition(side, fragUVPos + deltaTapUV);
    vec3 positionNeg = buildPosition(side, fragUVPos - deltaTapUV);

    fragFrameES.tangent = getMinDelta(fragPositionES, positionPos, positionNeg);
    fragFrameES.tangent -= dot(fragNormalES, fragFrameES.tangent) * fragNormalES;
    fragFrameES.tangent = normalize(fragFrameES.tangent);
#endif
    // Forward search for h1
    obscuranceH1 = computeOcclusion(side, fragUVPos, fragPositionES, fragFrameES, searchDir, diskPixelRadius, stepCount);

    // Backward search for h2
#if HBAO_USE_OVERHANG_HACK || !HBAO_USE_COS_ANGLE
    fragFrameES.tangent = -fragFrameES.tangent;
#endif
    obscuranceH2 = computeOcclusion(side, fragUVPos, fragPositionES, fragFrameES, -searchDir, diskPixelRadius, stepCount);

	return obscuranceH1 + obscuranceH2;
}



float CSZToDepthKey(float z) {
    return clamp(z * (-1.0 / SSAO_DEPTH_KEY_SCALE), 0.0, 1.0);
}

vec4 packOcclusionOutput(float occlusion, float depth, vec3 eyeNormal) {
    depth = CSZToDepthKey(depth);
#if SSAO_BILATERAL_BLUR_USE_NORMAL    
    return vec4(occlusion, depth, eyeNormal.xy / eyeNormal.z);
#else
    // Round to the nearest 1/256.0
    depth *= 256.0;
    float temp = floor(depth);
    return vec4(occlusion, temp * (1.0 / 256.0), depth - temp, 0.0);
#endif
}

struct UnpackedOcclusion {
    vec3 normal;
    float depth;
    float occlusion;
};

void unpackOcclusionOutput(vec4 raw, out UnpackedOcclusion result) {
    result.occlusion = raw.x;
#if SSAO_BILATERAL_BLUR_USE_NORMAL    
    result.depth = raw.y;
    result.normal = normalize(vec3(raw.zw, 1.0));
#else
    result.depth = (raw.y + raw.z / 256.0);
    result.normal = vec3(0.0, 0.0, 1.0);
#endif
}

float unpackOcclusion(vec4 raw) {
    return raw.x;
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


struct DebugParams{
    vec4 pixelInfo;
};

LAYOUT(binding=RENDER_UTILS_BUFFER_SSAO_DEBUG_PARAMS) uniform debugAmbientOcclusionBuffer {
    DebugParams debugParams;
};

vec2 getDebugCursorTexcoord(){
    return debugParams.pixelInfo.xy;
}

layout(location=0) out vec4 outFragColor;

void main(void) {
    // Stereo side info based on the real viewport size of this pass
    vec2 sideDepthSize = getDepthTextureSideSize(0);
    // Pixel Debugged
    vec2 cursorUV = getDebugCursorTexcoord();
    vec2 cursorPixelPos = cursorUV * sideDepthSize;

    ivec2 fragUVPos = ivec2(cursorPixelPos);

    // TODO

    outFragColor = packOcclusionOutput(0.0, 0.0, vec3(0.0, 0.0, 1.0));
}
