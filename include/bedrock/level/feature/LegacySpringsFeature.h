#pragma once

#include "Feature.h"


class LegacySpringsFeature : Feature {

public:
    ~LegacySpringsFeature(); // _ZN20LegacySpringsFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK20LegacySpringsFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacySpringsFeature(FeatureRegistry const&); // _ZN20LegacySpringsFeatureC2ERK15FeatureRegistry
};
