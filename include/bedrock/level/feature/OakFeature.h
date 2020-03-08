#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class OakFeature : TreeFeature {

public:
    virtual OakFeature::~OakFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    OakFeature(Actor *, bool);
};
