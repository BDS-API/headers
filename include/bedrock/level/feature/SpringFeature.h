#pragma once

#include "Feature.h"


class SpringFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SpringFeature();
    SpringFeature(Block const&);
};
