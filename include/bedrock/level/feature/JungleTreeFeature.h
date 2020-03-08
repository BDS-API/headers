#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class JungleTreeFeature : TreeFeature {

public:
    JungleTreeFeature::~JungleTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    JungleTreeFeature(Actor *);
};
