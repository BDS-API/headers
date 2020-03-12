#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class EndGatewayFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~EndGatewayFeature();
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
    EndGatewayFeature();
};
