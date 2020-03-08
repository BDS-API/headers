#pragma once

#include "../../util/BlockPos"
#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"


class ScatterFeature : IFeature {

public:
    ScatterFeature::~ScatterFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    ScatterFeature(void);
};
