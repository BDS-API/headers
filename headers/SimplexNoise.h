#pragma once

class SimplexNoise {

public:
    static long SimplexNoise::GRAD3;
    static long SimplexNoise::SQRT3;
    static long SimplexNoise::F2;
    static long SimplexNoise::G2;


    void SimplexNoise(Random &);
    void _getValue(Vec2 const&)const;
    void _getValue(Vec3 const&)const;
    void _add(float *, float, float, int, int, float, float, float)const;
    void _add(float *, Vec3 const&, int, int, int, Vec3 const&, float)const;
    void _fastFloor(float);
    void _dot(int const*, float, float);
    void _dot(int const*, float, float, float);
};
