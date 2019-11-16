#pragma once

class LegacySwampFoliageFeature : Feature {

    virtual ~LegacySwampFoliageFeature();
    virtual ~LegacySwampFoliageFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
