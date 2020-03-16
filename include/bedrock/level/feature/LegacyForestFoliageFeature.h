#pragma once

#include "Feature.h"


class LegacyForestFoliageFeature : public Feature {

public:
    virtual ~LegacyForestFoliageFeature(); // _ZN26LegacyForestFoliageFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK26LegacyForestFoliageFeature5placeER11BlockSourceRK8BlockPosR6Random
//    LegacyForestFoliageFeature(long, FeatureRegistry const&); //TODO: incomplete function definition // _ZN26LegacyForestFoliageFeatureC2ENS_4TypeERK15FeatureRegistry
    void _getTreeFeature(Random &)const; // _ZNK26LegacyForestFoliageFeature15_getTreeFeatureER6Random
};
