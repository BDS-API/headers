#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class GroundBushFeature : TreeFeature {

public:
    GroundBushFeature::~GroundBushFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GroundBushFeature(int, int);
};
