#pragma once

#include "Feature.h"


class WaterlilyFeature : public Feature {

public:
    virtual ~WaterlilyFeature(); // _ZN16WaterlilyFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16WaterlilyFeature5placeER11BlockSourceRK8BlockPosR6Random
    WaterlilyFeature(); // _ZN16WaterlilyFeatureC2Ev
};
