#pragma once

#include "../../util/BlockPos"
#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"


class WeightedRandomFeature : IFeature {

public:
    WeightedRandomFeature::~WeightedRandomFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    WeightedRandomFeature(void);
};
