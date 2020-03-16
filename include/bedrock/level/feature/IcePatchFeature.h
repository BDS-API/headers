#pragma once

#include "Feature.h"


class IcePatchFeature : public Feature {

public:
    virtual ~IcePatchFeature(); // _ZN15IcePatchFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15IcePatchFeature5placeER11BlockSourceRK8BlockPosR6Random
    IcePatchFeature(int); // _ZN15IcePatchFeatureC2Ei
};
