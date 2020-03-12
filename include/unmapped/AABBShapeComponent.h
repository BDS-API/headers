#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/util/AABB.h"


class AABBShapeComponent {

public:
    void setAABBDim(Vec2 const&);
    void setAABB(AABB const&);
    void getAABBDim()const;
    void getAABB()const;
    AABBShapeComponent();
};
