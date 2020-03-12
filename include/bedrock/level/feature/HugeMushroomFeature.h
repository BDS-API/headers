#pragma once

#include "Feature.h"


class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    ~HugeMushroomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    HugeMushroomFeature();
    void shutdown();
    void _canSurvive(Block const&)const;
    HugeMushroomFeature(int);
};
