#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class EndGatewayFeature : Feature {

public:
    EndGatewayFeature::~EndGatewayFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndGatewayFeature(void);
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
};
