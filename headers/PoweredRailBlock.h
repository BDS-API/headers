#pragma once

class PoweredRailBlock : BaseRailBlock {

public:
    virtual ~PoweredRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    void PoweredRailBlock(std::string const&, int);
};
