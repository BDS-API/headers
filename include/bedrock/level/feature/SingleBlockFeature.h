#pragma once

#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"
#include "../../util/BlockPos"


class SingleBlockFeature : IFeature {

public:
    virtual SingleBlockFeature::~SingleBlockFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    SingleBlockFeature(void);
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
};
