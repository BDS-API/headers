#pragma once

#include "../bedrock/util/AABB.h"


namespace AABBPred {

    void operator()(AABB const&, AABB const&)const;
};
