#pragma once

#include "Feature.h"


class FlowerFeature : Feature {

public:
    ~FlowerFeature(); // _ZN13FlowerFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13FlowerFeature5placeER11BlockSourceRK8BlockPosR6Random
    FlowerFeature(Block const&); // _ZN13FlowerFeatureC2ERK5Block
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const; // _ZNK13FlowerFeature14_placeMushroomER11BlockSourceRK8BlockPosRK5BlockR6Random
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const; // _ZNK13FlowerFeature11placeFlowerER11BlockSourceRK8BlockPosRK5BlockR6Random
};
