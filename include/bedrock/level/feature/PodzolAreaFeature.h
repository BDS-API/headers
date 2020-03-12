#pragma once

#include "Feature.h"


class PodzolAreaFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~PodzolAreaFeature();
    PodzolAreaFeature();
};
