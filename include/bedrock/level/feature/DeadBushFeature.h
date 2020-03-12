#pragma once

#include "Feature.h"


class DeadBushFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~DeadBushFeature();
    void _isFree(Material const&)const;
    DeadBushFeature();
};
