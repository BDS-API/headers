#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class IceSpikeFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~IceSpikeFeature();
    IceSpikeFeature();
    void _isValidPlaceBlock(Block const&)const;
};
