#pragma once

class BirchFeature : TreeFeature {

    virtual ~BirchFeature();
    virtual ~BirchFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
