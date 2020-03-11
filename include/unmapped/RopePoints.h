#pragma once

#include "../bedrock/util/Vec3.h"


class RopePoints {

public:

    RopePoints();
    ~RopePoints();
    void size()const;
    void beginRope();
    void endRope();
    void pushBack(Vec3 const&);
    void getInterpolated(unsigned long, float)const;
    void reserve(unsigned long);
    void freezeInterpolation();
};
