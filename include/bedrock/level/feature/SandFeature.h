#pragma once

#include "Feature.h"


class SandFeature : Feature {

public:
    ~SandFeature(); // _ZN11SandFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11SandFeature5placeER11BlockSourceRK8BlockPosR6Random
    SandFeature(Block const&, int); // _ZN11SandFeatureC2ERK5Blocki
};
