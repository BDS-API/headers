#pragma once

class ActivatorRailBlock : BaseRailBlock {

public:
    virtual ~ActivatorRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    void ActivatorRailBlock(std::string const&, int);
};
