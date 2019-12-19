#pragma once

class ScatterFeature : IFeature {

public:
    virtual ScatterFeature::~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    ScatterFeature(void);
};
