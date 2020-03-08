#pragma once

#include "../../util/Random"
#include "../../../unmapped/IBlockPlacementTarget"
#include "../../util/BlockPos"


class ScatterFeature : IFeature {

public:
    virtual ScatterFeature::~ScatterFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    ScatterFeature(void);
};
