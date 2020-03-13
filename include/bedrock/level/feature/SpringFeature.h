#pragma once

#include "Feature.h"


class SpringFeature : Feature {

public:
    ~SpringFeature(); // _ZN13SpringFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13SpringFeature5placeER11BlockSourceRK8BlockPosR6Random
    SpringFeature(Block const&); // _ZN13SpringFeatureC2ERK5Block
};
