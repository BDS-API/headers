#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec2.h"


class PerlinSimplexNoise {

public:

    PerlinSimplexNoise(unsigned int, int);
    void _init(Random &);
    PerlinSimplexNoise(Random &, int);
    ~PerlinSimplexNoise();
    void getValue(float, float)const;
    void getValueNormalized(float, float)const;
    void getValueNormalized(Vec3 const&)const;
    void getValue(Vec3 const&)const;
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float, float)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
};
