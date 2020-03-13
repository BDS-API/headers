#pragma once

#include "Feature.h"


class LegacyForestFoliageFeature : Feature {

public:
    ~LegacyForestFoliageFeature(); // _ZN26LegacyForestFoliageFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK26LegacyForestFoliageFeature5placeER11BlockSourceRK8BlockPosR6Random
//  LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition // _ZN26LegacyForestFoliageFeatureC2ENS_4TypeERK15FeatureRegistry
    void _getTreeFeature(Random &)const; // _ZNK26LegacyForestFoliageFeature15_getTreeFeatureER6Random
};
