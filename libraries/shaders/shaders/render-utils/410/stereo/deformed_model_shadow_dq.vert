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
//  
// Generated on Wed Dec  5 03:18:51 2018
//
//  Created by Hifi Engine Team.
//  Copyright 2014 High Fidelity, Inc.
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
layout(location=GPU_ATTR_POSITION) in vec4 inPosition;
layout(location=GPU_ATTR_NORMAL) in vec4 inNormal;
layout(location=GPU_ATTR_COLOR) in vec4 inColor;
layout(location=GPU_ATTR_TEXCOORD0) in vec4 inTexCoord0;
layout(location=GPU_ATTR_TANGENT) in vec4 inTangent;
layout(location=GPU_ATTR_SKIN_CLUSTER_INDEX) in ivec4 inSkinClusterIndex;
layout(location=GPU_ATTR_SKIN_CLUSTER_WEIGHT) in vec4 inSkinClusterWeight;
layout(location=GPU_ATTR_TEXCOORD1) in vec4 inTexCoord1;
layout(location=GPU_ATTR_TEXCOORD2) in vec4 inTexCoord2;
layout(location=GPU_ATTR_TEXCOORD3) in vec4 inTexCoord3;
layout(location=GPU_ATTR_TEXCOORD4) in vec4 inTexCoord4;
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




//  MeshDeformer.slh

// if not MESH_DEFORMER_SLH
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
// func declareSkinning()

// if not SKINNING_SLH
const int MAX_CLUSTERS = 128;
const int INDICES_PER_VERTEX = 4;

LAYOUT_STD140(binding=GRAPHICS_BUFFER_SKINNING) uniform skinClusterBuffer {
    mat4 clusterMatrices[MAX_CLUSTERS];
};

mat4 dualQuatToMat4(vec4 real, vec4 dual) {
    float twoRealXSq = 2.0 * real.x * real.x;
    float twoRealYSq = 2.0 * real.y * real.y;
    float twoRealZSq = 2.0 * real.z * real.z;
    float twoRealXY = 2.0 * real.x * real.y;
    float twoRealXZ = 2.0 * real.x * real.z;
    float twoRealXW = 2.0 * real.x * real.w;
    float twoRealZW = 2.0 * real.z * real.w;
    float twoRealYZ = 2.0 * real.y * real.z;
    float twoRealYW = 2.0 * real.y * real.w;
    vec4 col0 = vec4(1.0 - twoRealYSq - twoRealZSq,
                     twoRealXY + twoRealZW,
                     twoRealXZ - twoRealYW,
                     0.0);
    vec4 col1 = vec4(twoRealXY - twoRealZW,
                     1.0 - twoRealXSq - twoRealZSq,
                     twoRealYZ + twoRealXW,
                     0.0);
    vec4 col2 = vec4(twoRealXZ + twoRealYW,
                     twoRealYZ - twoRealXW,
                     1.0 - twoRealXSq - twoRealYSq,
                     0.0);
    vec4 col3 = vec4(2.0 * (-dual.w * real.x + dual.x * real.w - dual.y * real.z + dual.z * real.y),
                     2.0 * (-dual.w * real.y + dual.x * real.z + dual.y * real.w - dual.z * real.x),
                     2.0 * (-dual.w * real.z - dual.x * real.y + dual.y * real.x + dual.z * real.w),
                     1.0);

    return mat4(col0, col1, col2, col3);
}

// dual quaternion linear blending
void evalSkinning(ivec4 skinClusterIndex, vec4 skinClusterWeight, vec4 inPosition, out vec4 skinnedPosition
) {

    // linearly blend scale and dual quaternion components
    vec4 sAccum = vec4(0.0, 0.0, 0.0, 0.0);
    vec4 rAccum = vec4(0.0, 0.0, 0.0, 0.0);
    vec4 dAccum = vec4(0.0, 0.0, 0.0, 0.0);
    vec4 cAccum = vec4(0.0, 0.0, 0.0, 0.0);
    vec4 polarityReference = clusterMatrices[skinClusterIndex[0]][1];
    for (int i = 0; i < INDICES_PER_VERTEX; i++) {
        mat4 clusterMatrix = clusterMatrices[(skinClusterIndex[i])];
        float clusterWeight = skinClusterWeight[i];

        vec4 scale = clusterMatrix[0];
        vec4 real = clusterMatrix[1];
        vec4 dual = clusterMatrix[2];
        vec4 cauterizedPos = clusterMatrix[3];

        // to ensure that we rotate along the shortest arc, reverse dual quaternions with negative polarity.
        float dqClusterWeight = clusterWeight;
        if (dot(real, polarityReference) < 0.0) {
            dqClusterWeight = -clusterWeight;
        }

        sAccum += scale * clusterWeight;
        rAccum += real * dqClusterWeight;
        dAccum += dual * dqClusterWeight;
        cAccum += cauterizedPos * clusterWeight;
    }

    // normalize dual quaternion
    float norm = length(rAccum);
    rAccum /= norm;
    dAccum /= norm;

    // conversion from dual quaternion to 4x4 matrix.
    mat4 m = dualQuatToMat4(rAccum, dAccum);

    // sAccum.w indicates the amount of cauterization for this vertex.
    // 0 indicates no cauterization and 1 indicates full cauterization.
    // TODO: make this cauterization smoother or implement full dual-quaternion scale support.
    const float CAUTERIZATION_THRESHOLD = 0.1;
    if (sAccum.w > CAUTERIZATION_THRESHOLD) {
        skinnedPosition = cAccum;
    } else {
        sAccum.w = 1.0;
        skinnedPosition = m * (sAccum * inPosition);
    }

 }

