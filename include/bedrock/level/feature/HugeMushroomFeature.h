#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    virtual ~HugeMushroomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HugeMushroomFeature();
    HugeMushroomFeature(int);
    void shutdown();
    void _canSurvive(Block const&)const;
};
