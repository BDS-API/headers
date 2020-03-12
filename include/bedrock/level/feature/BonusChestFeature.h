#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class BonusChestFeature : Feature {

public:
    ~BonusChestFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _place(BlockSource &, BlockPos const&, Random &)const;
    BonusChestFeature();
};
