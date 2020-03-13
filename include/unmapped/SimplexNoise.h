#pragma once



class SimplexNoise {

public:
    static long GRAD3;
    static long SQRT3;
    static long F2;
    static long G2;

    SimplexNoise(Random &); // _ZN12SimplexNoiseC2ER6Random
    void _getValue(Vec2 const&)const; // _ZNK12SimplexNoise9_getValueERK4Vec2
    void _getValue(Vec3 const&)const; // _ZNK12SimplexNoise9_getValueERK4Vec3
    void _add(float *, float, float, int, int, float, float, float)const; // _ZNK12SimplexNoise4_addEPfffiifff
    void _add(float *, Vec3 const&, int, int, int, Vec3 const&, float)const; // _ZNK12SimplexNoise4_addEPfRK4Vec3iiiS3_f
    void _fastFloor(float); // _ZN12SimplexNoise10_fastFloorEf
    void _dot(int const*, float, float); // _ZN12SimplexNoise4_dotEPKiff
    void _dot(int const*, float, float, float); // _ZN12SimplexNoise4_dotEPKifff
};
