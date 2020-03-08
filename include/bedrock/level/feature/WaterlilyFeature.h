#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class WaterlilyFeature : Feature {

public:
    virtual WaterlilyFeature::~WaterlilyFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    WaterlilyFeature(void);
};
