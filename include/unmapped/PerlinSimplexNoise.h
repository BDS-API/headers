#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


class PerlinSimplexNoise {

public:
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float, float)const;
    PerlinSimplexNoise(Random &, int);
    PerlinSimplexNoise(unsigned int, int);
    void getValue(Vec3 const&)const;
    void getValueNormalized(Vec3 const&)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
    ~PerlinSimplexNoise();
    void _init(Random &);
    void getValue(float, float)const;
    void getValueNormalized(float, float)const;
};
