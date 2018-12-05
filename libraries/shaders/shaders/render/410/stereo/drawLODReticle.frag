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
//  Generated on Wed Dec  5 03:18:47 2018
//
//  Draw the LOD reticle used to visualize the current LOD angle
//
//  Created by Sam Gateau on 2/4/16
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {
    vec2 circlePos = 2.0 * ( varTexCoord0.xy * 2.0 - vec2(1.0) );
    float radius = length(circlePos);

    float lodEdge = step(abs(1.0 - radius), 0.05);

    float cellEdge = step(abs(2.0 - radius), 0.05);

    outFragColor = vec4(lodEdge * vec3(1.0, 1.0, 0.0) + cellEdge * vec3(0.0, 1.0, 1.0), lodEdge + 0.5 * cellEdge);
}