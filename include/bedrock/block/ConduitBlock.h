#pragma once

class ConduitBlock : ActorBlock {

public:
    virtual ConduitBlock::~ConduitBlock();
    virtual bool canContainLiquid(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    ConduitBlock(std::string const&, int);
};
