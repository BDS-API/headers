#pragma once

#include "TreeFeature.h"


class GroundBushFeature : TreeFeature {

public:
    ~GroundBushFeature(); // _ZN17GroundBushFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17GroundBushFeature5placeER11BlockSourceRK8BlockPosR6Random
    GroundBushFeature(int, int); // _ZN17GroundBushFeatureC2Eii
};
