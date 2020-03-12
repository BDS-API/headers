#pragma once

#include "../bedrock/util/BlockPos.h"


class EndPortalShape {

public:
    ~EndPortalShape();
    void getDistanceUntilEdge(BlockPos const&, int, int);
    EndPortalShape(BlockSource &, BlockPos);
    bool isValid(BlockSource &);
    void getOrigin()const;
};
