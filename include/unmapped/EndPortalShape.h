#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class EndPortalShape {

public:

    EndPortalShape(BlockSource &, BlockPos);
    void getDistanceUntilEdge(BlockPos const&, int, int);
    bool isValid(BlockSource &);
    void getOrigin()const;
};
