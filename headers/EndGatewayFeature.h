#pragma once

class EndGatewayFeature : Feature {

public:
    virtual ~EndGatewayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void EndGatewayFeature(void);
    void testEnd(BlockSource &, BlockPos const&, Random &)const;
};
