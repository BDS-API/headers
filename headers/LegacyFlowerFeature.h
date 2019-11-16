#pragma once

class LegacyFlowerFeature : Feature {

    virtual ~LegacyFlowerFeature();
    virtual ~LegacyFlowerFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
