#pragma once

#include "TreeFeature.h"


class BirchFeature : public TreeFeature {

public:
    virtual ~BirchFeature(); // _ZN12BirchFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12BirchFeature5placeER11BlockSourceRK8BlockPosR6Random
    BirchFeature(Actor *, bool, bool); // _ZN12BirchFeatureC2EP5Actorbb
};
