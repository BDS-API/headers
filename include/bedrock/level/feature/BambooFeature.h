#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class BambooFeature : Feature {

public:
    virtual BambooFeature::~BambooFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BambooFeature(void);
};
