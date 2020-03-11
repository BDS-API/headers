#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./BaseRailBlock.h"
#include <string>


class ActivatorRailBlock : BaseRailBlock {

public:
    virtual ~ActivatorRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    ActivatorRailBlock(std::string const&, int);
};
