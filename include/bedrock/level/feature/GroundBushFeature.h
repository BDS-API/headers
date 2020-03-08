#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class GroundBushFeature : TreeFeature {

public:
    virtual GroundBushFeature::~GroundBushFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GroundBushFeature(int, int);
};
