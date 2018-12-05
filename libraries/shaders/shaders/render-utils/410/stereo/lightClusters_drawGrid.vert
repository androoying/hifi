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
#define GPU_VERTEX_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:18:53 2018
//
//  lightClusters_drawGrid.vert
//  Vertex shader
//
//  Created by Sam Gateau on 9/8/2016
//  Copyright 2015 High Fidelity, Inc.
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
// glsl / C++ compatible source as interface for FadeEffect
#ifdef __cplusplus
#   define _MAT4 Mat4
#   define _VEC4 Vec4
#    define _MUTABLE mutable
#else
#   define _MAT4 mat4
#   define _VEC4 vec4
#    define _MUTABLE 
#endif

struct _TransformCamera {
    _MUTABLE _MAT4 _view;
    _MUTABLE _MAT4 _viewInverse;
    _MUTABLE _MAT4 _projectionViewUntranslated;
    _MAT4 _projection;
    _MUTABLE _MAT4 _projectionInverse;
    _VEC4 _viewport; // Public value is int but float in the shader to stay in floats for all the transform computations.
    _MUTABLE _VEC4 _stereoInfo;
};

    // //

#define TransformCamera _TransformCamera

LAYOUT_STD140(binding=GPU_BUFFER_TRANSFORM_CAMERA) uniform transformCameraBuffer {
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
    TransformCamera _camera[2];
#else
    TransformCamera _camera;
#endif
#else
    TransformCamera _camera;
#endif
} _cameraBlock;

#ifdef GPU_VERTEX_SHADER
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
#ifdef GPU_TRANSFORM_STEREO_CAMERA_ATTRIBUTED
layout(location=GPU_ATTR_STEREO_SIDE) in int _inStereoSide;
#endif

layout(location=GPU_ATTR_V2F_STEREO_SIDE) flat out int _stereoSide;

// In stereo drawcall mode Instances are drawn twice (left then right) hence the true InstanceID is the gl_InstanceID / 2
int gpu_InstanceID() {
    return gl_InstanceID >> 1;
}

#else

int gpu_InstanceID() {
    return gl_InstanceID;
}
#endif
#else

int gpu_InstanceID() {
    return gl_InstanceID;
}

#endif

#endif

#ifdef GPU_PIXEL_SHADER
#ifdef GPU_TRANSFORM_STEREO_CAMERA
layout(location=GPU_ATTR_V2F_STEREO_SIDE) flat in int _stereoSide;
#endif
#endif


TransformCamera getTransformCamera() {
#ifdef GPU_TRANSFORM_IS_STEREO
    #ifdef GPU_TRANSFORM_STEREO_CAMERA
        #ifdef GPU_VERTEX_SHADER
            #ifdef GPU_TRANSFORM_STEREO_CAMERA_ATTRIBUTED
                _stereoSide = _inStereoSide;
            #endif
            #ifdef GPU_TRANSFORM_STEREO_CAMERA_INSTANCED
                _stereoSide = gl_InstanceID % 2;
            #endif
        #endif
        return _cameraBlock._camera[_stereoSide];
    #else
        return _cameraBlock._camera;
    #endif
#else
    return _cameraBlock._camera;
#endif
}

vec3 getEyeWorldPos() {
    return getTransformCamera()._viewInverse[3].xyz;
}

bool cam_isStereo() {
#ifdef GPU_TRANSFORM_IS_STEREO
    return getTransformCamera()._stereoInfo.x > 0.0;
#else
    return _cameraBlock._camera._stereoInfo.x > 0.0;
#endif
}

float cam_getStereoSide() {
#ifdef GPU_TRANSFORM_IS_STEREO
#ifdef GPU_TRANSFORM_STEREO_CAMERA
    return getTransformCamera()._stereoInfo.y;
#else
    return _cameraBlock._camera._stereoInfo.y;
#endif
#else
    return _cameraBlock._camera._stereoInfo.y;
#endif
}


struct TransformObject {
    mat4 _model;
    mat4 _modelInverse;
};

layout(location=GPU_ATTR_DRAW_CALL_INFO) in ivec2 _drawCallInfo;

