#pragma once

#include "../bedrock/util/Vec3.h"


class RopePoint {

public:
    void getInterpolated(float)const;
    RopePoint();
    RopePoint(Vec3 const&);
    void update(Vec3 const&);
};
