#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class SandFeature : Feature {

public:
    SandFeature::~SandFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SandFeature(Block const&, int);
};
