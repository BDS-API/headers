#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    HugeMushroomFeature::~HugeMushroomFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HugeMushroomFeature(void);
    HugeMushroomFeature(int);
    void shutdown();
    void _canSurvive(Block const&)const;
};
