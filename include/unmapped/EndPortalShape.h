#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class EndPortalShape {

public:

    EndPortalShape(BlockSource &, BlockPos);
    void getDistanceUntilEdge(BlockPos const&, int, int);
    bool isValid(BlockSource &);
    void getOrigin()const;
};
