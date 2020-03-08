#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class WaterlilyFeature : Feature {

public:
    WaterlilyFeature::~WaterlilyFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    WaterlilyFeature(void);
};
