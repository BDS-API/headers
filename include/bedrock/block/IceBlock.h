#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"


class IceBlock : BlockLegacy {

public:
    virtual IceBlock::~IceBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    IceBlock(std::string const&, int, bool);
    void melt(BlockSource &, BlockPos const&);
};
