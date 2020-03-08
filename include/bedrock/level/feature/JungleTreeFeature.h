#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class JungleTreeFeature : TreeFeature {

public:
    virtual JungleTreeFeature::~JungleTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    JungleTreeFeature(Actor *);
};
