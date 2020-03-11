#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class EndPortalShape {

public:

    ~EndPortalShape();
    EndPortalShape(BlockSource &, BlockPos);
    void getDistanceUntilEdge(BlockPos const&, int, int);
    bool isValid(BlockSource &);
    void getOrigin()const;
};
