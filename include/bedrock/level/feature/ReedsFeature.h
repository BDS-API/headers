#pragma once

#include "Feature.h"


class ReedsFeature : Feature {

public:
    ~ReedsFeature(); // _ZN12ReedsFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12ReedsFeature5placeER11BlockSourceRK8BlockPosR6Random
    ReedsFeature(); // _ZN12ReedsFeatureC2Ev
};
