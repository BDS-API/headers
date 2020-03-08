#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/util/AABB"


class RopeAABB {

public:

    RopeAABB(AABB const&, bool);
    void getContactPoint(Vec3 const&, float, AABBContactPoint &)const;
};
