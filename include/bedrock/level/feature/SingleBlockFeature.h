#pragma once

#include "../../util/BlockPos"
#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"


class SingleBlockFeature : IFeature {

public:
    SingleBlockFeature::~SingleBlockFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    SingleBlockFeature(void);
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
};
