#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./BaseRailBlock.h"
#include <string>


class PoweredRailBlock : BaseRailBlock {

public:
    virtual ~PoweredRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    PoweredRailBlock(std::string const&, int);
};
