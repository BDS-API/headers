#pragma once

#include "TreeFeature.h"


class PineFeature : TreeFeature {

public:
    ~PineFeature(); // _ZN11PineFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11PineFeature5placeER11BlockSourceRK8BlockPosR6Random
    PineFeature(Actor *); // _ZN11PineFeatureC2EP5Actor
};
