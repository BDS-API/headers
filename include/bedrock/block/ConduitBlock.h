#pragma once

#include <string>
#include "ActorBlock.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"


class ConduitBlock : ActorBlock {

public:
    ~ConduitBlock();
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    ConduitBlock(std::string const&, int);
};
