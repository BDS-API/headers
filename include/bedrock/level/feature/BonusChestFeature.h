#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class BonusChestFeature : Feature {

public:
    virtual BonusChestFeature::~BonusChestFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BonusChestFeature(void);
    void _place(BlockSource &, BlockPos const&, Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
};
