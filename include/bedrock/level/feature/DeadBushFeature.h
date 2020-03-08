#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Material"


class DeadBushFeature : Feature {

public:
    DeadBushFeature::~DeadBushFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DeadBushFeature(void);
    void _isFree(Material const&)const;
};
