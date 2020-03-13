#pragma once

#include "Feature.h"


class EndGatewayFeature : Feature {

public:
    ~EndGatewayFeature(); // _ZN17EndGatewayFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17EndGatewayFeature5placeER11BlockSourceRK8BlockPosR6Random
    EndGatewayFeature(); // _ZN17EndGatewayFeatureC2Ev
    void testEnd(BlockSource &, BlockPos const&, Random &)const; // _ZNK17EndGatewayFeature7testEndER11BlockSourceRK8BlockPosR6Random
};
