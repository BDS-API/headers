#pragma once



class RopePoints {

public:
    void endRope();
    void freezeInterpolation();
    void getInterpolated(unsigned long, float)const;
    void reserve(unsigned long);
    ~RopePoints();
    RopePoints();
    void size()const;
    void beginRope();
    void pushBack(Vec3 const&);
};
