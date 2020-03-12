#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


class SimplexNoise {

public:
    static long GRAD3;
    static long SQRT3;
    static long F2;
    static long G2;

    void _add(float *, float, float, int, int, float, float, float)const;
    void _dot(int const*, float, float);
    void _fastFloor(float);
    SimplexNoise(Random &);
    void _add(float *, Vec3 const&, int, int, int, Vec3 const&, float)const;
    void _getValue(Vec2 const&)const;
    void _dot(int const*, float, float, float);
    void _getValue(Vec3 const&)const;
};
