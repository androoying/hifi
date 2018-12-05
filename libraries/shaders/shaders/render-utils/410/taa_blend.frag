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
//  Generated on Wed Dec  5 03:19:19 2018
//
//  taa_blend.frag
//  fragment shader
//
//  Created by Sam Gateau on 8/17/2017
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

//  Generated on Wed Dec  5 03:19:19 2018
//
//  TAA.slh
//  Common component needed by TemporalAntialiasing fragment shader
//
//  Created by Sam Gateau on 8/17/2017
//  Copyright 2017 High Fidelity, Inc.
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



// // // Hack Comment
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

LAYOUT(binding=RENDER_UTILS_TEXTURE_TAA_HISTORY) uniform sampler2D historyMap;
LAYOUT(binding=RENDER_UTILS_TEXTURE_TAA_SOURCE) uniform sampler2D sourceMap;
LAYOUT(binding=RENDER_UTILS_TEXTURE_TAA_VELOCITY) uniform sampler2D velocityMap;
LAYOUT(binding=RENDER_UTILS_TEXTURE_TAA_DEPTH) uniform sampler2D depthMap;
LAYOUT(binding=RENDER_UTILS_TEXTURE_TAA_NEXT) uniform sampler2D nextMap;

struct TAAParams
{
    float none;
    float blend;
    float covarianceGamma;
    float debugShowVelocityThreshold;
    ivec4 flags;
    vec4 pixelInfo_orbZoom;
    vec4 regionInfo;
};

LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_TAA_PARAMS) uniform taaParamsBuffer {
    TAAParams params;
};

#define GET_BIT(bitfield, bitIndex) bool((bitfield) & (1 << (bitIndex)))

bool taa_isDebugEnabled() {
    return GET_BIT(params.flags.x, 0);
}

bool taa_showDebugCursor() {
    return GET_BIT(params.flags.x, 1);
}

bool taa_showClosestFragment() {
    return GET_BIT(params.flags.x, 3);
}

bool taa_constrainColor() {
    return GET_BIT(params.flags.y, 1);
}

bool taa_feedbackColor() {
    return GET_BIT(params.flags.y, 4);
}

vec2 taa_getDebugCursorTexcoord() {
    return params.pixelInfo_orbZoom.xy;
}

float taa_getDebugOrbZoom() {
    return params.pixelInfo_orbZoom.z;
}

vec2 taa_getRegionDebug() {
    return params.regionInfo.xy;
}

vec2 taa_getRegionFXAA() {
    return params.regionInfo.zw;
}
#define USE_YCOCG 1

vec4 taa_fetchColor(sampler2D map, vec2 uv) {
    vec4 c = texture(map, uv);
    // Apply rapid pseudo tonemapping as TAA is applied to a tonemapped image, using luminance as weight, as proposed in
    // https://de45xmedrsdbp.cloudfront.net/Resources/files/TemporalAA_small-59732822.pdf
    float lum = dot(vec3(0.3,0.5,0.2),c.rgb);
    c.rgb = c.rgb / (1.0+lum);
#if USE_YCOCG
    return vec4(color_LinearToYCoCg(c.rgb), c.a);
#else
    return c;
#endif
}

vec3 taa_resolveColor(vec3 color) {
#if USE_YCOCG
    color = max(vec3(0), color_YCoCgToUnclampedLinear(color));
#endif
    // Apply rapid inverse tonemapping, using luminance as weight, as proposed in
    // https://de45xmedrsdbp.cloudfront.net/Resources/files/TemporalAA_small-59732822.pdf
    float lum = dot(vec3(0.3,0.5,0.2),color.rgb);
    color = color / (1.0-lum);
    return color;
}

vec4 taa_fetchSourceMap(vec2 uv) {
    return taa_fetchColor(sourceMap, uv);
}

vec4 taa_fetchHistoryMap(vec2 uv) {
    return taa_fetchColor(historyMap, uv);
}

vec4 taa_fetchNextMap(vec2 uv) {
    return taa_fetchColor(nextMap, uv);
}

vec2 taa_fetchVelocityMap(vec2 uv) {
    return texture(velocityMap, uv).xy;
}

float taa_fetchDepth(vec2 uv) {
    return -texture(depthMap, vec2(uv), 0.0).x;
}


#define ZCMP_GT(a, b) (a > b)

