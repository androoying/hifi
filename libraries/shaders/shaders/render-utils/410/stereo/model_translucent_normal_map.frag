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
// 
//  Generated on Wed Dec  5 03:19:08 2018
//
//  Created by Olivier Prat on 23/01/2018.
//  Copyright 2018 High Fidelity, Inc.
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
const int MAX_TEXCOORDS = 2;

struct TexMapArray { 
    mat4 _texcoordTransforms0;
    mat4 _texcoordTransforms1;
    vec4 _lightmapParams;
};

// The material values (at least the material key) must be precisely bitwise accurate
// to what is provided by the uniform buffer, or the material key has the wrong bits

struct Material {
    vec4 _emissiveOpacity;
    vec4 _albedoRoughness;
    vec4 _metallicScatteringSpare2;
    vec4 _keySpare3;
};

LAYOUT_STD140(binding=GRAPHICS_BUFFER_MATERIAL) uniform materialBuffer {
    Material _mat;
    TexMapArray _texMapArray;
};

Material getMaterial() {
    return _mat;
}
TexMapArray getTexMapArray() {
    return _texMapArray;
}

vec3 getMaterialEmissive(Material m) { return m._emissiveOpacity.rgb; }
float getMaterialOpacity(Material m) { return m._emissiveOpacity.a; }

vec3 getMaterialAlbedo(Material m) { return m._albedoRoughness.rgb; }
float getMaterialRoughness(Material m) { return m._albedoRoughness.a; }
float getMaterialShininess(Material m) { return 1.0 - getMaterialRoughness(m); }

float getMaterialMetallic(Material m) { return m._metallicScatteringSpare2.x; }
float getMaterialScattering(Material m) { return m._metallicScatteringSpare2.y; }

BITFIELD getMaterialKey(Material m) { return floatBitsToInt(m._keySpare3.x); }

const BITFIELD EMISSIVE_VAL_BIT              = 0x00000001;
const BITFIELD UNLIT_VAL_BIT                 = 0x00000002;
const BITFIELD ALBEDO_VAL_BIT                = 0x00000004;
const BITFIELD METALLIC_VAL_BIT              = 0x00000008;
const BITFIELD GLOSSY_VAL_BIT                = 0x00000010;
const BITFIELD OPACITY_VAL_BIT               = 0x00000020;
const BITFIELD OPACITY_MASK_MAP_BIT          = 0x00000040;
const BITFIELD OPACITY_TRANSLUCENT_MAP_BIT   = 0x00000080;
const BITFIELD SCATTERING_VAL_BIT            = 0x00000100;


const BITFIELD EMISSIVE_MAP_BIT              = 0x00000200;
const BITFIELD ALBEDO_MAP_BIT                = 0x00000400;
const BITFIELD METALLIC_MAP_BIT              = 0x00000800;
const BITFIELD ROUGHNESS_MAP_BIT             = 0x00001000;
const BITFIELD NORMAL_MAP_BIT                = 0x00002000;
const BITFIELD OCCLUSION_MAP_BIT             = 0x00004000;
const BITFIELD LIGHTMAP_MAP_BIT              = 0x00008000;
const BITFIELD SCATTERING_MAP_BIT            = 0x00010000;

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
//  Generated on Wed Dec  5 03:19:08 2018
//
//  Created by Olivier Prat on 15/01/18.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

// Everything about light
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
//  Generated on Wed Dec  5 03:19:08 2018
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

//  Generated on Wed Dec  5 03:19:08 2018
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

//  Generated on Wed Dec  5 03:19:08 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

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

LAYOUT(binding=GRAPHICS_BUFFER_LIGHT) uniform lightBuffer {
    Light lightArray[256];
};
Light getLight(int index) {
    return lightArray[index];
}


