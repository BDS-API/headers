#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class SpringFeature : Feature {

public:
    virtual SpringFeature::~SpringFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpringFeature(Block const&);
};
