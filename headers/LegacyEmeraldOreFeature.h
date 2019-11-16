#pragma once

class LegacyEmeraldOreFeature : Feature {

    virtual ~LegacyEmeraldOreFeature();
    virtual ~LegacyEmeraldOreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
