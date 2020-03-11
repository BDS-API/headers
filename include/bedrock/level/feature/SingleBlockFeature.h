#pragma once

#include "../../util/Random.h"
#include "./IFeature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/IBlockPlacementTarget.h"


class SingleBlockFeature : IFeature {

public:
    virtual ~SingleBlockFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    SingleBlockFeature();
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
};
