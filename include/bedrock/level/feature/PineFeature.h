#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class PineFeature : TreeFeature {

public:
    virtual PineFeature::~PineFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PineFeature(Actor *);
};
