#pragma once

#include "unmapped/BlockSource"
#include "../util/BlockPos"


class ConduitBlock : ActorBlock {

public:
    virtual ConduitBlock::~ConduitBlock()
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    ConduitBlock(std::string const&, int);
};
