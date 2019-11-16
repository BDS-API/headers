#pragma once

class OakFeature : TreeFeature {

    virtual ~OakFeature();
    virtual ~OakFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
