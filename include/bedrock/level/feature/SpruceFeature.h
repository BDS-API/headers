#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class SpruceFeature : TreeFeature {

public:
    virtual SpruceFeature::~SpruceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpruceFeature(Actor *);
};
