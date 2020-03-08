#pragma once

#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"
#include "../../util/BlockPos"


class WeightedRandomFeature : IFeature {

public:
    virtual WeightedRandomFeature::~WeightedRandomFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    WeightedRandomFeature(void);
};
