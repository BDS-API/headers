#pragma once

class IcebergFeature : Feature {

    virtual ~IcebergFeature();
    virtual ~IcebergFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
