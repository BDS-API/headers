#pragma once

class SavannaTreeFeature : TreeFeature {

    virtual ~SavannaTreeFeature();
    virtual ~SavannaTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
