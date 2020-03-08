#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"


class ConduitBlock : ActorBlock {

public:
    ConduitBlock::~ConduitBlock()
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    ConduitBlock(std::string const&, int);
};
