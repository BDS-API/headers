#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class IceSpikeFeature : Feature {

public:
    IceSpikeFeature::~IceSpikeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IceSpikeFeature(void);
    void _isValidPlaceBlock(Block const&)const;
};
