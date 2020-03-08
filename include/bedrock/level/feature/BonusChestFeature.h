#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class BonusChestFeature : Feature {

public:
    BonusChestFeature::~BonusChestFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BonusChestFeature(void);
    void _place(BlockSource &, BlockPos const&, Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
};
