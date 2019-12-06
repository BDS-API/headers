#pragma once

class RopePoints {

public:

    void RopePoints(void);
    void size(void)const;
    void beginRope(void);
    void endRope(void);
    void pushBack(Vec3 const&);
    void getInterpolated(unsigned long, float)const;
    void reserve(unsigned long);
    void freezeInterpolation(void);
};
