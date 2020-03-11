#pragma once

#include "../bedrock/util/AABB.h"


class AABBPred {

public:

    void operator()(AABB const&, AABB const&)const;
};
