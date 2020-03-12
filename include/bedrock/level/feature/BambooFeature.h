#pragma once

#include "Feature.h"


class BambooFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~BambooFeature();
    BambooFeature();
};
