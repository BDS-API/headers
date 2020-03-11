#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include "./ActorBlock.h"
#include <string>


class ConduitBlock : ActorBlock {

public:
    virtual ~ConduitBlock();
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    ConduitBlock(std::string const&, int);
};
