#pragma once

class HellSpringFeature : Feature {

    virtual ~HellSpringFeature();
    virtual ~HellSpringFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
