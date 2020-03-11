#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/util/AABB.h"


class AABBShapeComponent {

public:

    void getAABB()const;
    void getAABBDim()const;
    AABBShapeComponent();
    void setAABB(AABB const&);
    void setAABBDim(Vec2 const&);
};
