#pragma once

class MegaJungleTreeFeature : MegaTreeFeature {

    virtual ~MegaJungleTreeFeature();
    virtual ~MegaJungleTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
