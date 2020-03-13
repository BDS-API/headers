#pragma once

#include "Feature.h"


class LegacyTreeFeature : Feature {

public:
    ~LegacyTreeFeature(); // _ZN17LegacyTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17LegacyTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
//  LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition // _ZN17LegacyTreeFeatureC2ENS_4TypeERK15FeatureRegistry
};
