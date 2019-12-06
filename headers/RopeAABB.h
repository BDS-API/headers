#pragma once

class RopeAABB {

public:

    void RopeAABB(AABB const&, bool);
    void getContactPoint(Vec3 const&, float, AABBContactPoint &)const;
};
