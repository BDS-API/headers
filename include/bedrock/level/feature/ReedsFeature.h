#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class ReedsFeature : Feature {

public:
    virtual ReedsFeature::~ReedsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ReedsFeature(void);
};
