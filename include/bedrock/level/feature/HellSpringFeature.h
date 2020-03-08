#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class HellSpringFeature : Feature {

public:
    HellSpringFeature::~HellSpringFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellSpringFeature(Block const&, bool);
};
