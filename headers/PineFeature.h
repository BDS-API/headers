#pragma once

class PineFeature : TreeFeature {

    virtual ~PineFeature();
    virtual ~PineFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
