#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class SpringFeature : Feature {

public:
    SpringFeature::~SpringFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpringFeature(Block const&);
};
