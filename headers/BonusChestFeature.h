#pragma once

class BonusChestFeature : Feature {

    virtual ~BonusChestFeature();
    virtual ~BonusChestFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
