#pragma once

class TreeFeature : Feature {

    virtual ~TreeFeature();
    virtual ~TreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
