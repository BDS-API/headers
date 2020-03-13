#pragma once

#include "Feature.h"


class SeaPickleFeature : Feature {

public:
    ~SeaPickleFeature(); // _ZN16SeaPickleFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16SeaPickleFeature5placeER11BlockSourceRK8BlockPosR6Random
    SeaPickleFeature(); // _ZN16SeaPickleFeatureC2Ev
};
