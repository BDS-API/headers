#pragma once

class FancyTreeFeature : TreeFeature {

    virtual ~FancyTreeFeature();
    virtual ~FancyTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
