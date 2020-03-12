#pragma once

#include <string>
#include "BlockLegacy.h"


class BookshelfBlock : BlockLegacy {

public:
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~BookshelfBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    BookshelfBlock(std::string const&, int);
};
