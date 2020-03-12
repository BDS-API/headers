#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "../../unmapped/Block.h"
#include "BaseRailBlock.h"


class PoweredRailBlock : BaseRailBlock {

public:
    ~PoweredRailBlock();
    virtual void getVariant(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    PoweredRailBlock(std::string const&, int);
};
