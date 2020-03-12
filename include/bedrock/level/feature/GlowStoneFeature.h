#pragma once

#include "Feature.h"


class GlowStoneFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~GlowStoneFeature();
    GlowStoneFeature();
};
