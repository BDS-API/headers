#pragma once

#include "Feature.h"


class LegacySwampFoliageFeature : public Feature {

public:
    virtual ~LegacySwampFoliageFeature(); // _ZN25LegacySwampFoliageFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK25LegacySwampFoliageFeature5placeER11BlockSourceRK8BlockPosR6Random
    LegacySwampFoliageFeature(FeatureRegistry const&); // _ZN25LegacySwampFoliageFeatureC2ERK15FeatureRegistry
};
