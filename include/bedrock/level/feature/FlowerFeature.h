#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class FlowerFeature : Feature {

public:
    virtual ~FlowerFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    FlowerFeature(Block const&);
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const;
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const;
};
