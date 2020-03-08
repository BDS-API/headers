#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class SandFeature : Feature {

public:
    virtual SandFeature::~SandFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SandFeature(Block const&, int);
};
