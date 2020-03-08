#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class PodzolBlock : BlockLegacy {

public:
    PodzolBlock::~PodzolBlock()
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    PodzolBlock(std::string const&, int);
};
