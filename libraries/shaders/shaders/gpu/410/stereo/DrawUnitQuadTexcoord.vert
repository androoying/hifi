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
//  Generated on Wed Dec  5 03:18:44 2018
//
//  DrawUnitQuadTexcoord.vert
//
//  Draw the unit quad [-1,-1 -> 1,1] amd pass along the unit texcoords [0, 0 -> 1, 1]. Not transform used.
//  Simply draw a Triangle_strip of 2 triangles, no input buffers or index buffer needed
//
//  Created by Sam Gateau on 6/22/2015
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
layout(location=0) out vec2 varTexCoord0;

void main(void) {
    const float depth = 1.0;
    const vec4 UNIT_QUAD[4] = vec4[4](
        vec4(-1.0, -1.0, depth, 1.0),
        vec4(1.0, -1.0, depth, 1.0),
        vec4(-1.0, 1.0, depth, 1.0),
        vec4(1.0, 1.0, depth, 1.0)
    );
    vec4 pos = UNIT_QUAD[gl_VertexID];

    varTexCoord0 = (pos.xy + 1.0) * 0.5;

    gl_Position = pos;
}
