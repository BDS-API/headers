#pragma once

#include "../bedrock/util/Vec3.h"


class RopePoint {

public:

    void getInterpolated(float)const;
    void update(Vec3 const&);
    RopePoint(Vec3 const&);
    RopePoint();
};
