#version 410

struct DeferredFrameTransform
{
    vec4 _pixelInfo;
    vec4 _invPixelInfo;
    vec4 _depthInfo;
    vec4 _stereoInfo;
    mat4 _projection[2];
    mat4 _invProjection[2];
    mat4 _projectionMono;
    mat4 _viewInverse;
    mat4 _view;
    mat4 _projectionUnJittered[2];
    mat4 _invProjectionUnJittered[2];
};

struct TAAParams
{
    float none;
    float blend;
    float covarianceGamma;
    float debugShowVelocityThreshold;
    ivec4 flags;
    vec4 pixelInfo_orbZoom;
    vec4 regionInfo;
};

layout(std140) uniform deferredFrameTransformBuffer
{
    DeferredFrameTransform frameTransform;
} _77;

layout(std140) uniform taaParamsBuffer
{
    TAAParams params;
} _110;

uniform sampler2D depthMap;
uniform sampler2D nextMap;
uniform sampler2D velocityMap;
uniform sampler2D historyMap;

layout(location = 0) in vec2 varTexCoord0;
layout(location = 0) out vec4 outFragColor;

float _1836;

void main()
{
    vec4 _466 = texture(nextMap, varTexCoord0);
    vec3 _467 = _466.xyz;
    vec4 _474 = vec4(_466.xyz, 1.0);
    outFragColor = _474;
    vec2 _927 = vec2(ivec2(_77.frameTransform._pixelInfo.zw) >> ivec2(0));
    vec2 _489 = varTexCoord0 * _927;
    vec4 _495 = texture(velocityMap, varTexCoord0);
    vec2 _497 = _927 * _495.xy;
    bool _955 = _77.frameTransform._stereoInfo.x > 0.0;
    vec2 _1736;
    int _1737;
    if (_955)
    {
        bool _940 = varTexCoord0.x > 0.5;
        vec2 _1735;
        if (_940)
        {
            vec2 _1693 = varTexCoord0;
            _1693.x = varTexCoord0.x - 0.5;
            _1735 = _1693;
        }
        else
        {
            _1735 = varTexCoord0;
        }
        vec2 _1696 = _1735;
        _1696.x = _1735.x * 2.0;
        _1737 = int(_940);
        _1736 = _1696;
    }
    else
    {
        _1737 = 0;
        _1736 = varTexCoord0;
    }
    vec2 _513 = _1736 - (_497 * _77.frameTransform._invPixelInfo.xy);
    vec2 _1739;
    if (_955)
    {
        vec2 _1702 = _513;
        _1702.x = (_513.x * 0.5) + (float(_1737) * 0.5);
        _1739 = _1702;
    }
    else
    {
        _1739 = _513;
    }
    bool _1774;
    if ((_110.params.flags.x & 2) != int(0u))
    {
        vec2 _544 = _110.params.pixelInfo_orbZoom.xy * _927;
        vec4 _548 = texture(velocityMap, _110.params.pixelInfo_orbZoom.xy);
        vec2 _549 = _548.xy;
        vec2 _1741;
        if (_955)
        {
            vec2 _1740;
            if (_110.params.pixelInfo_orbZoom.x > 0.5)
            {
                vec2 _1706 = _110.params.pixelInfo_orbZoom.xy;
                _1706.x = _110.params.pixelInfo_orbZoom.x - 0.5;
                _1740 = _1706;
            }
            else
            {
                _1740 = _110.params.pixelInfo_orbZoom.xy;
            }
            vec2 _1709 = _1740;
            _1709.x = _1740.x * 2.0;
            _1741 = _1709;
        }
        else
        {
            _1741 = _110.params.pixelInfo_orbZoom.xy;
        }
        vec2 _557 = _1741 - _549;
        vec2 _560 = _549 * _927;
        float _563 = length(_560);
        vec2 _568 = _560 / vec2(_563);
        vec2 _572 = _489 - _544;
        float _575 = length(_572);
        bool _1757;
        if (_575 <= _563)
        {
            bool _596 = dot(_568, _572) < 0.0;
            bool _604;
            if (_596)
            {
                _604 = abs(dot(vec2(_568.y, -_568.x), _572)) < 1.0;
            }
            else
            {
                _604 = _596;
            }
            if (_604)
            {
                float _1281 = (_575 / _110.params.debugShowVelocityThreshold) * 5.0;
                vec3 _1751;
                if (_1281 < 0.0)
                {
                    _1751 = vec3(1.0, 0.0, 0.0);
                }
                else
                {
                    vec3 _1752;
                    if (_1281 < 1.0)
                    {
                        _1752 = vec3(1.0, _1281, 0.0);
                    }
                    else
                    {
                        vec3 _1753;
                        if (_1281 < 2.0)
                        {
                            _1753 = vec3(2.0 - _1281, 1.0, 0.0);
                        }
                        else
                        {
                            vec3 _1754;
                            if (_1281 < 3.0)
                            {
                                _1754 = vec3(0.0, 1.0, _1281 - 2.0);
                            }
                            else
                            {
                                vec3 _1755;
                                if (_1281 < 4.0)
                                {
                                    _1755 = vec3(0.0, 4.0 - _1281, 1.0);
                                }
                                else
                                {
                                    vec3 _1756;
                                    if (_1281 < 5.0)
                                    {
                                        _1756 = vec3(_1281 - 4.0, 0.0, 1.0);
                                    }
                                    else
                                    {
                                        _1756 = vec3(1.0, 0.0, 1.0);
                                    }
                                    _1755 = _1756;
                                }
                                _1754 = _1755;
                            }
                            _1753 = _1754;
                        }
                        _1752 = _1753;
                    }
                    _1751 = _1752;
                }
                outFragColor = vec4(_1751, 1.0);
            }
            _1757 = _604 ? true : false;
        }
        else
        {
            _1757 = false;
        }
        bool _1775;
        if (!_1757)
        {
            float _621 = 0.100000001490116119384765625 * _927.y;
            vec2 _645 = _489 - (_544 - ((_568 * 2.0) * _621));
            float _648 = length(_645);
            float _651 = 2.0 / _110.params.pixelInfo_orbZoom.z;
            bool _657 = (_648 < _621) && (_563 > 0.5);
            if (_657)
            {
                vec2 _668 = _557 + ((_645 * _77.frameTransform._invPixelInfo.xy) / vec2(_110.params.pixelInfo_orbZoom.z));
                bool _675 = any(lessThan(_668, vec2(0.0)));
                bool _683;
                if (!_675)
                {
                    _683 = any(greaterThan(_668, vec2(1.0)));
                }
                else
                {
                    _683 = _675;
                }
                vec3 _1767;
                if (!_683)
                {
                    _1767 = texture(historyMap, _668).xyz;
                }
                else
                {
                    _1767 = vec3(0.0);
                }
                bvec3 _1840 = bvec3(_648 < _651);
                vec3 _1841 = vec3(_1840.x ? vec3(1.0, 0.0, 1.0).x : _1767.x, _1840.y ? vec3(1.0, 0.0, 1.0).y : _1767.y, _1840.z ? vec3(1.0, 0.0, 1.0).z : _1767.z);
                bvec3 _1842 = bvec3(length(_927 * (_110.params.pixelInfo_orbZoom.xy - _668)) < _651);
                outFragColor = vec4(vec3(_1842.x ? vec3(1.0, 0.5, 0.0).x : _1841.x, _1842.y ? vec3(1.0, 0.5, 0.0).y : _1841.y, _1842.z ? vec3(1.0, 0.5, 0.0).z : _1841.z), 1.0);
            }
            bool _1844 = _657 ? true : _1757;
            bool _1776;
            if (!_1844)
            {
                bool _718 = _575 < _621;
                if (_718)
                {
                    vec2 _729 = _110.params.pixelInfo_orbZoom.xy + ((_572 * _77.frameTransform._invPixelInfo.xy) / vec2(_110.params.pixelInfo_orbZoom.z));
                    bool _733 = any(lessThan(_729, vec2(0.0)));
                    bool _740;
                    if (!_733)
                    {
                        _740 = any(greaterThan(_729, vec2(1.0)));
                    }
                    else
                    {
                        _740 = _733;
                    }
                    vec3 _1772;
                    if (!_740)
                    {
                        _1772 = texture(nextMap, _729).xyz;
                    }
                    else
                    {
                        _1772 = vec3(0.0);
                    }
                    bvec3 _1845 = bvec3(length(_927 * (_557 - _729)) < _651);
                    vec3 _1846 = vec3(_1845.x ? vec3(1.0, 0.0, 1.0).x : _1772.x, _1845.y ? vec3(1.0, 0.0, 1.0).y : _1772.y, _1845.z ? vec3(1.0, 0.0, 1.0).z : _1772.z);
                    bvec3 _1847 = bvec3(_575 < _651);
                    outFragColor = vec4(vec3(_1847.x ? vec3(1.0, 0.5, 0.0).x : _1846.x, _1847.y ? vec3(1.0, 0.5, 0.0).y : _1846.y, _1847.z ? vec3(1.0, 0.5, 0.0).z : _1846.z), 1.0);
                }
                _1776 = _718 ? true : _1844;
            }
            else
            {
                _1776 = _1844;
            }
            _1775 = _1776;
        }
        else
        {
            _1775 = _1757;
        }
        _1774 = _1775;
    }
    else
    {
        _1774 = false;
    }
    if (!_1774)
    {
        float _777 = varTexCoord0.x - _110.params.regionInfo.x;
        float _783 = varTexCoord0.x - _110.params.regionInfo.z;
        bool _1850 = ((_783 < 0.0) && (_777 > 0.0)) ? true : _1774;
        if (!_1850)
        {
            bool _796 = abs(_777) < _77.frameTransform._invPixelInfo.x;
            bool _805;
            if (!_796)
            {
                _805 = abs(_783) < _77.frameTransform._invPixelInfo.x;
            }
            else
            {
                _805 = _796;
            }
            if (_805)
            {
                outFragColor = vec4(vec3(1.0, 1.0, 0.0).x, vec3(1.0, 1.0, 0.0).y, vec3(1.0, 1.0, 0.0).z, outFragColor.w);
            }
            bool _1851 = _805 ? true : _1850;
            if (!_1851)
            {
                bool _1852 = (_783 > 0.0) ? true : _1851;
                if (!_1852)
                {
                    bool _1363 = (_110.params.flags.x & 8) != int(0u);
                    if (_1363)
                    {
                        vec2 _1782;
                        if (_955)
                        {
                            vec2 _1715 = _77.frameTransform._invPixelInfo.xy;
                            _1715.x = _77.frameTransform._invPixelInfo.x * 0.5;
                            _1782 = _1715;
                        }
                        else
                        {
                            _1782 = _77.frameTransform._invPixelInfo.xy;
                        }
                        vec2 _1388 = abs(_1782);
                        vec2 _1391 = vec2(_1388.x, 0.0);
                        vec2 _1394 = vec2(0.0, _1388.y);
                        vec2 _1397 = varTexCoord0 - _1394;
                        float _1549 = -texture(depthMap, _1397 - _1391, 0.0).x;
                        vec3 _1401 = vec3(-1.0, -1.0, _1549);
                        float _1558 = -texture(depthMap, _1397, 0.0).x;
                        vec3 _1406 = vec3(0.0, -1.0, _1558);
                        float _1567 = -texture(depthMap, _1397 + _1391, 0.0).x;
                        vec3 _1413 = vec3(1.0, -1.0, _1567);
                        float _1576 = -texture(depthMap, varTexCoord0 - _1391, 0.0).x;
                        vec3 _1418 = vec3(-1.0, 0.0, _1576);
                        float _1585 = -texture(depthMap, varTexCoord0, 0.0).x;
                        vec3 _1421 = vec3(0.0, 0.0, _1585);
                        float _1594 = -texture(depthMap, varTexCoord0 + _1391, 0.0).x;
                        vec3 _1426 = vec3(1.0, 0.0, _1594);
                        vec2 _1429 = varTexCoord0 + _1394;
                        float _1603 = -texture(depthMap, _1429 - _1391, 0.0).x;
                        vec3 _1433 = vec3(-1.0, 1.0, _1603);
                        float _1612 = -texture(depthMap, _1429, 0.0).x;
                        vec3 _1438 = vec3(0.0, 1.0, _1612);
                        float _1621 = -texture(depthMap, _1429 + _1391, 0.0).x;
                        vec3 _1445 = vec3(1.0, 1.0, _1621);
                        bvec3 _1853 = bvec3(_1549 > _1558);
                        vec3 _1854 = vec3(_1853.x ? _1406.x : _1401.x, _1853.y ? _1406.y : _1401.y, _1853.z ? _1406.z : _1401.z);
                        bvec3 _1855 = bvec3(_1854.z > _1567);
                        vec3 _1856 = vec3(_1855.x ? _1413.x : _1854.x, _1855.y ? _1413.y : _1854.y, _1855.z ? _1413.z : _1854.z);
                        bvec3 _1857 = bvec3(_1856.z > _1576);
                        vec3 _1858 = vec3(_1857.x ? _1418.x : _1856.x, _1857.y ? _1418.y : _1856.y, _1857.z ? _1418.z : _1856.z);
                        bvec3 _1859 = bvec3(_1858.z > _1585);
                        vec3 _1860 = vec3(_1859.x ? _1421.x : _1858.x, _1859.y ? _1421.y : _1858.y, _1859.z ? _1421.z : _1858.z);
                        bvec3 _1861 = bvec3(_1860.z > _1594);
                        vec3 _1862 = vec3(_1861.x ? _1426.x : _1860.x, _1861.y ? _1426.y : _1860.y, _1861.z ? _1426.z : _1860.z);
                        bvec3 _1863 = bvec3(_1862.z > _1603);
                        vec3 _1864 = vec3(_1863.x ? _1433.x : _1862.x, _1863.y ? _1433.y : _1862.y, _1863.z ? _1433.z : _1862.z);
                        bvec3 _1865 = bvec3(_1864.z > _1612);
                        vec3 _1866 = vec3(_1865.x ? _1438.x : _1864.x, _1865.y ? _1438.y : _1864.y, _1865.z ? _1438.z : _1864.z);
                        bvec3 _1867 = bvec3(_1866.z > _1621);
                        outFragColor = vec4((((vec3(varTexCoord0 + (_1388 * vec3(_1867.x ? _1445.x : _1866.x, _1867.y ? _1445.y : _1866.y, _1867.z ? _1445.z : _1866.z).xy), _1836).xy - varTexCoord0) * _927) * 0.5) + vec2(0.5), 0.0, 1.0);
                    }
                    if (!(_1363 ? true : _1852))
                    {
                        outFragColor = _474;
                        bvec2 _844 = lessThan(_1739, vec2(0.0));
                        bool _845 = any(_844);
                        bool _852;
                        if (!_845)
                        {
                            _852 = any(greaterThan(_1739, vec2(1.0)));
                        }
                        else
                        {
                            _852 = _845;
                        }
                        vec3 _1832;
                        if (!_852)
                        {
                            _1832 = texture(historyMap, _1739).xyz;
                        }
                        else
                        {
                            _1832 = _467;
                        }
                        vec3 _868 = mix(_1832, vec3(1.0, 0.0, 1.0), vec3(clamp(distance(_1832, _467) - 0.00999999977648258209228515625, 0.0, 1.0)));
                        outFragColor = vec4(_868.x, _868.y, _868.z, outFragColor.w);
                        if (length(_497) > _110.params.debugShowVelocityThreshold)
                        {
                            outFragColor = vec4(0.0, 1.0, 1.0, 1.0);
                        }
                    }
                }
            }
        }
    }
}

