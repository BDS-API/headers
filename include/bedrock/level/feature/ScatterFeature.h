#pragma once

#include "../../util/Random.h"
#include "./IFeature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/IBlockPlacementTarget.h"


class ScatterFeature : IFeature {

public:
    virtual ~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    ScatterFeature();
};
