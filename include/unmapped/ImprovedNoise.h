#pragma once



class ImprovedNoise {

public:
    ImprovedNoise(); // _ZN13ImprovedNoiseC2Ev
    void _init(Random &); // _ZN13ImprovedNoise5_initER6Random
    ImprovedNoise(Random &); // _ZN13ImprovedNoiseC2ER6Random
    void _noise(Vec3 const&)const; // _ZNK13ImprovedNoise6_noiseERK4Vec3
    void _calcValues(float, int &, float &); // _ZN13ImprovedNoise11_calcValuesEfRiRf
    void _blendCubeCorners(Vec3 const&, int, int, int, float, float &, float &, float &, float &)const; // _ZNK13ImprovedNoise17_blendCubeCornersERK4Vec3iiifRfS3_S3_S3_
    void _lerp(float, float, float); // _ZN13ImprovedNoise5_lerpEfff
    void _grad2(int, float, float); // _ZN13ImprovedNoise6_grad2Eiff
    void _grad(int, Vec3 const&); // _ZN13ImprovedNoise5_gradEiRK4Vec3
    void _getValue(Vec3 const&)const; // _ZNK13ImprovedNoise9_getValueERK4Vec3
    void _readArea(float *, Vec3 const&, int, int, int, Vec3 const&, float)const; // _ZNK13ImprovedNoise9_readAreaEPfRK4Vec3iiiS3_f
    void _hashCode()const; // _ZNK13ImprovedNoise9_hashCodeEv
};
