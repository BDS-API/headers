#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class BonusChestFeature : Feature {

public:
    virtual ~BonusChestFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BonusChestFeature();
    void _place(BlockSource &, BlockPos const&, Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
};
