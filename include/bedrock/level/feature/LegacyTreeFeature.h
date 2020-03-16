#pragma once

#include "Feature.h"


class LegacyTreeFeature : public Feature {

public:
    virtual ~LegacyTreeFeature(); // _ZN17LegacyTreeFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17LegacyTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
//    LegacyTreeFeature(long, FeatureRegistry const&); //TODO: incomplete function definition // _ZN17LegacyTreeFeatureC2ENS_4TypeERK15FeatureRegistry
};
