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
//  Generated on Wed Dec  5 03:19:18 2018
//
//  subsurfaceScattering_makeSpecularBeckmann.frag
//
//  Created by Sam Gateau on 6/30/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//



layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

float specularBeckmann(float ndoth, float roughness) {
    float alpha = acos(ndoth);
    float ta = tan(alpha);
    float val = 1.0 / (roughness * roughness * pow(ndoth, 4.0)) * exp(-(ta * ta) / (roughness * roughness));
    return val;
}

void main(void) {
    outFragColor = vec4(vec3(0.5 * pow( specularBeckmann(varTexCoord0.x, varTexCoord0.y), 0.1)), 1.0);
}
