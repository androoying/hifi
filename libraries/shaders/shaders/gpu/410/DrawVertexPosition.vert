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
#define GPU_VERTEX_SHADER
//PC 410 core
//  Generated on Wed Dec  5 03:18:44 2018
//
// DrawVertexPosition.vert
//
// Draw the fed vertex position, pass straight as clip pos
// Output the clip position
//
//  Created by Sam Gateau on 5/30/2017
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

layout(location=0) in vec4 inPosition;

void main(void) {
    gl_Position = inPosition;
}
