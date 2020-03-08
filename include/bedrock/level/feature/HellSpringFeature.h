#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class HellSpringFeature : Feature {

public:
    virtual HellSpringFeature::~HellSpringFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellSpringFeature(Block const&, bool);
};
