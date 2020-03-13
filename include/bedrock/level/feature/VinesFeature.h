#pragma once

#include "Feature.h"


class VinesFeature : Feature {

public:
    ~VinesFeature(); // _ZN12VinesFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12VinesFeature5placeER11BlockSourceRK8BlockPosR6Random
    VinesFeature(); // _ZN12VinesFeatureC2Ev
};
