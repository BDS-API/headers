#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "../../unmapped/Block.h"
#include "BaseRailBlock.h"


class ActivatorRailBlock : BaseRailBlock {

public:
    ~ActivatorRailBlock();
    virtual void getVariant(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ActivatorRailBlock(std::string const&, int);
};
