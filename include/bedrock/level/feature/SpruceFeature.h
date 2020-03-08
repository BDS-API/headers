#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class SpruceFeature : TreeFeature {

public:
    SpruceFeature::~SpruceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpruceFeature(Actor *);
};
