#pragma once

#include "Feature.h"


class BlockPileFeature : Feature {

public:
    ~BlockPileFeature(); // _ZN16BlockPileFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16BlockPileFeature5placeER11BlockSourceRK8BlockPosR6Random
    virtual void getBlockToPlace(Random &)const; // _ZNK16BlockPileFeature15getBlockToPlaceER6Random
    BlockPileFeature(Block const&); // _ZN16BlockPileFeatureC2ERK5Block
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const; // _ZNK16BlockPileFeature13tryPlaceBlockER11BlockSourceRK8BlockPosR6Random
};
