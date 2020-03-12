#pragma once

#include "Feature.h"


class EndGatewayFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~EndGatewayFeature();
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
    EndGatewayFeature();
};
