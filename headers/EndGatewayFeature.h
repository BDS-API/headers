#pragma once

class EndGatewayFeature : Feature {

    virtual ~EndGatewayFeature();
    virtual ~EndGatewayFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
