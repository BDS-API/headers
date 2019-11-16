#pragma once

class GlowStoneFeature : Feature {

    virtual ~GlowStoneFeature();
    virtual ~GlowStoneFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
