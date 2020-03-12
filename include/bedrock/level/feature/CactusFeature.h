#pragma once

#include "Feature.h"


class CactusFeature : Feature {

public:
    ~CactusFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    CactusFeature();
};
