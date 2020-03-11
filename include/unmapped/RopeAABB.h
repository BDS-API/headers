#pragma once

#include "../bedrock/util/Vec3.h"
#include "./AABBContactPoint.h"
#include "../bedrock/util/AABB.h"


class RopeAABB {

public:

    RopeAABB(AABB const&, bool);
    void getContactPoint(Vec3 const&, float, AABBContactPoint &)const;
};
