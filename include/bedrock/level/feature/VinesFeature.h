#pragma once

#include "Feature.h"


class VinesFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~VinesFeature();
    VinesFeature();
};
