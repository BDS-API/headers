#pragma once

class ConduitBlock : ActorBlock {

public:
    virtual ~ConduitBlock();
    virtual bool canContainLiquid(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    void ConduitBlock(std::string const&, int);
};
