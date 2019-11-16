#pragma once

class IcePatchFeature : Feature {

    virtual ~IcePatchFeature();
    virtual ~IcePatchFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
