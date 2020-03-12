#pragma once

#include "Feature.h"


class ClayFeature : Feature {

public:
    ~ClayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ClayFeature(int);
};
