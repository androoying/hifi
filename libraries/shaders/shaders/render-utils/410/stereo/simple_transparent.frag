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
//  Generated on Wed Dec  5 03:19:14 2018
//
//  simple_transparent.frag
//  fragment shader
//
//  Created by Andrzej Kapolka on 9/15/14.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
const float DEFAULT_ROUGHNESS = 0.9;
const float DEFAULT_SHININESS = 10.0;
const float DEFAULT_METALLIC = 0.0;
const vec3 DEFAULT_SPECULAR = vec3(0.1);
const vec3 DEFAULT_EMISSIVE = vec3(0.0);
const float DEFAULT_OCCLUSION = 1.0;
const float DEFAULT_SCATTERING = 0.0;
const vec3 DEFAULT_FRESNEL = DEFAULT_EMISSIVE;

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
// glsl / C++ compatible source as interface for Light
#ifndef LightVolume_Shared_slh
#define LightVolume_Shared_slh

//  Light.shared.slh
//  libraries/graphics/src/graphics
//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define LightVolumeConstRef LightVolume

struct LightVolume {
    vec4 positionRadius;
    vec4 directionSpotCos;
};

bool lightVolume_isPoint(LightVolume lv) { return bool(lv.directionSpotCos.w < 0.f); }
bool lightVolume_isSpot(LightVolume lv) { return bool(lv.directionSpotCos.w >= 0.f); }

vec3 lightVolume_getPosition(LightVolume lv) { return lv.positionRadius.xyz; }
float lightVolume_getRadius(LightVolume lv) { return lv.positionRadius.w; }
float lightVolume_getRadiusSquare(LightVolume lv) { return lv.positionRadius.w * lv.positionRadius.w; }
vec3 lightVolume_getDirection(LightVolume lv) { return lv.directionSpotCos.xyz; } // direction is -Z axis

float lightVolume_getSpotAngleCos(LightVolume lv) { return lv.directionSpotCos.w; }
vec2 lightVolume_getSpotOutsideNormal2(LightVolume lv) { return vec2(-sqrt(1.0 - lv.directionSpotCos.w * lv.directionSpotCos.w), lv.directionSpotCos.w); }


bool lightVolume_clipFragToLightVolumePoint(LightVolume lv, vec3 fragPos, out vec4 fragLightVecLen2) {
    fragLightVecLen2.xyz = lightVolume_getPosition(lv) - fragPos.xyz;
    fragLightVecLen2.w = dot(fragLightVecLen2.xyz, fragLightVecLen2.xyz);

    // Kill if too far from the light center
    return (fragLightVecLen2.w <= lightVolume_getRadiusSquare(lv));
}

bool lightVolume_clipFragToLightVolumeSpotSide(LightVolume lv, vec4 fragLightDirLen, out float cosSpotAngle) {
    // Kill if not in the spot light (ah ah !)
    cosSpotAngle = max(-dot(fragLightDirLen.xyz, lightVolume_getDirection(lv)), 0.0);
    return (cosSpotAngle >= lightVolume_getSpotAngleCos(lv));
}

bool lightVolume_clipFragToLightVolumeSpot(LightVolume lv, vec3 fragPos, out vec4 fragLightVecLen2, out vec4 fragLightDirLen, out float cosSpotAngle) {
    if (!lightVolume_clipFragToLightVolumePoint(lv, fragPos, fragLightVecLen2)) {
        return false;
    }

    // Allright we re valid in the volume
    fragLightDirLen.w = length(fragLightVecLen2.xyz);
    fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;

    return lightVolume_clipFragToLightVolumeSpotSide(lv, fragLightDirLen, cosSpotAngle);
}

#endif


// // glsl / C++ compatible source as interface for Light
#ifndef LightIrradiance_Shared_slh
#define LightIrradiance_Shared_slh

//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define LightIrradianceConstRef LightIrradiance

struct LightIrradiance {
    vec4 colorIntensity;
    // falloffRadius, cutoffRadius, falloffSpot, spare
    vec4 attenuation;
};


vec3 lightIrradiance_getColor(LightIrradiance li) { return li.colorIntensity.xyz; }
float lightIrradiance_getIntensity(LightIrradiance li) { return li.colorIntensity.w; }
vec3 lightIrradiance_getIrradiance(LightIrradiance li) { return li.colorIntensity.xyz * li.colorIntensity.w; }
float lightIrradiance_getFalloffRadius(LightIrradiance li) { return li.attenuation.x; }
float lightIrradiance_getCutoffRadius(LightIrradiance li) { return li.attenuation.y; }
float lightIrradiance_getFalloffSpot(LightIrradiance li) { return li.attenuation.z; }


// Light is the light source its self, d is the light's distance calculated as length(unnormalized light vector).
float lightIrradiance_evalLightAttenuation(LightIrradiance li, float d) {
    float radius = lightIrradiance_getFalloffRadius(li);
    float cutoff = lightIrradiance_getCutoffRadius(li);
    float denom = (d / radius) + 1.0;
    float attenuation = 1.0 / (denom * denom);

    // "Fade" the edges of light sources to make things look a bit more attractive.
    // Note: this tends to look a bit odd at lower exponents.
    attenuation *= min(1.0, max(0.0, -(d - cutoff)));

    return attenuation;
}


float lightIrradiance_evalLightSpotAttenuation(LightIrradiance li, float cosA) {
    return pow(cosA, lightIrradiance_getFalloffSpot(li));
}


#endif


// // NOw lets define Light
struct Light {
    LightVolume volume;
    LightIrradiance irradiance;
};

bool light_isSpot(Light l) { return lightVolume_isSpot(l.volume); }

vec3 getLightPosition(Light l) { return lightVolume_getPosition(l.volume); }
vec3 getLightDirection(Light l) { return lightVolume_getDirection(l.volume); }

vec3 getLightColor(Light l) { return lightIrradiance_getColor(l.irradiance); }
float getLightIntensity(Light l) { return lightIrradiance_getIntensity(l.irradiance); }
vec3 getLightIrradiance(Light l) { return lightIrradiance_getIrradiance(l.irradiance); }

// Ambient lighting needs extra info provided from a different Buffer
// glsl / C++ compatible source as interface for Light
#ifndef SphericalHarmonics_Shared_slh
#define SphericalHarmonics_Shared_slh

//  SphericalHarmonics.shared.slh
//  libraries/graphics/src/graphics
//
//  Created by Sam Gateau on 14/9/2016.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#define SphericalHarmonicsConstRef SphericalHarmonics

struct SphericalHarmonics {
    vec4 L00;
    vec4 L1m1;
    vec4 L10;
    vec4 L11;
    vec4 L2m2;
    vec4 L2m1;
    vec4 L20;
    vec4 L21;
    vec4 L22;
};

