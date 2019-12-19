#pragma once

class RopeAABB {

public:

    RopeAABB(AABB const&, bool);
    void getContactPoint(Vec3 const&, float, AABBContactPoint &)const;
};
