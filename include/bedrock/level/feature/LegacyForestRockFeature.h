#pragma once

#include "Feature.h"


class LegacyForestRockFeature : Feature {

public:
    ~LegacyForestRockFeature(); // _ZN23LegacyForestRockFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK23LegacyForestRockFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacyForestRockFeature(FeatureRegistry const&); // _ZN23LegacyForestRockFeatureC2ERK15FeatureRegistry
};