vec2 taa_getImageSize() {
    vec2 imageSize = getWidthHeight(0);
    if (isStereo()) {
        imageSize.x *= 2.0;
    }
    return imageSize;
}

vec2 taa_getTexelSize() {
    vec2 texelSize = getInvWidthHeight();
    if (isStereo()) {
        texelSize.x *= 0.5;
    }
    return texelSize;
}

vec3 taa_findClosestFragment3x3(vec2 uv)
{
    vec2 dd = abs(taa_getTexelSize());
    vec2 du = vec2(dd.x, 0.0);
    vec2 dv = vec2(0.0, dd.y);

    vec3 dtl = vec3(-1, -1, taa_fetchDepth(uv - dv - du));
    vec3 dtc = vec3( 0, -1, taa_fetchDepth(uv - dv));
    vec3 dtr = vec3( 1, -1, taa_fetchDepth(uv - dv + du));

    vec3 dml = vec3(-1, 0, taa_fetchDepth(uv - du));
    vec3 dmc = vec3( 0, 0, taa_fetchDepth(uv));
    vec3 dmr = vec3( 1, 0, taa_fetchDepth(uv + du));

    vec3 dbl = vec3(-1, 1, taa_fetchDepth(uv + dv - du));
    vec3 dbc = vec3( 0, 1, taa_fetchDepth(uv + dv));
    vec3 dbr = vec3( 1, 1, taa_fetchDepth(uv + dv + du));

    vec3 dmin = dtl;
    if (ZCMP_GT(dmin.z, dtc.z)) dmin = dtc;
    if (ZCMP_GT(dmin.z, dtr.z)) dmin = dtr;

    if (ZCMP_GT(dmin.z, dml.z)) dmin = dml;
    if (ZCMP_GT(dmin.z, dmc.z)) dmin = dmc;
    if (ZCMP_GT(dmin.z, dmr.z)) dmin = dmr;

    if (ZCMP_GT(dmin.z, dbl.z)) dmin = dbl;
    if (ZCMP_GT(dmin.z, dbc.z)) dmin = dbc;
    if (ZCMP_GT(dmin.z, dbr.z)) dmin = dbr;

    return vec3(uv + dd.xy * dmin.xy, dmin.z);
}

vec2 taa_fetchVelocityMapBest(vec2 uv) {
    vec2 dd = abs(taa_getTexelSize());
    vec2 du = vec2(dd.x, 0.0);
    vec2 dv = vec2(0.0, dd.y);

    vec2 dtl = taa_fetchVelocityMap(uv - dv - du);
    vec2 dtc = taa_fetchVelocityMap(uv - dv);
    vec2 dtr = taa_fetchVelocityMap(uv - dv + du);

    vec2 dml = taa_fetchVelocityMap(uv - du);
    vec2 dmc = taa_fetchVelocityMap(uv);
    vec2 dmr = taa_fetchVelocityMap(uv + du);

    vec2 dbl = taa_fetchVelocityMap(uv + dv - du);
    vec2 dbc = taa_fetchVelocityMap(uv + dv);
    vec2 dbr = taa_fetchVelocityMap(uv + dv + du);

    vec3 best = vec3(dtl, dot(dtl,dtl));

    float testSpeed = dot(dtc,dtc);
    if (testSpeed > best.z) { best = vec3(dtc, testSpeed); }
    testSpeed = dot(dtr,dtr);
    if (testSpeed > best.z) { best = vec3(dtr, testSpeed); }

    testSpeed = dot(dml,dml);
    if (testSpeed > best.z) { best = vec3(dml, testSpeed); }
    testSpeed = dot(dmc,dmc);
    if (testSpeed > best.z) { best = vec3(dmc, testSpeed); }
    testSpeed = dot(dmr,dmr);
    if (testSpeed > best.z) { best = vec3(dmr, testSpeed); }

    testSpeed = dot(dbl,dbl);
    if (testSpeed > best.z) { best = vec3(dbl, testSpeed); }
    testSpeed = dot(dbc,dbc);
    if (testSpeed > best.z) { best = vec3(dbc, testSpeed); }
    testSpeed = dot(dbr,dbr);
    if (testSpeed > best.z) { best = vec3(dbr, testSpeed); }

    return best.xy;
}

