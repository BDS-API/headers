#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class BookshelfBlock : BlockLegacy {

public:
    BookshelfBlock::~BookshelfBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BookshelfBlock(std::string const&, int);
};
