#pragma once

#include "Feature.h"


class IcePatchFeature : Feature {

public:
    ~IcePatchFeature(); // _ZN15IcePatchFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15IcePatchFeature5placeER11BlockSourceRK8BlockPosR6Random
    IcePatchFeature(int); // _ZN15IcePatchFeatureC2Ei
};