void evalLightingPoint(out vec3 diffuse, out vec3 specular, Light light,
    vec4 fragLightDirLen, SurfaceData surface,
    float metallic, vec3 fresnel, vec3 albedo, float shadow
, float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature
) {
    
    // Allright we re valid in the volume
    float fragLightDistance = fragLightDirLen.w;
    vec3 fragLightDir = fragLightDirLen.xyz;

    updateSurfaceDataWithLight(surface, fragLightDir);

    // Eval attenuation
    float radialAttenuation = lightIrradiance_evalLightAttenuation(light.irradiance, fragLightDistance);
    vec3 lightEnergy = radialAttenuation * shadow * getLightIrradiance(light);

    // Eval shading
    evalFragShading(diffuse, specular, metallic, fresnel, surface, albedo
,scattering, midNormalCurvature, lowNormalCurvature
);

    lightEnergy *= isPointEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();

    if (isShowLightContour() > 0.0) {
        // Show edge
        float edge = abs(2.0 * ((lightVolume_getRadius(light.volume) - fragLightDistance) / (0.1)) - 1.0);
        if (edge < 1.0) {
            float edgeCoord = exp2(-8.0*edge*edge);
            diffuse = vec3(edgeCoord * edgeCoord * getLightColor(light));
        }
    }
}


void evalLightingSpot(out vec3 diffuse, out vec3 specular, Light light,
    vec4 fragLightDirLen, float cosSpotAngle, SurfaceData surface,
    float metallic, vec3 fresnel, vec3 albedo, float shadow
, float scattering, vec4 midNormalCurvature, vec4 lowNormalCurvature
) {

    // Allright we re valid in the volume
    float fragLightDistance = fragLightDirLen.w;
    vec3 fragLightDir = fragLightDirLen.xyz;

    updateSurfaceDataWithLight(surface, fragLightDir);

    // Eval attenuation  
    float radialAttenuation = lightIrradiance_evalLightAttenuation(light.irradiance, fragLightDistance);
    float angularAttenuation = lightIrradiance_evalLightSpotAttenuation(light.irradiance, cosSpotAngle);
    vec3 lightEnergy = angularAttenuation * radialAttenuation * shadow *getLightIrradiance(light);

    // Eval shading
    evalFragShading(diffuse, specular, metallic, fresnel, surface, albedo
,scattering, midNormalCurvature, lowNormalCurvature
);
    
    lightEnergy *= isSpotEnabled();
    diffuse *= lightEnergy * isDiffuseEnabled();
    specular *= lightEnergy * isSpecularEnabled();

    if (isShowLightContour() > 0.0) {
        // Show edges
        float edgeDistR = (lightVolume_getRadius(light.volume) - fragLightDistance);
        float edgeDistS = dot(fragLightDistance * vec2(cosSpotAngle, sqrt(1.0 - cosSpotAngle * cosSpotAngle)), -lightVolume_getSpotOutsideNormal2(light.volume));
        float edgeDist = min(edgeDistR, edgeDistS);
        float edge = abs(2.0 * (edgeDist / (0.1)) - 1.0);
        if (edge < 1.0) {
            float edgeCoord = exp2(-8.0*edge*edge);
            diffuse = vec3(edgeCoord * edgeCoord * getLightColor(light));
        }
    }
}



