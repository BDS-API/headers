#pragma once

class HugeMushroomFeature : Feature {

    virtual ~HugeMushroomFeature();
    virtual ~HugeMushroomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
