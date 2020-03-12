#pragma once

#include "IFeature.h"


class ScatterFeature : IFeature {

public:
    ~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ScatterFeature();
};
