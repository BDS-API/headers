#pragma once

#include "Feature.h"


class SeaPickleFeature : Feature {

public:
    ~SeaPickleFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SeaPickleFeature();
};
