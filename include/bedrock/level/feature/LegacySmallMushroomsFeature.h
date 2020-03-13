#pragma once

#include "Feature.h"


class LegacySmallMushroomsFeature : Feature {

public:
    ~LegacySmallMushroomsFeature(); // _ZN27LegacySmallMushroomsFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK27LegacySmallMushroomsFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacySmallMushroomsFeature(FeatureRegistry const&); // _ZN27LegacySmallMushroomsFeatureC2ERK15FeatureRegistry
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const; // _ZNK27LegacySmallMushroomsFeature16_getRandomHeightEiiR11BlockSourceR6RandomRK8BlockPos
};
