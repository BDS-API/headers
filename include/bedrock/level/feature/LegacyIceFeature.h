#pragma once

#include "Feature.h"


class LegacyIceFeature : Feature {

public:
    ~LegacyIceFeature(); // _ZN16LegacyIceFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16LegacyIceFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacyIceFeature(FeatureRegistry const&); // _ZN16LegacyIceFeatureC2ERK15FeatureRegistry
};
