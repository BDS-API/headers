#pragma once

#include "unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class PoweredRailBlock : BaseRailBlock {

public:
    virtual PoweredRailBlock::~PoweredRailBlock()
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    PoweredRailBlock(std::string const&, int);
};
