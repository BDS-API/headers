#pragma once

#include <string>
#include "BlockLegacy.h"


class IceBlock : BlockLegacy {

public:
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~IceBlock();
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    IceBlock(std::string const&, int, bool);
    void melt(BlockSource &, BlockPos const&);
};
