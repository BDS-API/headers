#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class TallGrassFeature : Feature {

public:
    virtual TallGrassFeature::~TallGrassFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    TallGrassFeature(Block const&);
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
};
