#pragma once

#include "TreeFeature.h"


class SpruceFeature : public TreeFeature {

public:
    virtual ~SpruceFeature(); // _ZN13SpruceFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13SpruceFeature5placeER11BlockSourceRK8BlockPosR6Random
    SpruceFeature(Actor *); // _ZN13SpruceFeatureC2EP5Actor
};
