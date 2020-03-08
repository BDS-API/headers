#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ActivatorRailBlock : BaseRailBlock {

public:
    ActivatorRailBlock::~ActivatorRailBlock()
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    ActivatorRailBlock(std::string const&, int);
};
