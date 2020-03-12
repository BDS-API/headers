#pragma once



class ImprovedNoise {

public:
    void _grad(int, Vec3 const&);
    void _init(Random &);
    void _blendCubeCorners(Vec3 const&, int, int, int, float, float &, float &, float &, float &)const;
    void _noise(Vec3 const&)const;
    ImprovedNoise();
    void _lerp(float, float, float);
    void _grad2(int, float, float);
    void _readArea(float *, Vec3 const&, int, int, int, Vec3 const&, float)const;
    void _hashCode()const;
    void _getValue(Vec3 const&)const;
    void _calcValues(float, int &, float &);
    ImprovedNoise(Random &);
};
