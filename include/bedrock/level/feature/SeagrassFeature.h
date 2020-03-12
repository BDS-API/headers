#pragma once

#include "Feature.h"


class SeagrassFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SeagrassFeature();
    void _isNotIce(BlockSource &, BlockPos const&)const;
    SeagrassFeature();
};
