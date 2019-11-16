#pragma once

class HellFireFeature : Feature {

    virtual ~HellFireFeature();
    virtual ~HellFireFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
