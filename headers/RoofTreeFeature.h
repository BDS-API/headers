#pragma once

class RoofTreeFeature : TreeFeature {

    virtual ~RoofTreeFeature();
    virtual ~RoofTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
