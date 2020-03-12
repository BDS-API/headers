#pragma once

#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


class ImprovedNoise {

public:
    ImprovedNoise();
    void _blendCubeCorners(Vec3 const&, int, int, int, float, float &, float &, float &, float &)const;
    void _getValue(Vec3 const&)const;
    void _readArea(float *, Vec3 const&, int, int, int, Vec3 const&, float)const;
    void _calcValues(float, int &, float &);
    void _init(Random &);
    ImprovedNoise(Random &);
    void _hashCode()const;
    void _lerp(float, float, float);
    void _grad2(int, float, float);
    void _noise(Vec3 const&)const;
    void _grad(int, Vec3 const&);
};
