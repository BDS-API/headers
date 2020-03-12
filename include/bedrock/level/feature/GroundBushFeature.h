#pragma once

#include "TreeFeature.h"


class GroundBushFeature : TreeFeature {

public:
    ~GroundBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    GroundBushFeature(int, int);
};
