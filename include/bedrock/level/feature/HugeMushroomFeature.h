#pragma once

#include "Feature.h"


class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    ~HugeMushroomFeature(); // _ZN19HugeMushroomFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK19HugeMushroomFeature5placeER11BlockSourceRK8BlockPosR6Random
    HugeMushroomFeature(); // _ZN19HugeMushroomFeatureC2Ev
    HugeMushroomFeature(int); // _ZN19HugeMushroomFeatureC2Ei
    void shutdown(); // _ZN19HugeMushroomFeature8shutdownEv
    void _canSurvive(Block const&)const; // _ZNK19HugeMushroomFeature11_canSurviveERK5Block
};
