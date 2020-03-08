#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class PineFeature : TreeFeature {

public:
    PineFeature::~PineFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PineFeature(Actor *);
};
