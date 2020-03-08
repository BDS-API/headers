#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class EndGatewayFeature : Feature {

public:
    virtual EndGatewayFeature::~EndGatewayFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndGatewayFeature(void);
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
};
