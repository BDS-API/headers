#pragma once

#include <string>
#include "BaseRailBlock.h"


class PoweredRailBlock : BaseRailBlock {

public:
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~PoweredRailBlock();
    virtual void getVariant(Block const&)const;
    PoweredRailBlock(std::string const&, int);
};
