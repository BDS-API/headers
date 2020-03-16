#pragma once

#include "TreeFeature.h"


class OakFeature : public TreeFeature {

public:
    virtual ~OakFeature(); // _ZN10OakFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK10OakFeature5placeER11BlockSourceRK8BlockPosR6Random
    OakFeature(Actor *, bool); // _ZN10OakFeatureC2EP5Actorb
};