vec4 evalLocalLighting(ivec3 cluster, int numLights, vec3 fragWorldPos, SurfaceData surface,
                       float fragMetallic, vec3 fragFresnel, vec3 fragAlbedo, float fragScattering,  
                       vec4 midNormalCurvature, vec4 lowNormalCurvature, float opacity) {
    vec4 fragColor = vec4(0.0);
    vec3 fragSpecular = vec3(0.0);
    vec3 fragDiffuse = vec3(0.0);
    int lightClusterOffset = cluster.z;

    // Compute the rougness into gloss2 once:
    bool withScattering = (fragScattering * isScatteringEnabled() > 0.0);

    int numLightTouching = 0;
    for (int i = 0; i < cluster.x; i++) {
        // Need the light now
        int theLightIndex = clusterGrid_getClusterLightId(i, lightClusterOffset);
        Light light = getLight(theLightIndex);

        // Clip againgst the light volume and Make the Light vector going from fragment to light center in world space
        vec4 fragLightVecLen2;
        vec4 fragLightDirLen;

        if (!lightVolume_clipFragToLightVolumePoint(light.volume, fragWorldPos.xyz, fragLightVecLen2)) {
            continue;
        }

        // Allright we re in the light sphere volume
        fragLightDirLen.w = length(fragLightVecLen2.xyz);
        fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;
        if (dot(surface.normal, fragLightDirLen.xyz) < 0.0) {
            continue;
        }

        numLightTouching++;

        vec3 diffuse = vec3(1.0);
        vec3 specular = vec3(0.1);

        // Allright we re valid in the volume
        float fragLightDistance = fragLightDirLen.w;
        vec3 fragLightDir = fragLightDirLen.xyz;

        updateSurfaceDataWithLight(surface, fragLightDir);

        // Eval attenuation
        float radialAttenuation = lightIrradiance_evalLightAttenuation(light.irradiance, fragLightDistance);
        vec3 lightEnergy = radialAttenuation * getLightIrradiance(light);

        // Eval shading
        if (withScattering) {
            evalFragShadingScattering(diffuse, specular, fragMetallic, fragFresnel, surface, fragAlbedo,
                                      fragScattering, midNormalCurvature, lowNormalCurvature );
        } else {
           evalFragShadingGloss(diffuse, specular, fragMetallic, fragFresnel, surface, fragAlbedo);
        }

        diffuse *= lightEnergy;
        specular *= lightEnergy;

        fragDiffuse.rgb += diffuse;
        fragSpecular.rgb += specular;
    }

    for (int i = cluster.x; i < numLights; i++) {
        // Need the light now
        int theLightIndex = clusterGrid_getClusterLightId(i, lightClusterOffset);
        Light light = getLight(theLightIndex);

        // Clip againgst the light volume and Make the Light vector going from fragment to light center in world space
        vec4 fragLightVecLen2;
        vec4 fragLightDirLen;
        float cosSpotAngle;

        if (!lightVolume_clipFragToLightVolumePoint(light.volume, fragWorldPos.xyz, fragLightVecLen2)) {
            continue;
        }

        // Allright we re in the light sphere volume
        fragLightDirLen.w = length(fragLightVecLen2.xyz);
        fragLightDirLen.xyz = fragLightVecLen2.xyz / fragLightDirLen.w;
        if (dot(surface.normal, fragLightDirLen.xyz) < 0.0) {
            continue;
        }

        // Check spot
        if (!lightVolume_clipFragToLightVolumeSpotSide(light.volume, fragLightDirLen, cosSpotAngle)) {
            continue;
        }

        numLightTouching++;

        vec3 diffuse = vec3(1.0);
        vec3 specular = vec3(0.1);

        // Allright we re valid in the volume
        float fragLightDistance = fragLightDirLen.w;
        vec3 fragLightDir = fragLightDirLen.xyz;

        updateSurfaceDataWithLight(surface, fragLightDir);

        // Eval attenuation
        float radialAttenuation = lightIrradiance_evalLightAttenuation(light.irradiance, fragLightDistance);
        float angularAttenuation = lightIrradiance_evalLightSpotAttenuation(light.irradiance, cosSpotAngle);
        vec3 lightEnergy = radialAttenuation * angularAttenuation * getLightIrradiance(light);

        // Eval shading
        if (withScattering) {
            evalFragShadingScattering(diffuse, specular, fragMetallic, fragFresnel, surface, fragAlbedo,
                                      fragScattering, midNormalCurvature, lowNormalCurvature );
        } else {
           evalFragShadingGloss(diffuse, specular, fragMetallic, fragFresnel, surface, fragAlbedo);
        }

        diffuse *= lightEnergy;
        specular *= lightEnergy;

        fragDiffuse.rgb += diffuse;
        fragSpecular.rgb += specular;
    }

    fragDiffuse *= isDiffuseEnabled();
    fragSpecular *= isSpecularEnabled();

    fragColor.rgb += fragDiffuse;
    fragColor.rgb += evalSpecularWithOpacity(fragSpecular, opacity);
    return fragColor;
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



//  Generated on Wed Dec  5 03:19:08 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html

// // // Hack Comment
//  Generated on Wed Dec  5 03:19:08 2018
//
//  Created by Sam Gateau on 7/5/16.
//  Copyright 2016 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

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



#define TAA_TEXTURE_LOD_BIAS    -1.0

#ifdef GPU_TEXTURE_TABLE_BINDLESS
#define GPU_TEXTURE_TABLE_MAX_NUM_TEXTURES 8

struct GPUTextureTable {
    uvec4 _textures[GPU_TEXTURE_TABLE_MAX_NUM_TEXTURES];
};

#define TextureTable(index, name) layout (std140) uniform gpu_resourceTextureTable##index { GPUTextureTable name; }

#define tableTex(name, slot) sampler2D(name._textures[slot].xy)
#define tableTexMinLod(name, slot) float(name._textures[slot].z)

#define tableTexValue(name, slot, uv) tableTexValueLod(tableTex(matTex, slot), tableTexMinLod(matTex, slot), uv)
    
vec4 tableTexValueLod(sampler2D sampler, float minLod, vec2 uv) {
    float queryLod = textureQueryLod(sampler, uv).x;
    queryLod = max(minLod, queryLod);
    return textureLod(sampler, uv, queryLod);
}
 
#else

#endif

#ifdef GPU_TEXTURE_TABLE_BINDLESS

TextureTable(0, matTex);
#define albedoMap 0
vec4 fetchAlbedoMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, albedoMap, uv);
}
#define roughnessMap 4
float fetchRoughnessMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, roughnessMap, uv).r;
}
#define normalMap 1
vec3 fetchNormalMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, normalMap, uv).xyz;
}
#define metallicMap 2
float fetchMetallicMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, metallicMap, uv).r;
}
#define emissiveMap 3
vec3 fetchEmissiveMap(vec2 uv) {
    // Should take into account TAA_TEXTURE_LOD_BIAS?
    return tableTexValue(matTex, emissiveMap, uv).rgb;
}
#define occlusionMap 5
float fetchOcclusionMap(vec2 uv) {
    return tableTexValue(matTex, occlusionMap, uv).r;
}
#else

LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_ALBEDO) uniform sampler2D albedoMap;
vec4 fetchAlbedoMap(vec2 uv) {
    return texture(albedoMap, uv, TAA_TEXTURE_LOD_BIAS);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_ROUGHNESS) uniform sampler2D roughnessMap;
float fetchRoughnessMap(vec2 uv) {
    return (texture(roughnessMap, uv, TAA_TEXTURE_LOD_BIAS).r);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_NORMAL) uniform sampler2D normalMap;
vec3 fetchNormalMap(vec2 uv) {
    // unpack normal, swizzle to get into hifi tangent space with Y axis pointing out
    vec2 t = 2.0 * (texture(normalMap, uv, TAA_TEXTURE_LOD_BIAS).rg - vec2(0.5, 0.5));
    vec2 t2 = t*t;
    return vec3(t.x, sqrt(1.0 - t2.x - t2.y), t.y);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_METALLIC) uniform sampler2D metallicMap;
float fetchMetallicMap(vec2 uv) {
    return (texture(metallicMap, uv, TAA_TEXTURE_LOD_BIAS).r);
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_EMISSIVE_LIGHTMAP) uniform sampler2D emissiveMap;
vec3 fetchEmissiveMap(vec2 uv) {
    return texture(emissiveMap, uv, TAA_TEXTURE_LOD_BIAS).rgb;
}
LAYOUT(binding=GRAPHICS_TEXTURE_MATERIAL_OCCLUSION) uniform sampler2D occlusionMap;
float fetchOcclusionMap(vec2 uv) {
    return texture(occlusionMap, uv).r;
}
#endif



layout(location=RENDER_UTILS_ATTR_TEXCOORD01) in vec4 _texCoord01;
#define _texCoord0 _texCoord01.xy
#define _texCoord1 _texCoord01.zw
layout(location=RENDER_UTILS_ATTR_POSITION_ES) in vec4 _positionES;
layout(location=RENDER_UTILS_ATTR_POSITION_WS) in vec4 _positionWS;
layout(location=RENDER_UTILS_ATTR_NORMAL_WS) in vec3 _normalWS;
layout(location=RENDER_UTILS_ATTR_TANGENT_WS) in vec3 _tangentWS;
layout(location=RENDER_UTILS_ATTR_COLOR) in vec4 _color;

layout(location=0) out vec4 _fragColor;