vec4 sphericalHarmonics_evalSphericalLight(SphericalHarmonicsConstRef sh, vec3 direction) {

    vec3 dir = direction.xyz;

    const float C1 = 0.429043;
    const float C2 = 0.511664;
    const float C3 = 0.743125;
    const float C4 = 0.886227;
    const float C5 = 0.247708;

    vec4 value = C1 * sh.L22 * (dir.x * dir.x - dir.y * dir.y) +
        C3 * sh.L20 * dir.z * dir.z +
        C4 * sh.L00 - C5 * sh.L20 +
        2.0 * C1 * (sh.L2m2 * dir.x * dir.y +
        sh.L21  * dir.x * dir.z +
        sh.L2m1 * dir.y * dir.z) +
        2.0 * C2 * (sh.L11  * dir.x +
        sh.L1m1 * dir.y +
        sh.L10  * dir.z);
    return value;
}

#endif


// End C++ compatible// Light Ambient

struct LightAmbient {
    vec4 _ambient;
    SphericalHarmonics _ambientSphere;
    mat4 transform;
};

SphericalHarmonics getLightAmbientSphere(LightAmbient l) { return l._ambientSphere; }


float getLightAmbientIntensity(LightAmbient l) { return l._ambient.x; }
bool getLightHasAmbientMap(LightAmbient l) { return l._ambient.y > 0.0; }
float getLightAmbientMapNumMips(LightAmbient l) { return l._ambient.y; }

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
struct LightingModel {
    vec4 _UnlitEmissiveLightmapBackground;
    vec4 _ScatteringDiffuseSpecularAlbedo;
    vec4 _AmbientDirectionalPointSpot;
    vec4 _ShowContourObscuranceWireframe;
    vec4 _HazeBloomSkinningBlendshape;
};

// See DeferredShader_BufferSlot in DeferredLightingEffect.cpp
LAYOUT(binding=RENDER_UTILS_BUFFER_LIGHT_MODEL) uniform lightingModelBuffer{
    LightingModel lightingModel;
};

float isUnlitEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.x;
}
float isEmissiveEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.y;
}
float isLightmapEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.z;
}
float isBackgroundEnabled() {
    return lightingModel._UnlitEmissiveLightmapBackground.w;
}
float isObscuranceEnabled() {
    return lightingModel._ShowContourObscuranceWireframe.y;
}

float isScatteringEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.x;
}
float isDiffuseEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.y;
}
float isSpecularEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.z;
}
float isAlbedoEnabled() {
    return lightingModel._ScatteringDiffuseSpecularAlbedo.w;
}

float isAmbientEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.x;
}
float isDirectionalEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.y;
}
float isPointEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.z;
}
float isSpotEnabled() {
    return lightingModel._AmbientDirectionalPointSpot.w;
}

float isShowLightContour() {
    return lightingModel._ShowContourObscuranceWireframe.x;
}

float isWireframeEnabled() {
    return lightingModel._ShowContourObscuranceWireframe.z;
}

float isHazeEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.x;
}
float isBloomEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.y;
}
float isSkinningEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.z;
}
float isBlendshapeEnabled() {
    return lightingModel._HazeBloomSkinningBlendshape.w;
}



struct SurfaceData {
    vec3 normal;
    vec3 eyeDir;
    vec3 lightDir;
    vec3 halfDir;
    float roughness;
    float roughness2;
    float roughness4;
    float ndotv;
    float ndotl;
    float ndoth;
    float ldoth;
    float smithInvG1NdotV;
};

vec3 getFresnelF0(float metallic, vec3 metalF0) {
    // Enable continuous metallness value by lerping between dielectric
    // and metal fresnel F0 value based on the "metallic" parameter
    return mix(vec3(0.03), metalF0, metallic);
}
LAYOUT(binding=GRAPHICS_BUFFER_KEY_LIGHT) uniform keyLightBuffer {
    Light light;
};
Light getKeyLight() {
    return light;
}


LAYOUT(binding=GRAPHICS_BUFFER_AMBIENT_LIGHT) uniform lightAmbientBuffer {
    LightAmbient lightAmbient;
};

LightAmbient getLightAmbient() {
    return lightAmbient;
}



//  Generated on Wed Dec  5 03:19:14 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html

// // // Hack Comment
//  Generated on Wed Dec  5 03:19:14 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

float evalSmithInvG1(float roughness4, float ndotd) {
    return ndotd + sqrt(roughness4+ndotd*ndotd*(1.0-roughness4));
}

SurfaceData initSurfaceData(float roughness, vec3 normal, vec3 eyeDir) {
    SurfaceData surface;
    surface.eyeDir = eyeDir;
    surface.normal = normal;
    surface.roughness = mix(0.01, 1.0, roughness);
    surface.roughness2 = surface.roughness * surface.roughness;
    surface.roughness4 = surface.roughness2 * surface.roughness2;
    surface.ndotv = clamp(dot(normal, eyeDir), 0.0, 1.0);
    surface.smithInvG1NdotV = evalSmithInvG1(surface.roughness4, surface.ndotv);

    // These values will be set when we know the light direction, in updateSurfaceDataWithLight
    surface.ndoth = 0.0;
    surface.ndotl = 0.0;
    surface.ldoth = 0.0;
    surface.lightDir = vec3(0,0,1);
    surface.halfDir = vec3(0,0,1);

    return surface;
}

void updateSurfaceDataWithLight(inout SurfaceData surface, vec3 lightDir) {
    surface.lightDir = lightDir;
    surface.halfDir = normalize(surface.eyeDir + lightDir);
    vec3 dots;
    dots.x = dot(surface.normal, surface.halfDir);
    dots.y = dot(surface.normal, surface.lightDir);
    dots.z = dot(surface.halfDir, surface.lightDir);
    dots = clamp(dots, vec3(0), vec3(1));
    surface.ndoth = dots.x;
    surface.ndotl = dots.y;
    surface.ldoth = dots.z;
}

vec3 fresnelSchlickColor(vec3 fresnelColor, SurfaceData surface) {
    float base = 1.0 - surface.ldoth;
    //float exponential = pow(base, 5.0);
    float base2 = base * base;
    float exponential = base * base2 * base2;
    return vec3(exponential) + fresnelColor * (1.0 - exponential);
}

float fresnelSchlickScalar(float fresnelScalar, SurfaceData surface) {
    float base = 1.0 - surface.ldoth;
    //float exponential = pow(base, 5.0);
    float base2 = base * base;
    float exponential = base * base2 * base2;
    return (exponential) + fresnelScalar * (1.0 - exponential);
}

float specularDistribution(SurfaceData surface) {
    // See https://www.khronos.org/assets/uploads/developers/library/2017-web3d/glTF-2.0-Launch_Jun17.pdf
    // for details of equations, especially page 20
    float denom = (surface.ndoth*surface.ndoth * (surface.roughness4 - 1.0) + 1.0);
    denom *= denom;
    // Add geometric factors G1(n,l) and G1(n,v)
    float smithInvG1NdotL = evalSmithInvG1(surface.roughness4, surface.ndotl);
    denom *= surface.smithInvG1NdotV * smithInvG1NdotL;
    // Don't divide by PI as this is part of the light normalization factor
    float power = surface.roughness4 / denom;
    return power;
}

