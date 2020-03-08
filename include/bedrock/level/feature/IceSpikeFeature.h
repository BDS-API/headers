#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class IceSpikeFeature : Feature {

public:
    virtual IceSpikeFeature::~IceSpikeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IceSpikeFeature(void);
    void _isValidPlaceBlock(Block const&)const;
};
