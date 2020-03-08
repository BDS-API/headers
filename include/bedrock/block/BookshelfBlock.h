#pragma once

#include "../../unmapped/Random"
#include "../../unmapped/BlockSource"


class BookshelfBlock : BlockLegacy {

public:
    virtual BookshelfBlock::~BookshelfBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BookshelfBlock(std::string const&, int);
};
