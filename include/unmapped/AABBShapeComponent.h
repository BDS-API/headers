#pragma once



class AABBShapeComponent {

public:
    void getAABB()const; // _ZNK18AABBShapeComponent7getAABBEv
    void getAABBDim()const; // _ZNK18AABBShapeComponent10getAABBDimEv
    AABBShapeComponent(); // _ZN18AABBShapeComponentC2Ev
    void setAABB(AABB const&); // _ZN18AABBShapeComponent7setAABBERK4AABB
    void setAABBDim(Vec2 const&); // _ZN18AABBShapeComponent10setAABBDimERK4Vec2
};
