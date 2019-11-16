#pragma once

class LegacyForestRockFeature : Feature {

    virtual ~LegacyForestRockFeature();
    virtual ~LegacyForestRockFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
