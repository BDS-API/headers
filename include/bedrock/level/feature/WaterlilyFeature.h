#pragma once

#include "Feature.h"


class WaterlilyFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~WaterlilyFeature();
    WaterlilyFeature();
};
