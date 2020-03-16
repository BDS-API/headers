#pragma once

#include "Feature.h"


class TallGrassFeature : public Feature {

public:
    virtual ~TallGrassFeature(); // _ZN16TallGrassFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16TallGrassFeature5placeER11BlockSourceRK8BlockPosR6Random
    TallGrassFeature(Block const&); // _ZN16TallGrassFeatureC2ERK5Block
    void place(BlockSource &, BlockPos const&, Random &, int, int)const; // _ZNK16TallGrassFeature5placeER11BlockSourceRK8BlockPosR6Randomii
};
