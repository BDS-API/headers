#pragma once



class PerlinSimplexNoise {

public:
    PerlinSimplexNoise(unsigned int, int); // _ZN18PerlinSimplexNoiseC2Eji
    void _init(Random &); // _ZN18PerlinSimplexNoise5_initER6Random
    PerlinSimplexNoise(Random &, int); // _ZN18PerlinSimplexNoiseC2ER6Randomi
    ~PerlinSimplexNoise(); // _ZN18PerlinSimplexNoiseD2Ev
    void getValue(float, float)const; // _ZNK18PerlinSimplexNoise8getValueEff
    void getValueNormalized(float, float)const; // _ZNK18PerlinSimplexNoise18getValueNormalizedEff
    void getValueNormalized(Vec3 const&)const; // _ZNK18PerlinSimplexNoise18getValueNormalizedERK4Vec3
    void getValue(Vec3 const&)const; // _ZNK18PerlinSimplexNoise8getValueERK4Vec3
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float, float)const; // _ZNK18PerlinSimplexNoise9getRegionEPfRK4Vec2iiS3_ff
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const; // _ZNK18PerlinSimplexNoise9getRegionEPfRK4Vec3iiiS3_
};