// if USE_DUAL_QUATERNION_SKINNING


//
//  Created by Sam Gondelman on 9/13/2018
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
// if not BLENDSHAPE_SLH
#if !defined(GPU_SSBO_TRANSFORM_OBJECT)
LAYOUT(binding=GPU_RESOURCE_BUFFER_SLOT0_TEXTURE) uniform samplerBuffer blendshapeOffsetsBuffer;
uvec4 getPackedBlendshapeOffset(int i) {
    return floatBitsToUint(texelFetch(blendshapeOffsetsBuffer, i));
}
#else
LAYOUT_STD140(binding=GPU_RESOURCE_BUFFER_SLOT0_STORAGE) buffer blendshapeOffsetsBuffer {
    uvec4 _packedBlendshapeOffsets[];
};
uvec4 getPackedBlendshapeOffset(int i) {
    return _packedBlendshapeOffsets[i];
}
#endif

struct BlendshapeOffset {
    vec3 position;
};

vec3 unpackSnorm3x10_1x2(int packedValue) {
    const float oneOver511 = 1.0 / 511.0;
    return vec3(
           clamp( float( bitfieldExtract(packedValue, 0, 10)) * oneOver511, -1.0, 1.0),
           clamp( float( bitfieldExtract(packedValue, 10, 10)) * oneOver511, -1.0, 1.0),
           clamp( float( bitfieldExtract(packedValue, 20, 10)) * oneOver511, -1.0, 1.0)
        );
}

BlendshapeOffset unpackBlendshapeOffset(uvec4 packedValue) {
    BlendshapeOffset unpacked;
    unpacked.position = unpackSnorm3x10_1x2(int(packedValue.y)).xyz * uintBitsToFloat(packedValue.x);
return unpacked;
}

BlendshapeOffset getBlendshapeOffset(int i) {
    return unpackBlendshapeOffset(getPackedBlendshapeOffset(i));
}

void evalBlendshape(int i, vec4 inPosition, out vec4 position
) {
    BlendshapeOffset blendshapeOffset = getBlendshapeOffset(i);
    position = inPosition + vec4(blendshapeOffset.position, 0.0);
}


void evalMeshDeformer(vec4 inPosition, out vec4 outPosition
    , bool isSkinningEnabled, ivec4 skinClusterIndex, vec4 skinClusterWeight
    , bool isBlendshapeEnabled, int vertexIndex
    ) {

        vec4 _deformedPosition = inPosition;
    if (isBlendshapeEnabled) {
        evalBlendshape(vertexIndex, inPosition, _deformedPosition
    );
    }
if (isSkinningEnabled) {

        evalSkinning(inSkinClusterIndex, inSkinClusterWeight, _deformedPosition, _deformedPosition
    );
    }
outPosition = _deformedPosition;
}


const BITFIELD MESH_DEFORMER_BLENDSHAPE_BIT              = 0x00000001;
const BITFIELD MESH_DEFORMER_SKINNING_BIT                = 0x00000002;

bool meshDeformer_doBlendshape(int meshKey) { 
    return ((meshKey & MESH_DEFORMER_BLENDSHAPE_BIT) != 0);
}
bool meshDeformer_doSkinning(int meshKey) { 
    return ((meshKey & MESH_DEFORMER_SKINNING_BIT) != 0);
}


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
layout(location=RENDER_UTILS_ATTR_POSITION_WS) out vec4 _positionWS;

void main(void) {
    vec4 deformedPosition = vec4(0.0, 0.0, 0.0, 0.0);
    evalMeshDeformer(inPosition, deformedPosition, 
                    meshDeformer_doSkinning(_drawCallInfo.y), inSkinClusterIndex, inSkinClusterWeight,
                    meshDeformer_doBlendshape(_drawCallInfo.y), gl_VertexID);

    // standard transform
    TransformCamera cam = getTransformCamera();
    TransformObject obj = getTransformObject();
    { // transformModelToClipPos
        { // transformModelToMonoClipPos
        vec4 eyeWAPos;
        { // _transformModelToEyeWorldAlignedPos
        highp mat4 _mv = obj._model;
        _mv[3].xyz -= cam._viewInverse[3].xyz;
        highp vec4 _eyeWApos = (_mv * deformedPosition);
        eyeWAPos = _eyeWApos;
    }

        gl_Position = cam._projectionViewUntranslated * eyeWAPos;
    }

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

    { // transformModelToWorldPos
        _positionWS = (obj._model * deformedPosition);
    }

}
