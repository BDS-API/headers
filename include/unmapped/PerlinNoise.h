#pragma once



class PerlinNoise {

public:
    void _init(Random &); // _ZN11PerlinNoise5_initER6Random
    ~PerlinNoise(); // _ZN11PerlinNoiseD2Ev
    PerlinNoise(int); // _ZN11PerlinNoiseC2Ei
    PerlinNoise(unsigned int, int, int); // _ZN11PerlinNoiseC2Ejii
    PerlinNoise(Random &, int, int); // _ZN11PerlinNoiseC2ER6Randomii
    void getValue(Vec3 const&)const; // _ZNK11PerlinNoise8getValueERK4Vec3
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const; // _ZNK11PerlinNoise9getRegionEPfRK4Vec3iiiS3_
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float)const; // _ZNK11PerlinNoise9getRegionEPfRK4Vec2iiS3_f
    void hashCode()const; // _ZNK11PerlinNoise8hashCodeEv
};
