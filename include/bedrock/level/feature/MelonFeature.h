#pragma once

#include "Feature.h"


class MelonFeature : Feature {

public:
    ~MelonFeature(); // _ZN12MelonFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12MelonFeature5placeER11BlockSourceRK8BlockPosR6Random
    MelonFeature(); // _ZN12MelonFeatureC2Ev
};
