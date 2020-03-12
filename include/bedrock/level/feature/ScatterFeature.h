#pragma once

#include "../../../unmapped/IBlockPlacementTarget.h"
#include "IFeature.h"
#include "../../util/BlockPos.h"
#include "../../util/Random.h"


class ScatterFeature : IFeature {

public:
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~ScatterFeature();
    ScatterFeature();
};
