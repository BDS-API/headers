#pragma once

#include "TreeFeature.h"


class GroundBushFeature : public TreeFeature {

public:
    virtual ~GroundBushFeature(); // _ZN17GroundBushFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17GroundBushFeature5placeER11BlockSourceRK8BlockPosR6Random
    GroundBushFeature(int, int); // _ZN17GroundBushFeatureC2Eii
};
