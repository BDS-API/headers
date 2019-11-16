#pragma once

class JungleTreeFeature : TreeFeature {

    virtual ~JungleTreeFeature();
    virtual ~JungleTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
