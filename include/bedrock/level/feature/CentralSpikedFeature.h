#pragma once

#include "Feature.h"


class CentralSpikedFeature : Feature {

public:
    ~CentralSpikedFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    CentralSpikedFeature(Block const&);
};
