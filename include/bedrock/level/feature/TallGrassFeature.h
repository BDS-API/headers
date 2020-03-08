#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class TallGrassFeature : Feature {

public:
    TallGrassFeature::~TallGrassFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    TallGrassFeature(Block const&);
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
};
