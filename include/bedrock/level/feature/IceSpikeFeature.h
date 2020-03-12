#pragma once

#include "Feature.h"


class IceSpikeFeature : Feature {

public:
    ~IceSpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _isValidPlaceBlock(Block const&)const;
    IceSpikeFeature();
};
