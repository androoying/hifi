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
//  Generated on Wed Dec  5 03:19:18 2018
//
//  subsurfaceScattering_makeLUT.frag
//
//  Created by Sam Gateau on 6/8/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

//  Generated on Wed Dec  5 03:19:18 2018
//
//  Created by Sam Gateau on 6/8/16.
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
float gaussian(float v, float r) {
    const float _PI = 3.14159265358979523846;
    return (1.0 / sqrt(2.0 * _PI * v)) * exp(-(r*r) / (2.0 * v));
}

vec3 scatter(float r) {
    // r is the distance expressed in millimeter
    // returns the scatter reflectance
    // Values from GPU Gems 3 "Advanced Skin Rendering".
    // Originally taken from real life samples.
    const vec4 profile[6] = vec4[6](
        vec4(0.0064, 0.233, 0.455, 0.649),
        vec4(0.0484, 0.100, 0.336, 0.344),
        vec4(0.1870, 0.118, 0.198, 0.000),
        vec4(0.5670, 0.113, 0.007, 0.007),
        vec4(1.9900, 0.358, 0.004, 0.000),
        vec4(7.4100, 0.078, 0.000, 0.000)
        );
    const int profileNum = 6;

    vec3 ret = vec3(0.0);
    for (int i = 0; i < profileNum; i++) {
        float v = profile[i].x * 1.414;
        float g = gaussian(v, r);
        ret += g * profile[i].yzw;
    }

    return ret;
}


vec3 integrate(float cosTheta, float skinRadius) {
    // Angle from lighting direction.
    float theta = acos(cosTheta);
    vec3 totalWeights = vec3(0.0);
    vec3 totalLight = vec3(0.0);

    const float _PI = 3.14159265358979523846;
    const float step = 2.0 * _PI / float(2000);
    float a = -(_PI);


    while (a <= (_PI)) {
        float sampleAngle = theta + a;
        float diffuse = clamp(cos(sampleAngle), 0.0, 1.0);
        //if (diffuse < 0.0) diffuse = 0.0;
        //if (diffuse > 1.0) diffuse = 1.0;

        // Distance.
        float sampleDist = abs(2.0 * skinRadius * sin(a * 0.5));

        // Profile Weight.
        vec3 weights = scatter(sampleDist);

        totalWeights += weights;
        totalLight += diffuse * weights;
        a += step;
    }

    vec3 result = (totalLight / totalWeights);
    return clamp(result, vec3(0.0), vec3(1.0));

}


layout(location=0) in vec2 varTexCoord0;
layout(location=0) out vec4 outFragColor;

void main(void) {

    // Lookup by: x: NDotL y: 1 / r
    //float y = 2.0 * 1.0 / ((j + 1.0) / (double)height);
    //float x = ((i / (double)width) * 2.0) - 1.0;

    outFragColor = vec4(integrate(varTexCoord0.x * 2.0 - 1.0, 2.0 / varTexCoord0.y), 1.0);
}

