#pragma once



class RopePoints {

public:
    RopePoints(); // _ZN10RopePointsC2Ev
    ~RopePoints(); // _ZN10RopePointsD2Ev
    void size()const; // _ZNK10RopePoints4sizeEv
    void beginRope(); // _ZN10RopePoints9beginRopeEv
    void endRope(); // _ZN10RopePoints7endRopeEv
    void pushBack(Vec3 const&); // _ZN10RopePoints8pushBackERK4Vec3
    void getInterpolated(unsigned long, float)const; // _ZNK10RopePoints15getInterpolatedEmf
    void reserve(unsigned long); // _ZN10RopePoints7reserveEm
    void freezeInterpolation(); // _ZN10RopePoints19freezeInterpolationEv
};
