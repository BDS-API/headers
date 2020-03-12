#pragma once

#include "Feature.h"


class HellSpringFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~HellSpringFeature();
    HellSpringFeature(Block const&, bool);
};
