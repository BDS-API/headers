#pragma once



class AABBShapeComponent {

public:
    void setAABB(AABB const&);
    void getAABB()const;
    AABBShapeComponent();
    void setAABBDim(Vec2 const&);
    void getAABBDim()const;
};
