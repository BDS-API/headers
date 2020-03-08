#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class OakFeature : TreeFeature {

public:
    OakFeature::~OakFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    OakFeature(Actor *, bool);
};
