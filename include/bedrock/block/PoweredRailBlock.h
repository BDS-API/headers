#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class PoweredRailBlock : BaseRailBlock {

public:
    PoweredRailBlock::~PoweredRailBlock()
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    PoweredRailBlock(std::string const&, int);
};
