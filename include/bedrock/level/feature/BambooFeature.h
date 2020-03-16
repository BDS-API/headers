#pragma once

#include "Feature.h"


class BambooFeature : public Feature {

public:
    virtual ~BambooFeature(); // _ZN13BambooFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13BambooFeature5placeER11BlockSourceRK8BlockPosR6Random
    BambooFeature(); // _ZN13BambooFeatureC2Ev
};
