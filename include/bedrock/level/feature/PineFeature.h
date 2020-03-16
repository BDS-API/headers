#pragma once

#include "TreeFeature.h"


class PineFeature : public TreeFeature {

public:
    virtual ~PineFeature(); // _ZN11PineFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11PineFeature5placeER11BlockSourceRK8BlockPosR6Random
    PineFeature(Actor *); // _ZN11PineFeatureC2EP5Actor
};
