#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class FlowerFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~FlowerFeature();
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const;
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const;
    FlowerFeature(Block const&);
};
