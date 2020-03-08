#pragma once

#include "../../../unmapped/IBlockPlacementTarget"


class ScatterFeature : IFeature {

public:
    virtual ScatterFeature::~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    ScatterFeature(void);
};
