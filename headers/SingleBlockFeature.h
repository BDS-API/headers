#pragma once

class SingleBlockFeature : IFeature {

public:
    virtual ~SingleBlockFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void SingleBlockFeature(void);
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const;
};