// Frag Shading returns the diffuse amount as W and the specular rgb as xyz
vec4 evalPBRShading(float metallic, vec3 fresnel, SurfaceData surface) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    vec3 fresnelColor = fresnelSchlickColor(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = fresnelColor * power * angleAttenuation;
    float diffuse = (1.0 - metallic) * angleAttenuation * (1.0 - fresnelColor.x);

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, diffuse);
}

// Frag Shading returns the diffuse amount as W and the specular rgb as xyz
vec4 evalPBRShadingDielectric(SurfaceData surface, float fresnel) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    float fresnelScalar = fresnelSchlickScalar(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = vec3(fresnelScalar) * power * angleAttenuation;
    float diffuse = angleAttenuation * (1.0 - fresnelScalar);

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, diffuse);
}

vec4 evalPBRShadingMetallic(SurfaceData surface, vec3 fresnel) {
    // Incident angle attenuation
    float angleAttenuation = surface.ndotl;

    // Specular Lighting
    vec3 fresnelColor = fresnelSchlickColor(fresnel, surface);
    float power = specularDistribution(surface);
    vec3 specular = fresnelColor * power * angleAttenuation;

    // We don't divided by PI, as the "normalized" equations state we should, because we decide, as Naty Hoffman, that
    // we wish to have a similar color as raw albedo on a perfectly diffuse surface perpendicularly lit
    // by a white light of intensity 1. But this is an arbitrary normalization of what light intensity "means".
    // (see http://blog.selfshadow.com/publications/s2013-shading-course/hoffman/s2013_pbs_physics_math_notes.pdf
    // page 23 paragraph "Punctual light sources")
    return vec4(specular, 0.f);
}



void evalFragShading(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo) {
    vec4 shading = evalPBRShading(metallic, fresnel, surface);
    diffuse = vec3(shading.w);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
    specular = shading.xyz;
}

LAYOUT(binding=RENDER_UTILS_TEXTURE_SSSC_SPECULAR_BECKMANN) uniform sampler2D scatteringSpecularBeckmann;

float fetchSpecularBeckmann(float ndoth, float roughness) {
    return pow(2.0 * texture(scatteringSpecularBeckmann, vec2(ndoth, roughness)).r, 10.0);
}

vec2 skinSpecular(SurfaceData surface, float intensity) {
    vec2 result = vec2(0.0, 1.0);
    if (surface.ndotl > 0.0) {
        float PH = fetchSpecularBeckmann(surface.ndoth, surface.roughness);
        float F = fresnelSchlickScalar(0.028, surface);
        float frSpec = max(PH * F / dot(surface.halfDir, surface.halfDir), 0.0);
        result.x = surface.ndotl * intensity * frSpec;
        result.y -= F;
    }

    return result;
}

//  Generated on Wed Dec  5 03:19:14 2018
//
//  Created by Sam Gateau on 6/8/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
// // // Hack Comment
LAYOUT(binding=RENDER_UTILS_TEXTURE_SSSC_LUT) uniform sampler2D scatteringLUT;

vec3 fetchBRDF(float LdotN, float curvature) {
    return texture(scatteringLUT, vec2( clamp(LdotN * 0.5 + 0.5, 0.0, 1.0), clamp(2.0 * curvature, 0.0, 1.0))).xyz;
}

vec3 fetchBRDFSpectrum(vec3 LdotNSpectrum, float curvature) {
    return vec3(
        fetchBRDF(LdotNSpectrum.r, curvature).r,
        fetchBRDF(LdotNSpectrum.g, curvature).g,
        fetchBRDF(LdotNSpectrum.b, curvature).b);
}

// Subsurface Scattering parameters
struct ScatteringParameters {
    vec4 normalBendInfo; // R, G, B, factor
    vec4 curvatureInfo;// Offset, Scale, level
    vec4 debugFlags;
};

LAYOUT(binding=RENDER_UTILS_BUFFER_SSSC_PARAMS) uniform subsurfaceScatteringParametersBuffer {
    ScatteringParameters parameters;
};

vec3 getBendFactor() {
    return parameters.normalBendInfo.xyz * parameters.normalBendInfo.w;
}

float getScatteringLevel() {
    return parameters.curvatureInfo.z;
}

bool showBRDF() {
    return parameters.curvatureInfo.w > 0.0;
}

bool showCurvature() {
    return parameters.debugFlags.x > 0.0;
}
bool showDiffusedNormal() {
    return parameters.debugFlags.y > 0.0;
}


float tuneCurvatureUnsigned(float curvature) {
    return abs(curvature) * parameters.curvatureInfo.y + parameters.curvatureInfo.x;
}

float unpackCurvature(float packedCurvature) {
    return (packedCurvature * 2.0 - 1.0);
}

vec3 evalScatteringBentNdotL(vec3 normal, vec3 midNormal, vec3 lowNormal, vec3 lightDir) {
    vec3 bendFactorSpectrum = getBendFactor();
    // vec3 rN = normalize(mix(normal, lowNormal, bendFactorSpectrum.x));
    vec3 rN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.x));
    vec3 gN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.y));
    vec3 bN = normalize(mix(midNormal, lowNormal, bendFactorSpectrum.z));

    vec3 NdotLSpectrum = vec3(dot(rN, lightDir), dot(gN, lightDir), dot(bN, lightDir));

    return NdotLSpectrum;
}





vec3 evalSkinBRDF(vec3 lightDir, vec3 normal, vec3 midNormal, vec3 lowNormal, float curvature) {
    if (showDiffusedNormal()) {
        return lowNormal * 0.5 + vec3(0.5);
    }
    if (showCurvature()) {
        return (curvature > 0.0 ? vec3(curvature, 0.0, 0.0) : vec3(0.0, 0.0, -curvature));
    }

    vec3 bentNdotL = evalScatteringBentNdotL(normal, midNormal, lowNormal, lightDir);

    float tunedCurvature = tuneCurvatureUnsigned(curvature);

    vec3 brdf = fetchBRDFSpectrum(bentNdotL, tunedCurvature);
    return brdf;
}




void evalFragShading(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo,
    float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature) {
    if (scattering * isScatteringEnabled() > 0.0) {
        vec3 brdf = evalSkinBRDF(surface.lightDir, surface.normal, midNormalCurvature.xyz, lowNormalCurvature.xyz, lowNormalCurvature.w);
        diffuse = mix(vec3(surface.ndotl), brdf, scattering);

        // Specular Lighting
        vec2 specularBrdf = skinSpecular(surface, 1.0);
        
        diffuse *= specularBrdf.y;
        specular = vec3(specularBrdf.x);
    } else {
        vec4 shading = evalPBRShading(metallic, fresnel, surface);
        diffuse = vec3(shading.w);
        specular = shading.xyz;
    }
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
}


