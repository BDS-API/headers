#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    ~HugeMushroomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void shutdown();
    void _canSurvive(Block const&)const;
    HugeMushroomFeature();
    HugeMushroomFeature(int);
};
