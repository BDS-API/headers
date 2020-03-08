#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Material"
#include "../../util/BlockPos"


class DeadBushFeature : Feature {

public:
    virtual DeadBushFeature::~DeadBushFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DeadBushFeature(void);
    void _isFree(Material const&)const;
};
