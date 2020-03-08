#pragma once

#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class BedrockBlock : BlockLegacy {

public:
    virtual BedrockBlock::~BedrockBlock()
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BedrockBlock(std::string const&, int);
};
