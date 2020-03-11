#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class IceSpikeFeature : Feature {

public:
    virtual ~IceSpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IceSpikeFeature();
    void _isValidPlaceBlock(Block const&)const;
};
