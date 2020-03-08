#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class BirchFeature : TreeFeature {

public:
    BirchFeature::~BirchFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BirchFeature(Actor *, bool, bool);
};
