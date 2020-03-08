#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class BambooFeature : Feature {

public:
    BambooFeature::~BambooFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BambooFeature(void);
};
