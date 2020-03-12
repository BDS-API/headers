#pragma once

#include "../bedrock/util/Vec3.h"


class RopePoints {

public:
    void freezeInterpolation();
    void size()const;
    RopePoints();
    void getInterpolated(unsigned long, float)const;
    void reserve(unsigned long);
    void pushBack(Vec3 const&);
    void endRope();
    void beginRope();
    ~RopePoints();
};
