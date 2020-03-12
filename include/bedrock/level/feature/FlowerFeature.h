#pragma once

#include "Feature.h"


class FlowerFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~FlowerFeature();
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const;
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const;
    FlowerFeature(Block const&);
};
