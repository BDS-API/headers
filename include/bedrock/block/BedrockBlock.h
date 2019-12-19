#pragma once

class BedrockBlock : BlockLegacy {

public:
    virtual BedrockBlock::~BedrockBlock();
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BedrockBlock(std::string const&, int);
};
