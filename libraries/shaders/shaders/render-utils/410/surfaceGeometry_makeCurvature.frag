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
//  surfaceGeometry_makeCurvature.frag
//
//  Created by Sam Gateau on 6/3/16.
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

struct SurfaceGeometryParams {
    // Resolution info
    vec4 resolutionInfo;
    // Curvature algorithm
    vec4 curvatureInfo;
};

LAYOUT(binding= RENDER_UTILS_BUFFER_SG_PARAMS) uniform surfaceGeometryParamsBuffer {
    SurfaceGeometryParams params;
};

float getCurvatureDepthThreshold() {
    return params.curvatureInfo.x;
}

float getCurvatureBasisScale() {
    return params.curvatureInfo.y;
}

float getCurvatureScale() {
    return params.curvatureInfo.w;
}

bool isFullResolution() {
    return params.resolutionInfo.w == 0.0;
}


LAYOUT(binding=RENDER_UTILS_TEXTURE_SG_DEPTH) uniform sampler2D linearDepthMap;

float getZEye(ivec2 pixel) {
    return -texelFetch(linearDepthMap, pixel, 0).x;
}
float getZEyeLinear(vec2 texcoord) {
    return -texture(linearDepthMap, texcoord).x;
}

vec2 sideToFrameTexcoord(vec2 side, vec2 texcoordPos) {
    return vec2((texcoordPos.x + side.x) * side.y, texcoordPos.y);
}

LAYOUT(binding=RENDER_UTILS_TEXTURE_SG_NORMAL) uniform sampler2D normalMap;

vec3 getRawNormal(vec2 texcoord) {
    return texture(normalMap, texcoord).xyz;
}

vec3 getWorldNormal(vec2 texcoord) {
    vec3 rawNormal = getRawNormal(texcoord);
    if (isFullResolution()) {
        return unpackNormal(rawNormal);
    } else {
        return normalize((rawNormal - vec3(0.5)) * 2.0);
    }
}

vec3 getWorldNormalDiff(vec2 texcoord, vec2 delta) {
    return getWorldNormal(texcoord + delta) - getWorldNormal(texcoord - delta);
}

float getEyeDepthDiff(vec2 texcoord, vec2 delta) {
    return getZEyeLinear(texcoord + delta) - getZEyeLinear(texcoord - delta);
}



layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {
    // Pixel being shaded
    ivec2 pixelPos;
    vec2 texcoordPos;
    ivec4 stereoSide;
    ivec2 framePixelPos = getPixelPosTexcoordPosAndSide(gl_FragCoord.xy, pixelPos, texcoordPos, stereoSide);
    vec2 stereoSideClip = vec2(stereoSide.x, (isStereo() ? 0.5 : 1.0));

    // Texcoord to fetch in the deferred texture are the exact UVs comming from vertex shader
    // sideToFrameTexcoord(stereoSideClip, texcoordPos);
    vec2 frameTexcoordPos = varTexCoord0;

    // Fetch the z under the pixel (stereo or not)
    float Zeye = getZEye(framePixelPos);
    if (Zeye <= -getPosLinearDepthFar()) {
       outFragColor = vec4(1.0, 0.0, 0.0, 0.0);
       return;
    }

    float nearPlaneScale = 0.5 * getProjectionNear();

    vec3 worldNormal = getWorldNormal(frameTexcoordPos);

    // The position of the pixel fragment in Eye space then in world space
    vec3 eyePos = evalEyePositionFromZeye(stereoSide.x, Zeye, texcoordPos);
  //  vec3 worldPos = (frameTransform._viewInverse * vec4(eyePos, 1.0)).xyz;

  /*  if (texcoordPos.y > 0.5) {
        outFragColor = vec4(fract(10.0 * worldPos.xyz), 1.0);
    } else {
        outFragColor = vec4(fract(10.0 * eyePos.xyz), 1.0);
    }*/
   // return;

    // Calculate the perspective scale.
    // Clamp to 0.5
   // float perspectiveScale = max(0.5, (-getProjScaleEye() / Zeye));
    float perspectiveScale = max(0.5, (-getCurvatureBasisScale() * getProjectionNear() / Zeye));

    // Calculate dF/du and dF/dv
    vec2 viewportScale = perspectiveScale * getInvWidthHeight();
    vec2 du = vec2( viewportScale.x * (float(stereoSide.w) > 0.0 ? 0.5 : 1.0), 0.0f );
    vec2 dv = vec2( 0.0f, viewportScale.y );

    vec4 dFdu = vec4(getWorldNormalDiff(frameTexcoordPos, du), getEyeDepthDiff(frameTexcoordPos, du));
    vec4 dFdv = vec4(getWorldNormalDiff(frameTexcoordPos, dv), getEyeDepthDiff(frameTexcoordPos, dv));

    float threshold = getCurvatureDepthThreshold();
    dFdu *= step(abs(dFdu.w), threshold);
    dFdv *= step(abs(dFdv.w), threshold); 

     // Calculate ( du/dx, du/dy, du/dz ) and ( dv/dx, dv/dy, dv/dz )
    // Eval px, py, pz world positions of the basis centered on the world pos of the fragment
    float axeLength = nearPlaneScale;

    vec3 ax = (frameTransform._view[0].xyz * axeLength);
    vec3 ay = (frameTransform._view[1].xyz * axeLength);
    vec3 az = (frameTransform._view[2].xyz * axeLength);

    vec4 px =  vec4(eyePos + ax, 0.0);
    vec4 py =  vec4(eyePos + ay, 0.0);
    vec4 pz =  vec4(eyePos + az, 0.0);


  /*  if (texcoordPos.y > 0.5) {
        outFragColor = vec4(fract(px.xyz), 1.0);
    } else {
        outFragColor = vec4(fract(eyePos.xyz), 1.0);
    }*/
 //   return;


    /* IN case the axis end point goes behind mid way near plane, this shouldn't happen
    if (px.z >= -nearPlaneScale) {
        outFragColor = vec4(1.0, 0.0, 0.0, 1.0);
        return;
    } else if (py.z >= -nearPlaneScale) {
        outFragColor = vec4(0.0, 1.0, 0.0, 1.0);
        return;
    } else if (pz.z >= -nearPlaneScale) {
        outFragColor = vec4(0.0, 0.0, 1.0, 1.0);
        return;
    }*/
    

    // Project px, py pz to homogeneous clip space
   // mat4 viewProj = getProjection(stereoSide.x);
    mat4 viewProj = getProjectionMono();
    px = viewProj * px;
    py = viewProj * py;
    pz = viewProj * pz;


    // then to normalized clip space
    px.xy /= px.w;
    py.xy /= py.w;
    pz.xy /= pz.w;

    vec2 nclipPos = (texcoordPos - 0.5) * 2.0;


    //vec4 clipPos = frameTransform._projection[stereoSide.x] * vec4(eyePos, 1.0);
    vec4 clipPos = getProjectionMono() * vec4(eyePos, 1.0);
    nclipPos = clipPos.xy / clipPos.w;

  /*  if (texcoordPos.y > 0.5) {
     //   outFragColor = vec4(fract(10.0 * worldPos.xyz), 1.0);
        outFragColor = vec4(fract(10.0 * (nclipPos)), 0.0, 1.0);

    } else {
        outFragColor = vec4(fract(10.0 * (clipPos.xy / clipPos.w)), 0.0, 1.0);
      //  outFragColor = vec4(nclipPos * 0.5 + 0.5, 0.0, 1.0);
    }*/
    //return;


    float pixPerspectiveScaleInv = 1.0 / (perspectiveScale);
    px.xy = (px.xy - nclipPos) * pixPerspectiveScaleInv;
    py.xy = (py.xy - nclipPos) * pixPerspectiveScaleInv;
    pz.xy = (pz.xy - nclipPos) * pixPerspectiveScaleInv;
    
  /*  if (texcoordPos.y > 0.5) {
        //   outFragColor = vec4(fract(10.0 * worldPos.xyz), 1.0);
        outFragColor = vec4(fract(10.0 * (px.xy)), 0.0, 1.0);

    } else {
        outFragColor = vec4(fract(10.0 * (py.xy)), 0.0, 1.0);
        //  outFragColor = vec4(nclipPos * 0.5 + 0.5, 0.0, 1.0);
    }*/
  //  return;

    // Calculate dF/dx, dF/dy and dF/dz using chain rule
    vec4 dFdx = dFdu * px.x + dFdv * px.y;
    vec4 dFdy = dFdu * py.x + dFdv * py.y;
    vec4 dFdz = dFdu * pz.x + dFdv * pz.y;

    vec3 trace = vec3(dFdx.x, dFdy.y, dFdz.z);

    /*if (dot(trace, trace) > params.curvatureInfo.w) {
        outFragColor = vec4(dFdx.x, dFdy.y, dFdz.z, 1.0);
        return;
    }*/

    // Calculate the mean curvature
    float meanCurvature = ((trace.x + trace.y + trace.z) * 0.33333333333333333) * params.curvatureInfo.w;

    outFragColor = vec4(vec3(worldNormal + 1.0) * 0.5, (meanCurvature + 1.0) * 0.5);
}
