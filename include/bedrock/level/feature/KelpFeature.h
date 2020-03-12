#pragma once

#include "Feature.h"


class KelpFeature : Feature {

public:
    ~KelpFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    KelpFeature();
    void _canPlace(BlockSource &, BlockPos const&)const;
};
