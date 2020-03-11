#pragma once

#include "../../util/Random.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../../unmapped/Material.h"


class DeadBushFeature : Feature {

public:
    virtual ~DeadBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DeadBushFeature();
    void _isFree(Material const&)const;
};
