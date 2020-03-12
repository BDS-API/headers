#pragma once

#include "Feature.h"


class EndIslandFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~EndIslandFeature();
    EndIslandFeature();
};
