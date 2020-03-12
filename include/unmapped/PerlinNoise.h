#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


class PerlinNoise {

public:
    void getValue(Vec3 const&)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
    PerlinNoise(unsigned int, int, int);
    ~PerlinNoise();
    PerlinNoise(int);
    void _init(Random &);
    void hashCode()const;
    PerlinNoise(Random &, int, int);
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float)const;
};
