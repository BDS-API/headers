#pragma once

#include "../bedrock/util/Vec2"
#include "../bedrock/util/AABB"


class AABBShapeComponent {

public:

    void getAABB()const;
    void getAABBDim()const;
    AABBShapeComponent(void);
    void setAABB(AABB const&);
    void setAABBDim(Vec2 const&);
};
