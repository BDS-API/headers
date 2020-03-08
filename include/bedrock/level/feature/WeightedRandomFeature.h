#pragma once

#include "../../../unmapped/IBlockPlacementTarget"


class WeightedRandomFeature : IFeature {

public:
    virtual WeightedRandomFeature::~WeightedRandomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    WeightedRandomFeature(void);
};
