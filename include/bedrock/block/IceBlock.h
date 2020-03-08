#pragma once

#include "../../unmapped/Block"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../actor/Player"


class IceBlock : BlockLegacy {

public:
    IceBlock::~IceBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    IceBlock(std::string const&, int, bool);
    void melt(BlockSource &, BlockPos const&);
};
