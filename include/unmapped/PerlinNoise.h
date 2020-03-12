#pragma once



class PerlinNoise {

public:
    void getValue(Vec3 const&)const;
    void hashCode()const;
    ~PerlinNoise();
    PerlinNoise(Random &, int, int);
    PerlinNoise(int);
    PerlinNoise(unsigned int, int, int);
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
    void _init(Random &);
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float)const;
};
