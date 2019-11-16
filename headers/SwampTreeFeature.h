#pragma once

class SwampTreeFeature : TreeFeature {

    virtual ~SwampTreeFeature();
    virtual ~SwampTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