#if defined(GPU_SSBO_TRANSFORM_OBJECT)
LAYOUT_STD140(binding=GPU_STORAGE_TRANSFORM_OBJECT) buffer transformObjectBuffer {
    TransformObject _object[];
};
TransformObject getTransformObject() {
    TransformObject transformObject = _object[_drawCallInfo.x];
    return transformObject;
}
#else
LAYOUT(binding=GPU_TEXTURE_TRANSFORM_OBJECT) uniform samplerBuffer transformObjectBuffer;

TransformObject getTransformObject() {
    int offset = 8 * _drawCallInfo.x;
    TransformObject object;
    object._model[0] = texelFetch(transformObjectBuffer, offset);
    object._model[1] = texelFetch(transformObjectBuffer, offset + 1);
    object._model[2] = texelFetch(transformObjectBuffer, offset + 2);
    object._model[3] = texelFetch(transformObjectBuffer, offset + 3);

    object._modelInverse[0] = texelFetch(transformObjectBuffer, offset + 4);
    object._modelInverse[1] = texelFetch(transformObjectBuffer, offset + 5);
    object._modelInverse[2] = texelFetch(transformObjectBuffer, offset + 6);
    object._modelInverse[3] = texelFetch(transformObjectBuffer, offset + 7);

    return object;
}
#endif




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





layout(location=0) out vec4 varColor;


void main(void) {
    const vec4 UNIT_BOX[8] = vec4[8](
        vec4(0.0, 0.0, 0.0, 1.0),
        vec4(1.0, 0.0, 0.0, 1.0),
        vec4(0.0, 1.0, 0.0, 1.0),
        vec4(1.0, 1.0, 0.0, 1.0),
        vec4(0.0, 0.0, 1.0, 1.0),
        vec4(1.0, 0.0, 1.0, 1.0),
        vec4(0.0, 1.0, 1.0, 1.0),
        vec4(1.0, 1.0, 1.0, 1.0)
    );
    const int UNIT_BOX_LINE_INDICES[24] = int[24](
        0, 1,
        1, 3,
        3, 2,
        2, 0,
        4, 5,
        5, 7,
        7, 6,
        6, 4,
        2, 6,
        3, 7,
        0, 4,
        1, 5
    );
    vec4 pos = UNIT_BOX[UNIT_BOX_LINE_INDICES[gl_VertexID]];


    ivec3 cluster = clusterGrid_getCluster(gpu_InstanceID());
    int numLights = cluster.x + cluster.y;

    ivec3 clusterPos = frustumGrid_indexToCluster(gpu_InstanceID());


    float boxScale = 1.0;
    vec3 eyePos = frustumGrid_clusterPosToEye(clusterPos, vec3(1.0 - boxScale) * 0.5  + boxScale * pos.xyz);
    vec4 worldPos = frustumGrid_eyeToWorld(vec4(eyePos.xyz, 1.0));


    // standard transform
    TransformCamera cam = getTransformCamera();
    { // transformWorldToClipPos
        vec4 eyeWAPos = worldPos - vec4(cam._viewInverse[3].xyz, 0.0);
        gl_Position = cam._projectionViewUntranslated * eyeWAPos;

        {
#ifdef GPU_TRANSFORM_IS_STEREO

#ifdef GPU_TRANSFORM_STEREO_SPLIT_SCREEN
        vec4 eyeClipEdge[2]= vec4[2](vec4(-1,0,0,1), vec4(1,0,0,1));
        vec2 eyeOffsetScale = vec2(-0.5, +0.5);
        uint eyeIndex = uint(_stereoSide);
#ifndef GPU_GLES
        gl_ClipDistance[0] = dot(gl_Position, eyeClipEdge[eyeIndex]);
#endif
        float newClipPosX = gl_Position.x * 0.5 + eyeOffsetScale[eyeIndex] * gl_Position.w;
        gl_Position.x = newClipPosX;
#endif

#else
#endif
    }

    }


    varColor = vec4(colorWheel(fract(float(gpu_InstanceID()) / float(frustumGrid_numClusters()))), (numLights > 0 ? 0.9 : 0.0));
}