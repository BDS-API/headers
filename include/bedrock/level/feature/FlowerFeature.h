#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class FlowerFeature : Feature {

public:
    virtual FlowerFeature::~FlowerFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    FlowerFeature(Block const&);
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const;
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const;
};
