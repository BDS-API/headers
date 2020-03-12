#pragma once

#include <string>
#include "ActorBlock.h"


class ConduitBlock : ActorBlock {

public:
    virtual bool canContainLiquid()const;
    ~ConduitBlock();
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    ConduitBlock(std::string const&, int);
};
