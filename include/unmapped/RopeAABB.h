#pragma once



class RopeAABB {

public:
    RopeAABB(AABB const&, bool); // _ZN8RopeAABBC2ERK4AABBb
    void getContactPoint(Vec3 const&, float, AABBContactPoint &)const; // _ZNK8RopeAABB15getContactPointERK4Vec3fR16AABBContactPoint
};
