#pragma once

class ScatterFeature : IFeature {

public:
    virtual ~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void ScatterFeature(void);
};