void evalFragShadingScattering(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo,
    float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature) {
    vec3 brdf = evalSkinBRDF(surface.lightDir, surface.normal, midNormalCurvature.xyz, lowNormalCurvature.xyz, lowNormalCurvature.w);
    float NdotL = surface.ndotl;
    diffuse = mix(vec3(NdotL), brdf, scattering);

    // Specular Lighting
    vec2 specularBrdf = skinSpecular(surface, 1.0);
        
    diffuse *= specularBrdf.y;
    specular = vec3(specularBrdf.x);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
}

void evalFragShadingGloss(out vec3 diffuse, out vec3 specular,
    float metallic, vec3 fresnel, SurfaceData surface, vec3 albedo) {
    vec4 shading = evalPBRShading(metallic, fresnel, surface);
    diffuse = vec3(shading.w);
    diffuse *= mix(vec3(1.0), albedo, isAlbedoEnabled());
    specular = shading.xyz;
}

vec3 evalSpecularWithOpacity(vec3 specular, float opacity) {
    return specular / opacity;
}

// // // Hack Comment
const int HAZE_MODE_IS_ACTIVE = 1 << 0;
const int HAZE_MODE_IS_ALTITUDE_BASED = 1 << 1;
const int HAZE_MODE_IS_KEYLIGHT_ATTENUATED = 1 << 2;
const int HAZE_MODE_IS_MODULATE_COLOR = 1 << 3;
const int HAZE_MODE_IS_ENABLE_LIGHT_BLEND = 1 << 4;

struct HazeParams {
    vec3 hazeColor;
    float hazeGlareBlend;

    vec3 hazeGlareColor;
    float hazeBaseReference;

    vec3 colorModulationFactor;
    int hazeMode;

    mat4 transform;
    float backgroundBlend;

    float hazeRangeFactor;
    float hazeHeightFactor;

    float hazeKeyLightRangeFactor;
    float hazeKeyLightAltitudeFactor;
};

// See ShapePipeline::Slot::BUFFER in ShapePipeline.h
LAYOUT_STD140(binding=RENDER_UTILS_BUFFER_HAZE_PARAMS) uniform hazeBuffer {
    HazeParams hazeParams;
};


// Input:
//      color               - fragment original color
//      lightDirectionWS    - parameters of the keylight
//      fragPositionWS      - fragment position in world coordinates
// Output:
//      fragment colour after haze effect
//
// General algorithm taken from http://www.iquilezles.org/www/articles/fog/fog.htm, with permission
//
vec3 computeHazeColorKeyLightAttenuation(vec3 color, vec3 lightDirectionWS, vec3 fragPositionWS) {
    // Directional light attenuation is simulated by assuming the light source is at a fixed height above the
    // fragment. This height is where the haze density is reduced by 95% from the haze at the fragment's height
    //
    // The distance is computed from the height and the directional light orientation
    // The distance is limited to height * 1,000, which gives an angle of ~0.057 degrees

    // Height at which haze density is reduced by 95% (default set to 2000.0 for safety ,this should never happen)
    float height_95p = 2000.0;
    const float log_p_005 = log(0.05);
    if (hazeParams.hazeKeyLightAltitudeFactor > 0.0f) {
        height_95p = -log_p_005 / hazeParams.hazeKeyLightAltitudeFactor;
    }

    // Note that we need the sine to be positive
    float sin_pitch = abs(lightDirectionWS.y);
            
    float distance;
    const float minimumSinPitch = 0.001;
    if (sin_pitch < minimumSinPitch) {
        distance = height_95p / minimumSinPitch;
    } else {
        distance = height_95p / sin_pitch;
    }

    // Integration is from the fragment towards the light source
    // Note that the haze base reference affects only the haze density as function of altitude
    float hazeDensityDistribution =  
        hazeParams.hazeKeyLightRangeFactor * 
        exp(-hazeParams.hazeKeyLightAltitudeFactor * (fragPositionWS.y - hazeParams.hazeBaseReference));

    float hazeIntegral =  hazeDensityDistribution * distance;

    // Note that t is constant and equal to -log(0.05)
    //      float t = hazeParams.hazeAltitudeFactor * height_95p;
    //      hazeIntegral *= (1.0 - exp (-t)) / t;
    hazeIntegral *= 0.3171178;

    return color * exp(-hazeIntegral);
}

