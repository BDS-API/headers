#pragma once

#include "Feature.h"


class DesertWellFeature : Feature {

public:
    ~DesertWellFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    DesertWellFeature();
};
