#pragma once

class AABBShapeComponent {

public:

    void getAABB(void)const;
    void getAABBDim(void)const;
    AABBShapeComponent(void);
    void setAABB(AABB const&);
    void setAABBDim(Vec2 const&);
};