// Input:
//      fragPositionES   - fragment position in eye   coordinates
//      fragPositionWS   - fragment position in world coordinates
//      eyePositionWS    - eye      position in world coordinates
// Output:
//      haze colour and alpha contains haze blend factor
//
// General algorithm taken from http://www.iquilezles.org/www/articles/fog/fog.htm, with permission
//
vec4 computeHazeColor(vec3 fragPositionES, vec3 fragPositionWS, vec3 eyePositionWS, vec3 lightDirectionWS) {
    // Distance to fragment 
    float distance = length(fragPositionES);
    float eyeWorldHeight = eyePositionWS.y;

    // Convert haze colour from uniform into a vec4
    vec4 hazeColor = vec4(hazeParams.hazeColor, 1.0);

    // Use the haze colour for the glare colour, if blend is not enabled
    vec4 blendedHazeColor;
    if ((hazeParams.hazeMode & HAZE_MODE_IS_ENABLE_LIGHT_BLEND) == HAZE_MODE_IS_ENABLE_LIGHT_BLEND) {
        // Directional light component is a function of the angle from the eye, between the fragment and the sun
        vec3 fragToEyeDirWS = normalize(fragPositionWS - eyePositionWS);

        float glareComponent = max(0.0, dot(fragToEyeDirWS, -lightDirectionWS));
        float power = min(1.0, pow(glareComponent, hazeParams.hazeGlareBlend));

        vec4 glareColor = vec4(hazeParams.hazeGlareColor, 1.0);

        blendedHazeColor = mix(hazeColor, glareColor, power);
    } else {
        blendedHazeColor = hazeColor;
    }

    vec4 potentialFragColor;

    if ((hazeParams.hazeMode & HAZE_MODE_IS_MODULATE_COLOR) == HAZE_MODE_IS_MODULATE_COLOR) {
        // Compute separately for each colour
        // Haze is based on both range and altitude
        // Taken from www.crytek.com/download/GDC2007_RealtimeAtmoFxInGamesRev.ppt

        // Note that the haze base reference affects only the haze density as function of altitude
        vec3 hazeDensityDistribution =  
            hazeParams.colorModulationFactor * 
            exp(-hazeParams.hazeHeightFactor * (eyeWorldHeight - hazeParams.hazeBaseReference));

        vec3 hazeIntegral = hazeDensityDistribution * distance;

        const float slopeThreshold = 0.01;
        float deltaHeight = fragPositionWS.y - eyeWorldHeight;
        if (abs(deltaHeight) > slopeThreshold) {
            float t = hazeParams.hazeHeightFactor * deltaHeight;
            hazeIntegral *= (1.0 - exp (-t)) / t;
        }

        vec3 hazeAmount = 1.0 - exp(-hazeIntegral);

        // Compute color after haze effect
        potentialFragColor = vec4(1.0, 1.0, 1.0, hazeAmount);
    } else if ((hazeParams.hazeMode & HAZE_MODE_IS_ALTITUDE_BASED) != HAZE_MODE_IS_ALTITUDE_BASED) {
        // Haze is based only on range
        float hazeAmount = 1.0 - exp(-distance * hazeParams.hazeRangeFactor);

        // Compute color after haze effect
        potentialFragColor = vec4(blendedHazeColor.rgb, hazeAmount);
    } else {
        // Haze is based on both range and altitude
        // Taken from www.crytek.com/download/GDC2007_RealtimeAtmoFxInGamesRev.ppt

        // Note that the haze base reference affects only the haze density as function of altitude
        float hazeDensityDistribution =  
            hazeParams.hazeRangeFactor * 
            exp(-hazeParams.hazeHeightFactor * (eyeWorldHeight - hazeParams.hazeBaseReference));

        float hazeIntegral =  hazeDensityDistribution * distance;

        const float slopeThreshold = 0.01;
        float deltaHeight = fragPositionWS.y - eyeWorldHeight;
        if (abs(deltaHeight) > slopeThreshold) {
            float t = hazeParams.hazeHeightFactor * deltaHeight;
            // Protect from wild values
            const float EPSILON = 0.0000001f;
            if (abs(t) > EPSILON) {
                hazeIntegral *= (1.0 - exp (-t)) / t;
            }
        }

        float hazeAmount = 1.0 - exp(-hazeIntegral);

        // Compute color after haze effect
        potentialFragColor = vec4(blendedHazeColor.rgb, hazeAmount);
    }

    // Mix with background at far range
    const float BLEND_DISTANCE = 27000.0f;
    vec4 outFragColor = potentialFragColor;
    if (distance > BLEND_DISTANCE) {
        outFragColor.a *= hazeParams.backgroundBlend;
    }

    return outFragColor;
}

vec3 fresnelSchlickAmbient(vec3 fresnelColor, float ndotd, float gloss) {
    float f = pow(1.0 - ndotd, 5.0);
    return fresnelColor + (max(vec3(gloss), fresnelColor) - fresnelColor) * f;
}

// declareSkyboxMap
LAYOUT(binding=RENDER_UTILS_TEXTURE_SKYBOX) uniform samplerCube skyboxMap;

vec4 evalSkyboxLight(vec3 direction, float lod) {
    // textureQueryLevels is not available until #430, so we require explicit lod
    // float mipmapLevel = lod * textureQueryLevels(skyboxMap);

#if !defined(GL_ES)
    float filterLod = textureQueryLod(skyboxMap, direction).x;
    // Keep texture filtering LOD as limit to prevent aliasing on specular reflection
    lod = max(lod, filterLod);
#endif

    return textureLod(skyboxMap, direction, lod);
}

vec3 evalAmbientSpecularIrradiance(LightAmbient ambient, SurfaceData surface, vec3 lightDir) {
    vec3 specularLight;
    if (getLightHasAmbientMap(ambient))
            {
            float levels = getLightAmbientMapNumMips(ambient);
            float m = 12.0 / (1.0+11.0*surface.roughness);
            float lod = levels - m;
            lod = max(lod, 0.0);
            specularLight = evalSkyboxLight(lightDir, lod).xyz;
        }
    else
        {
        specularLight = sphericalHarmonics_evalSphericalLight(getLightAmbientSphere(ambient), lightDir).xyz;
    }
    return specularLight;
}


void evalLightingAmbient(out vec3 diffuse, out vec3 specular, LightAmbient ambient, SurfaceData surface, 
                         float metallic, vec3 fresnelF0, vec3 albedo, float obscurance
) {

    // Rotate surface normal and eye direction
    vec3 ambientSpaceSurfaceNormal = (ambient.transform * vec4(surface.normal, 0.0)).xyz;
    vec3 ambientSpaceSurfaceEyeDir = (ambient.transform * vec4(surface.eyeDir, 0.0)).xyz;
vec3 ambientFresnel = fresnelSchlickAmbient(fresnelF0, surface.ndotv, 1.0-surface.roughness);

    diffuse = (1.0 - metallic) * (vec3(1.0) - ambientFresnel) * 
              sphericalHarmonics_evalSphericalLight(getLightAmbientSphere(ambient), ambientSpaceSurfaceNormal).xyz;

    // Specular highlight from ambient
    vec3 ambientSpaceLightDir = -reflect(ambientSpaceSurfaceEyeDir, ambientSpaceSurfaceNormal);
    specular = evalAmbientSpecularIrradiance(ambient, surface, ambientSpaceLightDir)  * ambientFresnel;

obscurance = mix(1.0, obscurance, isObscuranceEnabled());

    float lightEnergy = obscurance * getLightAmbientIntensity(ambient);

    diffuse *= mix(vec3(1), albedo, isAlbedoEnabled());

    lightEnergy *= isAmbientEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();
}


void evalLightingDirectional(out vec3 diffuse, out vec3 specular, vec3 lightDir, vec3 lightIrradiance,
    SurfaceData surface,
    float metallic, vec3 fresnel, vec3 albedo, float shadow
) {

    // Attenuation
    vec3 lightEnergy = shadow * lightIrradiance;

    updateSurfaceDataWithLight(surface, -lightDir);

    evalFragShading(diffuse, specular, metallic, fresnel, surface, albedo
);

    lightEnergy *= isDirectionalEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();
}



