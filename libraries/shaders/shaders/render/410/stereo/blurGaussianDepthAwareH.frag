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
//  blurGaussianDepthAwareH.frag
//
//  Created by Sam Gateau on 6/7/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

//  Generated on Wed Dec  5 03:18:47 2018
//
//  Created by Sam Gateau on 6/7/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

//  Generated on Wed Dec  5 03:18:47 2018
//
//  Created by Olivier Prat on 09/25/17.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#define BLUR_MAX_NUM_TAPS 33
struct BlurParameters {
    vec4 resolutionInfo;
    vec4 texcoordTransform;
    vec4 filterInfo;
    vec4 depthInfo;
    vec4 stereoInfo;
    vec4 linearDepthInfo;
    vec2 taps[BLUR_MAX_NUM_TAPS];
};

LAYOUT(binding=0) uniform blurParamsBuffer {
    BlurParameters parameters;
};

vec2 getInvWidthHeight() {
    return parameters.resolutionInfo.zw;
}

vec2 evalTexcoordTransformed(vec2 texcoord) {
    return (texcoord * parameters.texcoordTransform.zw + parameters.texcoordTransform.xy);
}

float getFilterScale() {
    return parameters.filterInfo.x;
}

int getFilterNumTaps() {
    return int(parameters.filterInfo.y);
}

float getOutputAlpha() {
    return parameters.filterInfo.z;
}

vec2 getFilterTap(int index) {
    return parameters.taps[index];
}

float getFilterTapOffset(vec2 tap) {
    return tap.x;
}

float getFilterTapWeight(vec2 tap) {
    return tap.y;
}

float getDepthThreshold() {
    return parameters.depthInfo.x;
}

float getDepthPerspective() {
    return parameters.depthInfo.w;
}

float getPosLinearDepthFar() {
    return parameters.linearDepthInfo.x;
}



LAYOUT(binding=0) uniform sampler2D sourceMap;
LAYOUT(binding=1) uniform sampler2D depthMap;

vec4 pixelShaderGaussianDepthAware(vec2 texcoord, vec2 direction, vec2 pixelStep) {
    texcoord = evalTexcoordTransformed(texcoord);
    float sampleDepth = texture(depthMap, texcoord).x;
    if (sampleDepth >= getPosLinearDepthFar()) {
        discard;
    }
    vec4 sampleCenter = texture(sourceMap, texcoord);

    // Calculate the width scale.
    float distanceToProjectionWindow = getDepthPerspective();

    float depthThreshold = getDepthThreshold();

    // Calculate the final step to fetch the surrounding pixels.
    float filterScale = getFilterScale();
    float scale = distanceToProjectionWindow / sampleDepth;

    vec2 finalStep = filterScale * scale * direction * pixelStep;
    int numTaps = getFilterNumTaps();

    // Accumulate the center sample
    vec2 tapInfo = getFilterTap(0);
    float totalWeight = getFilterTapWeight(tapInfo);
    vec4 srcBlurred = sampleCenter * totalWeight;

     for(int i = 1; i < numTaps; i++) {
        tapInfo = getFilterTap(i);

        // Fetch color and depth for current sample.
        vec2 sampleCoord = texcoord + (getFilterTapOffset(tapInfo) * finalStep);
        if (all(greaterThanEqual(sampleCoord, vec2(0,0))) && all(lessThanEqual(sampleCoord, vec2(1.0,1.0)))) {
            float srcDepth = texture(depthMap, sampleCoord).x;
            vec4 srcSample = texture(sourceMap, sampleCoord);
            float weight = getFilterTapWeight(tapInfo);
       
            // If the difference in depth is huge, we lerp color back.
            float s = clamp(depthThreshold * distanceToProjectionWindow  * filterScale * abs(srcDepth - sampleDepth), 0.0, 1.0);
            srcSample = mix(srcSample, sampleCenter, s);

            // Accumulate.
            srcBlurred += srcSample * weight;
            totalWeight += weight;
        }
    }   
    
    if (totalWeight>0.0) {
        srcBlurred /= totalWeight;
    }
    return srcBlurred;
}



layout(location=0) in vec2 varTexCoord0;

layout(location=0) out vec4 outFragColor;

void main(void) {
    outFragColor = pixelShaderGaussianDepthAware(varTexCoord0, vec2(1.0, 0.0), getInvWidthHeight());
}

