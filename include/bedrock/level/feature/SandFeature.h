#pragma once

#include "Feature.h"


class SandFeature : Feature {

public:
    ~SandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SandFeature(Block const&, int);
};
