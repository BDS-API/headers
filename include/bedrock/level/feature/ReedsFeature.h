#pragma once

#include "Feature.h"


class ReedsFeature : public Feature {

public:
    virtual ~ReedsFeature(); // _ZN12ReedsFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12ReedsFeature5placeER11BlockSourceRK8BlockPosR6Random
    ReedsFeature(); // _ZN12ReedsFeatureC2Ev
};
