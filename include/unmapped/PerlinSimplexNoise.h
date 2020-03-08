#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Vec2"


class PerlinSimplexNoise {

public:

    PerlinSimplexNoise(unsigned int, int);
    void _init(Random &);
    PerlinSimplexNoise(Random &, int);
    void getValue(float, float)const;
    void getValueNormalized(float, float)const;
    void getValueNormalized(Vec3 const&)const;
    void getValue(Vec3 const&)const;
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float, float)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
};
