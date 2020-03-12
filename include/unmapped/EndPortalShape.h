#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/BlockPos.h"


class EndPortalShape {

public:
    void getDistanceUntilEdge(BlockPos const&, int, int);
    EndPortalShape(BlockSource &, BlockPos);
    bool isValid(BlockSource &);
    ~EndPortalShape();
    void getOrigin()const;
};
