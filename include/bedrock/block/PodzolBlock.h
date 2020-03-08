#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class PodzolBlock : BlockLegacy {

public:
    virtual PodzolBlock::~PodzolBlock()
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    PodzolBlock(std::string const&, int);
};