vec3 evalGlobalLightingAlphaBlendedWithHaze(
    mat4 invViewMat, float shadowAttenuation, float obscurance, vec3 positionES, vec3 normalWS, 
    vec3 albedo, vec3 fresnel, float metallic, vec3 emissive, float roughness, float opacity) 
{
    
    // prepareGlobalLight
    // Transform directions to worldspace
    vec3 fragNormalWS = vec3(normalWS);
    vec3 fragPositionWS = vec3(invViewMat * vec4(positionES, 1.0));
    vec3 fragEyeVectorWS = invViewMat[3].xyz - fragPositionWS;
    vec3 fragEyeDirWS = normalize(fragEyeVectorWS);

    // Get light
    Light light = getKeyLight();
    LightAmbient lightAmbient = getLightAmbient();
    
    vec3 lightDirection = getLightDirection(light);
    vec3 lightIrradiance = getLightIrradiance(light);

    vec3 color = vec3(0.0);



    
    SurfaceData surfaceWS = initSurfaceData(roughness, fragNormalWS, fragEyeDirWS);

    color += emissive * isEmissiveEnabled();

    // Ambient
    vec3 ambientDiffuse;
    vec3 ambientSpecular;
    evalLightingAmbient(ambientDiffuse, ambientSpecular, lightAmbient, surfaceWS, metallic, fresnel, albedo, obscurance);
    color += ambientDiffuse;

    // Directional
    vec3 directionalDiffuse;
    vec3 directionalSpecular;
    evalLightingDirectional(directionalDiffuse, directionalSpecular, lightDirection, lightIrradiance, surfaceWS, metallic, fresnel, albedo, shadowAttenuation);
    color += directionalDiffuse;
    color += evalSpecularWithOpacity(ambientSpecular + directionalSpecular, opacity);

    // Haze
    if ((isHazeEnabled() > 0.0) && (hazeParams.hazeMode & HAZE_MODE_IS_ACTIVE) == HAZE_MODE_IS_ACTIVE) {
        vec4 hazeColor = computeHazeColor(
            positionES,                     // fragment position in eye   coordinates
            fragPositionWS,                 // fragment position in world coordinates
            invViewMat[3].xyz,              // eye      position in world coordinates
            lightDirection                  // keylight direction vector in world coordinates
        );

        color = mix(color.rgb, hazeColor.rgb, hazeColor.a);
    }

    return color;
}

vec3 evalGlobalLightingAlphaBlendedWithHaze(
    mat4 invViewMat, float shadowAttenuation, float obscurance, vec3 positionES, vec3 positionWS, 
    vec3 albedo, vec3 fresnel, float metallic, vec3 emissive, SurfaceData surface, float opacity, vec3 prevLighting) 
{
    // Get light
    Light light = getKeyLight();
    LightAmbient lightAmbient = getLightAmbient();
    
    vec3 lightDirection = getLightDirection(light);
    vec3 lightIrradiance = getLightIrradiance(light);

    vec3 color = vec3(0.0);

    
    color = prevLighting;
    color += emissive * isEmissiveEnabled();

    // Ambient
    vec3 ambientDiffuse;
    vec3 ambientSpecular;
    evalLightingAmbient(ambientDiffuse, ambientSpecular, lightAmbient, surface, metallic, fresnel, albedo, obscurance);

    // Directional
    vec3 directionalDiffuse;
    vec3 directionalSpecular;
    evalLightingDirectional(directionalDiffuse, directionalSpecular, lightDirection, lightIrradiance, surface, metallic, fresnel, albedo, shadowAttenuation);

    color += ambientDiffuse + directionalDiffuse;
    color += evalSpecularWithOpacity(ambientSpecular + directionalSpecular, opacity);

    // Haze
    if ((isHazeEnabled() > 0.0) && (hazeParams.hazeMode & HAZE_MODE_IS_ACTIVE) == HAZE_MODE_IS_ACTIVE) {
        vec4 hazeColor = computeHazeColor(
            positionES,                     // fragment position in eye   coordinates
            positionWS,                     // fragment position in world coordinates
            invViewMat[3].xyz,              // eye      position in world coordinates
            lightDirection                  // keylight direction vector
        );

        color = mix(color.rgb, hazeColor.rgb, hazeColor.a);
    }

    return color;
}


// // // Hack Comment
// the interpolated normal
layout(location=RENDER_UTILS_ATTR_NORMAL_WS) in vec3 _normalWS;
layout(location=RENDER_UTILS_ATTR_NORMAL_MS) in vec3 _normalMS;
layout(location=RENDER_UTILS_ATTR_COLOR) in vec4 _color;
layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=RENDER_UTILS_ATTR_POSITION_MS) in vec4 _positionMS;
layout(location=RENDER_UTILS_ATTR_POSITION_ES) in vec4 _positionES;

layout(location=0) out vec4 _fragColor0;

// For retro-compatibility
#define _normal      _normalWS
#define _modelNormal _normalMS
#define _position    _positionMS
#define _eyePosition _positionES

//  Generated on Wed Dec  5 03:19:14 2018
//
//  Created by Bradley Austin Davis on 2015/09/05
//  Copyright 2013-2015 High Fidelity, Inc.
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
// Shader includes portions of webgl-noise:
// Description : Array and textureless GLSL 2D/3D/4D simplex
//               noise functions.
//      Author : Ian McEwan, Ashima Arts.
//  Maintainer : ijm
//     Lastmod : 20110822 (ijm)
//     License : Copyright (C) 2011 Ashima Arts. All rights reserved.
//               Distributed under the MIT License. See LICENSE file.
//               https://github.com/ashima/webgl-noise
//