vec2 taa_fromFragUVToEyeUVAndSide(vec2 fragUV, out int stereoSide) {
    vec2 eyeUV = fragUV;
    stereoSide = 0;
    if (isStereo()) {
        if (eyeUV.x > 0.5) {
            eyeUV.x -= 0.5;
            stereoSide = 1;
        }
        eyeUV.x *= 2.0;
    }
    return eyeUV;
}

vec2 taa_fromEyeUVToFragUV(vec2 eyeUV, int stereoSide) {
    vec2 fragUV = eyeUV;
    if (isStereo()) {
        fragUV.x *= 0.5;
        fragUV.x += float(stereoSide)*0.5;
    }
    return fragUV;
}

vec2 taa_computePrevFragAndEyeUV(vec2 fragUV, vec2 fragVelocity, out vec2 prevEyeUV) {
    int stereoSide = 0;
    vec2 eyeUV = taa_fromFragUVToEyeUVAndSide(fragUV, stereoSide);
    prevEyeUV = eyeUV - fragVelocity;
    return taa_fromEyeUVToFragUV(prevEyeUV, stereoSide);
}

vec2 taa_fetchSourceAndHistory(vec2 fragUV, vec2 fragVelocity, out vec3 sourceColor, out vec3 historyColor) {
    vec2 prevEyeUV;
    vec2 prevFragUV = taa_computePrevFragAndEyeUV(fragUV, fragVelocity, prevEyeUV);
    sourceColor = taa_fetchSourceMap(fragUV).xyz;

    historyColor = sourceColor;
    if (!(any(lessThan(prevEyeUV, vec2(0.0))) || any(greaterThan(prevEyeUV, vec2(1.0))))) {
        historyColor = taa_fetchHistoryMap(prevFragUV).xyz;
    }
    return prevFragUV;
}

float Luminance(vec3 rgb) {
    return rgb.x/4.0 + rgb.y/2.0 + rgb.z/4.0;
}

#define MINMAX_3X3_ROUNDED 1

mat3 taa_evalNeighbourColorVariance(vec3 sourceColor, vec2 fragUV, vec2 fragVelocity) {
    vec2 texelSize = taa_getTexelSize();
 

    vec2 du = vec2(texelSize.x, 0.0);
    vec2 dv = vec2(0.0, texelSize.y);

    vec3 sampleColor = taa_fetchSourceMap(fragUV - dv - du).rgb;
    vec3 sumSamples = sampleColor;
    vec3 sumSamples2 = sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV - dv).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV - dv + du).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV - du).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = sourceColor; //taa_fetchSourceMap(fragUV).rgb; // could resuse the same osurce sampleColor isn't it ?
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV + du).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV + dv - du).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    sampleColor = taa_fetchSourceMap(fragUV + dv).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;
    
    sampleColor = taa_fetchSourceMap(fragUV + dv + du).rgb;
    sumSamples += sampleColor;
    sumSamples2 += sampleColor * sampleColor;

    
    vec3 mu = sumSamples / vec3(9.0);
    vec3 sigma = sqrt(max(sumSamples2 / vec3(9.0) - mu * mu, vec3(0.0)));
    
       float gamma = params.covarianceGamma;
       vec3 cmin = mu - gamma * sigma;
       vec3 cmax = mu + gamma * sigma;

   return mat3(cmin, cmax, mu);
}

