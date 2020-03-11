#pragma once

#include "../../util/Random.h"
#include "./IFeature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/IBlockPlacementTarget.h"


class WeightedRandomFeature : IFeature {

public:
    virtual ~WeightedRandomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    WeightedRandomFeature();
};
