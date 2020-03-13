#pragma once

#include "TreeFeature.h"


class SpruceFeature : TreeFeature {

public:
    ~SpruceFeature(); // _ZN13SpruceFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13SpruceFeature5placeER11BlockSourceRK8BlockPosR6Random
    SpruceFeature(Actor *); // _ZN13SpruceFeatureC2EP5Actor
};