mat3 taa_evalNeighbourColorRegion(vec3 sourceColor, vec2 fragUV, vec2 fragVelocity, float fragZe) {
    vec2 imageSize = taa_getImageSize();
    vec2 texelSize = taa_getTexelSize();
    vec3 cmin, cmax, cavg;

    #if MINMAX_3X3_ROUNDED
        vec2 du = vec2(texelSize.x, 0.0);
        vec2 dv = vec2(0.0, texelSize.y);

        vec3 ctl = taa_fetchSourceMap(fragUV - dv - du).rgb;
        vec3 ctc = taa_fetchSourceMap(fragUV - dv).rgb;
        vec3 ctr = taa_fetchSourceMap(fragUV - dv + du).rgb;
        vec3 cml = taa_fetchSourceMap(fragUV - du).rgb;
        vec3 cmc = sourceColor; //taa_fetchSourceMap(fragUV).rgb; // could resuse the same osurce sample isn't it ?
        vec3 cmr = taa_fetchSourceMap(fragUV + du).rgb;
        vec3 cbl = taa_fetchSourceMap(fragUV + dv - du).rgb;
        vec3 cbc = taa_fetchSourceMap(fragUV + dv).rgb;
        vec3 cbr = taa_fetchSourceMap(fragUV + dv + du).rgb;

        cmin = min(ctl, min(ctc, min(ctr, min(cml, min(cmc, min(cmr, min(cbl, min(cbc, cbr))))))));
        cmax = max(ctl, max(ctc, max(ctr, max(cml, max(cmc, max(cmr, max(cbl, max(cbc, cbr))))))));

        #if MINMAX_3X3_ROUNDED || USE_YCOCG || USE_CLIPPING
            cavg = (ctl + ctc + ctr + cml + cmc + cmr + cbl + cbc + cbr) / 9.0;
        #elif
            cavg = (cmin + cmax ) * 0.5;
        #endif

        #if MINMAX_3X3_ROUNDED
            vec3 cmin5 = min(ctc, min(cml, min(cmc, min(cmr, cbc))));
            vec3 cmax5 = max(ctc, max(cml, max(cmc, max(cmr, cbc))));
            vec3 cavg5 = (ctc + cml + cmc + cmr + cbc) / 5.0;
            cmin = 0.5 * (cmin + cmin5);
            cmax = 0.5 * (cmax + cmax5);
            cavg = 0.5 * (cavg + cavg5);
        #endif
    #else
        const float _SubpixelThreshold = 0.5;
        const float _GatherBase = 0.5;
        const float _GatherSubpixelMotion = 0.1666;

        vec2 texel_vel = fragVelocity * imageSize;
        float texel_vel_mag = length(texel_vel) * -fragZe;
        float k_subpixel_motion = clamp(_SubpixelThreshold / (0.0001 + texel_vel_mag), 0.0, 1.0);
        float k_min_max_support = _GatherBase + _GatherSubpixelMotion * k_subpixel_motion;

        vec2 ss_offset01 = k_min_max_support * vec2(-texelSize.x, texelSize.y);
        vec2 ss_offset11 = k_min_max_support * vec2(texelSize.x, texelSize.y);
        vec3 c00 = taa_fetchSourceMap(fragUV - ss_offset11).rgb;
        vec3 c10 = taa_fetchSourceMap(fragUV - ss_offset01).rgb;
        vec3 c01 = taa_fetchSourceMap(fragUV + ss_offset01).rgb;
        vec3 c11 = taa_fetchSourceMap(fragUV + ss_offset11).rgb;

        cmin = min(c00, min(c10, min(c01, c11)));
        cmax = max(c00, max(c10, max(c01, c11)));
        cavg = (cmin + cmax ) * 0.5;

        #if USE_YCOCG || USE_CLIPPING
            cavg = (c00 + c10 + c01 + c11) / 4.0;
        #elif
            cavg = (cmin + cmax ) * 0.5;
        #endif
    #endif

           // shrink chroma min-max
    #if USE_YCOCG
        vec2 chroma_extent = vec2(0.25 * 0.5 * (cmax.r - cmin.r));
        vec2 chroma_center = sourceColor.gb;
        cmin.yz = chroma_center - chroma_extent;
        cmax.yz = chroma_center + chroma_extent;
        cavg.yz = chroma_center;
    #endif

   return mat3(cmin, cmax, cavg);
}

//#define USE_OPTIMIZATIONS 0

vec3 taa_clampColor(vec3 colorMin, vec3 colorMax, vec3 colorSource, vec3 color) {
    const float eps = 0.00001;
    vec3 p = colorSource;
    vec3 q = color;
    // note: only clips towards aabb center (but fast!)
    vec3 p_clip = 0.5 * (colorMax + colorMin);
    vec3 e_clip = 0.5 * (colorMax - colorMin) + vec3(eps);

    vec3 v_clip = q - p_clip;
    vec3 v_unit = v_clip.xyz / e_clip;
    vec3 a_unit = abs(v_unit);
    float ma_unit = max(a_unit.x, max(a_unit.y, a_unit.z));

    if (ma_unit > 1.0)
        return p_clip + v_clip / ma_unit;
    else
        return q;// point inside aabb        
}

