#pragma once

#include "Feature.h"


class SeaPickleFeature : public Feature {

public:
    virtual ~SeaPickleFeature(); // _ZN16SeaPickleFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16SeaPickleFeature5placeER11BlockSourceRK8BlockPosR6Random
    SeaPickleFeature(); // _ZN16SeaPickleFeatureC2Ev
};