void main(void) {
    Material mat = getMaterial();
    int matKey = getMaterialKey(mat);
    vec4 albedoTex = (((matKey & (ALBEDO_MAP_BIT | OPACITY_MASK_MAP_BIT | OPACITY_TRANSLUCENT_MAP_BIT)) != 0) ? fetchAlbedoMap(_texCoord0) : vec4(1.0));
float roughnessTex = (((matKey & ROUGHNESS_MAP_BIT) != 0) ? fetchRoughnessMap(_texCoord0) : 1.0);
vec3 normalTex = (((matKey & NORMAL_MAP_BIT) != 0) ? fetchNormalMap(_texCoord0) : vec3(0.0, 1.0, 0.0));
float metallicTex = (((matKey & METALLIC_MAP_BIT) != 0) ? fetchMetallicMap(_texCoord0) : 0.0);
vec3 emissiveTex = (((matKey & EMISSIVE_MAP_BIT) != 0) ? fetchEmissiveMap(_texCoord0) : vec3(0.0));

    float occlusionTex = (((matKey & OCCLUSION_MAP_BIT) != 0) ? fetchOcclusionMap(_texCoord1) : 1.0);


    float opacity = getMaterialOpacity(mat) * _color.a;
    {
    const float OPACITY_MASK_THRESHOLD = 0.5;
    opacity = (((matKey & (OPACITY_TRANSLUCENT_MAP_BIT | OPACITY_MASK_MAP_BIT)) != 0) ?
                     (((matKey & OPACITY_MASK_MAP_BIT) != 0) ? step(OPACITY_MASK_THRESHOLD, albedoTex.a) : albedoTex.a) :
                     1.0) * opacity;
}
;
    {
    if (opacity < 1.e-6) {
        discard;
    }
}
;

    vec3 albedo = getMaterialAlbedo(mat);
    {
    albedo.xyz = (((matKey & ALBEDO_VAL_BIT) != 0) ? albedo : vec3(1.0));

    if (((matKey & ALBEDO_MAP_BIT) != 0)) {
        albedo.xyz *= albedoTex.xyz;
    }
}
;
    albedo *= _color.rgb;

    float roughness = getMaterialRoughness(mat);
    {
    roughness = (((matKey & ROUGHNESS_MAP_BIT) != 0) ? roughnessTex : roughness);
}
;

    float metallic = getMaterialMetallic(mat);
    {
    metallic = (((matKey & METALLIC_MAP_BIT) != 0) ? metallicTex : metallic);
}
;

    vec3 fresnel = getFresnelF0(metallic, albedo);

    vec3 emissive = getMaterialEmissive(mat);
    {
    emissive = (((matKey & EMISSIVE_MAP_BIT) != 0) ? emissiveTex : emissive);
}
;

    float occlusion = DEFAULT_OCCLUSION;
    {
    occlusion = occlusionTex;
}
;

    vec3 fragPositionES = _positionES.xyz;
    vec3 fragPositionWS = _positionWS.xyz;
    // Lighting is done in world space
    vec3 fragNormalWS;
    {
    vec3 normalizedNormal = normalize(_normalWS.xyz);
    vec3 normalizedTangent = normalize(_tangentWS.xyz);
    vec3 normalizedBitangent = cross(normalizedNormal, normalizedTangent);
    // attenuate the normal map divergence from the mesh normal based on distance
    // The attenuation range [30,100] meters from the eye is arbitrary for now
    vec3 localNormal = mix(normalTex, vec3(0.0, 1.0, 0.0), smoothstep(30.0, 100.0, (-_positionES).z));
    fragNormalWS = vec3(normalizedBitangent * localNormal.x + normalizedNormal * localNormal.y + normalizedTangent * localNormal.z);
}


    TransformCamera cam = getTransformCamera();
    vec3 fragToEyeWS = cam._viewInverse[3].xyz - fragPositionWS;
    vec3 fragToEyeDirWS = normalize(fragToEyeWS);
    SurfaceData surfaceWS = initSurfaceData(roughness, normalize(fragNormalWS), fragToEyeDirWS);

    vec4 localLighting = vec4(0.0);
    // From frag world pos find the cluster
    vec4 clusterEyePos = frustumGrid_worldToEye(_positionWS);
    ivec3 clusterPos = frustumGrid_eyeToClusterPos(clusterEyePos.xyz);

    ivec3 cluster = clusterGrid_getCluster(frustumGrid_clusterToIndex(clusterPos));
    int numLights = cluster.x + cluster.y;
    ivec3 dims = frustumGrid.dims.xyz;

;
    if (hasLocalLights(numLights, clusterPos, dims)) {
        localLighting = evalLocalLighting(cluster, numLights, fragPositionWS, surfaceWS,
                                          metallic, fresnel, albedo, 0.0,
                                          vec4(0), vec4(0), opacity);
    }

    _fragColor =  vec4(evalGlobalLightingAlphaBlendedWithHaze(
        cam._viewInverse,
        1.0,
        occlusion,
        fragPositionES,
        fragPositionWS,
        albedo,
        fresnel,
        metallic,
        emissive,
        surfaceWS, opacity, localLighting.rgb),
        opacity);
}