vec3 taa_evalConstrainColor(vec3 sourceColor, vec2 sourceUV, vec2 sourceVel, vec3 candidateColor) {
    mat3 colorMinMaxAvg;

    colorMinMaxAvg = taa_evalNeighbourColorVariance(sourceColor, sourceUV, sourceVel);
     
    // clamp history to neighbourhood of current sample
    return taa_clampColor(colorMinMaxAvg[0], colorMinMaxAvg[1], sourceColor, candidateColor);
}

vec3 taa_evalFeedbackColor(vec3 sourceColor, vec3 historyColor, float blendFactor) {
    const float _FeedbackMin = 0.1;
    const float _FeedbackMax = 0.9;
    // feedback weight from unbiased luminance diff (t.lottes)
    #if USE_YCOCG
        float lum0 = sourceColor.r;
        float lum1 = historyColor.r;
    #else
        float lum0 = Luminance(sourceColor.rgb);
        float lum1 = Luminance(historyColor.rgb);
    #endif
    float unbiased_diff = abs(lum0 - lum1) / max(lum0, max(lum1, 0.2));
    float unbiased_weight = 1.0 - unbiased_diff;
    float unbiased_weight_sqr = unbiased_weight * unbiased_weight;
    float k_feedback = mix(_FeedbackMin, _FeedbackMax, unbiased_weight_sqr);

    
    vec3 nextColor =  mix(historyColor, sourceColor, k_feedback * blendFactor).xyz;
    return nextColor;
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


vec3 taa_getVelocityColorRelative(float velocityPixLength) {
    return colorRamp(velocityPixLength/params.debugShowVelocityThreshold);
}

vec3 taa_getVelocityColorAboveThreshold(float velocityPixLength) {
    return colorRamp((velocityPixLength - params.debugShowVelocityThreshold)/params.debugShowVelocityThreshold);
}


vec3 taa_evalFXAA(vec2 fragUV) {

   // vec2 texelSize = getInvWidthHeight();
    vec2 texelSize = taa_getTexelSize();

    // filter width limit for dependent "two-tap" texture samples
    float FXAA_SPAN_MAX = 8.0;

    // local contrast multiplier for performing AA
    // higher = sharper, but setting this value too high will cause near-vertical and near-horizontal edges to fail
    // see "fxaaQualityEdgeThreshold"
    float FXAA_REDUCE_MUL = 1.0 / 8.0;

    // luminance threshold for processing dark colors
    // see "fxaaQualityEdgeThresholdMin"
    float FXAA_REDUCE_MIN = 1.0 / 128.0;

    // fetch raw RGB values for nearby locations
    // sampling pattern is "five on a die" (each diagonal direction and the center)
    // computing the coordinates for these texture reads could be moved to the vertex shader for speed if needed
    vec3 rgbNW = texture(sourceMap, fragUV + (vec2(-1.0, -1.0) * texelSize)).xyz;
    vec3 rgbNE = texture(sourceMap, fragUV + (vec2(+1.0, -1.0) * texelSize)).xyz;
    vec3 rgbSW = texture(sourceMap, fragUV + (vec2(-1.0, +1.0) * texelSize)).xyz;
    vec3 rgbSE = texture(sourceMap, fragUV + (vec2(+1.0, +1.0) * texelSize)).xyz;
    vec3 rgbM  = texture(sourceMap, fragUV).xyz;
    
    // convert RGB values to luminance
    vec3 luma = vec3(0.299, 0.587, 0.114);
    float lumaNW = dot(rgbNW, luma);
    float lumaNE = dot(rgbNE, luma);
    float lumaSW = dot(rgbSW, luma);
    float lumaSE = dot(rgbSE, luma);
    float lumaM  = dot( rgbM, luma);
    
    // luma range of local neighborhood
    float lumaMin = min(lumaM, min(min(lumaNW, lumaNE), min(lumaSW, lumaSE)));
    float lumaMax = max(lumaM, max(max(lumaNW, lumaNE), max(lumaSW, lumaSE)));
    
    // direction perpendicular to local luma gradient
    vec2 dir;
    dir.x = -((lumaNW + lumaNE) - (lumaSW + lumaSE));
    dir.y =  ((lumaNW + lumaSW) - (lumaNE + lumaSE));

    // compute clamped direction offset for additional "two-tap" samples
    // longer vector = blurry, shorter vector = sharp
    float dirReduce = max((lumaNW + lumaNE + lumaSW + lumaSE) * (0.25 * FXAA_REDUCE_MUL), FXAA_REDUCE_MIN);
    float rcpDirMin = 1.0 / (min(abs(dir.x), abs(dir.y)) + dirReduce);
    dir = min(vec2(FXAA_SPAN_MAX,  FXAA_SPAN_MAX), 
          max(vec2(-FXAA_SPAN_MAX, -FXAA_SPAN_MAX), dir * rcpDirMin)) * texelSize;
        
    // perform additional texture sampling perpendicular to gradient
    vec3 rgbA = (1.0 / 2.0) * (
                texture(sourceMap, fragUV + dir * (1.0 / 3.0 - 0.5)).xyz +
                texture(sourceMap, fragUV + dir * (2.0 / 3.0 - 0.5)).xyz);
    vec3 rgbB = rgbA * (1.0 / 2.0) + (1.0 / 4.0) * (
                texture(sourceMap, fragUV + dir * (0.0 / 3.0 - 0.5)).xyz +
                texture(sourceMap, fragUV + dir * (3.0 / 3.0 - 0.5)).xyz);
    float lumaB = dot(rgbB, luma);

    // compare luma of new samples to the luma range of the original neighborhood
    // if the new samples exceed this range, just use the first two samples instead of all four
    if (lumaB < lumaMin || lumaB > lumaMax) {
        return rgbA;
    } else {
        return rgbB;
    }
}

layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {
    vec3 nextColor = texture(nextMap, varTexCoord0).xyz;
    outFragColor = vec4(nextColor, 1.0);


    // Pixel being shaded
    vec3 sourceColor = texture(sourceMap, varTexCoord0).xyz;

    vec2 imageSize = getWidthHeight(0);
    vec2 texelSize = getInvWidthHeight();

    vec2 pixPos = varTexCoord0 * imageSize;
    vec2 pixVelocity = imageSize * texture(velocityMap, varTexCoord0).xy;
    float pixVelocityLength = length(pixVelocity);
    vec2 velocity = pixVelocity * texelSize;
    int stereoSide = 0;
    vec2 prevTexCoord = taa_fromFragUVToEyeUVAndSide(varTexCoord0, stereoSide) - velocity;
    prevTexCoord = taa_fromEyeUVToFragUV(prevTexCoord, stereoSide);
    vec2 prevPix = prevTexCoord * imageSize;

    // Pixel Debugged
    if (taa_showDebugCursor()) {
        vec2 cursorUVRaw = taa_getDebugCursorTexcoord();
        vec2 cursorPosRaw = floor(cursorUVRaw * imageSize) + vec2(0.5);
        vec3 cursorFrag = taa_findClosestFragment3x3(cursorUVRaw);
        vec2 cursorUV = cursorUVRaw;
        vec2 cursorPos = cursorUV * imageSize;
        vec2 cursorVelocity = texture(velocityMap, cursorUV).xy;
        vec2 cursorPrevUV = taa_fromFragUVToEyeUVAndSide(cursorUV, stereoSide) - cursorVelocity;
        cursorVelocity *= imageSize;
        float cursorVelocityLength = length(cursorVelocity);
        vec2 cursorVelocityDir = cursorVelocity / cursorVelocityLength;

        vec2 cursorToFragVec = pixPos - cursorPos;
        float cursorToFragLength = length(cursorToFragVec);

        if ((cursorToFragLength <= cursorVelocityLength)) {
            vec2 cursorVelocityDir = cursorVelocity / cursorVelocityLength;
            vec2 cursorVelocityNor = vec2(cursorVelocityDir.y, -cursorVelocityDir.x);

            if ((dot(cursorVelocityDir, cursorToFragVec) < 0.0) && abs(dot(cursorVelocityNor, cursorToFragVec)) < 1.0) {

                vec3 speedColor = taa_getVelocityColorRelative(cursorToFragLength);

                outFragColor = vec4(speedColor, 1.0);
                return;
            }
        }

        float tenPercentHeight = 0.1 * imageSize.y;
        float centerWidth = imageSize.x * 0.5;

        //vec2 nextOrbPos = vec2(centerWidth, imageSize.y - 3.0 * tenPercentHeight);
        vec2 nextOrbPos = cursorPos;
        vec2 nextOrbPosToPix = pixPos - nextOrbPos;
        float nextOrbPosToPixLength = length(nextOrbPosToPix);

        vec2 prevOrbPos = nextOrbPos - cursorVelocityDir * 2.0 * tenPercentHeight;
        vec2 prevOrbPosToPix = pixPos - prevOrbPos;
        float prevOrbPosToPixLength = length(prevOrbPosToPix);

        float orbPixThreshold = 2.0 / taa_getDebugOrbZoom();

        if ((prevOrbPosToPixLength < tenPercentHeight) && (cursorVelocityLength > 0.5)) {
            vec2 prevOrbPosToPix_uv = cursorPrevUV + prevOrbPosToPix * texelSize / taa_getDebugOrbZoom();
            vec3 preOrbColor = vec3(0.0);
            if (!(any(lessThan(prevOrbPosToPix_uv, vec2(0.0))) || any(greaterThan(prevOrbPosToPix_uv, vec2(1.0))))) {
                preOrbColor = texture(historyMap, prevOrbPosToPix_uv).xyz;
            }
            if (prevOrbPosToPixLength < orbPixThreshold) {
                preOrbColor = vec3(1.0, 0.0, 1.0);
            }
            float distanceToNext = length(imageSize * (cursorUV - prevOrbPosToPix_uv));
            if (distanceToNext < orbPixThreshold) {
                preOrbColor = vec3(1.0, 0.5, 0.0);
            }
            outFragColor = vec4(preOrbColor, 1.0);
            return;
        }
        if (nextOrbPosToPixLength < tenPercentHeight) {
            vec2 nextOrbPosToPix_uv = cursorUV + nextOrbPosToPix * texelSize / taa_getDebugOrbZoom();
            vec3 nextOrbColor = vec3(0.0);
            if (!(any(lessThan(nextOrbPosToPix_uv, vec2(0.0))) || any(greaterThan(nextOrbPosToPix_uv, vec2(1.0))))) {
                nextOrbColor = texture(nextMap, nextOrbPosToPix_uv).xyz;
            }
            float distanceToPrev = length(imageSize * (cursorPrevUV - nextOrbPosToPix_uv));
            if (distanceToPrev < orbPixThreshold) {
                nextOrbColor = vec3(1.0, 0.0, 1.0);
            }
            if (nextOrbPosToPixLength < orbPixThreshold) {
                nextOrbColor = vec3(1.0, 0.5, 0.0);
            }

            outFragColor = vec4(nextOrbColor, 1.0);
            return;
        }
    }

    // Debug region before debug or fxaa region X
    float distToRegionDebug = varTexCoord0.x - taa_getRegionDebug().x;
    float distToRegionFXAA = varTexCoord0.x - taa_getRegionFXAA().x;
    if ((distToRegionFXAA < 0.0) && (distToRegionDebug > 0.0)) {
        return;
    }

    // draw region splitter
    if ((abs(distToRegionDebug) < getInvWidthHeight().x) || (abs(distToRegionFXAA) < getInvWidthHeight().x)) {
        outFragColor.rgb = vec3(1.0, 1.0, 0.0);
        return;
    }
    
    if (distToRegionFXAA > 0.0) {
        return;
    }

    if (taa_showClosestFragment()) {
        vec3 fragUV = taa_findClosestFragment3x3(varTexCoord0);
        outFragColor = vec4((fragUV.xy - varTexCoord0) * imageSize * 0.5 + vec2(0.5), 0.0, 1.0);
        return;
    }

    outFragColor = vec4(nextColor, 1.0);    

    vec3 prevColor = nextColor;

    if (!(any(lessThan(prevTexCoord, vec2(0.0))) || any(greaterThan(prevTexCoord, vec2(1.0))))) {
        prevColor = texture(historyMap, prevTexCoord).xyz;
    }

    outFragColor.xyz = mix(prevColor, vec3(1,0,1), clamp(distance(prevColor, nextColor) - 0.01, 0.0, 1.0));

    if (pixVelocityLength > params.debugShowVelocityThreshold) {
        vec3 speedColor = taa_getVelocityColorAboveThreshold(pixVelocityLength);

        outFragColor = vec4(0.0, 1.0, 1.0, 1.0);
    }
}
