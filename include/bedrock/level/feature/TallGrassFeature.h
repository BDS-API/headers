#pragma once

#include "Feature.h"


class TallGrassFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~TallGrassFeature();
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
    TallGrassFeature(Block const&);
};