float mod289(float x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec2 mod289(vec2 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec3 mod289(vec3 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

vec4 mod289(vec4 x) {
    return x - floor(x * (1.0 / 289.0)) * 289.0;
}

float permute(float x) {
    return mod289(((x*34.0)+1.0)*x);
}

vec3 permute(vec3 x) {
    return mod289(((x*34.0)+1.0)*x);
}

vec4 permute(vec4 x) {
    return mod289(((x*34.0)+1.0)*x);
}

float taylorInvSqrt(float r) {
    return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 taylorInvSqrt(vec4 r) {
    return 1.79284291400159 - 0.85373472095314 * r;
}

vec4 grad4(float j, vec4 ip) {
    const vec4 ones = vec4(1.0, 1.0, 1.0, -1.0);
    vec4 p, s;

    p.xyz = floor(fract(vec3(j) * ip.xyz) * 7.0) * ip.z - 1.0;
    p.w = 1.5 - dot(abs(p.xyz), ones.xyz);
    s = vec4(lessThan(p, vec4(0.0)));
    p.xyz = p.xyz + (s.xyz * 2.0 - 1.0) * s.www;

    return p;
}

// (sqrt(5) - 1)/4 = F4, used once below
#define F4 0.309016994374947451

float snoise(vec4 v) {
    const vec4 C = vec4(0.138196601125011,  // (5 - sqrt(5))/20  G4
            0.276393202250021,  // 2 * G4
            0.414589803375032,  // 3 * G4
            -0.447213595499958); // -1 + 4 * G4

    // First corner
    vec4 i = floor(v + dot(v, vec4(F4)));
    vec4 x0 = v - i + dot(i, C.xxxx);

    // Other corners

    // Rank sorting originally contributed by Bill Licea-Kane, AMD (formerly ATI)
    vec4 i0;
    vec3 isX = step(x0.yzw, x0.xxx);
    vec3 isYZ = step(x0.zww, x0.yyz);
    i0.x = isX.x + isX.y + isX.z;
    i0.yzw = 1.0 - isX;
    i0.y += isYZ.x + isYZ.y;
    i0.zw += 1.0 - isYZ.xy;
    i0.z += isYZ.z;
    i0.w += 1.0 - isYZ.z;

    // i0 now contains the unique values 0,1,2,3 in each channel
    vec4 i3 = clamp(i0, 0.0, 1.0);
    vec4 i2 = clamp(i0 - 1.0, 0.0, 1.0);
    vec4 i1 = clamp(i0 - 2.0, 0.0, 1.0);

    vec4 x1 = x0 - i1 + C.xxxx;
    vec4 x2 = x0 - i2 + C.yyyy;
    vec4 x3 = x0 - i3 + C.zzzz;
    vec4 x4 = x0 + C.wwww;

    // Permutations
    i = mod289(i);
    float j0 = permute(permute(permute(permute(i.w) + i.z) + i.y) + i.x);
    vec4 j1 = permute(
            permute(
                    permute(
                            permute(i.w + vec4(i1.w, i2.w, i3.w, 1.0)) + i.z
                                    + vec4(i1.z, i2.z, i3.z, 1.0)) + i.y
                            + vec4(i1.y, i2.y, i3.y, 1.0)) + i.x
                    + vec4(i1.x, i2.x, i3.x, 1.0));

    // Gradients: 7x7x6 points over a cube, mapped onto a 4-cross polytope
    // 7*7*6 = 294, which is close to the ring size 17*17 = 289.
    vec4 ip = vec4(1.0 / 294.0, 1.0 / 49.0, 1.0 / 7.0, 0.0);

    vec4 p0 = grad4(j0, ip);
    vec4 p1 = grad4(j1.x, ip);
    vec4 p2 = grad4(j1.y, ip);
    vec4 p3 = grad4(j1.z, ip);
    vec4 p4 = grad4(j1.w, ip);

    // Normalise gradients
    vec4 norm = taylorInvSqrt(
            vec4(dot(p0, p0), dot(p1, p1), dot(p2, p2), dot(p3, p3)));
    p0 *= norm.x;
    p1 *= norm.y;
    p2 *= norm.z;
    p3 *= norm.w;
    p4 *= taylorInvSqrt(dot(p4, p4));

    // Mix contributions from the five corners
    vec3 m0 = max(0.6 - vec3(dot(x0, x0), dot(x1, x1), dot(x2, x2)), 0.0);
    vec2 m1 = max(0.6 - vec2(dot(x3, x3), dot(x4, x4)), 0.0);
    m0 = m0 * m0;
    m1 = m1 * m1;
    return 49.0
            * (dot(m0 * m0, vec3(dot(p0, x0), dot(p1, x1), dot(p2, x2)))
                    + dot(m1 * m1, vec2(dot(p3, x3), dot(p4, x4))));

}

float snoise(vec3 v) {
    const vec2 C = vec2(1.0 / 6.0, 1.0 / 3.0);
    const vec4 D = vec4(0.0, 0.5, 1.0, 2.0);

    // First corner
    vec3 i = floor(v + dot(v, C.yyy));
    vec3 x0 = v - i + dot(i, C.xxx);

    // Other corners
    vec3 g = step(x0.yzx, x0.xyz);
    vec3 l = 1.0 - g;
    vec3 i1 = min(g.xyz, l.zxy);
    vec3 i2 = max(g.xyz, l.zxy);

    vec3 x1 = x0 - i1 + C.xxx;
    vec3 x2 = x0 - i2 + C.yyy; // 2.0*C.x = 1/3 = C.y
    vec3 x3 = x0 - D.yyy;      // -1.0+3.0*C.x = -0.5 = -D.y

    // Permutations
    i = mod289(i);
    vec4 p = permute(
            permute(
                    permute(i.z + vec4(0.0, i1.z, i2.z, 1.0)) + i.y
                            + vec4(0.0, i1.y, i2.y, 1.0)) + i.x
                    + vec4(0.0, i1.x, i2.x, 1.0));

    // Gradients: 7x7 points over a square, mapped onto an octahedron.
    // The ring size 17*17 = 289 is close to a multiple of 49 (49*6 = 294)
    float n_ = 0.142857142857; // 1.0/7.0
    vec3 ns = n_ * D.wyz - D.xzx;

    vec4 j = p - 49.0 * floor(p * ns.z * ns.z);  //  mod(p,7*7)

    vec4 x_ = floor(j * ns.z);
    vec4 y_ = floor(j - 7.0 * x_);    // mod(j,N)

    vec4 x = x_ * ns.x + ns.yyyy;
    vec4 y = y_ * ns.x + ns.yyyy;
    vec4 h = 1.0 - abs(x) - abs(y);

    vec4 b0 = vec4(x.xy, y.xy);
    vec4 b1 = vec4(x.zw, y.zw);

    //vec4 s0 = vec4(lessThan(b0,0.0))*2.0 - 1.0;
    //vec4 s1 = vec4(lessThan(b1,0.0))*2.0 - 1.0;
    vec4 s0 = floor(b0) * 2.0 + 1.0;
    vec4 s1 = floor(b1) * 2.0 + 1.0;
    vec4 sh = -step(h, vec4(0.0));

    vec4 a0 = b0.xzyw + s0.xzyw * sh.xxyy;
    vec4 a1 = b1.xzyw + s1.xzyw * sh.zzww;

    vec3 p0 = vec3(a0.xy, h.x);
    vec3 p1 = vec3(a0.zw, h.y);
    vec3 p2 = vec3(a1.xy, h.z);
    vec3 p3 = vec3(a1.zw, h.w);

    //Normalise gradients
    vec4 norm = taylorInvSqrt(
            vec4(dot(p0, p0), dot(p1, p1), dot(p2, p2), dot(p3, p3)));
    p0 *= norm.x;
    p1 *= norm.y;
    p2 *= norm.z;
    p3 *= norm.w;

    // Mix final noise value
    vec4 m = max(0.6 - vec4(dot(x0, x0), dot(x1, x1), dot(x2, x2), dot(x3, x3)),
            0.0);
    m = m * m;
    return 42.0
            * dot(m * m, vec4(dot(p0, x0), dot(p1, x1), dot(p2, x2), dot(p3, x3)));
}

float snoise(vec2 v) {
    const vec4 C = vec4(0.211324865405187,  // (3.0-sqrt(3.0))/6.0
            0.366025403784439,  // 0.5*(sqrt(3.0)-1.0)
            -0.577350269189626,  // -1.0 + 2.0 * C.x
            0.024390243902439); // 1.0 / 41.0
    // First corner
    vec2 i = floor(v + dot(v, C.yy));
    vec2 x0 = v - i + dot(i, C.xx);

    // Other corners
    vec2 i1;
    i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);
    vec4 x12 = x0.xyxy + C.xxzz;
    x12.xy -= i1;

    // Permutations
    i = mod289(i); // Avoid truncation effects in permutation
    vec3 p = permute(
            permute(i.y + vec3(0.0, i1.y, 1.0)) + i.x + vec3(0.0, i1.x, 1.0));

    vec3 m = max(0.5 - vec3(dot(x0, x0), dot(x12.xy, x12.xy), dot(x12.zw, x12.zw)),
            0.0);
    m = m * m;
    m = m * m;

    // Gradients: 41 points uniformly over a line, mapped onto a diamond.
    // The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)

    vec3 x = 2.0 * fract(p * C.www) - 1.0;
    vec3 h = abs(x) - 0.5;
    vec3 ox = floor(x + 0.5);
    vec3 a0 = x - ox;

    // Normalise gradients implicitly by scaling m
    // Approximation of: m *= inversesqrt( a0*a0 + h*h );
    m *= 1.79284291400159 - 0.85373472095314 * (a0 * a0 + h * h);

    // Compute final noise value at P
    vec3 g;
    g.x = a0.x * x0.x + h.x * x0.y;
    g.yz = a0.yz * x12.xz + h.yz * x12.yw;
    return 130.0 * dot(m, g);
}

// https://www.shadertoy.com/view/lsfGRr
float hifi_hash(float n) {
    return fract(sin(n) * 43758.5453);
}

float hifi_noise(in vec2 x) {
    vec2 p = floor(x);
    vec2 f = fract(x);

    f = f * f * (3.0 - 2.0 * f);

    float n = p.x + p.y * 57.0;

    return mix(mix(hifi_hash(n +  0.0), hifi_hash(n +  1.0), f.x),
               mix(hifi_hash(n + 57.0), hifi_hash(n + 58.0), f.x), f.y);
}

// https://www.shadertoy.com/view/MdX3Rr
// https://en.wikipedia.org/wiki/Fractional_Brownian_motion
float hifi_fbm(in vec2 p) {
    const mat2 m2 = mat2(0.8, -0.6, 0.6, 0.8);
    float f = 0.0;
    f += 0.5000 * hifi_noise(p); p = m2 * p * 2.02;
    f += 0.2500 * hifi_noise(p); p = m2 * p * 2.03;
    f += 0.1250 * hifi_noise(p); p = m2 * p * 2.01;
    f += 0.0625 * hifi_noise(p);

    return f / 0.9375;
}

// // // // Hack comment to absorb the extra '//' scribe prepends

#ifndef PROCEDURAL_SHADER_CONSTANTS_H
#define PROCEDURAL_SHADER_CONSTANTS_H

#define PROCEDURAL_UNIFORM_CUSTOM 220

#define PROCEDURAL_TEXTURE_CHANNEL0 0
#define PROCEDURAL_TEXTURE_CHANNEL1 1
#define PROCEDURAL_TEXTURE_CHANNEL2 2
#define PROCEDURAL_TEXTURE_CHANNEL3 3

// // Hack Comment

#endif // PROCEDURAL_SHADER_CONSTANTS_H

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



LAYOUT(binding=PROCEDURAL_TEXTURE_CHANNEL0) uniform sampler2D iChannel0;
LAYOUT(binding=PROCEDURAL_TEXTURE_CHANNEL1) uniform sampler2D iChannel1;
LAYOUT(binding=PROCEDURAL_TEXTURE_CHANNEL2) uniform sampler2D iChannel2;
LAYOUT(binding=PROCEDURAL_TEXTURE_CHANNEL3) uniform sampler2D iChannel3;

// DO NOT TOUCH
// This block does not follow our normal rules of always using a struct and 
// always using 16 byte aligned types like vec4 and mat4
//
// This is because this block must be EXACTLY how it is in order to maintain
// comptability with existing procedural shaders that previously relied on these 
// inputs as uniforms, not members of a UBO

LAYOUT_STD140(binding=0) uniform standardInputsBuffer {
    // Offset 0
    vec4 date;
    // Offset 16, acts as vec4 for alignment purposes
    vec3 worldPosition;
    // Offset 32, acts as vec4 for alignment purposes (but not packing purposes)
    vec3 worldScale;
    // We need this float here to keep globalTime from getting pulled to offset 44
    float _spare0;
    // Offset 48
    float globalTime;
    // Offset 52
    int frameCount;
    // Offset 56
    vec2 _spare1;
    // Offset 64, acts as vec4[4] for alignment purposes
    vec3 channelResolution[4];
    // Offset 128, acts as vec4[3] for alignment purposes
    // Also, each individual component is aligned as a vec4
    mat3 worldOrientation;
    // Offset 176
    vec4 _spare2;
} standardInputs;

#define iDate standardInputs.date
#define iWorldPosition standardInputs.worldPosition
#define iWorldScale standardInputs.worldScale
#define iGlobalTime standardInputs.globalTime
#define iFrameCount standardInputs.frameCount
#define iChannelResolution standardInputs.channelResolution
#define iWorldOrientation standardInputs.worldOrientation

// Unimplemented uniforms
// Resolution doesn't make sense in the VR context
const vec3 iResolution = vec3(1.0);
// Mouse functions not enabled currently
const vec4 iMouse = vec4(0.0);
// No support for audio input
const float iSampleRate = 1.0;
// No support for video input
const vec4 iChannelTime = vec4(0.0);

#define PROCEDURAL 1

//PROCEDURAL_VERSION

// hack comment for extra whitespace 

#line 1001

//PROCEDURAL_BLOCK_BEGIN

vec3 getProceduralColor() {
    return _color.rgb;
}

float getProceduralColors(inout vec3 diffuse, inout vec3 specular, inout float shininess) {
    return 1.0;
}

//PROCEDURAL_BLOCK_END

#line 2030
void main(void) {
    vec3 normal = normalize(_normalWS.xyz);
    vec3 diffuse = _color.rgb;
    vec3 specular = DEFAULT_SPECULAR;
    float shininess = DEFAULT_SHININESS;
    float emissiveAmount = 0.0;
    
#ifdef PROCEDURAL

#ifdef PROCEDURAL_V1
    diffuse = getProceduralColor().rgb;
    // Procedural Shaders are expected to be Gamma corrected so let's bring back the RGB in linear space for the rest of the pipeline
    //diffuse = pow(diffuse, vec3(2.2));
    emissiveAmount = 1.0;
#else
    emissiveAmount = getProceduralColors(diffuse, specular, shininess);
#endif

#endif

    TransformCamera cam = getTransformCamera();
    vec3 fragPosition = _positionES.xyz;

    if (emissiveAmount > 0.0) {
        _fragColor0 = vec4(diffuse, _color.a);
    } else {
        _fragColor0 = vec4(evalGlobalLightingAlphaBlendedWithHaze(
            cam._viewInverse,
            1.0,
            DEFAULT_OCCLUSION,
            fragPosition,
            normal,
            diffuse,
            DEFAULT_FRESNEL,
            length(specular),
            DEFAULT_EMISSIVE,
            max(0.0, 1.0 - shininess / 128.0), _color.a),
            _color.a);
    }
}
