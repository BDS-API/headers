#pragma once

#include "../../../unmapped/Material.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class DeadBushFeature : Feature {

public:
    ~DeadBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _isFree(Material const&)const;
    DeadBushFeature();
};
