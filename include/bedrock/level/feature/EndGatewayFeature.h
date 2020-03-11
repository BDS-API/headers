#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class EndGatewayFeature : Feature {

public:
    virtual ~EndGatewayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndGatewayFeature();
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
};
