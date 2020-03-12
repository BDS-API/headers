#pragma once

#include "../../../unmapped/IBlockPlacementTarget.h"
#include "IFeature.h"
#include "../../util/BlockPos.h"
#include "../../util/Random.h"


class SingleBlockFeature : IFeature {

public:
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~SingleBlockFeature();
    SingleBlockFeature();
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
};
