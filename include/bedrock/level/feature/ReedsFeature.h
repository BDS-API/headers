#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class ReedsFeature : Feature {

public:
    ReedsFeature::~ReedsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ReedsFeature(void);
};
