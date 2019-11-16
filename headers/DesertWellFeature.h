#pragma once

class DesertWellFeature : Feature {

    virtual ~DesertWellFeature();
    virtual ~DesertWellFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
