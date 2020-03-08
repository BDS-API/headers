#pragma once

#include "../bedrock/util/Vec3"


class RopePoints {

public:

    RopePoints(void);
    void size()const;
    void beginRope();
    void endRope();
    void pushBack(Vec3 const&);
    void getInterpolated(unsigned long, float)const;
    void reserve(unsigned long);
    void freezeInterpolation();
};
