#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class BirchFeature : TreeFeature {

public:
    virtual BirchFeature::~BirchFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BirchFeature(Actor *, bool, bool);
};
