#pragma once



class PerlinSimplexNoise {

public:
    void getValueNormalized(float, float)const;
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float, float)const;
    PerlinSimplexNoise(unsigned int, int);
    void getValueNormalized(Vec3 const&)const;
    void getValue(Vec3 const&)const;
    PerlinSimplexNoise(Random &, int);
    ~PerlinSimplexNoise();
    void getValue(float, float)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
    void _init(Random &);
};
