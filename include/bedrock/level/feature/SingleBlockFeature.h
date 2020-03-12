#pragma once

#include "IFeature.h"


class SingleBlockFeature : IFeature {

public:
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~SingleBlockFeature();
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
    SingleBlockFeature();
};
