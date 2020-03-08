#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Vec2"


class SimplexNoise {

public:
    static long GRAD3;
    static long SQRT3;
    static long F2;
    static long G2;


    SimplexNoise(Random &);
    void _getValue(Vec2 const&)const;
    void _getValue(Vec3 const&)const;
    void _add(float *, float, float, int, int, float, float, float)const;
    void _add(float *, Vec3 const&, int, int, int, Vec3 const&, float)const;
    void _fastFloor(float);
    void _dot(int const*, float, float);
    void _dot(int const*, float, float, float);
};
