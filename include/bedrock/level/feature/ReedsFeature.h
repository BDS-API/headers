#pragma once

#include "Feature.h"


class ReedsFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~ReedsFeature();
    ReedsFeature();
};
