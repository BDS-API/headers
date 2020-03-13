#pragma once

#include "Feature.h"


class WaterlilyFeature : Feature {

public:
    ~WaterlilyFeature(); // _ZN16WaterlilyFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16WaterlilyFeature5placeER11BlockSourceRK8BlockPosR6Random
    WaterlilyFeature(); // _ZN16WaterlilyFeatureC2Ev
};
